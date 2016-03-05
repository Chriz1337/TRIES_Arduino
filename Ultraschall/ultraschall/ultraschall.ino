// ULTRA SCHALL JUNGE
// author : ich und du



//KONSTANTEN
#define TRIGGER 8
#define ECHO 12
#define PIEPS 7

//VARIABLEN
int echoTime = 0;
int distance = 0; 


void setup() {
  // put your setup code here, to run once:
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(PIEPS, OUTPUT); 
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Herzlichen willkommen!!!!!");
  echoTime = 0;
  digitalWrite(TRIGGER, LOW); // für rauschfreies signal
  delay(5);
  
  digitalWrite(TRIGGER, HIGH);
  delay(10);
  digitalWrite(TRIGGER, LOW);
  echoTime = pulseIn(ECHO, HIGH);
  distance = (echoTime/2)/29.1; 

  
  if(distance<5)
  {
     digitalWrite(PIEPS, HIGH);
  }
  else if(distance<40)
  {
    digitalWrite(PIEPS, HIGH);
    delay(distance*10);    
    //delay(50); 
    digitalWrite(PIEPS, LOW); 
    //delay(distance*20); 
    delay(distance*10); 
  }
  else
  {
  digitalWrite(PIEPS, LOW);  
  }
   


  Serial.print("Echo-Zeit: "); Serial.print(echoTime);
  Serial.print("  --- Distance: "); Serial.println(distance);
  //delay(1);
}
