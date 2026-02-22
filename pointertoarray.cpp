#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    cout<<"address of first element of array a is : "<<&a[0]<<endl;
    cout<<"address of first element of array a is : "<<a<<endl;
    p=a;
    for(int i=0;i<5;i++)
    {
        cout<<"value of a["<<i<<"] is : "<<*(p+i)<<endl;
        //p=p+1;
    }
}