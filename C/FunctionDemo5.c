#include <stdio.h>

void Addition(int no1, int no2)
{
    int result = 0;
    result = no1 + no2;   //Business Logic
    printf("Addition is : %d\n",result);
}
int main(){
    int value1 = 0, value2 = 0;

    printf("Enter First Number : \n");
    scanf("%d",&value1);

    printf("Enter Second Number : \n");
    scanf("%d",&value2);

    Addition(value1, value2);
    return 0;
}