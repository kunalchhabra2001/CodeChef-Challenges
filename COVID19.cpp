#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N;
		cin >> N;
		int arr[N],diff[N]={0},count=1,max_count=1,min_count=1,flag=0;
		cin >> arr[0];
		for(int i=1;i<N;i++){
			cin >> arr[i];
			diff[i]=arr[i]-arr[i-1];
			if(diff[i]<=2)count++;
			else{
			    
				max_count=max(max_count,count);
				if(flag==0)min_count=count;
			    else min_count=min(min_count,count);
				flag++;
				count=1;
			}

		}
		max_count=max(max_count,count);
		if(flag==0)min_count=count;
		else min_count=min(min_count,count);
		count=1;
		cout << min_count << " " << max_count << endl;

	}



}