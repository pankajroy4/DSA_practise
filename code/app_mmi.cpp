
  #include<iostream>
  using namespace std;
  const int N=1e6+7;
  const int M=10^9+7;
  int fact[N];
  int fun(int a,int b,int m){
      int ans=1;
      while(b>0){
        if(b&1)
          ans=(ans*1ll*a) % m;
        a=(a*1ll*a) % m;
        b=b>>1;
      }
      return ans;
  }
  int main(){
    fact[0]=1;
    for(int i=1;i<N;i++){
      fact[i]=(fact[i-1]*1ll*i)%M;
    }
    int q;
    cin>>q;
    int r=0;
    while(q--){
      int n,k;
      cin>>n>>k;
      int ans=fact[n];
      int den=(fact[n-r]*1ll*fact[r])%M;
      ans=ans*fun(den,M-2,M);
      cout<<ans<<endl;
    }
    return 0;
  }