#include <iostream>
#include <cstdio>
using namespace std;

#define N 21
int arr[N];
int n,k;

bool dfs(int i, int sum)
{
	if(i==n)	return 	sum==k;
	if(dfs(i+1,sum))	return true;   
	if(dfs(i+1,sum+arr[i]))	return true;
	return false;
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	cin>>k;
	if(dfs(0,0)){cout<<"Yes"<<endl;}
	else{cout<<"No"<<endl;}
	return 0;
}
