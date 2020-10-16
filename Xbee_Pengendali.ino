#include <Keypad.h>
const byte ROWS = 4; //rows
const byte COLS = 4; // columns
char keys[ROWS][COLS] = {
  {'7','8','9', '/'},
  {'4','5','6','x'},
  {'1','2','3','-'},
  {'*','0','#','+'}
};
byte rowPins[ROWS] = {13, 12, 11, 10}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 7, 6}; //connect to the column pinouts of the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
int KeyCheck = 0;

void setup() 
{
  Serial.begin(9600);   
}
void loop() 
{
  char key = keypad.getKey();
    if (key)
  {
    if(key == '1'){KeyCheck = 1; Serial.print("1");}
    else if(key == '2'){KeyCheck = 1; Serial.print("2");}
    else if(key == '3'){KeyCheck = 1; Serial.print("3");}
    
    else if(key == '4'){KeyCheck = 1; Serial.print("4");}
    else if(key == '5'){KeyCheck = 1; Serial.print("5");}
    else if(key == '6'){KeyCheck = 1; Serial.print("6");}
    else if(KeyCheck == 0){Serial.print(key);}
    KeyCheck = 0; 
  }
}
