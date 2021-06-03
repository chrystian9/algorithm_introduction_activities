#include <iostream>
using namespace std;

int main (){
	int numD, num, aux=0;
	
	cin >> numD;
	
	while (aux != 2){
		cin >> num;
		aux = num % numD;
	}
	cout << num / numD << endl;
	return 0;
}
