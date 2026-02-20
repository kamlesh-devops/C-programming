#include<stdio.h>
#include<string.h>
int i,j;
struct student
{
    char rollno[100],name[100],department[100];
    int mark[5];
};
int main()
{
    int n;
    int tot;
    printf("enter number of students : ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("enter name of student %d : ",i);
        scanf("%s",&s[i].name);
        printf("enter roll number of studet %d : ",i);
        scanf("%s",&s[i].rollno);
        printf("enter department of student %d : ",i);
        scanf("%s",&s[i].department);
        for(j=0;j<5;j++)
        {
            printf("enter mark of subject %d for student %d : ",j,i);
            scanf("%d",&s[i].mark[j]);
        }
        // tot=0;
        // for(i=0;i<;i++)
        // {
        //     tot=tot+s.mark[i];
        // }
        // printf("total mark of the student %s is %d ",s[i].name,tot);
    }
    for (i=0;i<n;i++)
    {
        printf("student name : %s\n",s[i].name);
        printf("student rollno : %s\n",s[i].rollno);
        printf("student department : %s\n",s[i].department);
        for(j=0;j<5;j++)
        {
            printf("mark of student %s in subject %d is :  %d\n",s[i].name,(j+1),s[i].mark[j]);
        }
    }
    return 0;
}