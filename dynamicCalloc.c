#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    str=(char *)calloc(100,sizeof(char));
    printf("%s\n",str);
    /* it prints an empty string because calloc initializes the allocated memory to zero. */
    strcpy(str,"Hello World");
    printf("%s\n",str);
    free(str);
    printf("%s\n",str);
    /* it may print garbage value or "Hello world" because str is freed and no longer points to valid memory. */
    return 0;
}