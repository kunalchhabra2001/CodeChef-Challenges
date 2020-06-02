#include<bits/stdc++.h>
using namespace std;

#define int long long


// Driver program to test above function 
signed main() 
{ 
    int n,ans=0;
    cin >> n;

  	int i = log2(n);
  	ans += n*(n-1)/2;
  	ans += 2*i;
  	int num = pow(2,i);
  	int sub = 2*(num-1);
  	if(num==n)cout<<"-1" << endl;
  	else{
  	if(n%2!=0)cout << (ans-sub) << endl;
  	else{
  		ans -= (n-1);
  		ans += num;
  		cout << (ans-sub) << endl;
  	}
	}
} 