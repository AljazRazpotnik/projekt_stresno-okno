#include <Servo.h>
Servo myservo;

const int buttonPin_first = 10;  
const int buttonPin_second = 6;  
const int buttonPin_reset = 5;  
const int safetyButton1 = 2;
const int safetyButton2 = 3;
const int ledPin = 9;  

int buttonState1 = LOW;
int buttonState2 = LOW;

int pos = 0;
int ledState = LOW;

int lastButtonState_first;  
int currentButtonState_first;

int lastButtonState_second;  
int currentButtonState_second;

int lastButtonState_reset;  
int currentButtonState_reset;


void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin_first, INPUT_PULLUP);
  pinMode(buttonPin_second, INPUT_PULLUP);
  pinMode(buttonPin_reset, INPUT_PULLUP);
  pinMode(safetyButton1, INPUT_PULLUP);
  pinMode(safetyButton2, INPUT_PULLUP);  

  currentButtonState_first = digitalRead(buttonPin_first);
  currentButtonState_second = digitalRead(buttonPin_second);
  currentButtonState_reset = digitalRead(buttonPin_reset);
  
  myservo.attach(7);
}

void loop() {

  
  lastButtonState_first = currentButtonState_first;
  currentButtonState_first = digitalRead(buttonPin_first);

     if (lastButtonState_first == HIGH && currentButtonState_first == LOW) 
     {
      
      digitalWrite(ledPin, HIGH);
        for(pos = 0; pos <=90; pos +=1)
          {
            pos >= 0; pos <= 90; pos +=0;
            myservo.write(pos);
            delay(15);
          
          }
      
     }

    lastButtonState_second = currentButtonState_second;
    currentButtonState_second = digitalRead(buttonPin_second);

  if (lastButtonState_second == HIGH && currentButtonState_second == LOW)
   {
    digitalWrite(ledPin, HIGH);
      for(pos <= 90; pos <=180; pos +=1)
     {
      myservo.write(pos);
      delay(15);
     }
     
  } 
    lastButtonState_reset = currentButtonState_reset;
    currentButtonState_reset = digitalRead(buttonPin_reset);
    
    if (lastButtonState_reset == HIGH && currentButtonState_reset == LOW) 
      {
        for(pos <= 180; pos >=0; pos -=1)
        {
          myservo.write(pos);
          delay(15);
        }
        digitalWrite(ledPin, LOW);
        
      
      }
      if(pos >= 180 || pos <=0)
      {
        myservo.detach;
      }
}
