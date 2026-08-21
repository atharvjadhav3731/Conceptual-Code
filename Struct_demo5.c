#include<stdio.h>
#pragma pack(1)
struct demo
{
    int i = 11;
    char ch = 'A';         // ERROR
    float f = 90.99f;
};

int main()
{
    struct demo dobj1;
    struct demo dobj2;

    struct demo*dp = NULL;

    dp = &dobj2;
    // direct accesing operator
    dobj1.i = 11;
    dobj1.ch = 'A';
    dobj1.f = 90.99f;
 
    // indirect accesing operator
    dp -> i = 21;
    dp -> ch = 'B';
    dp -> f = 91.99f;

    printf("%d\n", dobj1.i);
    printf("%d\n", dp->i);

    return 0;
}