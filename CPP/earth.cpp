// #include <bits/stdc++.h>
// using namespace std ;
// #define LL long long
// int T,N ;
// int digit_sum(LL x){
//     int s = 0 ;
//     while(x){
//         s += x%10 ;
//         x /= 10 ;
//     }
//     return s ;
// }
// int func(int N){
//     return digit_sum(1LL*N*N) ;
// }

// int main(){
//     scanf("%d",&T) ;
//     assert(T <= 1000000 && T >= 1) ;
//     while(T--){
//         scanf("%d",&N) ;
//         assert(N <= 1000000000 && N >= 1) ;
//         int itr = 5 ;
//         bool ok = false ;
//         while(itr--){
//             ok = (N == 4 || N == 1) ;
//             if(ok) 
//                 break ;
//             N = func(N) ;
//         }
//         puts(ok ? "YES" : "NO") ;
//     }
//     return 0 ;
// }


