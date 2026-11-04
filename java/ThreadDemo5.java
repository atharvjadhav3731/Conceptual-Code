class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running ");
    }
}

class ThreadDemo5
{
    public static void main(String a[])
{
    System.out.println("Inside main Thread");

    Demo dobj1 = new Demo();
    Demo dobj2 = new Demo();
    
    dobj1.start();
    dobj2.start();
    
    System.out.println("End of main Thread"); // Issue

}
}
