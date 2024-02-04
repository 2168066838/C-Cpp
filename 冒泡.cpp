#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5]={6,3,5,1,10};
	int c;
	for(int i=0;i<5;i++)
		for(int j=0;j<=3;j++)
		{
			if(a[j]<a[j+1])
			{
				c=a[j+1];
				a[j+1]=a[j];
				a[j]=c;		
			} 
		}
	
	for(int y=0;y<=4;y++)
	{
		cout<<a[y]<<" ";
	}
	return 0;
}

