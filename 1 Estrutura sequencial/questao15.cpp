#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float raio;
    
    cin >> raio;
    cout << raio * 2 << endl << (4*3.14)*(pow(raio, 2)) << endl << ((4*3.14)*(pow(raio, 3)))/3;
    return 0;
}
