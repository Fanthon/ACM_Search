#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int H,W;
char a[20][21];
int mark[20][21];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int cnt;
void dfs(int x,int y)
{
	cnt++;
	mark[x][y]=1;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0 && nx<H && ny>=0 && ny<W && a[nx][ny]=='.' && !mark[nx][ny])
		{
			dfs(nx,ny);
		}
	}
}

void solve()
{
	cnt=0;
	for(int i=0;i<H;i++)
	{
		for(int j=0;j<W;j++)
		{
			if(a[i][j]=='@')
			{
				dfs(i,j);
			}
		}
	}
	cout<<cnt<<endl; 
}

int main()
{
	while(~scanf("%d %d",&W,&H) && (W||H))
	{
		memset(a,0,sizeof(a));
		memset(mark,0,sizeof(mark));
		for(int i=0;i<H;i++)
		{
			cin>>a[i];
		}	
		solve();
	} 
	return 0;	
} 
