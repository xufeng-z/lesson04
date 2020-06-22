#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define LT 6
#define BT 7

#define S1 8
#define S2 9
#define S3 10
#define S4 11

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  
  pinMode(LT, OUTPUT);
  pinMode(BT, OUTPUT);
  
  digitalWrite(LT, HIGH);
  digitalWrite(BT, HIGH);
  
  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, HIGH);
  
  digitalWrite(S1, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(S1, HIGH);
  
  digitalWrite(S2, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(S2, HIGH);
  
  digitalWrite(S3, LOW);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(S3, HIGH);
  
  digitalWrite(S4, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(S4, HIGH);
}

void loop()
{
  
}