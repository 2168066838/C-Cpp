#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,m;
char a[N][N];
bool st[N][N];
bool flag;
int d[8][2]={-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2,-2,-1};
int e,s;
struct node{
	int x,y;
	int step;
}tmp;
queue<node> q;
void bfs(int x,int y){
	tmp.x=x,tmp.y=y,tmp.step=1;
	q.push(tmp);
	st[x][y]=true;
	while(!q.empty()){
		node t=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int nx=t.x+d[i][0];
			int ny=t.y+d[i][1];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='.'&&!st[nx][ny]){
				tmp.x=nx,tmp.y=ny,tmp.step=t.step+1;
				q.push(tmp);
				st[nx][ny]=true; 
			}
			if(a[nx][ny]=='H'){
				flag=true;
				break;		
			}
		}
		if(flag) break;
		q.pop();
	}
} 
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(a[i][j]=='K')
				bfs(i,j);
	cout<<q.back().step<<endl; 
	return 0;
}

