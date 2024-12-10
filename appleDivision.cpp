#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> p(n);
	long long total  = 0;
	for(int i{0};i<n;i++){
		cin >> p[i];
		total+=p[i];
	}
	// Didn't realise but I think the solution space can be searched with a bitmask?
	

	long long mini = 20e9;
	for(int l{0};l<(1<<n);l++){
		long long a = 0;
		for(int i{0};i<n;i++){
			if((l>>i)&1){
				a+=p[i];
			}
		}
		mini = min(mini, abs((total-a)-a));
	}
	cout << mini << "\n";

	//YES IT WORKED

	return 0;
}
