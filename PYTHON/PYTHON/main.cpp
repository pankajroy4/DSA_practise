// #include<iostream>
// #include<conio.h>
// #include<string.h>
// using namespace std;
// int main()
// {
//     int i,a;
//     printf("\nenter no. to check wheter it is prime or not: ");
//     scanf("%d",&a);
//     if(a>=20)
//     {
//         printf("\nno. shuold be less than 20");
//         return 0;
//     }
//     for(i=2;i<a;i++)
//      {
//          if(a%i==0)
//           {
//           printf("\n not prime");
//           break;
//           }
//      }

//       if(i==a)
//       {
//           printf("\n prime");
//       }

//     return 0;
// }

// ________________________________________________________________________________

// #include <iostream>
// #include <conio.h>
// #include <string.h>
// using namespace std;
// int main()
// {
//     string s;
//     s = "pankaj";
//     int x;
//     x = s.length();
//     int i, j, k;
//     for (i = 0; i <= x; i++)
//     {
//         for (j = i; j < x; j++)
//         {
//             cout << " ";
//         }
//         for (k = 0; k <i; k++)
//         {
//             cout << s[k] << ' ';
//         }

//         cout << endl;
//     }
//     return 0;
// }

// _______________________________________________________________

// #include <iostream>
// #include <conio.h>
// #include <string.h>
// using namespace std;
// int main()
// {
//     int i, a;
//     cout << endl
//          << "enter no. to check wheter it is prime or not: ";
//     cin >> a;
//     if (a >= 20)
//     {
//         cout << endl
//              << "no. should be less than 20:";
//         return 0;
//     }

//     for (i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             cout << "not a prime no" << endl;
//             return 0;
//         }
//     }

//     if (i == a)
//     {
//         cout << "it is prime.";
//     }

//     return 0;
// }


// __________________________________________________________

// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main()
// {
//     int arr[10];
//     int i,check;
//      cout<<"enter  integer to store in array:"<<endl;
//     for(i=0;i<10;i++)
//     {
      
//        cin>>arr[i];

//     }
    
//      cout<<"enter a number to find whether it is in array or not:"<<endl;
//      cin>>check;
//      for(i=0;i<10;i++)
//      {
//          if(arr[i]==check)
//           {
//               cout<<"number found"<<endl;
//               cout<<"position is "<<i+1<<endl;
//               return 0;
            
//           }
          
//      }
//        if(10==i)
//          {
//            cout<<"number does not exist."<<endl;
//          } 
//      return 0;
// }

// __________________________________________________________

// #include<iostream>

// using namespace std;
// int main()
// {
//   int n,s=0;
//   int r;
//   cout<<"enter your no: ";
//   cin>>n;
//   while(n>0)
//    {
//      r=n%10;
//      s=s*10+r;
//      n=n/10;

//    }

//   n=s;
//   while(n>0)
//    {
//      r=n%10;
//      switch(r)
//       {
//          case1:cout<<"one";break;
//          case2:cout<<"two";break;
//          case3:cout<<"three";break;
//          case4:cout<<"four";break;
//          case5:cout<<"five";break;
//          case6:cout<<"six";break;
//          case7:cout<<"seven";break;
//          case8:cout<<"eight";break;
//          case9:cout<<"nine";break;
//          case0:cout<<"zero";break;
//          default:cout<<"wrong input"<<endl;break;


//       }
//      n=n/10; 
//    } 
// return 0;
// }

// __________________________________________________________


// #include<bits/stdc++.h>
// #include<cstring>

// using namespace std;
// int main()
// {
//  int a,b,c,d;
//  int result;


//   return 0;
//   }

// #include <iostream>
// using namespace std;

// int gr(int,int);
// int main()
// {
// int a,b,c,d;
// int result1,result2,final_result;
// cout<<"enter four no: "<<endl;
// cin>>a>>b>>c>>d;
// result1 = gr(a,b);
// result2=gr(c,d);
// final_result=gr(result1,result2);
// cout<<final_result;


// return 0;
// }

// int gr(int a,int b)
// {
//   if (a>b)
//      {
//        return a;
//      }
//   else 
//     return b;   
// }

#include <stdio.h>
#include<conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch;
    char arr[20];
    char brr[20];
    printf("enter a character:");
    printf("enter a word:");
    printf("enter a sentence: ");

    scanf("%c",&ch);
    scanf("%s",arr);
    gets(brr);
    printf("%c\n",ch); 
    printf("%s\n",arr);
    printf("%s",brr);
    return 0;
}
