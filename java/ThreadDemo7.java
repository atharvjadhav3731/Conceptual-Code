class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running "+currentThread().getName());
    }
}

class ThreadDemo7
{
    public static void main(String a[]) throws Exception
{
    System.out.println("Inside main Thread");

    Demo dobj1 = new Demo();
    Demo dobj2 = new Demo();

    dobj1.setName("First_Thread");
    dobj2.setName("Second_Thread");

    
    dobj1.start();
    dobj2.start();

    dobj1.join();
    dobj2.join();

    System.out.println("End of main Thread"); 

}
}