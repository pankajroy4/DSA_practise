#include<bits/stdc++.h>
using namespace std;
int weired_array(vector<int> v,int n){
	int ans=0;
	if(n>=2){
		map<int,int> m;
		for(int i:v){
			m[i]=0;
		}
		for(int i:v){
			m[i]=m[i]+1;
		}
		int max=0;
		for(auto p:m){
			if (p.second>v[max])
				max=p.first;
		}
		vector<int> sub;
		for(int i=0;i<v.size();i++){
			int num=0;
			for (int j=i;j<v.size();j++){
				if(max==v[j])
					num+=1;
				else
					break;
			}
			if(num>1)
				sub.push_back(num);
		}
		if(sub.size()==0)
			return 1;
		return ans=*min_element(sub.begin(),sub.end());
	}
	return ans;
}
int main(){
	vector<int> v={1,2,1,3,3,4,1,2};
	int n=v.size();
	int ans=weired_array(v,n);
	cout<<endl<<"Answer is "<<ans<<endl;

}