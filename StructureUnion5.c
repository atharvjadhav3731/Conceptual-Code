#include <stdio.h>
#pragma pack(1)
struct Demo
{
    int i;
    float f;
    struct hello 
    {
        int no;
        float marks;

    }hobj;
};                        
int main()
{
    struct Demo dobj;
    printf("%d\n",sizeof(dobj));

    dobj.i = 11;
    dobj.f = 3.14f;
    
    dobj.hobj.no = 21;
    dobj.hobj.marks = 90.78;
    
    return 0;
}