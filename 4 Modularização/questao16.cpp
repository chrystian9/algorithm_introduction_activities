#include <iostream>
using namespace std;

int teste(int& antecessor, int num, int& sucessor){
	antecessor = num - 1;
	sucessor = num + 1;
	return 1;
}

int main (){
	int num, numAntecessor, numSucessor;
	
	cin >> num;
	
	teste(numAntecessor, num, numSucessor);
	
	cout << numAntecessor << " " << num << " " << numSucessor << endl;
	
	return 0;
}
