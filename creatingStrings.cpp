#include <bits/stdc++.h>

using namespace std;

int main(){

	string in;
	cin >> in;
	set<string> output;
	int n = sizeof(in)/sizeof(in[0]);
	sort(in.begin(),in.end());
	do{
		output.insert(in);
	} while(next_permutation(in.begin(),in.end()));
	cout << output.size() << "\n";
	for(auto i: output){
		cout << i << "\n";
	}
	return 0;
}
