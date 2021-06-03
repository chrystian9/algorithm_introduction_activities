#include <iostream>
using namespace std;

int MIN (int a, int b, int c){
	if (a<b and a<c) return a;
	if (b<a and b<c) return b;
	else return c;
}

int f (int n){
	if (n==1){return 1;}
	if (n==2){return 2;}
	if (n==3){return 3;}
	else return MIN(f(n-1), f(n-2), f(n-3))+1;
}

int main (){
	int n;
	cin >> n;
	cout << f(n);
}
