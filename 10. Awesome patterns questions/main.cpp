#include <iostream>
#include <conio.h>

using namespace std;

// int main(){

// for print of rectangle
// for (int i = 0; i <= 5; i++)
// {
//     for (int j = 0; j <=4; j++)
//     {
//         cout << "* ";
//     }

// cout << endl;
// }
// }

// for print of triangle

// int main(){
//     for (int i = 1; i < 10; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// for frame type star print

// int main(){
//     int row,col;
//     cout<< "Enter row and column : ";
//     cin >> row >> col;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row || j ==1 || j == col)
//             {
//                 cout << "* ";
//             }else{
//                 cout << "  ";
//             }

//         }
//             cout << endl;

//     }

// }

// inverted star piramid

// int main(){
//     int n;
//     cout << "enter a number : ";
//     cin >> n;
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }

//     cout << endl;
//     }

// }

// inverted star piramid 180* flip

// int main(){
//     int n;
//     cout<< "enter a number : ";
//     cin >> n;

//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j <= n-i)
//             {
//                 cout << "  ";
//             }else{
//                 cout << "* ";
//             }

//         }
//         cout << endl;

//     }

// }

// int main(){
//     int n;
//     cout <<"Enter a  number : ";
//     cin >> n;
//     for (int i = 1; i <=n ; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (i < 10)
//             {
//                 cout <<i << "  ";
//             }else{
//                 cout << i << " ";
//             }

//         }
//         cout << endl;

//     }

// }

// int main(){
//     int n, count = 1;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (count < 10)
//             {
//                 cout << count << "   ";
//             }else if(count < 100){
//                 cout << count << "  ";
//             }else{
//                 cout << count << " ";
//             }

//             count ++;
//         }cout << endl;

//     }

// }

// int main(){
//     int n ;
//     cout << "Enter a number : ";
//     cin >>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<< "* ";
//         }

//         int spaces = 2*(n-i);
//         for (int j = 1; j <= spaces; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout<< "* ";
//         }
//         cout << endl;
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<< "* ";
//         }

//         int spaces = 2*n-2*i;
//         for (int j = 1; j <= spaces; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout<< "* ";
//         }
//         cout << endl;
//     }

// }

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

// }

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j =1; j <= i; j++)
//         {
//             if ((i+j)%2==0)
//             {
//                 cout << "1 ";
//             }else{
//                 cout << "0 ";
//             }

//         }
//         cout << endl;
//     }

// }

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = 1; j <= n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<= n-i; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

// }

// int main()
// {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = i; j >= 2; j--)
//         {
//             cout << j << " ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }

//         cout << endl;
//     }
// }


// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
        
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
        
//     }
    
// }


// int main(){
//     int n;
//     cout << "Enter a number :";
//     cin >> n;

//     for(int i=1; i <= 3; i++){
//         for(int j= 1; j <= n; j++){
//             if(((i+j)%4 == 0) || (i == 2 && j%4 == 0)){
//                 cout << "* ";
//             }else{
//                 cout << "  ";
//             }
//         }cout << endl;
//     }
// }


int main(){
    int n;
    cout  << "Enter a number : ";
    cin >> n;

    for(int i=1; i<=n/2; i++){
        for (int j = i; j <= n/2; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j < (2*i)-1; j++)
        {
            /* code */
            cout << "  ";
        }
        for (int j = i; j <= n/2; j++)
        {
            cout << "* ";
        }
        cout << endl;      
        
    }

    for(int i=n/2; i>=1; i--){
        for (int j = i; j <= n/2; j++)
        {
            cout << "* ";
        }

        for (int j = 1; j < (2*i)-1; j++)
        {
            /* code */
            cout << "  ";
        }
        for (int j = i; j <= n/2; j++)
        {
            cout << "* ";
        }
        cout << endl;      
        
    }
}