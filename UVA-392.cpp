https://vjudge.net/problem/UVA-392
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t[9];
	while(cin>>t[0])
	{
		for(int i=1;i<9;i++)
		{
			cin>>t[i];
		}
		int sum=0;
		for(int i=0;i<7;i++)
		{
			if(t[i])
			{
				if(sum)
				{
					if(t[i]>0)
						cout<<" + ";
					else if(t[i])
						cout<<" - ";
				
					if(t[i]==1)
						cout<<"x^"<<8-i;
					else if(t[i]==-1)
						cout<<"x^"<<8-i;
					else
						cout<<abs(t[i])<<"x^"<<8-i;	
				}
				else
				{
					if(t[i]==1)
						cout<<"x^"<<8-i;
					else if(t[i]==-1)
						cout<<"-"<<"x^"<<8-i;
					else
						cout<<t[i]<<"x^"<<8-i;
				}
				sum++;	
			}
		}
		if(t[7])
		{
			if(sum)
			{
				if(t[7]>0)
					cout<<" + ";
				else
					cout<<" - ";
				
			}
			if(abs(t[7])==1)
				cout<<"x";
			else
				cout<<abs(t[7])<<"x";
			sum++;
		}		
		if(t[8])
		{
			
			if(sum)
			{
				if(t[8]>0)
					cout<<" + ";
				else
					cout<<" - ";
				
			}
			cout<<abs(t[8]);
			sum++;
		}		
		
		if(sum==0)
		{
			cout<<"0"<<endl;
		}
		else
			cout<<endl;
		
	}
}
