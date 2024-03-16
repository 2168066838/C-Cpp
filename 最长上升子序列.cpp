#include<bits/stdc++.h>
using namespace std;
const int N=1010;
int a[N];
int n,f[N];
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	int ans=0;
	for(int i=0;i<n;i++){
		f[i]=a[i];
		for(int j=0;j<i;j++)
			if(a[j]<a[i])
				f[i]=max(f[i],f[j]+a[i]);
		ans=max(ans,f[i]);
	}
	cout<<ans<<endl; 
	return 0;
}    
