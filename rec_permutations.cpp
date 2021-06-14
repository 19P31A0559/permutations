#include<bits/stdc++.h>
using namespace std;

void PrintPermutations(int a[],vector<int>res,int freq[],int n)
{
	if(res.size()==n)
	{
		for(auto i:res)cout<<i<<" ";
		cout<<"\n";
	}
	for(int i=0;i<n;i++)
	{
		if(freq[i]==0)
		{
			res.push_back(a[i]);
			freq[i]=1;
			PrintPermutations(a,res,freq,n);
			freq[i]=0;
			res.pop_back();
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	vector<int>res;
	int freq[n]={0};
	PrintPermutations(a,res,freq,n);
}
