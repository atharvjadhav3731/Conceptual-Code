#include<iostream>
using namespace std;

class Demo
{
    public:
        int no1;
        int no2;
        static int X;

        Demo(int i, int j)
        {
            cout<<"Inside Constructor\n";
            no1 = i;
            no2 = j;
        }

        void fun()
        {
            cout<<"Inside Fun\n";
            cout<<no1<<"\n";
            cout<<no2<<"\n";
            cout<<X<<"\n";

        }
        static void gun()
        {
            cout<<"Inside Fun\n";
            
            cout<<X<<"\n";

         }
};

int Demo :: X = 11;

int main()
{

  cout<<Demo::X<<"\n";

  Demo :: gun();

  Demo obj1(10,20);
  Demo obj2(30,40);

  obj1.fun();
  obj2.fun();



    return 0;
}