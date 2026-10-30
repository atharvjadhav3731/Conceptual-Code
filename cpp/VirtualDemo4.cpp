#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;

        void fun()
        {cout<<"Inside Base fun"; }

        void gun()
        {cout<<"Inside Base gun"; }

        virtual void sun()
        {cout<<"Inside Base sun"; }

         virtual void run()
        {cout<<"Inside Base run"; }
}; // 16 bytes
#pragma pack(1)
class Derived : public Base{

     public:
        int x;

        void fun()
        {cout<<"Inside Derived fun"; }

        void sun()
        {cout<<"Inside Derived sun"; }

        virtual void mun()
        {cout<<"Inside Derived mun";}

        virtual void bun()
        {cout<<"Inside Derived bun";}
}; // 20 bytes

int main ()
{
    Base *bp = new Derived();
    bp ->fun();
    bp ->gun();
    bp ->sun();
    bp ->run();
   // bp ->mun(); error
    //bp ->bun(); error
    
    return 0;

}