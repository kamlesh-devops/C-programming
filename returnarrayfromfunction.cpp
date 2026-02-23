#include<iostream>
using namespace std;
int* getaray()
{
    static int a[5]={1,2,3,4,5 };
    // for(int i=0;i<5;i++)
    // {
    //     cout<<"enter "<<i<<"element : ";
    //     cin>>a[i];
    // }
    return a;
}
int main()
{
    int *p;
    p=getaray();
    cout<<"the array elements are : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }
    return 0;
}