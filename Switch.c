#include<stdio.h>

void bubbleSortCrescente(int array[], int n) {
    int i, j, temp;
    for (i=0; i < n-1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void decrBubbleSort (int array[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1; j++) {
            if (array[j] < array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void selectionSortCrescente (int array[], int n) {
    
} 


int main() {

    int escolha;
    int array[] = {20, 53, 27, 86, 12, 35, 8};
    int n = sizeof(array)/sizeof(array[0]);

    printf("+------------------------------+\n");
    printf("|         # ORDENAÇÃO #        |\n");
    printf("+------------------------------+\n");
    printf("|[1] Buble Sort Crescente      |\n");
    printf("|[2] Buble Sort Decrescente    |\n");
    printf("|[3] Selection Sort Crescente  |\n");
    printf("|[4] Selection Sort Decrescente|\n");
    printf("|[5] Insertion Sort Crescente  |\n");
    printf("|[6] Insertion Sort Decrescente|\n");
    printf("|[7] Merge Sort Crescente      |\n");
    printf("|[8] Merge Sort Decrescente    |\n");
    printf("|[9] Terminar                  |\n");
    printf("+------------------------------+\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: 
        
        printf("Array original\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }

        bubbleSortCrescente(array, n);

        printf("\nArray ordenado em ordem crescente:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }

        break;

        case 2:

        printf("Array original\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }

        decrBubbleSort(array, n);

        printf("\nArray ordenado em ordem decrescente:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }

        break;

    }


return 0;
} 