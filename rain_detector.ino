#include <Servo.h>

Servo s1;
int val = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(7, INPUT);   // Rain sensor output pin
  s1.attach(6);        // Servo motor signal pin
}

void loop()
{
  val = digitalRead(7);

  Serial.println(val);

  delay(100);

  if (val == 0)
  {
    s1.write(90);   // Rotate servo to 90°
    delay(500);
  }

  if (val == 1)
  {
    s1.write(0);    // Rotate servo back to 0°
  }
}
