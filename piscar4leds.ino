void setup() {
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  //digitalWrite(2, HIGH); // comando para LED ascender
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);

  digitalWrite(5, HIGH);
  delay(500); // tempo de espera em milissegundos
  digitalWrite(5,LOW);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3,LOW);

  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4,LOW);
  delay(500);
  
  for (int i = 0; i < 3; i++) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(500);

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(500);
  }

  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(500); // tempo de espera em milissegundos
  digitalWrite(3,LOW);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5,LOW);

  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2,LOW);
  delay(500);
}
