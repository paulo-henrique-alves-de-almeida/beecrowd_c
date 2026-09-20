#include <stdio.h>

int main() {
    float valor;
    int centavos;
    int cem, cinquenta_reais, vinte, dez_reais, cinco_reais, dois;
    int um_real, cinquenta_centavos, vinte_cinco, dez_centavos, cinco_centavos;

    scanf("%f", &valor);

    centavos = valor * 100;

    cem = centavos / 10000;
    centavos -= cem * 10000;

    cinquenta_reais = centavos / 5000;
    centavos -= cinquenta_reais * 5000;

    vinte = centavos / 2000;
    centavos -= vinte * 2000;

    dez_reais = centavos / 1000;
    centavos -= dez_reais * 1000;

    cinco_reais = centavos / 500;
    centavos -= cinco_reais * 500;

    dois = centavos / 200;
    centavos -= dois * 200;

    um_real = centavos / 100;
    centavos -= um_real * 100;

    cinquenta_centavos = centavos / 50;
    centavos -= cinquenta_centavos * 50;

    vinte_cinco = centavos / 25;
    centavos -= vinte_cinco * 25;

    dez_centavos = centavos / 10;
    centavos -= dez_centavos * 10;

    cinco_centavos = centavos / 5;
    centavos -= cinco_centavos * 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta_reais);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez_reais);
    printf("%d nota(s) de R$ 5.00\n", cinco_reais);
    printf("%d nota(s) de R$ 2.00\n", dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um_real);
    printf("%d moeda(s) de R$ 0.50\n", cinquenta_centavos);
    printf("%d moeda(s) de R$ 0.25\n", vinte_cinco);
    printf("%d moeda(s) de R$ 0.10\n", dez_centavos);
    printf("%d moeda(s) de R$ 0.05\n", cinco_centavos);
    printf("%d moeda(s) de R$ 0.01\n", centavos);

    return 0;
}
