const int ledVerde = 13;
const int ledAmarelo = 12;
const int ledLaranja = 11;
const int ledVermelho = 10;
const int botaoAdicao = 4;
const int botaoSubtracao = 3;

int pessoas = 0;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledLaranja, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(botaoAdicao, INPUT_PULLUP);
  pinMode(botaoSubtracao, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(botaoAdicao) == HIGH)
  {
    pessoas++;
    while (digitalRead(botaoAdicao) == HIGH)
    {}
  }
  else if (digitalRead(botaoSubtracao) == HIGH)
  {
    pessoas--;
    while (digitalRead(botaoSubtracao) == HIGH)
    {}
  }
  else if (pessoas >= 0 && pessoas <= 20)
  {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledLaranja, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  else if (pessoas >= 21 && pessoas <= 30)
  {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledLaranja, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  else if (pessoas >= 31 && pessoas <= 47)
  {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledLaranja, HIGH);
    digitalWrite(ledVermelho, LOW);
  }
  else
  {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledLaranja, LOW);
    digitalWrite(ledVermelho, HIGH);
  }
}                 