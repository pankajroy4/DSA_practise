package myccc;
import java.util.*;
public class UseFact {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter a number to get it's factorial:");
        int num=scanner.nextInt();
        System.out.println(Factorial.calculate_fact(num));
    }
}
