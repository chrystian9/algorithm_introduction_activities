#include <iostream>
using namespace std;

string teste (int numIm,int  numIcm,int numImm,int numAm,int numAcm,int numAmm){
	string resp;
	
	
	if (numAm < numIm){
		resp = "sim";
	}else if (numAm == numIm and numAcm < numIcm){
		resp = "sim";
	}else if (numAm == numIm and numAcm == numIcm and numAmm <= numImm){
		resp = "sim";
	}else{
		resp = "nao";
	}
	return resp;
}

int main (){
	int numIm, numIcm, numImm, numAm, numAcm, numAmm;
	
	cin >> numIm >> numIcm >> numImm;
	cin >> numAm >> numAcm >> numAmm;
	
	cout << teste(numIm, numIcm, numImm, numAm, numAcm, numAmm) << endl;
	
	return 0;
}
