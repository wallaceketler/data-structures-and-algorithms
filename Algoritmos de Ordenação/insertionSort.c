#include <stdio.h>
#include <stdlib.h>

void insertionSort(int vet[5]){

    printf("Antes\n");
    for(int i = 0; i<5; i++){
        printf("%d \n",vet[i]);
    }

    //aplicação do algoritmo insertion sort

    //semelhante à organização de cartas
    //começamos pelo segundo item como chave e comparamos ele ao da esquerda
    //depois disso a chave se torna o da direita e assim sucessivamente
    //se compara a chave atual aos valores da esquerda

    int key;
    int i;

    for(int j = 1; j < 5; j++){
        key = vet[j];
        i = j - 1;
        while(i >= 0 && vet[i] > key){
            vet[i + 1] = vet[i];
            i = i-1;
        }
        vet[i + 1] = key;
    }


    printf("Depois\n");
    for(int i = 0; i<5; i++){
        printf("%d \n",vet[i]);
    }

}


int main(){

    int vet[5] = {5,2,3,1,7};

    insertionSort(vet);

    return 0;
}