#include <stdio.h>

int main() {
    int numero_conta, num_inverso, soma, verificador;


    do {
        printf("Informe o numero da conta (entre 1000 e 9999): ");
        scanf("%d", &numero_conta);
    } while (numero_conta < 100 || numero_conta > 999);

    
    num_inverso = numero_conta / 100 + ((numero_conta % 100) / 10) * 10 + ((numero_conta % 100) % 10) * 100;

    
    soma = numero_conta + num_inverso;
    verificador = soma % 10;

    printf("\nO digito verificador e: %d\n", verificador);

    
    if (verificador == 0) {
        printf("O numero da conta esta correto.\n");
    } else {
        printf("O numero da conta esta incorreto.\n");
    }

    return 0;
}
