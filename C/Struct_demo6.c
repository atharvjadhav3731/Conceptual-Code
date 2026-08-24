#include<stdio.h>

#pragma pack(1)
struct demo
{
   int no;
   float f;
    int *p;

};

int main()
{
   int x = 11;
   struct demo dobj;

   dobj.no =21;
   dobj.f = 90.99f;
   dobj.p = &x;

   printf("%d\n",*(dobj.p));

   
    return 0;
}