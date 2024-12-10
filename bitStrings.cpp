#include <bits/stdc++.h>

using namespace std;

int main(){


	int n;
	cin >> n;
	long long res=1;
	while(n--){
		res<<=1;
		res%=1000000000+7;
	}
	cout << res << endl;
	return 0;
}
