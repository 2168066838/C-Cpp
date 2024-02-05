#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	for(int i=0;i<10000;i++){
		a = i%10;
		b = i/10%10;
		c = i/100%10;
		a*=a*a;
		b*=b*b;
		c*=c*c;
		if(a+b+c==i&&i>=100){
			printf("%d\n",i); 
		}
	}
	return 0;
}

