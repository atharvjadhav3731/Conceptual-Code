#include <iostream>
using namespace std;
class Base
{
    public :
        int i,j ;

        Base ()
        {
            cout<<"Inside Base Constructor\n";
        }

        ~Base ()
        {
            cout<<"Inside Base Destructor\n";
        }

        void fun()
        {
            cout<<"Inside Base fun \n";
        }

        void gun()
        {
            cout<<"Inside Base gun \n";
        }
};
class Derived : public Base
{
    public :
        int x,y;

        Derived()
        {
            cout<<"Inside DerivedX Constructor\n";
        }

        ~Derived()
        {
            cout<<"Inside DerivedX Destructor\n";
        }

        void sun()
        {
            cout<<"Inside Derived sun \n";
        }

        void run()
        {

        }

};
class DerivedX : public DerivedX
{
    public :
        int a;

    DerivedX()
    {
        cout<<"inside DerivedX Constructor\n";
    }
};

int main()
{
    Derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();

    return 0;
}