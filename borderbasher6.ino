int a;
int b;
int d;
int spd = 250;

#define FL 11
#define BL 9
#define ML 10

#define FR 6
#define BR 4
#define MR 5

#define MFL 12
#define MBL 14
#define MML 13

#define MFR 17
#define MBR 16
#define MMR 15

#define HT 8
#define HR 2
#define HL 3

#define TL 7


void setup() {

  pinMode(FL, OUTPUT);
  pinMode(BL, OUTPUT);
  pinMode(ML, OUTPUT);
  pinMode(FR, OUTPUT);
  pinMode(BR, OUTPUT);
  pinMode(MR, OUTPUT);

  pinMode(MFL, OUTPUT);
  pinMode(MBL, OUTPUT);
  pinMode(MML, OUTPUT);
  pinMode(MFR, OUTPUT);
  pinMode(MBR, OUTPUT);
  pinMode(MMR, OUTPUT);

  pinMode(HT, OUTPUT);
  pinMode(HR, OUTPUT);
  pinMode(HL, OUTPUT);
  pinMode(TL, OUTPUT);

  digitalWrite(MFL, LOW);
  digitalWrite(MFR, LOW);
  digitalWrite(MML, LOW);
  digitalWrite(MMR, LOW);
  digitalWrite(MBL, LOW);
  digitalWrite(MBR, LOW);
  digitalWrite(FL, LOW);
  digitalWrite(FR, LOW);
  digitalWrite(ML, LOW);
  digitalWrite(MR, LOW);
  digitalWrite(BL, LOW);
  digitalWrite(BR, LOW);
  digitalWrite(HT, LOW);
  digitalWrite(TL, LOW);
  digitalWrite(HL, LOW);
  digitalWrite(HR, HIGH);

  delay(1000);
}

void trick() {
  digitalWrite(MFL, LOW);
  digitalWrite(MFR, LOW);
  digitalWrite(MML, LOW);
  digitalWrite(MMR, LOW);
  digitalWrite(MBL, LOW);
  digitalWrite(MBR, LOW);

  delay(1000);

  digitalWrite(TL, HIGH);
  digitalWrite(HT, HIGH);

  delay(500);

  digitalWrite(FL, HIGH);

  delay(250);

  digitalWrite(FR, HIGH);

  delay(250);

  digitalWrite(ML, HIGH);

  delay(250);

  digitalWrite(MR, HIGH);

  delay(250);

  digitalWrite(BL, HIGH);

  delay(250);

  digitalWrite(BR, HIGH);

  delay(1000);

  digitalWrite(HL, LOW);
  digitalWrite(HR, LOW);

  delay(750);

  digitalWrite(HT, LOW);

  delay(500);
  
  digitalWrite(HL, HIGH);

  delay(750);

  digitalWrite(HR, HIGH);

  delay(750);

  digitalWrite(HR, LOW);

  delay(750);

  digitalWrite(HT, HIGH);

  delay(1000);

  digitalWrite(MFL, HIGH);
  digitalWrite(MFR, HIGH);
  digitalWrite(MML, HIGH);
  digitalWrite(MMR, HIGH);
  digitalWrite(MBL, HIGH);
  digitalWrite(MBR, HIGH);

  delay(1000);

  digitalWrite(FL, LOW);
  digitalWrite(FR, LOW);
  digitalWrite(ML, LOW);
  digitalWrite(MR, LOW);
  digitalWrite(BL, LOW);
  digitalWrite(BR, LOW);
  digitalWrite(TL, LOW);
  digitalWrite(HT, LOW);

  delay(1000);

}

void side_drop() {
  digitalWrite(FL, HIGH);
  digitalWrite(ML, HIGH);
  digitalWrite(BL, HIGH);

  delay(750);

  digitalWrite(FR, HIGH);
  digitalWrite(MR, HIGH);
  digitalWrite(BR, HIGH);
  digitalWrite(FL, LOW);
  digitalWrite(ML, LOW);
  digitalWrite(BL, LOW);

  delay(1250);

  digitalWrite(FR, LOW);
  digitalWrite(MR, LOW);
  digitalWrite(BR, LOW);

  delay(1000);

}

void drop() {
  digitalWrite(HT, HIGH);
  digitalWrite(TL, HIGH);

  delay(300);

  digitalWrite(BL, HIGH);
  digitalWrite(BR, HIGH);

  delay(100);

  digitalWrite(ML, HIGH);
  digitalWrite(MR, HIGH);

  delay(100);

  digitalWrite(FL, HIGH);
  digitalWrite(FR, HIGH);

  delay(750);

  digitalWrite(BL, LOW);
  digitalWrite(BR, LOW);

  delay(100);

  digitalWrite(ML, LOW);
  digitalWrite(MR, LOW);

  delay(100);

  digitalWrite(FL, LOW);
  digitalWrite(FR, LOW);

  delay(750);

  digitalWrite(HT, LOW);
  digitalWrite(TL, LOW);

  delay(1000);
}

void tap_dance(int dly) {
  digitalWrite(FL, HIGH);
  delay(dly);
  digitalWrite(FL, LOW);
  delay(dly);
  digitalWrite(ML, HIGH);
  delay(dly);
  digitalWrite(ML, LOW);
  delay(dly);
  digitalWrite(BL, HIGH);
  delay(dly);
  digitalWrite(BL, LOW);
  delay(dly);
  digitalWrite(BR, HIGH);
  delay(dly);
  digitalWrite(BR, LOW);
  delay(dly);
  digitalWrite(MR, HIGH);
  delay(dly);
  digitalWrite(MR, LOW);
  delay(dly);
  digitalWrite(FR, HIGH);
  delay(dly);
  digitalWrite(FR, LOW);
  delay(dly);
}

void walk() {
  digitalWrite(FL, HIGH);
  digitalWrite(MR, HIGH);
  digitalWrite(BL, HIGH);

  delay(10);

  digitalWrite(MFL, LOW);
  digitalWrite(MMR, LOW);
  digitalWrite(MBL, LOW);

  delay(290);

  digitalWrite(FL, LOW);
  digitalWrite(MR, LOW);
  digitalWrite(BL, LOW);

  delay(100);

  digitalWrite(FR, HIGH);
  digitalWrite(ML, HIGH);
  digitalWrite(BR, HIGH);

  delay(10);

  digitalWrite(MFR, LOW);
  digitalWrite(MML, LOW);
  digitalWrite(MBR, LOW);

  delay(290);

  digitalWrite(FR, LOW);
  digitalWrite(ML, LOW);
  digitalWrite(BR, LOW);

  delay(100);

  digitalWrite(MFL, HIGH);
  digitalWrite(MFR, HIGH);
  digitalWrite(MML, HIGH);
  digitalWrite(MMR, HIGH);
  digitalWrite(MBL, HIGH);
  digitalWrite(MBR, HIGH);

  delay(350);
}

void loop() {
  for (d = 0; d <= 1; d++) {
    for (a = 0; a <= 20; a++) {
      walk();
    }

    delay(500);

    drop();

    for (b = 0; b <= 5; b++) {
      tap_dance(spd);
      spd = spd - 50;
    }
    spd = 250;
  }

  side_drop();

  trick();
}
