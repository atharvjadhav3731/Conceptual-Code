#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            no1 = 0;
            no2 = 0;

        }

        Arithmatic(int i , int j)
        {
            no1 = i;
            no2 = j;
        }

        int addition()
        {
            int ans = 0;
            ans = no1 + no2;

            return ans;
        }
};
int main()
{
   
    Arithmatic aobj1(10,11);
    int result = 0;

    result = aobj1.addition();

    cout<<"Addition is :"<<result<<"\n";


    return 0;

}
