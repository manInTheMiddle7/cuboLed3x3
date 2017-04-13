  int velocidadCambio=50;
  int retardo=0;
  void prenderLed(int,int,int);
  void apagar();
  void layer1();
  void layer2();
  void layer3();
  void aristasCubo();
  
void setup() {
  // put your setup code here, to run once:
  pinMode(2 , OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4 , OUTPUT);
  pinMode(5 , OUTPUT);
  pinMode(6 , OUTPUT);
  pinMode(7 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(9 , OUTPUT);
  pinMode(10 , OUTPUT);
  pinMode(11 , OUTPUT);
  pinMode(12 , OUTPUT);
  pinMode(13 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 /* 
  prenderLed(1,1,1);  
  prenderLed(1,2,1);
  prenderLed(1,3,1);
  prenderLed(2,1,1);
  prenderLed(2,2,1);
  prenderLed(2,3,1);
  prenderLed(3,1,1);
  prenderLed(3,2,1);
  prenderLed(3,3,1);
  
  prenderLed(1,1,2);  
  prenderLed(1,2,2);
  prenderLed(1,3,2);
  prenderLed(2,1,2);
  prenderLed(2,2,2);
  prenderLed(2,3,2);
  prenderLed(3,1,2);
  prenderLed(3,2,2);
  prenderLed(3,3,2);
  
  prenderLed(1,1,3);  
  prenderLed(1,2,3);
  prenderLed(1,3,3);
  prenderLed(2,1,3);
  prenderLed(2,2,3);
  prenderLed(2,3,3);
  prenderLed(3,1,3);
  prenderLed(3,2,3);
  prenderLed(3,3,3);

*/
  //secuencia
  prenderLed(1,1,1);  
  delay(velocidadCambio);
  prenderLed(1,2,1);
  delay(velocidadCambio);
  prenderLed(1,3,1);
  delay(velocidadCambio);
  prenderLed(2,1,1);
  delay(velocidadCambio);
  prenderLed(2,2,1);
  delay(velocidadCambio);
  prenderLed(2,3,1);
  delay(velocidadCambio);
  prenderLed(3,1,1);
  delay(velocidadCambio);
  prenderLed(3,2,1);
  delay(velocidadCambio);
  prenderLed(3,3,1);
  delay(velocidadCambio);
  
  prenderLed(1,1,2);  
  delay(velocidadCambio);
  prenderLed(1,2,2);
  delay(velocidadCambio);
  prenderLed(1,3,2);
  delay(velocidadCambio);
  prenderLed(2,1,2);
  delay(velocidadCambio);
  prenderLed(2,2,2);
  delay(velocidadCambio);
  prenderLed(2,3,2);
  delay(velocidadCambio);
  prenderLed(3,1,2);
  delay(velocidadCambio);
  prenderLed(3,2,2);
  delay(velocidadCambio);
  prenderLed(3,3,2);
  delay(velocidadCambio);
  
  prenderLed(1,1,3);  
  delay(velocidadCambio);
  prenderLed(1,2,3);
  delay(velocidadCambio);
  prenderLed(1,3,3);
  delay(velocidadCambio);
  prenderLed(2,1,3);
  delay(velocidadCambio);
  prenderLed(2,2,3);
  delay(velocidadCambio);
  prenderLed(2,3,3);
  delay(velocidadCambio);
  prenderLed(3,1,3);
  delay(velocidadCambio);
  prenderLed(3,2,3);
  delay(velocidadCambio);
  prenderLed(3,3,3);
  delay(velocidadCambio);
  
  
  layer1();
  delay(velocidadCambio+100);
  layer2();
  delay(velocidadCambio+100);
  layer3();
  delay(velocidadCambio+100);
 // aristasCubo();
 // delay(1000);
  //apagar();
  //delay(500);
} 

void prenderLed(int fila,int columna, int layer)
{  
  //fila 1, layer 1
  if(fila==1 && columna==1 && layer==1)
  {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 1);
    delay(retardo);
  }
 else if(fila==1 && columna==2 && layer==1)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 1);
    delay(retardo);
 }
 else if(fila==1 && columna==3 && layer==1)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 1);
    delay(retardo);
 }
 // fila 2, layer 1
 else if(fila==2 && columna==1 && layer==1)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 1);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==2 && columna==2 && layer==1)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 1);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==2 && columna==3 && layer==1)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 1);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 // fila 3, layer 1
 else if(fila==3 && columna==1 && layer==1)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 1);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==3 && columna==2 && layer==1)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 1);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==3 && columna==3 && layer==1)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 1);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 // fila 1, layer 2
 else if(fila==1 && columna==1 && layer==2)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 1);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==1 && columna==2 && layer==2)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 1);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==1 && columna==3 && layer==2)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 1);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 // fila 2, layer2
 else if(fila==2 && columna==1 && layer==2)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 1);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==2 && columna==2 && layer==2)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 1);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==2 && columna==3 && layer==2)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 1);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 //fila 3, layer2
 else if(fila==3 && columna==1 && layer==2)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 1);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==3 && columna==2 && layer==2)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 1);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==3 && columna==3 && layer==2)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 1);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 // fila 1, layer 3
 else if(fila==1 && columna==1 && layer==3)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 1);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==1 && columna==2 && layer==3)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 1);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 else if(fila==1 && columna==3 && layer==3)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 1);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 // fila 2, layer 3
 else if(fila==2 && columna==1 && layer==3)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 1);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
  else if(fila==2 && columna==2 && layer==3)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 3);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 1);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
  else if(fila==2 && columna==3 && layer==3)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 1);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
 // fila 3, layer 3
  else if(fila==3 && columna==1 && layer==3)
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 1);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
  else if(fila==3 && columna==2 && layer==3)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 1);
    digitalWrite(4 , 0);
    digitalWrite(5 , 1);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
  else if(fila==3 && columna==3 && layer==3)
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 1);
    digitalWrite(5 , 1);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
    delay(retardo);
 }
}
 //
 void layer1()
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 1);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 1);
    digitalWrite(12 , 1);
    digitalWrite(13 , 1);
 }

 void apagar()
 {
    digitalWrite(2 , 0);
    digitalWrite(3 , 0);
    digitalWrite(4 , 0);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
 }
void layer2()
 {
    digitalWrite(2 , 1);
    digitalWrite(3 , 1);
    digitalWrite(4 , 1);
    digitalWrite(5 , 0);
    digitalWrite(6 , 0);
    digitalWrite(7 , 0);
    digitalWrite(8 , 1);
    digitalWrite(9 , 1);
    digitalWrite(10 , 1);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
 }
void layer3()
{
    digitalWrite(2 , 1);
    digitalWrite(3 , 1);
    digitalWrite(4 , 1);
    digitalWrite(5 , 1);
    digitalWrite(6 , 1);
    digitalWrite(7 , 1);
    digitalWrite(8 , 0);
    digitalWrite(9 , 0);
    digitalWrite(10 , 0);
    digitalWrite(11 , 0);
    digitalWrite(12 , 0);
    digitalWrite(13 , 0);
}

void aristasCubo()
{
  prenderLed(1,1,1);
  prenderLed(1,2,1);
  prenderLed(1,3,1);
  prenderLed(2,1,1);
  prenderLed(2,3,1);
  prenderLed(3,1,1);
  prenderLed(3,2,1);
  prenderLed(3,3,1);
}

