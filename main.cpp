#include <bits/stdc++.h>
using namespace std;

pair<int, int> jumping_mario();

int main() {
	int T;
	cin>>T;
	for(int x = 0; x<T; x++){
		pair<int, int> low_high = jumping_mario();
		cout<<"Case "<<x+1<<": "<<low_high.first<<" "<<low_high.second<<endl;
	}
	return 0;
}

pair<int, int> jumping_mario(){
	int n, old_height, new_height;
	pair<int, int> jumps = make_pair(0,0);
	cin>>n>>old_height;
	for(int i = 1; i<n; i++){
		cin>>new_height;
		if(old_height > new_height) jumps.first++;
		else if(new_height > old_height) jumps.second++;
		old_height = new_height;
	}
	return jumps;
}
