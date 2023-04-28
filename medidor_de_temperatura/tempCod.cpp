int temp=0;
int c=0;


void setup(){

  pinMode(13, OUTPUT); //led vermelho
  pinMode(12, OUTPUT); //led azu
  pinMode(4, OUTPUT); //piezzo
  Serial.begin(9600); //velocidade que é atualizado no Monitor Serial
  
}

void loop(){
	temp = analogRead(A0);
    Serial.println("\n ### VERIFICADOR DE TEMPERATURA ### \n"); 
    Serial.print("Valor em escala: ");
    Serial.println(temp);
    c= (temp-106)/2;
    Serial.print("Valor em Celsius: ");
    Serial.println(c);
    Serial.println("\n ### RECALCULANDO ### \n"); //indica que o programa foi finalizado e que
  //na proxima linha vai vir uma nova verificação de temperatura.
   
    	
  if(c>30){ //se o sensor mostrar o temperatura maior que 30ºC
    tone (4, 5000,500); //o piezzo toca
    //e o led vermelho fica em modo de pisca pisca
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);     
    
	}
	else{// se acontecer ao contrario:
	 tone (4, 3000,500);// o piezzo toca outro som
     //e o led azul fica no modo de pisca pisca
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);     
    
    }


}
