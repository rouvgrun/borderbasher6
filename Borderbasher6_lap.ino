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

  delay(500);

  digitalWrite(FL, HIGH);
  digitalWrite(MR, HIGH);
  digitalWrite(BL, HIGH);

  delay(500);

  digitalWrite(MFL, HIGH);
  digitalWrite(MMR, HIGH);
  digitalWrite(MBL, HIGH);

  delay(500);

  digitalWrite(FL, LOW);
  digitalWrite(MR, LOW);
  digitalWrite(BL, LOW);

  delay(500);
  
}

void loop() {
  digitalWrite(FL, HIGH);
  digitalWrite(MR, HIGH);
  digitalWrite(BL, HIGH);

  digitalWrite(MFL, LOW);
  digitalWrite(MMR, LOW);
  digitalWrite(MBL, LOW);
  digitalWrite(MFR, HIGH);
  digitalWrite(MML, HIGH);
  digitalWrite(MBR, HIGH);

  delay(260);

  digitalWrite(FL, LOW);
  digitalWrite(MR, LOW);
  digitalWrite(BL, LOW);

  delay(160);

  digitalWrite(FR, HIGH);
  digitalWrite(ML, HIGH);
  digitalWrite(BR, HIGH);

  digitalWrite(MFL, HIGH);
  digitalWrite(MMR, HIGH);
  digitalWrite(MBL, HIGH);
  digitalWrite(MFR, LOW);
  digitalWrite(MML, LOW);
  digitalWrite(MBR, LOW);

  delay(260);

  digitalWrite(FR, LOW);
  digitalWrite(ML, LOW);
  digitalWrite(BR, LOW);

  delay(160);

}
