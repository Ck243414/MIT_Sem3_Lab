class RunnableThread implements Runnable
{
public void run()
{
for(int i=0;i<5;i++) System.out.println("Hello World!");
}
}

class ExtendedThread extends Thread
{
public void run()
{
for(int i=0;i<5;i++) System.out.println("World Hello!");
}
}

public class MyThread
{
public static void main(String ar[])
{
RunnableThread thread1=new RunnableThread();
Thread newThread1=new Thread(thread1);
ExtendedThread thread2=new ExtendedThread();
Thread newThread2=new Thread(thread2);
newThread1.start();
newThread2.start();
for (int i=0; i<10; i++)
{
    System.out.println("Main thread running!");
}
}
}