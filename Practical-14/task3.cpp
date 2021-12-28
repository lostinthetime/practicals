#include<iostream>
#include<ostream>
#include<string>
#include<sstream>
#include<iomanip>

using namespace std;

int main()
{
    int n = 70;
    cout<<dec << n << '\n'; // decimal
    cout<<hex << n <<'\n';  // hexadecimal

    char a ,b ,c;

    std::istringstream s("  123");
    s >> std:: skipws >> a >> b >> c;
    cout << a << b << c << '\n'; 

    std::istringstream p("  123");
    p >> std::noskipws >> a >>b >> c;
    cout<< a << b << c << '\n';

    std::istringstream z("           this  is test string");
    string line;
    getline(z >> ws,line);
    cout<<line << '\n';

    cout << "hi , " ;
    cout<<"Are you" << endl;
    cout<<"bot " << ends;
    cout<<"Or not" << flush << "\n";

    double f = 3.1435676;

    cout<< std::setprecision(5) << f <<endl;
    cout<< std::setw(8) << "21" << endl; 



    return 0;


}
