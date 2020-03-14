void setup() {
  pinMode(6, OUTPUT); //saida
  pinMode(5, OUTPUT);
}

void loop() {
  for(int j = 0; j<255; j++){
   analogWrite(6, j); 
   delay(1);
  }
  for(int l = 255; l>0; l--){
   analogWrite(6, l); 
   delay(1);
  }

  for(int m = 0; m<255; m++){
   analogWrite(5, m); 
   delay(2);
  }
  for(int n = 255; n>0; n--){
   analogWrite(5, n); 
   delay(2);
  }
}
