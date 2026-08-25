#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic()
        {
            this->no1 = 0;
            this->no2 = 0;

        }

        Arithmatic(int i , int j)
        {
           this->no1 = i;
           this->no2 = j;
        }
        
        // int addition(Arithmatic *this)
        int addition()
        {
            int ans = 0;
            ans = this->no1 + this->no2;

            return ans;
        }
};
int main()
{
   
    Arithmatic aobj1(10,11);
    int result = 0;

    // result = Addition(&aobj1)
    result = aobj1.addition();

    cout<<"Addition is :"<<result<<"\n";


    return 0;

}
