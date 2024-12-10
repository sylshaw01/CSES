#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	for(int r{0};r<pow(2,n);r++){
		for(int c{n-1};c>=0;c--){
			cout << (r+(1<<c))/(1<<(c+1)) % 2; 
		}
		cout << "\n";
		
	}

	return 0;
}
