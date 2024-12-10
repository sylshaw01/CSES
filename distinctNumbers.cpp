#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<int> distinctX;
	int n;
	cin >> n;
	int x;
	while(n--){
		cin >> x;
		distinctX.insert(x);
	}
	cout << distinctX.size() << "\n";


	return 0;
}
