#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

int mystrlen(const char* strSrc)
{
    assert(NULL != strSrc);
    int len = 0;
    while(*strSrc++) ++len;
    return len;
}

char* mystrcat(char* strDst, const char* strSrc)
{
    assert(NULL != strSrc && NULL != strDst);
    char* pHead = strDst;
    while(*strDst) strDst++;
    while(*strDst++ = *strSrc++) ;    
    return pHead;
}

int mystrcmp(const char* strSrc, const char* strDst)
{
    assert(NULL != strSrc && NULL != strDst);
    int ret = 0;
    while(!(ret=(*(unsigned char*)strSrc - *(unsigned char*)strDst)) && *strDst)
    {
        printf("%s\n", (unsigned char*)strSrc);
        printf("%s\n", (unsigned char*)strDst);
        ++strSrc;
        ++strDst;
    }
    if(ret > 0) return 1;
    else if(ret < 0) return -1;
    return ret;
}

char* mystrcpy(char* strDst, const char* strSrc)
{
    assert(NULL != strSrc && NULL != strDst);
    char* addr = strDst;
    while(*strDst++ = *strSrc++) ;
    while('\0')
        printf("Wow\n"); 
    return addr;
}

void* mymemcpy(void* strDst, const void* strSrc, size_t n)
{
    assert(NULL != strDst && NULL != strSrc);
    const char* pSrc;
    char* pDst;
    if(((char*)strSrc + n) < strDst || strDst < strSrc)
    {
        pSrc = (char*)strSrc;
        pDst = (char*)strDst;
        while(n--)
        {
            *pDst++ = *pSrc++;
        }
    }
    else
    {
        pSrc = ((char*)strSrc+n-1);
        pDst = ((char*)strDst+n-1);
        while(n--)
        {
            *pDst-- = *pSrc--;
        }
    }
    return strDst;
}

int main(void)
{
    char str1[] = "helloworld";
    printf("%s\n", str1);

    char str2[100] = "thank you very much are U ok?";
    char* str3;
    printf("%s\n", str2);
    //printf("%d\n", mystrcmp(str1, str2));
    //printf("%d\n", mystrcmp(str1, str3));
    //printf("%d\n", mystrlen(str1));
    //printf("%d\n", mystrlen(str2));
    //printf("%d\n", mystrlen(str3));
    //printf("%s\n", mystrcat(str2, str1));
    //printf("%s\n", mymemcpy(str2, str1, 8));
    printf("%s\n", mymemcpy(str2+5, str2, 8));
    
    return 0;

}