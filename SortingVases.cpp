#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N,M;
		bool visited[N+1];
		for(int i=1;i<=N;i++)visited[i]=false;
		cin >> N >> M;
		int arr[N+1]={0},pos[N+1];
		for(int i=0;i<=N;i++)pos[i]=0;
		int k = N*(N-1)/2;
		vector<int> v[k];
		pair<int,int> p[k];
		for(int i=1;i<=N;i++)
		{
			cin >> arr[i];
			pos[arr[i]]=i;
			if(arr[i]==i)visited[i]=true;

		}
		int count=0,x,y;
		for(int i=0;i<M;i++)
		{
			cin >> x >> y;
			v[i].push_back(x);
			v[i].push_back(y);
            p[i]=(make_pair(x,y));
		}
		if(M==0)
		{	
			for(int j=1;j<N;j++)
			{	
			    
				if(!visited[j])
				{   
				    int k = pos[j];
				    int prev = arr[j];
				    pos[arr[j]]=pos[j];
				    pos[j]=j;
				    arr[j] = j;
				    arr[k] = prev;
				    
				    visited[j]=true;
				    count++;
				    if(prev==k)
				        visited[k]=true;
				}	
			}
			cout << count << endl;
		}
		else{
		    for(int j=1;j<N;j++)
			{	
			    
				if(!visited[j])
				{   
					flag=0;
				    int k = pos[j];
				    int prev = arr[j];
				    pos[arr[j]]=pos[j];
				    pos[j]=j;
				    arr[j] = j;
				    arr[k] = prev;
				    
				    visited[j]=true;
				    count++;
				    if(prev==k)visited[k]=true;
				    for(int l=0;l<M;l++)
				    {
				        if((v[l][0]==j and v[l][1]==k) or (v[l][0]==k and v[l][0]==j)){
				        	if(flag==0)count--;
				        	flag=1;
				    }
				}
			}
			cout << count << endl;
		    
		    
		    
		    
		}
		
	}


}