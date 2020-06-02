#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		string s;
		cin >> s;
		long long int N=s.length();
		if(N%2==0){
		char store=s[0],store1=s[1];
		int flag=0;
			for(int i=2;i<N;i=i+2){
				if(s[i]!=store){
					flag=1;
					break;
				}
				if(s[i-1]!=store1){
					flag=1;
					break;
				}
			}
			if(s[N-1]!=store1){
				flag=1;
			}
		if(flag==0)cout << "YES" << endl;
		else cout << "NO" << endl;

		}
		else{
			char store = s[0];
			int flag=0;
			for(int i=1;i<N;i++){
				if(s[i]!=store){
					flag=1;
					break;
				}
			}
			if(flag==0)cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}



}