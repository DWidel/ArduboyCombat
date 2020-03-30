#include <Arduboy2.h>
#include "PlayerObj.h"
#include "Machine.h"
Arduboy2Base arduboy;

Machine M;

void setup() {

  // put your setup code here, to run once:
 
M.Init( arduboy);
}

void loop() {
  // put your main code here, to run repeatedly:

    if (!arduboy.nextFrame()) return;

    arduboy.clear();
  
    M.Run();
    
    arduboy.display();
}
