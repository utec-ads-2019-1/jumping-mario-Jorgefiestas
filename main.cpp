#include <bits/stdc++.h>
using namespace std;
int n,h,jumps[2];

int main() {
	int T;
	cin>>T;
	for(int x = 0; x<T; x++){
		cin>>n>>h;
		jumps[0] = 0;
		jumps[1] = 0;
		for(int i = 1; i<n; i++){
			int t;
			cin>>t;
			if(t > h) jumps[1]++;
			if(h > t) jumps[0]++;
			h = t;
		}
		cout<<"Case "<<x+1<<": "<<jumps[1]<<" "<<jumps[0]<<endl;
	}
	return 0;
}

