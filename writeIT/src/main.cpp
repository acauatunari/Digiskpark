#include <DigiKeyBoard.h>

void setup() 
{
  // put your setup code here, to run once:
  extern void writeIt();
  writeIt();
  
}

void writeIt() 
{
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);

  DigiKeyboard.sendKeyStroke(KEY_E);
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("notepad");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("Hehehe eh soh isso mesmo ksksks <3");
 

}

void loop()
{
  // put your main code here, to run repeatedly:

}