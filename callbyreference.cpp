#include<iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int a=4,b=8;
    cout<<"before swapping a : "<<a<<" b : "<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping a : "<<a<<" b : "<<b<<endl;
    return 0;
}