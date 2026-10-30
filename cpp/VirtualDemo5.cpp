#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;

        void fun()
        {cout<<"Inside Base fun"<<"\n"; }

        void gun()
        {cout<<"Inside Base gun"<<"\n"; }

        virtual void sun()
        {cout<<"Inside Base sun"<<"\n"; }

         virtual void run()
        {cout<<"Inside Base run"<<"\n"; }
}; // 16 bytes
#pragma pack(1)
class Derived : public Base{

     public:
        int x;

        void fun()
        {cout<<"Inside Derived fun"<<"\n"; }

        void sun()
        {cout<<"Inside Derived sun"<<"\n"; }

        virtual void mun()
        {cout<<"Inside Derived mun"<<"\n";}

        void bun()
        {cout<<"Inside Derived bun"<<"\n";}
}; // 20 bytes

int main ()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    Base *bp = new Derived();
    bp ->fun();
    bp ->gun();
    bp ->sun();
    bp ->run();
   // bp ->mun(); error
   // bp ->bun(); error
    
    return 0;

}