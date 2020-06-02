#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr1[n],arr2[n],sum1=0,sum2=0,ans=0;
		for(int i=0;i<n;i++){
			cin >> arr1[i];
		}
		for(int i=0;i<n;i++){
			cin >> arr2[i];

		}
		if(arr1[0]==arr2[0])ans += arr1[0];
		else{
			sum1 += arr1[0];
			sum2 += arr2[0];
		}
		for(int i=1;i<n;i++){
			if(sum1==sum2 && arr1[i]==arr2[i]){
				ans += arr1[i];
				sum1 += arr1[i];
				sum2 += arr2[i];
			}
			else{
				sum1 += arr1[i];
				sum2 += arr2[i];
			}
		}
		cout << ans << endl;
	}




}