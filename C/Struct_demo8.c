#include<stdio.h>

#pragma pack(1)
struct demo
{
  int i;
  float f;

};

int main()
{
  struct demo arr[3];
  
  arr[0].i=11;
  arr[0].f=11.0;

  arr[1].i=21;
  arr[1].f=21.0;

  arr[2].i=51;
  arr[2].f=51.0;

  printf("%d\n",sizeof(arr));
  printf("%d\n",arr[0].i);
  printf("%d\n",arr[0].i);
    return 0;
}