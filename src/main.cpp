/*
 *  project 08-deb2
 *      How to use N switches (example with 2)
 */

#include <Arduino.h>

#include "push.h"

void
setup(void)
{
    Serial.begin(BAUD);
    push_init();
    pinMode(INTLED, OUTPUT);
}

void
loop(void)
{
    if( push_done(TURN_ON) )
        digitalWrite(INTLED, HIGH);
    if( push_done(TURN_OFF) ) 
        digitalWrite(INTLED, LOW);
    delay(5);
}
