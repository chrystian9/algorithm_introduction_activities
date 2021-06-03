#include <iostream>
using namespace std;

int main (){
	int m[10][10];
	int num[3];
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cin >> m[i][j];
			if (i == 0 and j == 0){
				num[0] = m[i][j];
				num[1] = i;
				num[2] = j;
			}
			if (m[i][j] > num[0]){
				num[0] = m[i][j];
				num[1] = i;
				num[2] = j;
			}
		}
	}
	
	for(int c=0; c<10; c++){
		if(m[num[1]][c] < num[0]){
			num[0] = m[num[1]][c];
			num[2] = c;
		}
	}
	cout << num[0] << endl << num[1] << " " << num[2] << endl;
	return 0;
}
