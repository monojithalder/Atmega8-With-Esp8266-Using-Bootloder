
String Data="";
char char_data[10];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(A4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    //Data = Serial.read();
    //if(Data == 2) {
    Serial.readBytes(char_data, 10);
    if(char_data[0] == 2 ){
      //digitalWrite(8,!digitalRead(8));
      digitalWrite(A5,!digitalRead(A5));
    }
    if(char_data[0] == 4 ){
      //digitalWrite(8,!digitalRead(8));
      digitalWrite(A4,!digitalRead(A4));
    }
    //}
  }
}
