const int seg[] = {6, 7, 8, 9, 10, 11, 12};
const int pinPot = A0;
const int but = 4;
int valorPor = 0;
int pwm = 0;
int dec = 1;
int n = 0;

void setNum(int val);

void setup(){
  Serial.begin(9600);
  for (int i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
  pinMode(but, INPUT);
  pinMode(pinPot, INPUT);
}

void loop() {
  if (digitalRead(but)) {
    if (dec == 1) {
      dec = -1;
    }
    else {
      dec = 1;
    }
  }
          
  valorPor = analogRead(pinPot);
  
  if (n < 0)
   n = 9;
  if (n > 9)
   n = 0;
   
  setNum(n);
  delay(valorPor);
  
  n = n + dec;
}

void setNum(int val) {
  switch(val){
    case 0:
      //0
      digitalWrite(seg[0], HIGH);
      digitalWrite(seg[1], LOW);
      digitalWrite(seg[2], HIGH);
      digitalWrite(seg[3], HIGH);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], HIGH);
      break;
      
    case 1:
      //1
      digitalWrite(seg[0], LOW);
      digitalWrite(seg[1], LOW);
      digitalWrite(seg[2], LOW);
      digitalWrite(seg[3], LOW);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], LOW);
      break;
      
    case 2:
      //2
      digitalWrite(seg[0], LOW);
      digitalWrite(seg[1], HIGH);
      digitalWrite(seg[2], HIGH);
      digitalWrite(seg[3], HIGH);
      digitalWrite(seg[4], LOW);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], HIGH);
      break;
      
    case 3:
      //3
      digitalWrite(seg[0], LOW);
      digitalWrite(seg[1], HIGH);
      digitalWrite(seg[2], LOW);
      digitalWrite(seg[3], HIGH);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], HIGH);
      break;
      
    case 4:
      //4
      digitalWrite(seg[0], HIGH);
      digitalWrite(seg[1], HIGH);
      digitalWrite(seg[2], LOW);
      digitalWrite(seg[3], LOW);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], LOW);
      break;
      
    case 5:
      //5
      digitalWrite(seg[0], HIGH);
      digitalWrite(seg[1], HIGH);
      digitalWrite(seg[2], LOW);
      digitalWrite(seg[3], HIGH);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], LOW);
      digitalWrite(seg[6], HIGH);
      break;
    
    case 6:
      //6
      digitalWrite(seg[0], HIGH);
      digitalWrite(seg[1], HIGH);
      digitalWrite(seg[2], HIGH);
      digitalWrite(seg[3], HIGH);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], LOW);
      digitalWrite(seg[6], HIGH);
      break;
      
    case 7:
      //7
      digitalWrite(seg[0], LOW);
      digitalWrite(seg[1], LOW);
      digitalWrite(seg[2], LOW);
      digitalWrite(seg[3], LOW);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], HIGH);
      break;
      
    case 8:
      //8
      digitalWrite(seg[0], HIGH);
      digitalWrite(seg[1], HIGH);
      digitalWrite(seg[2], HIGH);
      digitalWrite(seg[3], HIGH);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], HIGH);
      break;
    
    case 9:
      //9
      digitalWrite(seg[0], HIGH);
      digitalWrite(seg[1], HIGH);
      digitalWrite(seg[2], LOW);
      digitalWrite(seg[3], LOW);
      digitalWrite(seg[4], HIGH);
      digitalWrite(seg[5], HIGH);
      digitalWrite(seg[6], HIGH);
      break;
 }
}
