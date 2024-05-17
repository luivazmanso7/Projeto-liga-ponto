# Ligapontos

## Descrição
O projeto "ligapontos" é uma aplicação simples que desenha formas geométricas em uma matriz de LEDs, como um jogo de ligar pontos. Cada forma geométrica é definida por uma lista de pontos na matriz e as LEDs correspondentes são acesas para representar a forma de um lado do prisma triangular, apartir disso o outro jogador do outro lado do prisma terá que montar a forma exibida pelas LEDs apartir das coordenadas do prisma e da comunicação entre os jogadores.

## Funcionamento
O código do projeto "ligapontos" consiste em duas partes principais:

1. **Definição das Formas Geométricas:** As formas geométricas são definidas por listas de pontos na matriz 7x7. Cada ponto é representado por um número correspondente à posição na matriz.
   
2. **Acendimento das LEDs:** Uma vez definidas as formas geométricas, o programa acende as LEDs correspondentes a cada ponto das formas.

## Objetivo
Promover a inclusão entre todos os alunos, e estimular a habilidade de trabalho em equipe e comunicação, com foco principal nos alunos neurodivergentes.

## Como Usar
Para usar o projeto "ligapontos", basta executar o código no ambiente adequado. Certifique-se de que as configurações de pinos e LEDs e botões estão corretas para o seu hardware. Antes de começar a jogar os jogadores decidirão qual o molde de coordenadas será utilizado (cores, letras, números ou figuras). Após isso, o jogador que está na face das LEDs irá apertar o botão de ligar e depois apertará outro botão de gerar uma forma na matriz de LEDs, quando tal forma for gerada o jogador apartir das coordenadas irá se comunicar com o outro com o objetivo de formar a figura indicada.   

## Licença
Este projeto é distribuído sob a licença [MIT](LICENSE).
