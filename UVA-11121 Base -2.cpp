https://vjudge.net/problem/UVA-11121
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cout<<"Case #"<<i+1<<": ";
		long long int t;
		cin>>t;
		if(t==0)
			cout<<0;
		vector<int> mp;
		while(t!=0)
		{
			if(t%(-2)==-1)
			{
				mp.push_back(t%(-2)+2);
				t=t/(-2)+1;
			}
			else
			{
				mp.push_back(t%(-2));
				t/=(-2);
			}
		}
		
		for(int j=mp.size()-1;j>=0;j--)
			cout<<mp[j];
		cout<<endl;
	}
	
}
