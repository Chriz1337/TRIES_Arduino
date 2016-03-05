/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 12. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

//VARIABLEN
int tasterstatus = LOW;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(12, OUTPUT);
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  Serial.begin(19200);
}

// the loop function runs over and over again forever
void loop()
{

  tasterstatus = digitalRead(8);
  if (tasterstatus == HIGH)
  {
    digitalWrite(12, HIGH);
    //delay(1000);
    //digitalWrite(12, LOW);
  }
  else
  {
    digitalWrite(12, LOW);
  }
  Serial.println(" Grad Celsius");
}
