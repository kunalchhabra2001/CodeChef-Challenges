#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,sum=0,diff2=0,diff1=0,max_diff=0,add=0;
		cin >> n;
		int arr[n];
		std::vector<int> v;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			
		}
		int dis[n];
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1){
				
				v.push_back(i);
			}
			

		}
		int len = v.size();
		if(len==0)cout<<"0"<<endl;
		else{
		for(int i=1;i<len-1;i++)
		{
			diff1 = v[i]-v[i-1];
			diff2 = v[i+1]-v[i];
			add = min(diff2,diff1);
			max_diff = min(max_diff,add);
			sum += add;
		}

		diff1 = v[len-1]-v[len-2];
		diff2 = n + v[0] - v[len-1];
		if(diff1<diff2) 
		sum += min(diff1,diff2);
		sum -= max_diff;
		cout << sum << endl;
		}
	}




}