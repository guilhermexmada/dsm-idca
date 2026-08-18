void setup() {
  pinMode(2, OUTPUT); // configura porta padrão do LED para saída de dados (led na porta digital 2)
}

void loop() {
  digitalWrite(2, HIGH); // comando para LED ascender
  delay(80); // tempo de espera em milissegundos
  digitalWrite(2, LOW); // comando para LED apagar
  delay(100);
}
