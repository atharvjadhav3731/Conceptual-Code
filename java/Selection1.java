import java.util.*;
class Selection1 {
    
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int no =0;
        System.out.print("Enter Number : ");
        no = sobj.nextInt();
        if(no % 2 == 0){
            System.out.println("Number is even");
        }else{
            System.out.println("number is odd");
        }
    }
}
