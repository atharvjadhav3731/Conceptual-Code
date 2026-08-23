#include<stdio.h>
int main(){
    int arr[] ={11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(arr[1]);
    q = &(arr[3]);

    printf("%d\n",*p); //21

    p = p + 3;

    printf("%d\n",*p); //111

    return 0;
}