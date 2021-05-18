#include<iostream>
using namespace std;


int main()

{
    
int a,mul=1;
    
cout<<"Enter the factorial number:";
    
cin>>a;
    
if(a==0)
{
        
cout<<"factorial is:"<<a;
        
    
}
    
for(int i=a;i>=1;i--)
    
{
      
mul=mul*i;  
    
}
    
cout<<"factorial is:"<<mul;
    
return 0;

}