#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int n,c,a[N],mx;
int check(int x){
	int cnt=0;
	int last=0;//记录上一块石头的位置 
	for(int i=1;i<=n;i++)
		if(a[i]-last<x) cnt++;//a[i]需要移走
		else last=a[i];//a[i] 不需要移走
	return cnt; 
}
int main(){
	cin>>n>>c;
	for(int i=1;i<=n;i++) cin>>a[i],mx=max(mx,a[i]);
	int l=0,r=mx;
	while(l<r){
		int mid=l+r>>1;
		if(check(mid)<=c) r=mid;
		else l=mid+1;
	}
	cout<<r<<endl;
	return 0;
}

