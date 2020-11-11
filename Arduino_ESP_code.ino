/*Shaurya Gupta 18blc1092*/
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "RUx84PDPcHq1x-_qPS0wFaEHQJc03ZvY";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "AndroidAP14F2";
char pass[] = "mgez5696";
int ledPin = D3;
int ledPin1 = D4;
int ledPin2 = D5;// choose pin for the LED
int inputPin = D0;
int inputPin1 = D1;
int inputPin2 = D2;
int light1 = D6;
int light2 = D7; 
int light3 = D8;  
int val = 0;
int val1 = 0;
int val2 =0;
int val3 =0;
int val4 =0;
int val5 =0;
int val6 =0;
int ldr = A0;


void setup()
{
  // Debug console
   Serial.begin(9600);
   pinMode(ledPin, OUTPUT); // declare LED as output 
   pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
   pinMode(inputPin, INPUT);
   pinMode(inputPin1, INPUT);
   pinMode(inputPin2, INPUT);
   pinMode(light1,INPUT);
   pinMode(light2,INPUT);
   pinMode(light3,INPUT);
   pinMode(ldr, INPUT);// declare Infrared sensor as input*/
   delay(10);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
  val3 = analogRead(ldr);
  Serial.println(val3);
  val = digitalRead(inputPin);
  val1= digitalRead(inputPin1);// read input value 
  val2= digitalRead(inputPin2);
  val4= digitalRead(light1); 
  val5= digitalRead(light2); 
  val6= digitalRead(light3); 
  if (val3 >500)
  { 
   if (val == HIGH )
   { // check if the input is HIGH
      digitalWrite(ledPin, LOW); // turn LED OFF   
   }
   else 
   { 
      digitalWrite(ledPin, HIGH); // turn LED ON 
      delay(500);
   }
      if (val4 == HIGH )// check if the input is HIGH
   { 
      digitalWrite(ledPin, HIGH); // turn LED OFF   
   } 
    
     
     
   if (val1 == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin1, LOW); // turn LED OFF   
   }
   else 
   { 
      digitalWrite(ledPin1, HIGH); // turn LED ON 
      delay(500);
   }
   if (val5 == HIGH )// check if the input is HIGH
   { 
      digitalWrite(ledPin1, HIGH); // turn LED OFF   
   } 
   
   if (val2 == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin2, LOW); // turn LED OFF   
   }
   else 
   { 
      digitalWrite(ledPin2, HIGH); // turn LED ON 
      delay(500);
   }
   if (val6 == HIGH )// check if the input is HIGH
   { 
      digitalWrite(ledPin2, HIGH); // turn LED OFF   
   } 
   
  }
    if (val3 <500)
  { 

  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
    
  }
}
