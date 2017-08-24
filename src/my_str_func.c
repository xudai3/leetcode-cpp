#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

char* strcpy(char* strD, const char* strS)
{
    assert(strD != NULL && strS != NULL);
    char* addr = strD;
    while(*strD++ = *strS++) ;
    while('\0')
        printf("Wow\n"); 
    return addr;
}

int main(void)
{
    char s1[] = "helloworld";
    printf("%s\n", s1);

    char s2[100] = "thank you";
    printf("%s\n", s2);
    printf("%s\n", strcpy(s2, s1));
    
    return 0;

}