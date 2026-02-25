#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter number of subjects : ";
    cin>>num;
    int *mark=new int[num];
    cout<<"enter marks of "<<num<<" subjects : "<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"enter mark of subject "<<i+1<<" : ";
        cin>>mark[i];   
    }
    for(int i=0;i<num;i++)
    {
        cout<<"mark of subject "<<i+1<<" is : "<<mark[i]<<endl;   
    }
    delete []mark;
    return 0;
}