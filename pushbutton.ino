void setup()
{
  pinMode(13, INPUT);
  pinMode(3, OUTPUT);
  pinMode(12, INPUT);
  pinMode(4, OUTPUT);
  pinMode(11, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if (digitalRead(13) == HIGH)
  {
      digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite (3, LOW);
  }
  if  (digitalRead(12) == HIGH)
  {
     digitalWrite (4, HIGH);
  }
  else
  {
     digitalWrite (4, LOW);
  }
  if (digitalRead(11) == HIGH)
  {
    digitalWrite (3, HIGH);
    digitalWrite (4, HIGH);
    digitalWrite (5, HIGH);
  }
  else
  {
    digitalWrite (3, LOW);
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
  }
}