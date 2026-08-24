#include <iostream>
using namespace std;

class PPA
{
    public:
        int no1;
        int no2;

        //Default Constructor
        PPA()
        {
            cout<<"Inside Default Constructor \n";
        }

        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }

        //Parametrised Constructor
        PPA(int a, int b)
        {
            cout<<"Inside Parametrised Constructor \n";
        }
        // Copy Constructor 
        PPA(PPA &obj)
        {
            cout<<"Inside Copy Constructor \n";
        }

        
};
int main(){

    PPA pobj1;                     //Default
    PPA pobj2(11,21);              //Parametrized
    PPA pobj3(pobj1);              //Copy
   
    return 0;
}