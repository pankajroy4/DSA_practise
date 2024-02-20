#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int fun(int N, int K) {
      if(N == 1) return 0;
      if(K % 2 == 0){
      return fun(N - 1, K / 2) == 0 ? 1 : 0;
      }else{
         return fun(N - 1, (K + 1) / 2);
      }
   }
};

int main(){
   int a,b;
   cin>>a>>b;
   Solution ob;
   cout << (ob.fun(a, b));
   return 0;
}