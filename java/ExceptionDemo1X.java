import java.util.*;
class ExceptionDemo1X
{
    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in); 
       int no1 =0, no2=0, ans=0;
       try
       {
            System.out.println("Enter First number");
            no1 = sobj.nextInt();
            System.out.println("Enter Second number");
            no2 = sobj.nextInt();

            ans = no1/no2;  //Exeception prone code
       }
       catch(ArithmeticException aobj)
       {
            System.out.println("Exception occur :"+aobj);
       }
       finally
       {
            System.out.println("Inside finally block");
       }

        System.out.println("Division is :"+ans);
    }
}
