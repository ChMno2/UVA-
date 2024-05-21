//https://vjudge.net/problem/UVA-11121
//和一般的進位轉換類似，可以用除法和取餘數的方式來轉換。
//不過在負二進位表示中只能有 $0$ 和 $1$ 兩個數字，而除以 $-2$ 會餘數為負數的情況，
//因此我們可以在餘數為負數時將商加 $1$，餘數加 $2$ 來保證餘數為正數。
//隨後將餘數加入答案中，並將商更新為新的數字，重複上述步驟直到商為 $0$，最後將答案 反轉  即可。
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
