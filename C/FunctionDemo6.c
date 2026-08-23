#include <stdio.h>

int Addition(int no1, int no2)
{
    int result = 0;
    result = no1 + no2;   //Business Logic
    return result;
}
int main(){
    int value1 = 0, value2 = 0, ans = 0;

    printf("Enter First Number : \n");
    scanf("%d",&value1);

    printf("Enter Second Number : \n");
    scanf("%d",&value2);

    ans = Addition(value1, value2);
    
    printf("Addition is : %d\n",ans);
    return 0;
}