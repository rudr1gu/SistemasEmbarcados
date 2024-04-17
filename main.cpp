const int Green = 13;
const int Yellow = 12;
const int Red = 11;

const int GroupB[] = {2, 3, 4, 5, 6, 7, 8};
const int botao = 10;

void setup() {
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
  for (int i = 0; i < 7; i++) {
    pinMode(GroupB[i], OUTPUT);
  }
  pinMode(botao, INPUT_PULLUP);
}

void loop() {  
  while (digitalRead(botao) == HIGH) {
    digitalWrite(Green, HIGH);
    
     for (int i = 0; i < 5; i++) {
      
      	for (int j = 0; j < 7; j++) {
        digitalWrite(GroupB[j], HIGH);
        delay(100);
        digitalWrite(GroupB[j], LOW);
        delay(200);
      }      
    }
    
    digitalWrite(Green, LOW);
    digitalWrite(Yellow, HIGH);

    for (int i = 0; i < 3; i++) {
      for (int j = 8; j >=0 ; j--) {
      digitalWrite(GroupB[j], HIGH);
      delay(800);
      }   
      for (int j = 0; j < 7; j++) {
        digitalWrite(GroupB[j], LOW);
      }
    } 
    
    digitalWrite(Yellow, LOW);
    digitalWrite(Red, HIGH);
 	
    for (int R = 0; R < 3; R++) {
      for (int u = 0; u < 5; u++) { 
        for (int d = 0; d < 7; d++) {
          digitalWrite(GroupB[d], HIGH);
        }
        delay(300);
        for (int j = 0; j < 7; j++) {
          digitalWrite(GroupB[j], LOW);
        }
        delay(300);
      }
      delay(10000);
    }
    
    digitalWrite(Red, LOW); 
  }
}