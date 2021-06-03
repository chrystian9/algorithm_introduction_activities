#include <iostream>
using namespace std;

int numS(int contNL, int n1){
	if (n1 == contNL){
		return n1;
	}else if (n1 < contNL){
		n1++;
		return (numS(contNL, n1));
	}
	return 0;
}


int main (){
	int num, contL=1, contNL=1, n1;
	
	cin >> num;
	
	while (contL <= num){
		while (contNL <= contL){
			n1=1;
			cout << numS(contNL, n1) << " ";
			contNL++;
		}
		contNL=1;
		cout << endl;
		contL++;
	}
	
	return 0;
}
