#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N,answer=0;
		cin >> N;
		int A[N],max=-1;
		for(int i=0;i<N;i++) cin>> A[i];
		int count[1001]={0};
		count[A[0]]++;
		int j=0;
		for(int i=1;i<N;i++){
			int count_1=A[i-1];
			if(A[i]==count_1){
			    j++;
			   if(j%2==0)count[A[i]]++;
			}
			else{
			    j=0;
			    count[A[i]]++;
			}


		}
		for(int i=1;i<=1000;i++){
			if(count[i]>max){
				max=count[i];
				answer=i;
			}
		}
		cout << answer << endl;

	}





}