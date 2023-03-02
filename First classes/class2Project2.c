void setup() {
  pinMode(13,OUTPUT); // Aqui estamos selecionado a porta 13 para a saida
  // INPUT = Entrada / OUTPUT = Saida
  // definimos o modo da porta logica
  

}

void loop() {
  digitalWrite(13,HIGH); //HIGH = Porta ligada(fornece 5v) - LOW = porta desligada(fornece 0v)
  // aqui iremos definir o estado da porta
  delay(2000); // faz acontecer uma pausa - a contagem é em milisegundos
  digitalWrite(13,LOW);
  delay(3000);
  
  

}
