// import java.util.Scanner;
// class Factorial{
//     public static void main(String []args){
//         int fact=1,num;
//         Scanner kb=new Scanner(System.in); 
//         System.out.println("Enter an integer to finds it's Factorial:");
//         num=kb.nextInt();
//         while(num>1){
//             fact*=num;
//             num--;
//         }
//         System.out.println("Factorial is "+fact);
//     }
// }

// _______________________Using For Loop______________

import java.util.Scanner;
class Factorial{
    public static void main(String []args){
        int fact,num;
        Scanner kb=new Scanner(System.in); 
        System.out.println("Enter an integer to finds it's Factorial:");
        num=kb.nextInt();
        for( fact=1;num>1;num--){
            fact*=num;
        }
        System.out.println("Factorial is "+fact);
    }
}

