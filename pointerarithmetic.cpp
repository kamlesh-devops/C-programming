#include<iostream>
using namespace std;
int main()
{
    int a;
    int *ptr;
    ptr=&a;
    cout<<"address stored in pointer ptr is : "<<ptr<<endl;
    cout<<"address pointed be the ptr after pointer arithmetic(addition) is :"<<ptr+1<<endl;
    cout<<"address pointed be the ptr after pointer arithmetic(subtraction) is : "<<ptr-1<<endl;
    return 0;
}