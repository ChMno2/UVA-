#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,Ni;
	while(cin>>N&&N>0)
	{
		long long int sum=0;		
		vector<long long int> Num;
		Num.clear();
		for(int i=0;i<N;i++)
		{
			cin>>Ni;
			Num.push_back(Ni);
		}
		
		
		while(Num.size()>1)
		{
			sort(Num.begin(),Num.end());
			
			sum+=Num[0]+Num[1];
			Num.push_back(Num[0]+Num[1]);
			Num.erase(Num.begin());
			Num.erase(Num.begin());
			
		}	
		cout<<sum<<endl;
	}
	
	
}
