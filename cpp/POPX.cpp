#include <iostream>
using namespace std;

int addition(int no1, int no2)
{
    int ans = 0;
    ans = no1 + no2;
    
    return ans;
}

int main ()
{
    int value1 =0,value2 = 0, result =0;

    cout<<"Enter First Number:\n";
    cin>>value1;

    cout<<"Enter Second Number:\n";
    cin>>value2;
    
    result = addition(value1,value2);

    cout<<"Addition is : "<<result<<"\n"; 

    return 0;
}