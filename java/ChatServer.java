import java.io.*;
import java.net.*;

class ChatServer
{
    public static void main(String[] args) throws Exception
    {
       ServerSocket ssobj = new ServerSocket(5100);
       System.out.println("Server is Running at Port 5100"); 
       Socket sobj = ssobj.accept();
       System.out.println("Client Request gets Accepted Succesfully");

        PrintStream pobj = new PrintStream(sobj.getOutputStream());
        BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Marvellous Server is Running");
        String str1 = null, str2 = null;

        while ((str1 = bobj1.readLine()) != null) 
        {
            System.out.println("Client says : " + str1);
            System.out.println("Enter Message For Client : ");
            str2 = bobj2.readLine();
            pobj.println(str2);
        }
    }
}