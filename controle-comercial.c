#include <stdio.h> // Biblioteca padrão para entrada e saída (printf e scanf)

int main() {
    // 1. Declaração do vetor e das variáveis de controle
    // 'vendas[5]' reserva espaço na memória para armazenar 5 números inteiros.
    int vendas[5]; 
    
    // 'soma' é inicializada com 0 para acumular o total de vendas corretamente.
    int soma = 0;
    
    // 2. Leitura dos valores fornecidos pelo usuário
    printf("--- Controle de Vendas Diarias ---\n");
    
    // O laço 'for' vai rodar 5 vezes (de i = 0 até i = 4), 
    // representando os 5 dias da semana ou do período analisado.
    for (int i = 0; i < 5; i++) {
        // Exibe a mensagem pedindo a venda do dia correspondente.
        // Usamos '(i + 1)' apenas para exibir "Dia 1", "Dia 2"... em vez de "Dia 0".
        printf("Digite a quantidade de vendas do dia %d: ", i + 1);
        
        // Lê o valor digitado pelo usuário e armazena na posição 'i' do vetor.
        // O operador '&' indica o endereço de memória daquela posição específica do vetor.
        scanf("%d", &vendas[i]);
        
        // Acumula o valor inserido na variável 'soma'. 
        // É o mesmo que escrever: soma = soma + vendas[i];
        soma += vendas[i];
    }
    
    // 3. Exibição dos elementos armazenados no vetor
    printf("\n--- Relatorio de Vendas ---\n");
    
    // Outro laço 'for' para percorrer o vetor e mostrar o que foi guardado em cada dia.
    for (int i = 0; i < 5; i++) {
        printf("Vendas do dia %d: %d\n", i + 1, vendas[i]);
    }
    
    // 4. Exibição da quantidade geral de vendas no período
    printf("--------------------------------\n");
    printf("Quantidade geral de vendas no periodo: %d\n", soma);
    
    return 0; // Indica que o programa terminou com sucesso
}