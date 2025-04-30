
#include <stdio.h>

int main() {
    // Nomes dos produtos
    char produtoA[30];
    char produtoB[30];

    // Variáveis para comparação
    int resultadoA, resultadoB;

    // Estoques e valores dos produtos
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.20;
    float valorB = 20.40;

    // Estoque mínimo para cada produto
    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    // Cálculo do valor total (estoque x valor unitário)
    double valortotalA;
    double valortotalB;

    // Exibe informações dos produtos
    printf("Produto %s tem Estoque %u e o valor unitario é R$ %2.f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem Estoque %u e o valor unitario é R$ %2.f\n", produtoB, estoqueB, valorB);

    // Verifica se o estoque está acima do mínimo
    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;

    // Exibe resultado da verificação
    printf("O produto %s tem o estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem o estoque minimo %d\n", produtoB, resultadoB);

    // Compara os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n",
           estoqueA * valorA,
           estoqueB * valorB,
           (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}
