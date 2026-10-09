import java.util.*;
class Selection3 {
    
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        int Age =0;
        System.out.print("Enter Your Age : ");
        Age = sobj.nextInt();
        if(Age < 18){
            System.out.println("Not Eligible");
        }else{
            System.out.println("Eligible");
        }
    }
}
