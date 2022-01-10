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
         cout<<"Base class add function"<<endl;
         return(a+b);
     }
 
     int sub(int a,int b){
         cout<<"Base class sub function"<<endl;
         return(a-b);
     }
         
     
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
         cout<<"Add function of child class"<<endl;
         return(a+b+1);
     }
     int sub(int a,int b)
     {
         cout<<"Sub function of Base class"<<endl;
         return(a-b);
     }
};
int main()
{
    
     Child obj_c;
     Base *ptr;
     ptr=&obj_c;
     cout<<"Compile time binding:"<<ptr->sub(2,3)<<endl;
     cout<<"Runntime time binding:"<<ptr->add(2,3)<<endl;

     
}