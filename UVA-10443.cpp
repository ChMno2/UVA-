https://vjudge.net/problem/UVA-10443
//algorithm:Brust forse
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,s,p;
		cin>>r>>s>>p;
		char m[r][s],mm[r][s];
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<s;j++)
			{
				cin>>m[i][j];
			}
		}
		
		
		while(p--)
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<s;j++)
				{
					mm[i][j]=' ';
				}
			}
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<s;j++)
				{
					if(i==0)
					{
						if(j==0)
						{
							if(m[i][j]=='S')
								if(m[i][j+1]=='R'||m[i+1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i][j+1]=='P'||m[i+1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i][j+1]=='S'||m[i+1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];	
						}
						else if(j==s-1)
						{
							if(m[i][j]=='S')
								if(m[i][j-1]=='R'||m[i+1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i][j-1]=='P'||m[i+1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i][j-1]=='S'||m[i+1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];
							
						}
						else
						{
							
							if(m[i][j]=='S')
								if(m[i][j-1]=='R'||m[i][j+1]=='R'||m[i+1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i][j-1]=='P'||m[i][j+1]=='P'||m[i+1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i][j-1]=='S'||m[i][j+1]=='S'||m[i+1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];
						}
						
					}
					else if(i==r-1)
					{
						if(j==0)
						{
							if(m[i][j]=='S')
								if(m[i][j+1]=='R'||m[i-1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i][j+1]=='P'||m[i-1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i][j+1]=='S'||m[i-1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];	
						}
						else if(j==s-1)
						{
							if(m[i][j]=='S')
								if(m[i][j-1]=='R'||m[i-1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i][j-1]=='P'||m[i-1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i][j-1]=='S'||m[i-1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];
							
						}
						else
						{
							
							if(m[i][j]=='S')
								if(m[i][j-1]=='R'||m[i][j+1]=='R'||m[i-1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i][j-1]=='P'||m[i][j+1]=='P'||m[i-1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i][j-1]=='S'||m[i][j+1]=='S'||m[i-1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];
						}
					}
					else
					{
						if(j==0)
						{
							if(m[i][j]=='S')
								if(m[i-1][j]=='R'||m[i][j+1]=='R'||m[i+1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i-1][j]=='P'||m[i][j+1]=='P'||m[i+1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i-1][j]=='S'||m[i][j+1]=='S'||m[i+1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];
						
						}
						else if(j==s-1)
						{
						
							if(m[i][j]=='S')
								if(m[i-1][j]=='R'||m[i][j-1]=='R'||m[i+1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i-1][j]=='P'||m[i][j-1]=='P'||m[i+1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i-1][j]=='S'||m[i][j-1]=='S'||m[i+1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];
						
						}
						else
						{
							if(m[i][j]=='S')
								if(m[i-1][j]=='R'||m[i][j-1]=='R'||m[i][j+1]=='R'||m[i+1][j]=='R')
									mm[i][j]='R';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='R')
								if(m[i-1][j]=='P'||m[i][j-1]=='P'||m[i][j+1]=='P'||m[i+1][j]=='P')
									mm[i][j]='P';
								else
									mm[i][j]=m[i][j];
							if(m[i][j]=='P')
								if(m[i-1][j]=='S'||m[i][j-1]=='S'||m[i][j+1]=='S'||m[i+1][j]=='S')
									mm[i][j]='S';
								else
									mm[i][j]=m[i][j];
						}
					}


				}
			}
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<s;j++)
				{
					m[i][j]=mm[i][j];
				}
			}
			
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<s;j++)
			{
				cout<<m[i][j];
			}
			cout<<endl;
		}
		if(t!=0)
			cout<<endl;
				
	}



}
