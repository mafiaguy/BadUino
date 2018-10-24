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

  // Leave a little reminder to lock your PC (just delete or comment this out if you don't want that)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(300);

  Keyboard.print("notepad");

  delay(300);

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("You forgot to lock your PC.");

  delay(3000);

  // Lock the PC
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('l');
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
