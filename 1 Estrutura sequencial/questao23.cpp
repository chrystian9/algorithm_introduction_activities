#include <iostream>
using namespace std;

int main (){
    int armas, superPoderes;
    
    cin >> armas;
    cin >> superPoderes;
    cout << (((2*superPoderes)-armas)/3) << endl << (((0-superPoderes)+(2*armas))/3);
    return 0;
}
