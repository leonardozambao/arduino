//Trabalho para matéria de Sistemas Embarcados - Universidade Positivo
//Integrantes do grupo: Leonardo Zambão, Hugo Santos, Matheus Del Amo
void setup() {
  pinMode(8,OUTPUT);    
  pinMode(9,OUTPUT);    
  pinMode(10,OUTPUT);    
}
void loop() {
  //Controle do led verde
  digitalWrite(8,HIGH);  
  delay(4000);           
  digitalWrite(8,LOW);  
   
  //Controle do led amarelo
  digitalWrite(9,HIGH);  
  delay(2000);           
  digitalWrite(9,LOW);   
   
  //Controle do led vermelho
  digitalWrite(10,HIGH); 
  delay(4000);          
  digitalWrite(10,LOW);  
}
