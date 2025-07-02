#include <stdio.h> // Biblioteca para funções de entrada e saída, como printf e scanf

int main() {
    // --- DADOS DAS CARTAS ---
    // Vamos definir os atributos das duas cartas que usaremos nos desafios.
    // Carta 1: "Dragão de Aço"
    int carta1_ataque = 90;
    int carta1_defesa = 85;
    int carta1_magia = 70;

    // Carta 2: "Elfo Arqueiro"
    int carta2_ataque = 80;
    int carta2_defesa = 75;
    int carta2_magia = 95;

    // Variável para guardar a escolha do jogador no menu
    int escolha;

    // Imprime uma mensagem de boas-vindas
    printf("--- Bem-vindo ao Jogo Super Trunfo da TechNova! ---\n\n");

    /**************************************************************************
     * DESAFIO 1: Comparação simples com if-else
     * Compara um único atributo (ataque) e mostra o resultado.
     **************************************************************************/
    printf("--- DESAFIO 1: Comparacao Simples ---\n");
    printf("Comparando o atributo fixo: ATAQUE\n");

    if (carta1_ataque > carta2_ataque) {
        printf("Resultado: Carta 1 (Dragao de Aco) venceu no ataque!\n");
    } else if (carta2_ataque > carta1_ataque) {
        printf("Resultado: Carta 2 (Elfo Arqueiro) venceu no ataque!\n");
    } else {
        printf("Resultado: Houve um empate no ataque!\n");
    }

    printf("\n--------------------------------------------\n\n");


    /**************************************************************************
     * DESAFIO 2: Menu interativo com switch e múltiplos atributos
     * O jogador escolhe qual atributo quer comparar.
     **************************************************************************/
    printf("--- DESAFIO 2: Menu Interativo ---\n");
    printf("Escolha um atributo para a proxima batalha:\n");
    printf("1 - Defesa\n");
    printf("2 - Magia\n");
    printf("Digite sua escolha (1 ou 2): ");
    
    // scanf lê o número digitado pelo usuário e guarda na variável 'escolha'
    scanf("%d", &escolha);

    // O switch verifica o valor que está em 'escolha'
    switch (escolha) {
        case 1: // Se o usuário digitou 1
            printf("\nVoce escolheu DEFESA!\n");
            if (carta1_defesa > carta2_defesa) {
                printf("Resultado: Carta 1 (Dragao de Aco) venceu na defesa!\n");
            } else if (carta2_defesa > carta1_defesa) {
                printf("Resultado: Carta 2 (Elfo Arqueiro) venceu na defesa!\n");
            } else {
                printf("Resultado: Empate na defesa!\n");
            }
            break; // Termina a execução do switch

        case 2: // Se o usuário digitou 2
            printf("\nVoce escolheu MAGIA!\n");
            if (carta1_magia > carta2_magia) {
                printf("Resultado: Carta 1 (Dragao de Aco) venceu na magia!\n");
            } else if (carta2_magia > carta1_magia) {
                printf("Resultado: Carta 2 (Elfo Arqueiro) venceu na magia!\n");
            } else {
                printf("Resultado: Empate na magia!\n");
            }
            break; // Termina a execução do switch

        default: // Se o usuário digitou qualquer outra coisa
            printf("\nOpcao invalida! Nenhuma batalha ocorreu.\n");
            break;
    }

    printf("\n--------------------------------------------\n\n");


    /**************************************************************************
     * DESAFIO 3: Lógica complexa com operador ternário e dois atributos
     **************************************************************************/
    printf("--- DESAFIO 3: Logica Complexa ---\n");
    
    // 1. Usando o operador ternário para uma análise rápida
    printf("Analise rapida com operador ternario:\n");
    // A linha abaixo verifica quem tem mais magia e imprime o nome correspondente.
    // (condição) ? (valor se verdadeiro) : (valor se falso)
    printf("A carta com maior poder de Magia e: %s\n", (carta1_magia > carta2_magia) ? "Dragao de Aco" : "Elfo Arqueiro");

    // 2. Lógica com dois atributos: a vitória só ocorre se a carta
    // for melhor no ATAQUE E na DEFESA. Usamos o operador '&&' (E).
    printf("\nBatalha final: Vence quem for melhor no Ataque E na Defesa!\n");

    if (carta1_ataque > carta2_ataque && carta1_defesa > carta2_defesa) {
        printf("VITORIA COMPLETA! O Dragao de Aco e superior nos dois atributos!\n");
    } else if (carta2_ataque > carta1_ataque && carta2_defesa > carta2_defesa) {
        printf("VITORIA COMPLETA! O Elfo Arqueiro e superior nos dois atributos!\n");
    } else {
        printf("Batalha equilibrada! Nenhuma carta venceu nos dois atributos.\n");
    }

    printf("\n--- Fim do Jogo ---\n");

    return 0; // Indica que o programa terminou com sucesso
}