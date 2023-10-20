#define IN1a 16
#define IN2a 5
#define IN3a 4
#define IN4a 0

#define IN1b 2
#define IN2b 14
#define IN3b 12
#define IN4b 13

int delayTime = 17;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1a, OUTPUT);
  pinMode(IN2a, OUTPUT);
  pinMode(IN3a, OUTPUT);
  pinMode(IN4a, OUTPUT);

  pinMode(IN1b, OUTPUT);
  pinMode(IN2b, OUTPUT);
  pinMode(IN3b, OUTPUT);
  pinMode(IN4b, OUTPUT);

  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int steps = 0; steps < 200; steps++) {
      Serial.println("FORWARD");
      forwardMotorA();
      forwardMotorB();
    }
  for (int steps = 0; steps < 200; steps++) {
      Serial.println("BACKWARD");
      backwardMotorA();
      backwardMotorB();
    }
}

void forwardMotorA(void) {
  digitalWrite(IN4a, HIGH);
  digitalWrite(IN3a, LOW);
  digitalWrite(IN2a, LOW);
  digitalWrite(IN1a, LOW);
  delay(delayTime);
  digitalWrite(IN4a, LOW);
  digitalWrite(IN3a, HIGH);
  digitalWrite(IN2a, LOW);
  digitalWrite(IN1a, LOW);
  delay(delayTime);
  digitalWrite(IN4a, LOW);
  digitalWrite(IN3a, LOW);
  digitalWrite(IN2a, HIGH);
  digitalWrite(IN1a, LOW);
  delay(delayTime);
  digitalWrite(IN4a, LOW);
  digitalWrite(IN3a, LOW);
  digitalWrite(IN2a, LOW);
  digitalWrite(IN1a, HIGH);
  delay(delayTime);
}

void forwardMotorB(void) {
  digitalWrite(IN4b, LOW);
  digitalWrite(IN3b, LOW);
  digitalWrite(IN2b, LOW);
  digitalWrite(IN1b, HIGH);
  delay(delayTime);
  digitalWrite(IN4b, LOW);
  digitalWrite(IN3b, LOW);
  digitalWrite(IN2b, HIGH);
  digitalWrite(IN1b, LOW);
  delay(delayTime);
  digitalWrite(IN4b, LOW);
  digitalWrite(IN3b, HIGH);
  digitalWrite(IN2b, LOW);
  digitalWrite(IN1b, LOW);
  delay(delayTime);
  digitalWrite(IN4b, HIGH);
  digitalWrite(IN3b, LOW);
  digitalWrite(IN2b, LOW);
  digitalWrite(IN1b, LOW);
  delay(delayTime);
}

void backwardMotorA(void) {
  digitalWrite(IN4a, LOW);
  digitalWrite(IN3a, LOW);
  digitalWrite(IN2a, LOW);
  digitalWrite(IN1a, HIGH);
  delay(delayTime);
  digitalWrite(IN4a, LOW);
  digitalWrite(IN3a, LOW);
  digitalWrite(IN2a, HIGH);
  digitalWrite(IN1a, LOW);
  delay(delayTime);
  digitalWrite(IN4a, LOW);
  digitalWrite(IN3a, HIGH);
  digitalWrite(IN2a, LOW);
  digitalWrite(IN1a, LOW);
  delay(delayTime);
  digitalWrite(IN4a, HIGH);
  digitalWrite(IN3a, LOW);
  digitalWrite(IN2a, LOW);
  digitalWrite(IN1a, LOW);
  delay(delayTime);
}

void backwardMotorB(void) {
  digitalWrite(IN4b, HIGH);
  digitalWrite(IN3b, LOW);
  digitalWrite(IN2b, LOW);
  digitalWrite(IN1b, LOW);
  delay(delayTime);
  digitalWrite(IN4b, LOW);
  digitalWrite(IN3b, HIGH);
  digitalWrite(IN2b, LOW);
  digitalWrite(IN1b, LOW);
  delay(delayTime);
  digitalWrite(IN4b, LOW);
  digitalWrite(IN3b, LOW);
  digitalWrite(IN2b, HIGH);
  digitalWrite(IN1b, LOW);
  delay(delayTime);
  digitalWrite(IN4b, LOW);
  digitalWrite(IN3b, LOW);
  digitalWrite(IN2b, LOW);
  digitalWrite(IN1b, HIGH);
  delay(delayTime);
}

void stopMotors(void) {
  digitalWrite(IN4a, LOW);
  digitalWrite(IN3a, LOW);
  digitalWrite(IN2a, LOW);
  digitalWrite(IN1a, LOW);

  digitalWrite(IN4b, LOW);
  digitalWrite(IN3b, LOW);
  digitalWrite(IN2b, LOW);
  digitalWrite(IN1b, LOW);
}

