// class Solution {
//     public int kthGrammar(int N, int K) {

//         List<Integer> list = new LinkedList<Integer>();
//         list = generateNextrow(N);
//         return list.get(K-1);
//     }
    
//     public List<Integer> generateNextrow(int n)
//     {
//         List<Integer> list = new LinkedList<Integer>();
//         if(n == 1)
//         {
//             list.add(0);
//             return list;
//         }
        
//         list.add(0);
        
//         for(int i = 1; i < n; i++)
//         {
//             int len = list.size();
//             for(int j = 0; j < len; j++)
//             {
//                 list.add(list.get(j)^1);
//             }
            
//         }
//       return list;
//     }
// }


// class Solution{
//     public int kthGrammar(int N, int K) {
//         return Integer.bitCount(K-1) & 1;
//     }
// }

// -----------------------------------------------------------------------

// class Season{
//     public static void main(String []args){
//         int x=Integer.parseInt(args[0]);
//         switch(x){
//             case 1:case 2: case 11: case 12:
//                 System.out.println("Winter Season");
//                 break;
//             case 3:case 4: case 5: case 6:
//                 System.out.println("Summer Season");
//                 break;
//             case 7:case 8: case 9: case 10:
//                 System.out.println("Rainy Season");
//                 break;
//             default:
//                 System.out.println("Wrong Input");
//         }
//     }
// }

// -----------------------------------------------------------------------------------------

// class Season{
//     public static void main(String []args){
//         switch(args[0]){
//             case "1":case "2": case "11": case "12":
//                 System.out.println("Winter Season");
//                 break;
//             case "3":case "4": case "5": case "6":
//                 System.out.println("Summer Season");
//                 break;
//             case "7":case "8": case "9": case "10":
//                 System.out.println("Rainy Season");
//                 break;
//             default:
//                 System.out.println("Wrong Input");
//         }
//     }
// }

// ---------------------------------------------------------------------------------------

// class Vowel{
//     public static void main(String []args){

//         switch(args[0].charAt(0)){
//         case 'A':case 'a':case 'E':case 'e':case 'I':case 'i':case 'O':case 'o':case 'U':case 'u':
//             System.out.println("Character is a vowel");
//             break;
//         default:
//             System.out.println("Not a vowel");                        
//         }
//     }
// }


// ---------------------------------------------------------------------------------------

class Vowel{
    public static void main(String []args){

        switch(args[0]){
        case "A":case "a":case "E":case "e":case "I":case "i":case "O":case "o":case "U":case "u":
            System.out.println("Character is a vowel");
            break;
        default:
            System.out.println("Not a vowel");                        
        }
    }
}
