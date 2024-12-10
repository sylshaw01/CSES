#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	
	cout << 0 << "\n";
		
	if(n>1){
		cout << 6 << "\n";
	}
	if(n>2){
		cout << 28 << "\n";
	}
	if(n>3){
		cout << 96 << "\n";
	} 
	for(long long i{5};i<=n;i++){
		long long ans;
		//ans = (pow(i-4,2)*(pow(i,2)-9)) + 
		//	(pow(i,2)-7)*(pow(i-2,2)-pow(i-4,2)-4)+
		//	(pow(i,2)-pow(i-2,2)-4)*(pow(i,2)-5) +
		//	4*(pow(i,2)-3)+
		//	4*(pow(i,2)-5);
		//ans = pow(i-4,2)*((i*i)-9)+4*((i-4)*((2*i*i)-12)+(i-2)*((i*i)-4)+(2*i*i)-8);
		ans = i*i*((i*i)-1)/2 - (4*(i-1)*(i-2));
		cout << ans << "\n";
	}

	return 0;
}
