//
// Created by Geral on 02/12/2023.
//

#ifndef GUI_C_MATH_H
#define GUI_C_MATH_H
#include<stdio.h>
#include<stdlib.h>

int lerValorInteiro(void){
    int temp;
    printf("insira um valor: ");
    scanf("%d",&temp);
    return temp;}


int adicionarValores(int *array, int tamanho) {
    char maisNumeros = 's';
    array[tamanho - 1] = lerValorInteiro();
    printf("Deseja inserir mais valores? (s/n): ");
    getchar(); // Limpar o buffer de entrada
    scanf("%c", &maisNumeros);

    while (maisNumeros == 's') {
        tamanho++;
        int *tempArray =NULL;
        tempArray = (int*)realloc(array, tamanho * sizeof(int));
        if (tempArray == NULL) {
            printf("Erro ao alocar memória!\n");
            free(array);
            return 0;
        }

        array = tempArray;
        array[tamanho - 1] = lerValorInteiro();

        printf("Deseja inserir mais valores? (s/n): ");
        getchar(); // Limpar o buffer de entrada
        scanf("%c", &maisNumeros);
    }
    return tamanho;
}


#endif //GUI_C_MATH_H
