#include <stdio.h>

int main() {
    int quantidade, quantidade_total = 0;
    float valor, valor_total = 0, media;

    while (1) {
        printf("Informe a quantidade de um produto: ");
        scanf("%d", &quantidade);
        if (quantidade <= 0) break;

        printf("Informe o valor unitario do produto: ");
        scanf("%f", &valor);

        quantidade_total += quantidade;
        valor_total += quantidade * valor;
    }

    if (quantidade_total > 0) {
        media = valor_total / quantidade_total;
        printf("\nVALOR TOTAL DA COMPRA: R$ %.2f\n", valor_total);
        printf("VALOR MEDIO DA COMPRA: R$ %.2f\n", media);

        
        int reais = (int) valor_total;
        int centavos = (int) ((valor_total - reais) * 100);
        printf("\nO valor total da compra eh %d reais e %d centavos.\n\n", reais, centavos);

        
        printf("%d reais equivale a:\n", reais);
        int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
        int moedas[] = {50, 25, 10, 5, 1};
        int i;

        for (i = 0; i < sizeof(cedulas)/sizeof(cedulas[0]); i++) {
            int qtd_cedula = reais / cedulas[i];
            reais %= cedulas[i];
            if (qtd_cedula > 0) {
                printf("%d nota(s) de %d\n", qtd_cedula, cedulas[i]);
            }
        }

        for (i = 0; i < sizeof(moedas)/sizeof(moedas[0]); i++) {
            int qtd_moeda = centavos / moedas[i];
            centavos %= moedas[i];
            if (qtd_moeda > 0) {
                printf("%d moeda(s) de %d\n", qtd_moeda, moedas[i]);
            }
        }
    }

    return 0;
}
