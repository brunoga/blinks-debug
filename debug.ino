#include <blinklib.h>

#include "debug.h"

void setup() {}

void loop() {
  // Message will be sent to serial debugging port only if debug is enabled.
  // Otherwise this line will not even be compiled in.
  LOGFLN("Debug is enabled");
}
