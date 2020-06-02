#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,flag=1,ans=0,count3=0;
		cin >> n;
		int count1[26]={0},count2[26]={0};
		string s1,s2;
		cin >> s1 >> s2;
		std::vector<int> v[1000];
		for(int i=0;i<n;i++)
		{
			count1[s1[i]-'a']++;
			count2[s2[i]-'a']++;
		}
		for(int i=0;i<n;i++)
		{
			if(s1[i]!=s2[i])flag=0;

		}
		if(flag==1)cout << "0" << endl;
		for(int i=0;i<26;i++)
		{
			if(count1[i]==0 && count2[i]!=0){
				flag=1;
				cout << "-1" << endl;
				break;
			}
		}
		if(flag==0)
		{
			for(int i=0;i<n;i++)
			{
				if(flag==1)break;
				if(s2[i]!=s1[i]){
					if(s2[i]>s1[i]){
						flag=1;
						cout << "-1" << endl;
						break;
					}
				}
			}
		}
		int k=0;
		if(flag==0)
		{
			for(int j=25;j>=0;j--){
			if(count2[j]>0){
			for(int i=0;i<n;i++)
			{
				if(count3==0){
				if((s2[i]==('a'+j)) && (s1[i]!=s2[i])){
					for(int l=0;l<n;l++){
						if(s1[l]>=('a'+j) && s2[l]<=('a'+j)){
							if(s1[i]!=s2[i])count3++;
							if(s1[l]>('a'+j))flag=1;
							v[k].push_back(l);
							if(s1[l]!=s2[l])s1[l]='a'+j;
						}
					}
				}
				}
			}
			
			if(v[k].size()>0 && flag==1)ans++;
			if(flag==0)v[k].clear();
			k++;
			flag=0;
			count3=0;
			}
			}
			cout << ans << endl;
				for(int i=0;i<1000;i++){
				if(v[i].size()>0){
					cout << v[i].size() << " ";
					for(auto num:v[i]) cout << num << " ";
					cout << endl;
				}

			}
		}
		
	}
}