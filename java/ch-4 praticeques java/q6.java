import java.util.Scanner;
public class q6 {

        public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        if (str.endsWith(".com"))
        {
            System.out.println("This is a commercial website");
        }
        else if (str.endsWith(".org"))
        {
            System.out.println("This is an organizational website");
        }
        else if (str.endsWith(".in"))
        {
            System.out.println("This is an Indian website");
        }
        else
        {
            System.out.println("Unknown website type");
        }
    }
 }