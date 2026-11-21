
class Base
{
        int i,j;

        void fun()                      // 5000
        {System.out.print("Inside Base fun \n"); }

        void gun()                      // 6000
        {System.out.print("Inside Base gun \n"); }

        void sun()               // 7000
        {System.out.print("Inside Base sun \n"); }

        void run()               // 8000
        {System.out.print("Inside Base run \n"); }
}
class Derived extends Base
{
        int x;

        void fun()                              // 1000
        {System.out.print("Inside Derived fun \n"); }

        void sun()                              // 2000
        {System.out.print("Inside Derived sun \n"); }  

        void mun()                      // 3000
        {System.out.print("Inside Derived mun \n");}

        void bun(){                             // 4000
        {System.out.print("Inside Derived bun \n");}
} 
}

class VirtualDemo6
{
    public static void main(String[] args) 
    {
        Base bp = new Derived();
        bp.fun();
        bp.gun();
        bp.sun();
        bp.run();
        // bp.mun();  //error
        // bp.bun();   //error    
    }     
}
