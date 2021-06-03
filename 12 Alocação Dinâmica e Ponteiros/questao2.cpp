#include <iostream>
using namespace std;

struct Hidrocarboneto{
	int C, H;
};

int main (){
	Hidrocarboneto* massaMolecular = new Hidrocarboneto;
	
	cin >> massaMolecular->C >> massaMolecular->H;
	
	cout << ((massaMolecular->C) * 12) + massaMolecular->H << endl;
	
	return 0;
}
	
