/* 
 * File:   main.cpp
 * Author: Akash Thakur
 *
 * Created on February 17, 2016, 2:32 PM
 */

#include <iostream>
using namespace std;
/*
 * 
 */

class matrix
{

      
public:
     int A[10][10]; 
    void get()
    {   cout<<"/n STRAT PUTTING VALUES IN ARRAY ";
         for(int a=0;a<3;a++)
         { for(int b=0;b<3;b++)
                cin>>A[a][b];
         }  
    
    }
    
    void null()
    {for(int a=0;a<3;a++)
         { for(int b=0;b<3;b++)
                A[a][b]=0;
         } 
    }
     
    void print()
    { for(int a=0;a<3;a++)
    {cout<<endl;     
    { for(int b=0;b<3;b++)
                cout<<A[a][b]<<" ";
         } 
    
    }
    } matrix operator*(const matrix & b)
      {
         matrix c;
         //c.length = this->length + b.length;
        // c.breadth = this->breadth + b.breadth;
         //c.height = this->height + b.height;
        
      for(int p=0; p<3; p++)
            { for(int q=0; q<3; q++)
                {    for(int r=0; r<3; r++)
                           {
                            c.A[p][q]+= this->A[p][r] * b.A[r][q];
                        }   

                }
            }
      
          return c;
      }
  
};



int main() 
{
    matrix a ;
    matrix b ;
    matrix c;
    a.get();
    b.get();
    c.null();
    
    c=a*b;
    c.print();
    
    
    return 0;
}

