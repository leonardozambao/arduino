//boolean i = false;
//
//void setup() {
//  pinMode(7, output);
//  pinMode(6, input);
//  digitalWrite(7, true);
//}
//
//void loop() {
////  i = 1;
////  return;
////  if (i == 0){
////    i++;
////  }
//digitalWrite(6, false);
//digitalWrite(7, false);
//i = digitalRead(6);
//}

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT); //entrada
  pinMode(5, OUTPUT); //saida
}

void loop() {
  if(digitalRead(4) == true){ //leitura
      digitalWrite(5, true); //escrita
      Serial.println("EH ISSO");
  } else {
      digitalWrite(5, false);
      Serial.println("NAO EH ISSO");
  }
}


void setup() {
  Serial.begin(9600);
  pinMode(5, INPUT); //entrada
  pinMode(6, OUTPUT); //saida
}

void loop() {
  for(int j = 0; j<255; j++){
   analogWrite(6, j); 
   delay(2);
  }
  for(int l = 255; l>0; l--){
   analogWrite(6, l); 
   delay(2);
  }
}
