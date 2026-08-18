void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // configura porta padrão do LED para saída de dados (led laranja "L" na placa do Arduino)
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // comando para LED ascender
  delay(100); // tempo de espera em milissegundos
  digitalWrite(LED_BUILTIN, LOW); // comando para LED apagar
  delay(100);
}