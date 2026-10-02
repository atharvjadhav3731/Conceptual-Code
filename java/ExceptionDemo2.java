import java.util.*;
class ExceptionDemo2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in); 
            
        int arr [] = {11, 21, 51, 101, 111};
        int index = 0;

        
            System.out.println("Enter the Index");
            index = sobj.nextInt();

            System.out.println("Element is :"+arr[index]);
            
            System.out.println("End of Main");
    }
}
