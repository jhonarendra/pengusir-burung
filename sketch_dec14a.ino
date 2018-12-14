int output_pin3 = 3;
int output_pin5 = 5;
int ldr_pin7 = 7;
int pir_pin2 = 2;
int brightness_off = 0;
int brightness_high = 255;
int brightness_low = 255/5;

void setup() {
  pinMode(ldr_pin7, INPUT);
  pinMode(pir_pin2, INPUT);
  pinMode(output_pin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    if(digitalRead(pir_pin2) == HIGH){
      digitalWrite(output_pin3, HIGH);
      analogWrite(output_pin3,brightness_high);
      digitalWrite(output_pin5, HIGH);
      analogWrite(output_pin5,brightness_high);
      // delay(1000);
      // micro second 
      }else{ 
        digitalWrite(output_pin3,HIGH); 
        analogWrite(output_pin3,brightness_low); 
        digitalWrite(output_pin5,HIGH); 
        analogWrite(output_pin5,brightness_low); 
     }
     Serial.println( digitalRead( pir_pin2 ));
     delay(100);
}

