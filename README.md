🎮 MMI - Maior, Menor ou Igual
Bem-vindo ao MMI, um jogo de estratégia e sorte desenvolvido em C. O objetivo é simples: desafiar a máquina em uma disputa numérica onde você decide as regras do confronto!

📝 Sobre o Projeto
Este é um jogo de console onde o jogador tenta prever a relação entre o seu número e um número aleatório gerado pelo computador. É um excelente exercício de lógica de programação envolvendo:

Geração de números pseudo-aleatórios com time.h.

Estruturas de decisão complexas (if/else e switch case).

Interação via terminal (scanf/printf).

🕹️ Como Jogar
Escolha sua estratégia:

M (Maior): Você vence se o seu número for maior que o da máquina.

N (Menor): Você vence se o seu número for menor que o da máquina.

I (Igual): Você vence se acertar exatamente o número da máquina.

Aposte seu número: Escolha um valor entre 1 e 100.

O Confronto: A máquina revelará o número secreto e o vencedor será anunciado!

🚀 Tecnologias Utilizadas
Linguagem: C

Bibliotecas: * stdio.h: Entradas e saídas.

stdlib.h: Geração do número aleatório (rand).

time.h: Semente para o aleatório baseada no tempo real (srand).


💻 Exemplo de Execução

	BEM VINDO AO MMI!!

Você deve escolher um número e um tipo de comparação para começarmos!

M. Maior
N. Menor
I. Igual
> M

Digite seu número (Entre 1 e 100)!
> 75

Parabéns!! Você Venceu!
Seu Número: 75
Número da Máquina: 42


🛠️ Como Compilar e Rodar
Caso queira testar o código localmente, siga os passos abaixo:

Certifique-se de ter um compilador (como o GCC) instalado.

Salve o código em um arquivo chamado mmi.c.

Abra o terminal e digite:

Bash
gcc mmi.c -o mmi
Execute o programa:

Bash
./mmi
