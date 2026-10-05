#include <iostream>
using namespace std;
#pragma pack(1)
class Base
{
    public :
        int i,j;
        int addition(int no1, int no2)
        {
            return no1 + no2;
        }
        virtual int substraction(int no1, int no2) =  0;

};

class Derived : public Base
{
    public :
        int x;

        int substraction(int no1, int no2)
        {
            return no1 - no2;
        }
        int multiplication(int no1, int no2)
        {
            return no1 * no2;
        }
};

#pragma pack(1)
int main()
{
    Derived dobj;
    int ret = 0;

    cout<<"Size of base class is :"<<sizeof(Base)<<"\n";
    cout<<"Size of base Derived is :"<<sizeof(Derived)<<"\n";

    ret = dobj.addition(11,10);
    cout<<"adition is : "<<ret<<"\n";

    ret = dobj.substraction(11,10);
    cout<<"substraction is : "<<ret<<"\n";
    
    ret = dobj.multiplication(11,10);
    cout<<"multiplication is : "<<ret<<"\n";

    return 0;
}