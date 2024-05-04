#include <stdio.h>


void ordenar(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N, K, i;
    int pontuacoes[1000];

    printf("Informe o numero de competidores: ");
    scanf("%d", &N);

    printf("Informe o numero minimo de competidores a serem classificados: ");
    scanf("%d", &K);

    printf("Informe as pontuacoes dos competidores:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &pontuacoes[i]);
    }

    
    ordenar(pontuacoes, N);

    
    int classificados = 0;
    for (i = 0; i < N; i++) {
        if (pontuacoes[i] >= pontuacoes[K-1] && pontuacoes[i] > 0) {
            classificados++;
        }
    }

    printf("\n%d\n", classificados);

    return 0;
}
