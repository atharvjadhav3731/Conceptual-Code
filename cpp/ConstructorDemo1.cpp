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

        
};
int main(){

    PPA pobj1;
    PPA pobj2;
   
    return 0;
}