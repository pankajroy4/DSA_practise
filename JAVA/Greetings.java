// Accepting Multiwords Strings
import java.util.Scanner;
class Greetings{
    public static void main(String []args){
        // String fullname;
        //    OR
        String fullname=new String();
        Scanner kb=new Scanner(System.in);
        System.out.println("Enter your Full name:");
        fullname=kb.nextLine();
        System.out.println("Welcome to java "+fullname);
    }
}
