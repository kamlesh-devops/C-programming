#include<iostream>
using namespace std;
int main()
{
    int a=10;
    void *ptr;
    ptr=&a; 
    cout<<"the value of a is (by void pointer) : "<<*(int *)ptr<<endl; // we have to typecast the void pointer to int pointer before dereferencing it
    return 0;
}