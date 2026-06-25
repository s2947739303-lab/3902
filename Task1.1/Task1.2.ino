const int LED1_Pin = 2;
const int button1_Pin = 3;

const int LED2_Pin = 4;
const int button2_Pin = 5;

int button1_state = 0;
int button2_state = 0;

void setup() {
  Serial.begin(9600);

  pinMode(LED1_Pin, OUTPUT);
  pinMode(button1_Pin, INPUT);

  pinMode(LED2_Pin, OUTPUT);
  pinMode(button2_Pin, INPUT);
}

void loop() {
  button1_state = digitalRead(button1_Pin);
  button2_state = digitalRead(button2_Pin);

  if (button1_state == HIGH) {
    digitalWrite(LED1_Pin, HIGH);
    Serial.println("Button 1 is Pressed");
  } else {
    digitalWrite(LED1_Pin, LOW);
  }

  if (button2_state == HIGH) {
    digitalWrite(LED2_Pin, HIGH);
    Serial.println("Button 2 is Pressed");
  } else {
    digitalWrite(LED2_Pin, LOW);
  }

  delay(100);
}