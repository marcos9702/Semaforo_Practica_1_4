#define led_verde 13
#define led_amarillo 12
#define led_rojo 11
#define led_verdePeaton 10
#define led_rojoPeaton 9
#define pushBoton 7
#define pot A5
int valorPot=0;
int crossTime;

void setup(){
  pinMode(led_verde,OUTPUT);
  pinMode(led_amarillo,OUTPUT);
  pinMode(led_rojo,OUTPUT);
  pinMode(led_verdePeaton, OUTPUT);
  pinMode(led_rojoPeaton, OUTPUT);
  pinMode(pushBoton,INPUT_PULLUP);
  Serial.begin(9600);
  Peaton();
  
}
void verde(int tiempo){
  digitalWrite(led_verde,HIGH);
  delay(tiempo);
}

void parpadeo(){
  digitalWrite(led_verde,LOW);
  delay(500);
  for(int i=0;i<5;i++){ 
    digitalWrite(led_verde,HIGH);
    delay(500);
    digitalWrite(led_verde,LOW);
    delay(400);
  }
}

void amarillo(){
  digitalWrite(led_amarillo,HIGH);
  delay(2000);
  digitalWrite(led_amarillo,LOW);
  delay(100);
}

void rojo(int duracion){
  digitalWrite(led_rojo,HIGH);
  Peaton();
  delay(crossTime);
  digitalWrite(led_rojo,LOW);
  Peaton();
  delay(100);
}

void Peaton(){
  if(digitalRead(led_rojo) == LOW){
    digitalWrite(led_verdePeaton,LOW);
    digitalWrite(led_rojoPeaton,HIGH);
  }else{
    digitalWrite(led_verdePeaton,HIGH);
    digitalWrite(led_rojoPeaton,LOW);  
  }   
}

void loop(){  
  digitalWrite(led_verde,HIGH);
  Serial.print("Valor del potenciometro ");
  Serial.println(crossTime);
  valorPot=analogRead(pot);
  if(digitalRead(pushBoton) == LOW){
    crossTime=map(valorPot,0,1023,5,20)*1000;
    verde(crossTime);  
    parpadeo();
    amarillo();
    rojo(crossTime);
  }
}
