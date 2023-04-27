int buzzerPin = 10;
const int LED_1 = 2;
const int LED_2 = 3;
const int LED_3 = 4;
const int LED_4 = 5;
const int LED_5 = 6;
const int LED_6 = 7;
const int LED_7 = 8;
const int LED_8 = 9;


void setup() {
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);
  pinMode(LED_6,OUTPUT);
  pinMode(LED_7,OUTPUT);
  pinMode(LED_8,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char note = Serial.read();
    switch (note) {
      case 'C':
        digitalWrite(LED_1,HIGH);
        tone(buzzerPin, 262, 100);
        digitalWrite(LED_1,LOW);
        break;
      case 'D':
        digitalWrite(LED_2,HIGH);
        tone(buzzerPin, 294, 100);
        digitalWrite(LED_2,LOW);
        break;
      case 'E':
        digitalWrite(LED_3,HIGH);
        tone(buzzerPin, 330, 100);
        digitalWrite(LED_3,LOW);
        break;
      case 'F':
        digitalWrite(LED_4,HIGH);
        tone(buzzerPin, 349, 100);
        digitalWrite(LED_4,LOW);
        break;
      case 'G':
        digitalWrite(LED_5,HIGH);
        tone(buzzerPin, 392, 100);
        digitalWrite(LED_5,LOW);
        break;
      case 'A':
        digitalWrite(LED_6,HIGH);
        tone(buzzerPin, 440, 100);
        digitalWrite(LED_6,LOW);
        break;
      case 'B':
        digitalWrite(LED_7,HIGH);
        tone(buzzerPin, 494, 100);
        digitalWrite(LED_7,LOW);
        break;
      case 'K':
        digitalWrite(LED_8,HIGH);
        tone(buzzerPin, 523, 100);
        digitalWrite(LED_8,LOW);
        break;
    }
  }
}
