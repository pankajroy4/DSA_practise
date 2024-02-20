
import java.util.Scanner;
class ArrayInt{
    public static void main(String [] args){
        Scanner scan=new Scanner(System.in);
        int sum=0;
        int []arr=new int[5];
        System.out.println("Enter 5 integer:");
        for(int i=0;i<5;i++){
            arr[i]=scan.nextInt();
        }
        System.out.println("Array's Data are:");
        for(int i=0;i<5;i++){
            System.out.print(arr[i]+" ");
            sum+=arr[i];
        }
        System.out.println("\nSum is "+sum+" and Average is "+(float)sum/5); 
    }
}