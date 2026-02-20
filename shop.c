#include<stdio.h>
#include<string.h>
int i,j;
struct shop
{
    int productid;
    char productname[100],category[100];
    int price;
};
int main()
{
    int n;
    printf("enter number of products : ");
    scanf("%d",&n);
    struct shop s[n];
    for(i=0;i<n;i++)
    {
        printf("enter product id : ");
        scanf("%d",&s[i].productid);
        printf("enter product name %d : ");
        scanf("%s",&s[i].productname);
        printf("enter category : ");
        scanf("%s",&s[i].category);
        printf("enter product price : ");
        scanf("%d",&s[i].price);
    }
    printf("\n \n ***********************************\n*********************************** \n PRODUCT DETAILS \n ***********************************\n***********************************");
    for (i=0;i<n;i++)
    {
        printf("product id  : %d\n",s[i].productid);
        printf("product name : %s\n",s[i].productname);
        printf("product category : %s\n",s[i].category);
        printf("product price : %s\n",s[i].price);
    }
    return 0;
}