#include<iostream>
using namespace std;
int sumarray(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"sum of array element is : "<<sumarray(a,n)<<endl;
    return 0;
}