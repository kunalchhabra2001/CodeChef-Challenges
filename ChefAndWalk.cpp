#include<bits/stdc++.h>
using namespace std;


int main()
{
	const long long int mod=1000000007;
	long long int T;
	cin >> T;
	while(T--)
	{
		long long int N,K;
		cin >> N >> K;
		long long int num = N + (K-1)/2;
		long long int sum = num*(num+1)%mod;
		if(K%2==0)sum = (sum+N)%mod;
		if(K%2!=0)sum = (sum-N)%mod; 
		
		cout << sum << endl;
	}
}