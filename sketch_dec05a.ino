void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  int v[]={0,1,0,0,0,0,1,1,0,1,0,1,0,0,1,1,0};
  for(int i=0; i<sizeof(v)/sizeof(int); i++){
    if(v[i]==0){
      digitalWrite(13,HIGH);
      delay(300);
    }
    if(v[i]==1){
      digitalWrite(13,HIGH);
      delay(900);
    }
    digitalWrite(13,LOW);
    delay(900);
  }
}
