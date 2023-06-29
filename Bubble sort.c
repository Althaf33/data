#include <stdio.h>
main(){
	int data[100], swap, jmlData, i, j, x;	
	//input data
	printf("\n Input Jumlah Data = "); scanf("%i", &jmlData);
	printf("\n");
	for(i=0; i<jmlData; i++){
		printf(" Input data ke-%i = ", i+1); scanf("%i", &data[i]);
	}
	//cetak data yang diinput
	printf("\n Data belum urut : ");
	for(i=0; i<jmlData; i++){
		printf("%i ", data[i]);
	}
	//Algpritma bubble-sort
	for (i=0; i<jmlData; i++) { //Fase
		printf("\n\n Fase %i", i+1);
		for(j=1; j<jmlData; j++){ //Membandingkan data satu persatu
			if(data[j-1] > data[j]){
				swap = data[j]; //Swap atau menukar pisisi data
				data[j] = data[j-1];
				data[j-1] = swap;
				printf("\n");
				for(x=0; x<jmlData; x++){ //cetak proses buble sort
					printf(" %i ", data[x]);
				}
			}
		}
	}
	//Cetak data terururt
		printf("\n\n Data sudah urut :");
	for(i=0; i<jmlData; i++){
		printf(" %i", data[i]);
	}
}
