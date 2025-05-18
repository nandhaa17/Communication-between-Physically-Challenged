int button_pin = 12;
int led_pin = 10;
int buzzer_pin = 9;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(button_pin);
  if (val == HIGH) {
    digitalWrite(led_pin, HIGH);
    digitalWrite(buzzer_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);
    digitalWrite(buzzer_pin, LOW);
  }
}