#include<stdio.h>
int main()
{
    int a,b;
    printf("enter  two numbers : ");
    scanf("%d %d",&a,&b);
    printf("befor swap \nA=%d , B=%d",a,b);
    // SWAP LOGIC
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap \nA=%d , B=%d",a,b);
    return 0;
}