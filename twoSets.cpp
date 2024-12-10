#include <bits/stdc++.h>

using namespace std;

int main(){


	int n;
	cin >> n;
	if(n%4 == 1 || n%4==2){
		cout << "NO" << "\n";
	}else{
		cout << "YES" << "\n";
		if(n%4==0){
			cout << n/2 << "\n";
			cout << 1;
			for(int i{2};i<=n/4;i++){
				cout << " " << i;
			}
			for(int i{(3*(n/4))+1};i<=n;i++){
				cout << " " << i;
			}
			cout << "\n" << n/2 << "\n";
			cout << (n/4)+1;
			for(int i{(n/4)+2};i<=(3*(n/4));i++){
				cout << " " << i;
			}
			cout << "\n";
		}else{
			cout << (n/2) << "\n";
			cout << 3;
			for(int i{6};i<n;i+=4){
				cout << " " << i-1 << " " << i;
			}
			cout << "\n" << (n/2)+1 << "\n";
			cout << 1 << " " << 2;
			for(int i{7};i<=n;i+=4){
				cout << " " << i-3 << " " << i;
			}
			cout << "\n";
		}
	}


	return 0;
}
