#include <Arduino.h>
#include <librobus.h>
#include <pompe/pompe.h>
// put function declarations here:
Pompe pompe;
void setup() {
  // put your setup code here, to run once:
  BoardInit();
  pompe.setupPompe(53);
}

void loop() {
  pompe.pompeON();
  delay(2000);
  pompe.pompeOFF();
   delay(2000);
}
