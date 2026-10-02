import java.util.*;
class ExceptionDemo2X
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in); 
            
        int arr [] = {11, 21, 51, 101, 111};
        int index = 0;

        try
        {
            System.out.println("Enter the Index");
            index = sobj.nextInt();

            System.out.println("Element is :"+arr[index]);
        }
        catch(ArrayIndexOutOfBoundsException aobj)
        {
            System.out.println("Inside catch :"+aobj);
        }    
            
            System.out.println("End of Main");
    }
}
