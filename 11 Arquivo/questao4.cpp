#include <iostream>
#include <fstream>
using namespace std;

ofstream arq("phi.txt");

float phi(int n){
	float num=0;
	if(n == 1){
		arq << 1 << endl;
		return 1;
	}else{
		num = 1+(1/(phi(n-1)));
		arq << num << endl;
		return num;
	}
}

int main (){
	int n;
	
	cin >> n;
	
	cout << phi(n);
	
	return 0;
}
