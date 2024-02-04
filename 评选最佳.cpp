#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	string str[n+1];
	for(int i=1;i<=n;i++){
		cin>>str[i];
	}
	int a[m+1];
	//第一部分 循环投票结果 
	for(int i=1;i<=n;i++){
		string s=str[i];
		for(int j=0;j<s.size();j++){
			char t=s[j]-'0';
			if(t==0){
				break;
			}else{
				if(a[t]>=0){
					a[t]=a[t]+1;
					break;
				}
			}
		}
	
	}
	cout<<a[3]<<endl;
	//第二部分 
	return 0;
}
// 3 4
// 1 2 3
// 2 1 3
// 1 3 2
// 1 0 
//   1
