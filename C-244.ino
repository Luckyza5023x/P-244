
#define Buzzer 26 
const int VALUE_THRESHOLD = 30;
int TOUCH_SENSOR_VALUE_1 ; 
int TOUCH_SENSOR_VALUE_2 ; 
int TOUCH_SENSOR_VALUE_3 ;

void setup() {
  pinMode(Buzzer, OUTPUT);
  delay(2000);
  digitalWrite(Buzzer, LOW);
}

void loop() {
  TOUCH_SENSOR_VALUE_1 = touchRead(T5);
  TOUCH_SENSOR_VALUE_2 = touchRead(T6);
  TOUCH_SENSOR_VALUE_3 = touchRead(T7);
  if (TOUCH_SENSOR_VALUE_2<VALUE_THRESHOLD){
    for (int i = 0;i<2;i++){
      digitalWrite(Buzzer, HIGH);
      delay(50);
      digitalWrite(Buzzer, LOW);
      delay(50);
      
      }
    }

   if (TOUCH_SENSOR_VALUE_1<VALUE_THRESHOLD){
    for (int i = 0;i<5;i++){
      digitalWrite(Buzzer, HIGH);
      delay(50);
      digitalWrite(Buzzer, LOW);
      delay(50);
      
      }
    }

    if (TOUCH_SENSOR_VALUE_3<VALUE_THRESHOLD){
    for (int i = 0;i<8;i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
      
      }
    }
    else{digitalWrite(2, LOW);}

}
