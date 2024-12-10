#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;
	//The diagonal of the number spiral is a quadratic sequence, so I am trying to work out the numbers
	// based off of how far it is away from the diagonal
	while(t--){
		long long x, y;
		cin >> x >> y;
		long long diagVal = max(x,y)*max(x,y)-max(x,y)+1;
		if(x>y){
			cout <<  (y-x) * (2*(x%2)-1) + diagVal << endl;
		} else if(y>x){
			cout << (y-x) * (2*(y%2)-1) + diagVal << endl;
		}else{
			cout << diagVal << endl;
		}
		


	}

	return 0;
}
