#include <iostream>
using namespace std;

bool aoxVerifica (bool n1, bool n2){
	if (n1 == n2){
		return false;
	} else { // (n1 != n2)
		return true;
	}
}

int main (){
	bool n1, n2;
	
	cin >> n1 >> n2;
	
	if (aoxVerifica (n1, n2)){
		cout << "True";
	}else {
		cout << "False";
	}
	return 0;
}
