#include <Arduino.h>
#include <util/delay.h>

#define bot1 ((PIND >> 4) & 0x01)
#define bot2 ((PIND >> 5) & 0x01)
#define bot3 ((PIND >> 6) & 0x01)
#define bot4 ((PIND >> 7) & 0x01) 

#define SET_PIN(PORT, PIN) (PORT |= 1 << PIN)
#define CLEAR_PIN(PORT, PIN) (PORT &= ~(1 << PIN))

int main(void){
  DDRD &= 0x0f;
  DDRB |= 0x0f;
  while (1){
    
    if (bot1 != 1){
      SET_PIN(PORTB,0);
    }
    else{
      CLEAR_PIN(PORTB,0);
    }
    if (bot2 != 1){
      SET_PIN(PORTB, 1);
    }
    else{
      CLEAR_PIN(PORTB,1);
    }
    if (bot3 != 1){
      SET_PIN(PORTB, 2);
    }
    else{
      CLEAR_PIN(PORTB,2);
    }
    if (bot4 != 1){
      SET_PIN(PORTB, 3);
  
    }
    else{
      CLEAR_PIN(PORTB,3);
    }
  }

  return 0;
}