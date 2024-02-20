import java.util.Scanner;
class DdArray{
    public static void main(String []args){
        int row,column;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter Row and column size:");
        row=scan.nextInt();
        column=scan.nextInt();
        int [][]arr=new int[row][column];
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                System.out.print("Enter element: ");
                arr[i][j]=scan.nextInt();
            }
        }
        int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                System.out.print(arr[i][j]+"  ");
                sum+=arr[i][j];
            }
            System.out.println();
        }
        System.out.println("\nAverage is "+(float)sum/(row*column));
    }
}
class Hello{
    public static void main(String args[])
    {
        
    }
}