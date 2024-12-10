#include <bits/stdc++.h>

using namespace std;

int main(){

	long long n;
	cin >> n;
	long long ans = 0;
	for(long long i{1};i<15;i++){
		ans+=(n/pow(5,i));
	}
	cout << ans << "\n";
}
