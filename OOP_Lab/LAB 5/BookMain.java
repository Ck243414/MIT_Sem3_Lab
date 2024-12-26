import java.util.Scanner;
class Book
{
    Scanner in = new Scanner(System.in);
    String title, author;
    int edition;
    Book()
    {
        System.out.println("Enter Book title: ");
        title = in.nextLine();
        System.out.println("Enter Book author: ");
        author = in.nextLine();
        System.out.println("Enter Book edition: ");
        edition = in.nextInt();
    }
    void display(){
        System.out.println("Title: "+title+"\nAuthor: "+author+"\nEdition: "+edition);
    }
}
public class BookMain {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Book b[] = new Book[6];
        for(int i=0;i<6;i++)
        {
            System.out.println("Book No."+(i+1)+" : ");
            b[i] = new Book();
        }
        System.out.println("Enter name of author: ");
        String name = sc.nextLine();
        for(int i=0;i<6;i++){
            if(name.equals(b[i].author))
                b[i].display();
        }
        sc.close();
    }
}
