#include <iostream>
using namespace std;
int N,M;
char map[100][101];
void dfs(int x, int y)
{
	map[x][y]='.';
	for(int dx=-1;dx<=1;dx++)
	{
		for(int dy=-1;dy<=1;dy++)
		{
			int nx = x+dx;
			int ny = y+dy; 
			if(nx>=0  && nx<N  &&  ny>=0  &&  ny<M &&  map[nx][ny] == 'W') dfs(nx,ny); 
		}
	}
}

void solve()
{
	int cnt=0;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(map[i][j]=='W')
			{
				dfs(i,j);
				cnt++;
			}
		}
	}
	cout<<cnt;
}

int main()
{
	cin>>N>>M;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>map[i][j];
		}
	}
	solve();
	return 0;
 } 

