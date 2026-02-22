#include<iostream>
using namespace std;
int main()
{
    int a=9;
    int *p;
    p=&a;
    cout<<"value of a : "<<a<<endl;
    cout<<"address of a : "<<&a<<endl;
    cout<<"address of p : "<<&p<<endl;
    cout<<"address in p (ADDRESS OF a ): "<<p<<endl;
    cout<<"value at address in p (VALUE OF a ): "<<*p<<endl;
    return 0;
}