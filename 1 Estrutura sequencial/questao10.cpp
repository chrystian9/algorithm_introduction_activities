#include <iostream>
using namespace std;

int main() {
    float salMin, numHoras, salBruto;

    cin >> salMin;
    cin >> numHoras;
    salBruto = (salMin * 0.05) * numHoras;
    cout << salBruto - (salBruto * 0.23);
    return 0;
}
    
