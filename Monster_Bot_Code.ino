
#include <Servo.h>
int white = 11;
int blue = 9;
Servo fin;
int pos = 0;
void setup() {
fin.attach(8);
   pinMode(white, OUTPUT);
   pinMode(blue, OUTPUT);
}

// the loop fuction runs over and over again forever
void loop() { 
  digitalWrite(white, HIGH); 
  digitalWrite(blue, HIGH);   
  delay(1000);    
  digitalWrite(white, LOW); 
  digitalWrite(blue, LOW);   
  delay(1000);                     


   

  for (pos = 0; pos <= 80; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    fin.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 80; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    fin.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}


/* all this is comments
 that is inside the symbols
 */
