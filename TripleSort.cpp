#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		ll N,K,count=0;
		cin >> N >> K;
		ll A[N+1];
		bool visited[N+1]={false};	
		vector<ll> v[200001];
		for(ll i=1;i<=N;i++)
		{
			cin >> A[i];
			if(A[i]==i){
				count++;
				visited[i]=true;
			}
		}
		ll unsorted = N-count,loop=0;
		ll flag=0;
		ll i=1,num=1;
		if(unsorted==0)cout << "0" << endl;
		else{
		while(i<N){
			if(unsorted<3 or loop>=K)break;
			if(loop<K && unsorted>2){
			if(!visited[A[i]]){
				v[num].push_back(i);
				v[num].push_back(A[i]);
				visited[A[i]]=true;
				ll j = A[A[i]];
				if(j==i){
				    ll l=i;
				    A[A[i]]=A[i];
				    i++;
				    while(visited[i]){
				        i++;
				    }
				    ll k = A[i];
				    
				    A[l]=A[i];
				    A[i]=j;
				    
				    
				    v[num].push_back(i);
				    i=l;
				    unsorted=unsorted-1;
				}
				else{
				v[num].push_back(j);
				A[A[i]]=A[i];
				visited[A[i]]=true;
				ll k = A[j];
				A[j]=j;
				visited[j]=true;
				if(k==i){
					visited[i]=true;
					A[i]=i;
					unsorted = unsorted-3;
					i++;
				}
				else {
				    A[i]=k;
				    unsorted = unsorted-2;
				}
				}
				if(unsorted==0)flag=1;
				loop++;
				num++;
				
			}
			else i++;
			}
		}
		if(flag==0){
			cout << "-1" << endl;
		}
		else{
			cout << loop << endl;
			for(int i=1;i<N;i++)
			{
				if(v[i].size()){
					for(ll num:v[i]){
						cout << num << " ";
					}
					cout << endl;
				}



			}


		}
		}
	}




}