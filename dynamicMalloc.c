#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    str=(char*)malloc(20*sizeof(char));
    printf("%s\n",str); 
    /* it prints garbage value because malloc does not initialize the allocated memory. */
    strcpy(str,"Hello World");
    printf("%s\n",str);
    free(str);
    printf("%s\n",str);
    /* it may print garbage value or "Hello world" because str is freed and no longer points to valid memory. */
    return 0;
}