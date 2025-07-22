#include <iostream>
using namespace std ;
    
int main()
{
    float a,b,c,d;
    
    cout <<"enter a,b,c ";
    cin>>a>>b>>c;
    
    d=b*b-4*a*c;
    if (d==0)
    {
        cout <<" roots are real and equal";
        cout <<( -b/2*a)<<endl;
        
    }
    else if ( d>0)
    {
        cout << " roots are real and unequal";
        cout <<( -b+sqrt(b*b-4*a*c))/2*a<<endl;
        cout <<( -b-sqrt(b*b-4*a*c))/2*a<<endl;
    }
    else
    {
           cout <<" imaginary"<<endl;
       }
       return 0;
       
   }
