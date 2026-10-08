class ThreadDemo1{
public static void main(String a[])
{
    System.out.println("Inside Thread ");
    Thread t  = Thread.currentThread();
    System.out.println("Current thread Name is : "+t.getName());

    System.out.println("Current Thread id is :"+t.getId());

    System.out.println("Thread is Alive or not : "+t.isAlive());
    System.out.println("Thread priority is : "+t.getPriority());

}
}