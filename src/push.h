/*
 *  push.h
 */

enum
{
    TURN_ON, TURN_OFF,
    NUM_PUSH
};


void push_init(void);
int push_done(unsigned which); 

