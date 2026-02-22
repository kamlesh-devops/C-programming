#include<iostream>
using namespace std;
int main()
{
    int a=9;
    int *p,**p1;
    p=&a;
    p1=&p;
    cout<<"value of a : "<<a<<endl;
    cout<<"address of a : "<<&a<<endl;
    cout<<"address of p : "<<&p<<endl;
    cout<<"address in p (ADDRESS OF a ): "<<p<<endl;
    cout<<"value at address in p (VALUE OF a ): "<<*p<<endl;
    cout<<"value of a : "<<*(&a)<<endl;
    cout<<"address of p using p1 : "<<p1<<endl;
    cout<<"value at p1 (address of p) : "<<*p1<<endl;
    cout<<"value of a using p1 : "<<**p1<<endl;
    cout<<"address of p1 : "<<&p1<<endl;
    return 0;
}