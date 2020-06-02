#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll T;
	cin >> T;
	while(T--)
	{
		ll N,Q,count[26]={0},c;
		cin >> N >> Q;
		string s;
		cin >> s;
		for(int i=0;i<N;i++){
			count[s[i]-'a']++;
		}
		for(int i=0;i<Q;i++)
		{
			ll sum=0;
			cin >> c;
			for(int j=0;j<26;j++){
				ll diff = count[j]-c;
				if(diff>0)sum += diff;

			}			
			cout << sum << endl;


		}

	}




}