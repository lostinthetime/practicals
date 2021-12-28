#include <iostream>
using namespace std;
class Base{
public:
     Base()
     {
         cout<<"Base class object created"<<endl;
     }
     virtual float add(int a,float b)
     {
         cout<<"Base class add function="<<endl;
         return(a+b);
     }
 
     virtual int sub(int a,int b)=0;
         
     
};
class Child:public Base{
public:
Child()
     {
         cout<<"Child class object created"<<endl;
     }
     using Base::add;
  
     float add(int a,float b)
     {
         return(a+b+1);
     }
     int sub(int a,int b)
     {
         return(a-b);
     }
};
int main()
{
    
     Child obj_c;
     Base *ptr;
     ptr=&obj_c;
     cout<<"Overrdded function="<<ptr->add(2,3)<<endl;
     
}