#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[7]={90,4,1,7,2,10,3};
	int b;
	for(int x=0;x<=7;x++)
		for(int y=x+1;y<=7;y++)
			if(a[x]<a[y])
			{
				b=a[x];
				a[x]=a[y];
				a[y]=b;
			}
	for(int r=0;r<=6;r++)
		cout<<a[r]<<' ';
	return 0;
}

