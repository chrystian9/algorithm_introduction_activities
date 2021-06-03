#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, angular;
    
    cin >> x1;
    cin >> y1;
    cin >> x2; 
    cin >> y2;
    angular = (y2 - y1) / (x2 - x1);
    cout << angular << endl;
    cout << y1 - (angular * x1);
    return 0;
}
