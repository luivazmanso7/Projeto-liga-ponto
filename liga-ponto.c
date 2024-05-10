#define LED_PIN 2  // Pino de controle dos LEDs
#define NUM_LEDS 49 // Número total de LEDs

// Define as formas geométricas
int formas[][7] = {
 // Quadrado
  {0,0,1,0,1,0,0,
   0,1,0,0,0,1,0,
   1,0,0,0,0,0,1,
   1,0,0,0,0,0,1,
   1,0,0,0,0,0,1,
   0,1,0,0,0,1,0,
   0,0,1,0,1,0,0},
  // Triângulo
  {0,0,0,0,1,0,0,
   0,0,0,1,0,0,0,
   0,0,1,0,0,0,0,
   1,1,1,1,1,1,1,
   0,0,0,0,0,0,0,
   0,0,0,0,0,0,0,
   0,0,0,0,0,0,0},
  // Losango
  {0,0,0,1,0,0,0,
   0,0,1,0,1,0,0,
   0,1,0,0,0,1,0,
   1,0,0,0,0,0,1,
   0,1,0,0,0,1,0,
   0,0,1,0,1,0,0,
   0,0,0,1,0,0,0},
  // Cruz
  {0,0,0,1,0,0,0,
   0,0,0,1,0,0,0,
   0,0,1,1,1,0,0,
   1,1,1,1,1,1,1,
   0,0,1,1,1,0,0,
   0,0,0,1,0,0,0,
   0,0,0,1,0,0,0},
  // Círculo
  {0,0,0,1,0,0,0,
   0,1,0,0,0,1,0,
   1,0,0,0,0,0,1,
   1,0,0,0,0,0,1,
   1,0,0,0,0,0,1,
   0,1,0,0,0,1,0,
   0,0,0,1,0,0,0},
  // Estrela
  {0,0,0,0,1,0,0,
   0,0,0,0,1,0,0,
   0,0,0,1,1,1,0,
   1,1,1,1,1,1,1,
   0,0,1,1,1,0,0,
   0,0,0,0,1,0,0,
   0,0,0,0,1,0,0},
  // Cruz invertida
  {0,0,0,1,0,0,0,
   0,0,0,1,0,0,0,
   0,0,1,1,1,0,0,
   0,1,1,1,1,1,0,
   1,1,1,1,1,1,1,
   0,1,1,1,1,1,0,
   0,0,1,1,1,0,0},
  // Diamante
  {0,0,0,1,0,0,0,
   0,0,1,1,1,0,0,
   0,1,1,1,1,1,0,
   1,1,1,1,1,1,1,
   0,1,1,1,1,1,0,
   0,0,1,1,1,0,0,
   0,0,0,1,0,0,0}
};

void setup() {
  // Inicializa os pinos dos LEDs como saída
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  // Inicializa o gerador de números aleatórios
  randomSeed(analogRead(0));
}

void loop() {
  // Escolhe aleatoriamente a posição na matriz
  int posX = random(0, 7);
  int posY = random(0, 7);
  // Escolhe aleatoriamente a forma geométrica
  int formaIndex = random(0, sizeof(formas) / sizeof(formas[0]));

  // Exibe a forma geométrica na posição escolhida
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      int ledIndex = i * 7 + j;
      int isOn = formas[formaIndex][ledIndex];
      digitalWrite(LED_PIN, isOn);
      delay(50);  // Ajuste o atraso conforme necessário
      printf(isOn);
    }
  }
  delay(1000);  // Mantém a forma geométrica exibida por 1 segundo
  
}
