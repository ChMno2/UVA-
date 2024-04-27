#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005]={0};
int ans(int a,int b)
{
	if(dp[a][b]!=-1) return dp[a][b];
	if(b<=1||a<=b) return dp[a][b]=1;
	return dp[a][b]=(b*ans(a-1,b)+ans(a-1,b-1)) %2;
}

int main()
{
	int n;
	for(int i=0;i<1005;i++)
	{
		for(int j=0;j<1005;j++)
		{
			dp[i][j]=-1;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		cout<<ans(a,b)<<endl;
	}

}
