#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >res;
int K,N,s=0;
vector<int>path;
vector<int>path1;
void dfs(int l,int sum){ 
	if(sum>N)return;//�Ͳ������û��涨�ͷ��� 
	if(path.size()>K) return;// ���ȴ����û��涨�ͷ��� 
	if(sum==N&&path.size()==K){ //������������û��涨 
		path1=path;
	for(int x=0;x<path1.size();x++)			// 
		for(int y=x+1;y<path1.size();y++)	// 
			if(path1[x]>path1[y])			// 
			{								// 
				int b=path1[x];			  	// 
				path1[x]=path1[y];			// 
				path1[y]=b;					// 
			}								//���� 
		for(int i=0;i<res.size();i++)
			{if(path1==res[i])
				return; 
			} 
		s++;
		res.push_back(path1);
		return;
	}
	for(int i=1;i<=N;i++){
		path.push_back(i);
		dfs(i,sum+i);
		path.pop_back();
	}
	} 
int main(){
	K=4,N=8;
	dfs(0,0);
	cout<<"����"<<s<<endl;
	for(int i=0;i<res.size();i++){
		for(int x=0;x<res[i].size();x++)
			cout<<res[i][x];
		cout<<endl;
	}
	return 0;
}

