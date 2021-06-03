#include <iostream>
using namespace std;

int sucessor(int x);
int antecessor(int y);
		
int soma(int x, int y){
	return x+y;
}
			
int sucessor(int x){
	return x++;
}
		
int antecessor(int y){
	return y--;
}

int main () {
	int x, y;
	cin >> x >> y;
	cout << soma(x, y);
    
    return 0;
}
