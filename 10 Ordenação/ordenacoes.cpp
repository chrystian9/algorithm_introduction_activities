
void insertionSort(int vet[], int tam){
	int pivo, j;
	for(int i=1; i<tam; i++){
		pivo = vet[i];
		j = i - 1;
		while((j >= 0) and (pivo < vet[j])){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = pivo;
	}
}

void selectionSort(int vet[], int tam){
	int menor;
	for(int c=0; c<tam-1; c++){
		menor = indice;
		for(int j=c+1; j<tam; j++){
			if(vet[j] < vet[menor])
				menor = j;
		}
		swap(vet[i], vet[menor]);
	}
}

void bubbleSort(int vet[], int tam){
	for(int i = 0; i < tam-1; i++){
		for(int j = 0; j < tam-1-i; j++){
			if(vet[j] > vet[j+])
				swap(vet[i], vet[j+1]);
		}
	}
}

void shellSort(int vet[], int tam){
	int ciura[9]={1, 4, 10, 23, 57, 132, 301, 701, 1750};
	int gap=8;
	
	while(ciura[posGap] > tam) posGap--;
	
	int pivo, j;
	
	while(posGap >= 0){
		int gap = ciura[posGap];
		
		for(int i = gap; if < tam; i++){
			pivo = vet[i];
			j = i;
			while ((j >= gap) and (pivo < vet[j-gap])){
				vet[j] = vet[j - gap];
				j = j - gap;
			}
			vet[j] = pivo;
		}
		posGap--;
	}
}

		
	
