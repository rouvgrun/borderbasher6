#define FL 11  // Front Left
#define BL 9   // Back Left
#define ML 10  // Middle Left

#define FR 6   // Front Right
#define BR 4   // Back Right
#define MR 5   // Middle Right


//Legs Movement

#define MFL 12  // Move Front Left
#define MBL 14   // Move Back Left
#define MML 13  // Move Middle Left

#define MFR 17   // Move Front Right
#define MBR 16   // Move Back Right
#define MMR 15   // Move Middle Right


//Head
#define HT 8   // Tilt
#define HR 2   // Pan Right
#define HL 3   // Pan Right


// Tail
#define TL 7   // Tail UP


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

  digitalWrite(MFL , LOW);
  digitalWrite(MFR , LOW);
  digitalWrite(MML , LOW);
  digitalWrite(MMR , LOW);
  digitalWrite(MBL , LOW);
  digitalWrite(MBR , LOW);
  digitalWrite(FL , LOW);
  digitalWrite(FR , LOW);
  digitalWrite(ML , LOW);
  digitalWrite(MR , LOW);
  digitalWrite(BL , LOW);
  digitalWrite(BR , LOW);


}

void loop() {
  digitalWrite(FL, HIGH);
  digitalWrite(MR, HIGH);
  digitalWrite(BL, HIGH);

  delay(10);

  digitalWrite(MFL, LOW);
  digitalWrite(MMR, LOW);
  digitalWrite(MBL, LOW);

  delay(250);

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

  delay(250);

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

  delay(270);
}