//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Volume
// 
// Made by hugo medeiros fernandes
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/2133944-volume


int potenciometro = 5;
int buzzer = A0;
int tensao = 0;
int i;

void volume(int potenciometro, int buzzer){
  for (i = 2; i <= 13; i++){
    tensao = analogRead(potenciometro);
    analogWrite(buzzer, tensao / 4);
    Serial.println(tensao);
    if ((i <= (tensao/78)) or (i <= (tensao/85))){
    	digitalWrite(i, HIGH);
    }
    else {
    	digitalWrite(i, LOW);
    }
  }
}

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
	volume(potenciometro, buzzer);
}


