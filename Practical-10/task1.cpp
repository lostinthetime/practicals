#include <iostream>
using namespace std;
class Details{
	public:
	string name,head,address;
	int tno,pno;
	Details(string name,string head,string address,int pno,int tno){
	    this->name = name;
        this->head = head;
        this->address = address;
        this->pno = pno;
        this->tno = tno;
	}
};
int main()
{
  	Details arr = (Details)(malloc(sizeof(Details)*3)); 
    for (int i = 0; i < 3; i++) {
        arr[i] = Details("Ramesh","Daresh","Dehradun",123,345);
    }

    return 0;
}
