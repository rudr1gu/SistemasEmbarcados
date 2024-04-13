const int ledVerde = 13;
const int ledAmarelo = 12;
const int ledVermelho = 11;

const int ledGrupoB[] = {2, 3, 4, 5, 6, 7, 8};
const int numLedsGrupoB = 7;

const int botao = 10;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  for (int i = 0; i < numLedsGrupoB; i++) {
    pinMode(ledGrupoB[i], OUTPUT);
  }
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  
  while (digitalRead(botao) == HIGH) {
    digitalWrite(ledVerde, HIGH);
    
     for (int i = 0; i < 5; i++) {
      
      	for (int j = 0; j < numLedsGrupoB; j++) {
        digitalWrite(ledGrupoB[j], HIGH);
        delay(100);
        digitalWrite(ledGrupoB[j], LOW);
        delay(200);
      }      
    }
    
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
       for (int i = 0; i < 3; i++) {
      
      	for (int j = 8; j >=0 ; j--) {
        digitalWrite(ledGrupoB[j], HIGH);
        delay(800);
        //digitalWrite(ledGrupoB[j], LOW);
      }
      	digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
     
    }
    
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
 	
    for (int k = 0; k < 3; k++) {
      for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < numLedsGrupoB; j++) {
          digitalWrite(ledGrupoB[j], HIGH);
        }
        delay(300);
        for (int j = 0; j < numLedsGrupoB; j++) {
          digitalWrite(ledGrupoB[j], LOW);
        }
        delay(300);
      }
      delay(10000);
    }
    
    digitalWrite(ledVermelho, LOW);
    
  }
}

