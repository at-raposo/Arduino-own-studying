// FUNÇOES


#define vd 10 //verde //substitui vd por 10
#define a 9 // amarelo //substitui a por 9
#define vm 8 //vermelho //substitui vm por 8(esse é o significado por tras do #define)


// a diferença de usar variavel e o #define, ele só não usa a memoria
// ao inves dele ir na memoria e depois e mostrar o valor no codigo, ele só substitui o texto pelo valor
// so se usa variavel quando você precisar de um calculo, ou seja, quando realmente for necesario o armazenamento de um dado

void setup() {
  pinMode(vd, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(vm, OUTPUT);
}

void loop() {
  digitalWrite(vd, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(vm, LOW);
  delay(9000);

   digitalWrite(vd, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(vm, LOW);
  delay(3000);

   digitalWrite(vd, LOW);
  digitalWrite(a, LOW);
  digitalWrite(vm, HIGH);
  delay(2000);

}
