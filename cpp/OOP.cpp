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
};
int main()
{
    Arithmatic aobj1;
    Arithmatic aobj2(10,11);

    cout<<aobj1.no1<<"\n";   //0
    cout<<aobj1.no2<<"\n";  //0

    cout<<aobj2.no1<<"\n"; //10
    cout<<aobj2.no2<<"\n"; //11

    return 0;

}
