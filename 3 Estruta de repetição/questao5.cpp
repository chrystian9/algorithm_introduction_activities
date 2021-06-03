#include <iostream>
using namespace std;

int main (){
	int n1, n2, cont=0, num=0;
	
	cin >> n1 >> n2;
	while (cont < n2){
		num = num + n1;
		cout << num << endl;;
		cont++;
	}
	return 0;
}
