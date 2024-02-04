#include<bits/stdc++.h>
using namespace std;
int f[5][9]={0};
int w[5]={0,2,3,4,5};
int v[5]={0,3,4,5,8};
int main(){
	for(int n=1;n<=4;n++)
		for(int j=1;j<9;j++){
			if(w[n]>j)
				f[n][j] = f[n-1][j];
			else
				f[n][j] = max(f[n-1][j],f[n-1][j-w[n]]+v[n]); 
		}
	cout<<f[4][8]<<endl;
	for(int n=0;n<=4;n++)
		for(int j=0;j<9;j++)
			printf("f[%d][%d]=%d\n",n,j,f[n][j]);	
	return 0;
	//		 f(k-1,w),wk>w(太重，放不下)
	//
	//f(k,m)=
	//
	//		 max{f(k-1,w),f(k-1,w-wk)+vk}wk<=w
	//编号  时间  价格  时间只有55分钟 
	//	1     21    9 
	//  2     20    8 
	//  3     30    21 
}

