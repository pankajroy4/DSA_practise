import java.util.Scanner;
class Reverse{
    public static void main(String []args){
        Scanner scan=new Scanner(System.in);
        int num=0;
        System.out.println("Enter a number to reverse it:");
        num=scan.nextInt();
        int reverse=0;
        while(num>0){
            reverse=(reverse*10)+(num%10);
            num=num/10;
        }
        System.out.println("Reverse number is "+reverse);
    }
}