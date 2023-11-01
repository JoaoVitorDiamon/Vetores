#include <stdio.h>
#include <stdlib.h>


void main(){

int ListaDeVetores[10];
int n;


for(n=0;n<10;n++){
	printf("Escolha Um Numero para vetor %d: \n=>", n);
	scanf("%d", &ListaDeVetores[n]);
}


printf("\t \t ==================NUMEROS ANTES DA MULTIPLICACAO================\n");
for(n=0;n<10;n++){
printf("\nPosicao %d:%d\n",n , ListaDeVetores[n]);

}
printf("\t \t ===================NUMEROS APOS A MULTIPLICACAO=====================\n");
for(n=0;n<10;n++){
	
	ListaDeVetores[n] = (ListaDeVetores[n] * 2);
	printf("\nPosicao %d:%d\n", n , ListaDeVetores[n]);
}

}
