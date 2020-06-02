#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,flag=0;
		cin >> n;
		int arr[n],count[1005]={0};
		cin >> arr[0];
		set<int> s;
		count[arr[0]]++;
		for(int i=1;i<n;i++){
			cin >> arr[i];
			if(arr[i]!=arr[i-1]){
				s.insert(count[arr[i-1]]);
			}
			if((count[arr[i]]!=0) and (arr[i]!=arr[i-1]))flag++;
			else count[arr[i]]++;
		}
		
		for(int i=0;i<s.size();i++){
			ans += s[i];
		}
		if(s[i]!=n)flag=1;
		if(flag==0)cout<<"YES"<<endl;
		else cout << "NO" << endl;

	}


}