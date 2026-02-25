#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    str=(char*)malloc(5*sizeof(char));
    strcpy(str,"Hell");
    //strcpy(str,"Hello World");
    printf("%s\n",str);
    /* it does n't print hello world full or it print "hello world" fully and throw warning because the allocated memory is only 5 bytes 
    to fix this , we should reallocate memory using realloc */
    str=(char*)realloc(str,20*sizeof(char));
    /* the realloc function clears the previous memory and allocates new blocks of memory of the specified size */
    strcpy(str,"Hello World");
    printf("%s\n",str);
    /* it prints hello world because the memory is reallocated and the previous value is preserved */
    free(str);
    printf("%s\n",str);
    /*it may be print the garbage value because the memory is freed */
    return 0;
}