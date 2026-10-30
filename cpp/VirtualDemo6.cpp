#include<iostream>
using namespace std;

#pragma pack(1)
class Base
{
    public:
        int i,j;

        void fun()                      // 5000
        {cout<<"Inside Base fun"<<"\n"; }

        void gun()                      // 6000
        {cout<<"Inside Base gun"<<"\n"; }

        virtual void sun()               // 7000
        {cout<<"Inside Base sun"<<"\n"; }

        virtual void run()               // 8000
        {cout<<"Inside Base run"<<"\n"; }
}; // 16 bytes
#pragma pack(1)
class Derived : public Base{

     public:
        int x;

        void fun()                              // 1000
        {cout<<"Inside Derived fun"<<"\n"; }

        void sun()                              // 2000
        {cout<<"Inside Derived sun""\n"; }  

        virtual void mun()                      // 3000
        {cout<<"Inside Derived mun""\n";}

        void bun()                               // 4000
        {cout<<"Inside Derived bun""\n";}
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