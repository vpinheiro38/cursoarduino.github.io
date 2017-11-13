const int addr[4] = {4, 5, 6, 7};

void digitSeg(int d, int c, int b, int a);

void setup(){
  for(int i = 0; i < 4; i++) {
    pinMode(addr[i], OUTPUT);
  }
}

void loop() {
  digitSeg(0, 0, 0, 0);
  delay(1000);
  digitSeg(0, 0, 0, 1);
  delay(1000);
  digitSeg(0, 0, 1, 0);
  delay(1000);
  digitSeg(0, 0, 1, 1);
  delay(1000);
  digitSeg(0, 1, 0, 0);
  delay(1000);
  digitSeg(0, 1, 0, 1);
  delay(1000);
  digitSeg(0, 1, 1, 0);
  delay(1000);
  digitSeg(0, 1, 1, 1);
  delay(1000);
  digitSeg(1, 0, 0, 0);
  delay(1000);
  digitSeg(1, 0, 0, 1);
  delay(1000);
}

void digitSeg(int d, int c, int b, int a) {
  digitalWrite(addr[0], a); 
  digitalWrite(addr[1], b);
  digitalWrite(addr[2], c);
  digitalWrite(addr[3], d);
}
