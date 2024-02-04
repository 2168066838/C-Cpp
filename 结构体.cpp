#include<bits/stdc++.h>
using namespace std;
struct Student{
	int num;
	string name;
	double height;
}s1,s2,s;

void print(Student s){
	cout<<"num:"<<s.num<<",name:"<<s.name<<",height:"<<s.height<<endl;
}
void prints(Student a[],int n){
	int i;
	for(i= 0;i<n;i++){
		cout<<a[i].num<<" "<<a[i].name<<" "<<a[i].height<<endl;
	}
}
int main(){
	//Student s;
	s.num = 2;
	s.name = "zhang";
	s.height = 178.5;
	print(s);
	Student a[100];
	int i,n;
//	cin>>n;
//	for(i = 0;i<n;i++){
 //   cin>>a[i].num>>a[i].name>>a[i].height;
//	}
	Student *p = &s;
	cout<<p->num<<' '<<p->name<<" "<<p->height<<endl;
	cout<<(*p).num<<' '<<(*p).name<<" "<<(*p).height<<endl;
	//prints(a,n);
	return 0;
}

