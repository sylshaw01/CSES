#include <bits/stdc++.h>

using namespace std;

int moves = 0;
void movedisk(int iStack,int oStack, int stackDepth, int maxDepth,int readOut){
	if(stackDepth == 1){
		if(readOut){
			cout << iStack << " " << oStack << "\n";
		}
		moves++;
	}else{
		movedisk(iStack,6-(iStack+oStack),stackDepth-1,maxDepth ,readOut);
		if(readOut){
			cout << iStack << " " << oStack << "\n";
		}
		moves++;
		movedisk(6-(iStack+oStack),oStack,stackDepth-1,maxDepth,readOut);
	}
}
int main(){

	int disks;
	cin >> disks;
	movedisk(1,3,disks,disks,0);
	cout << moves << "\n";
	movedisk(1,3,disks,disks,1);
	return 0;
}
