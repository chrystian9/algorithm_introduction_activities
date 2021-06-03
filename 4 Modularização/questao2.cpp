#include <iostream>
using namespace std;

int reverso(int num){
	int numR;
	
	while (num != 0){
		numR = num % 10;
		num = num / 10;
		cout << numR;
	}
	return numR;
}
	


int main (){
	int num;
	
	cin >> num;
	
	reverso(num);
	
	return 0;
}
