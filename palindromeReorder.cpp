#include <bits/stdc++.h>

using namespace std;

int main(){

	string input;
	cin >> input;
	map<char, int> c;
	for(int i{0};i<input.size();i++){
		if(c.count(input[i])){
			c[input[i]]++;
		}else{
			c[input[i]]=1;
		}
	}
	string output;
	int oddcount=0;
	string odd;
	for(const auto &i: c){
		if((i.second)%2==1){
			oddcount++;
			odd.push_back(i.first);
		}
		for(int j{0};j<(i.second)/2;j++){
			output.push_back(i.first);
		}
		
	}
	if(oddcount>1){
		cout << "NO SOLUTION\n";
	}else if (oddcount==1){
		string o = output;
		reverse(output.begin(),output.end());
		cout << (o + odd + output) << "\n";
	}else{
		string o = output;
		reverse(output.begin(),output.end());
		cout << o + output << "\n";
	}

	return 0;
}
