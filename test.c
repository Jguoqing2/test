#include <stdio.h>

union{
    int a;
    char b;
}t;

int main()
{
    t.a = 0x87654321;
    printf("%x\n",t.b);
/*
    int a = 1;
    char* p = (char*)&a;
    if(*p){
        printf("is little-endian\n");
    } else {
        printf("is big-endian\n");
    }
*/
    return 0;
}
