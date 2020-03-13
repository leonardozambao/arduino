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

void setup(){
  pinMode(4, INPUT); //entrada
  pinMode(5, OUTPUT); //saida
}

void loop(){
    if(digitalRead(4) == true){ //leitura
      digitalWrite(5, true); //escrita
    } else {
      digitalWrite(5, false);
    }
}
