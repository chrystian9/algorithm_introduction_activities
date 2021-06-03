#include <iostream>
using namespace std;

int fF(int x);
int fH(int x){
	int f;
	
	if (x == 0){
		return 0;
	}else{
		f = fH(x-1)+fF(x-1);
		return f;
	}
}

int fF(int x){
	int f;

	if (x == 0){
		f = 1;
	}else if (x > 0 and (x % 2 == 0)){
		f = 2 * fH(x) + fF(x-1);
	}else if (x > 0 and (x % 2 != 0)){
		f = 2 * fH(x) - fF(x-1);
	}
	return f;
}
	
	
int main (){
	int x;
	
	cin >> x;
	
	cout << fF(x) << endl;
	
	return 0;
}
