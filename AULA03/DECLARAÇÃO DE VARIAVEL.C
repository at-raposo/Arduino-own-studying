// DECLARAÇÕES DE VARIAVEIS NO ARDUINO

int led =10; // aqui temos a declaração de que usaremos a porta 10 e a variavel que diz isso é a variavael LED


void setup() {
  pinMode(led, OUTPUT); //Aqui estamos usando uma variavel ao inves de colocar a porta em si

  

}

void loop() {
  //estamos falando para ele ficar piscando, só que sem a o numero da porta em si, mas com a variavel
  
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
  
}
