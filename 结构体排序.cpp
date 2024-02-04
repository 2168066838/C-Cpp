#include<bits/stdc++.h>
using namespace std;

struct Student{
	int num;
	string name;
	int score;
}a[100];
void prints(Student a[],int n){
	int i;
	for(i= 0;i<n;i++){
		cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].score<<endl;
	}
}
bool Sort(Student a,Student b){
	if((a.score>b.score)or (a.score==b.score and a.num <s b.num)) return true;
	return false;
}
int main(){
	int n=4;
	for(int x=0;x<=n;x++)
		cin>>a[x].num>>a[x].name>>a[x].score;
//	for(int i=0;i<=3;i++)
//		for(int j=i+1;j<=4;j++)
//		if((a[i].score<a[j].score)or (a[i].score==a[j].score and a[i].num > a[j].num))
//				swap(a[i],a[j]);
	sort(a,a+n,Sort);
	prints(a,n);	
	return 0;
}

