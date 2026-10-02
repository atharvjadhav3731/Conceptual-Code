import java.util.*;
class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}
class ExceptionDemo4
{
    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in); 
        int age = 0;
       System.out.println("Enter your Age : ");
        age = sobj.nextInt();
        try{
       if(age<18)
       {
        throw new AgeInvalid("Your under Age");
       }
       else
        {
        System.out.println("Welcome to X**");
       }
    }
    catch(AgeInvalid aobj)
    {
        System.out.println("Exception occured Due Age");
    }
    
    }
}