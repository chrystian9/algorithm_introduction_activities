#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char vet1[100];
	char vet2[100];
	int tam1=0, tam2=0;
	
	cin.get(vet1, 100);
	cin.ignore();
	cin.get(vet2, 100);
	
	tam1 = strlen(vet1);
	tam2 = strlen(vet2);
	
	char *result = new char[tam1+tam2];
	
	strcpy (result, vet1);
	strcat (result, " ");
	strcat (result, vet2);

	for(int c=0; c<tam1+tam2+1; c++)
		cout << result[c];
	
	cout << endl;
		
	result = NULL;
	delete result;
		
	return 0;
}
