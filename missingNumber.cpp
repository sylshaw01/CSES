#include <bits/stdc++.h>

using namespace std;

int main(){
	// Syl doing something clever??? actually impossible
	long tot;
	cin >> tot;
	long target = (tot * (tot+1))/2;
	long sum = 0;
	tot--;
	long val;
	while(tot--){
		long val;
		cin >> val;
		sum+=val;
	}

	cout << target-sum << "\n";
	return 0;
}
