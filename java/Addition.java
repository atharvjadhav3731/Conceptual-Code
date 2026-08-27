import java.util.Scanner;
class Addition
{
    public static void main(String A[])
    {
        int no1=0, no2=0, Ans=0 ;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number :");
        no1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        no2 = sobj.nextInt();

        Ans = no1 + no2;

        System.out.println("Addition is :"+Ans);

    }

}