
void setup()
{
  pinMode(4, OUTPUT); //B
  pinMode(5, OUTPUT); // A
  pinMode(7, OUTPUT); // C
  pinMode(9, OUTPUT); // D
  pinMode(10, OUTPUT); // E
  pinMode(12, OUTPUT); // F
  pinMode(13, OUTPUT); // G
}

void loop()
{
 //NOVE  
  digitalWrite(4, HIGH); //ligado
  digitalWrite(5, HIGH); //ligado
  digitalWrite(7, HIGH); //ligado
  digitalWrite(9, HIGH); //ligado
  digitalWrite(10, LOW); //desligado
  digitalWrite(12, HIGH);//ligado
  digitalWrite(13, HIGH);//ligado
  delay(2000); //espera 2 segundos para o proximo numero
  
  //OITO
    digitalWrite(4, HIGH); //ligado
  digitalWrite(5, HIGH); //ligado
  digitalWrite(7, HIGH); //ligado
  digitalWrite(9, HIGH);//ligado
  digitalWrite(10, HIGH);//ligado
  digitalWrite(12, HIGH);//ligado
  digitalWrite(13, HIGH);//ligado
  delay(2000);//espera 2 segundos para o proximo numero
  
  //SETE
   digitalWrite(4, HIGH);//ligado
  digitalWrite(5, HIGH);//ligado
  digitalWrite(7, HIGH); //ligado
  digitalWrite(9, LOW);//desligado
  digitalWrite(10, LOW);//desligado
  digitalWrite(12, HIGH);//ligado
  digitalWrite(13, LOW);//desligado
  delay(2000);//espera 2 segundos para o proximo numero
  
  //SEIS
  digitalWrite(4, LOW);//desligado
  digitalWrite(5, HIGH);//ligado
  digitalWrite(7, HIGH);//ligado
  digitalWrite(9, HIGH);//ligado
  digitalWrite(10, HIGH);//ligado
  digitalWrite(12, HIGH);//ligado
  digitalWrite(13, HIGH);//ligado
  delay(2000);//espera 2 segundos pR o proximo numero
  
  //CINCO
  digitalWrite(4, LOW); //desligado
  digitalWrite(5, HIGH); //ligado
  digitalWrite(7, HIGH); //ligado 
  digitalWrite(9,HIGH); //ligado
  digitalWrite(10, LOW);//desligado
  digitalWrite(12,HIGH); //ligado
  digitalWrite(13, HIGH);//ligado
  delay(2000);//espera 2 segundos para o proximo numero
  
  //QUATRO
  
  digitalWrite(4, HIGH);//ligado
  digitalWrite(5, LOW); //desligado
  digitalWrite(7, HIGH); //ligado
  digitalWrite(9, LOW);//desligado
  digitalWrite(10, LOW);//desligado
  digitalWrite(12, HIGH); //ligado
  digitalWrite(13, HIGH);//ligado
  delay(2000);//espera 2 segundos para o proximo numero
  
  //TRES
  digitalWrite(4, HIGH);//ligado
  digitalWrite(5, HIGH);//ligado
  digitalWrite(7, HIGH);//ligado
  digitalWrite(8, HIGH); //ligado
  digitalWrite(9, HIGH);//ligado
  digitalWrite(10, LOW);//desligado
  digitalWrite(12, LOW);//desligado
  digitalWrite(13, HIGH);//ligado
  delay(2000);//espera 2 segundos para o proximo numero
  
  
  //DOIS
    digitalWrite(4, HIGH); //ligado
  digitalWrite(5, HIGH); //ligado
  digitalWrite(7, LOW);  //desligado
  digitalWrite(9,HIGH); //ligado
  digitalWrite(10, HIGH);//ligado
  digitalWrite(12,LOW); //desligado
  digitalWrite(13, HIGH);//ligado
  delay(2000);//espera 2 segundos para o proximo numero
  
  //UM
  digitalWrite(4, HIGH);//ligado
  digitalWrite(5, HIGH);//ligado
  digitalWrite(7, HIGH);//ligado
  digitalWrite(9, LOW);//desligado
  digitalWrite(10, LOW); //desligado
  digitalWrite(12, LOW); //desligado
  digitalWrite(13, LOW); //desligado
  delay(2000);//espera 2 segundos para o proximo numero
  
  
  //ZERO
  digitalWrite(4, HIGH);//ligado
  digitalWrite(5, HIGH);//ligado
  digitalWrite(7, HIGH); //ligado
  digitalWrite(9, HIGH);//ligado
  digitalWrite(10, HIGH);//ligado
  digitalWrite(12, HIGH);//ligado
  digitalWrite(13, LOW);//desligado
  delay(2000);//espera 2 segundos voltar ao começo do programa
  
}
