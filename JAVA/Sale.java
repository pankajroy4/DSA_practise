//WAP to find average of sale made by everysales men of a company.The number of salesmen and sale made by each salesmen should be accepted by user.
import java.util.Scanner;
class Sale{
    public static void main(String []args){
        int salesmen,sale_quant;
        Scanner scan=new Scanner(System.in);
        System.out.println("How many salesmen:");
        salesmen=scan.nextInt();
        int [][]arr=new int[salesmen][];
        for(int i=0;i<salesmen;i++){
            System.out.print("How many sales for salesmen "+(i+1)+" :");
            sale_quant=scan.nextInt();
            arr[i]=new int[sale_quant];
            System.out.print("Enter "+sale_quant+" sale value:");
            for(int j=0;j<sale_quant;j++){
                int value=scan.nextInt();
                arr[i][j]=value;
            }
        }
        int sum=0,count=0;
        int best_salesman=0;
        int max_sale=0,temp_sale=0;
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                System.out.print(arr[i][j]+"  ");
                sum+=arr[i][j];
                temp_sale+=arr[i][j];
                count++;
            }
            if(temp_sale>max_sale)
                best_salesman=i+1;
            temp_sale=0;
            System.out.println();
        }
        System.out.println("Sum is "+sum);
        System.out.println("Average is "+(float)sum/count);
        System.out.println("Best salesmen is "+best_salesman);
    }
}
  