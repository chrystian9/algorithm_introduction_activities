#include <iostream>
using namespace std;

int main(){
    int num, d1, d2, d3;
    
    cin >> num;
    d1 = num/100;
    d2 = (num%100)/10;
    d3 = (num%10)/1;
    cout << d1*d2*d3;
    return 0;
}
