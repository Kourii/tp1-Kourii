#include <Arduino.h>
#include <util/delay.h>

#define boton1 ((PIND >> 4) & 0X01)
#define boton2 ((PIND >> 5) & 0x01)
#define boton3 ((PIND >> 6) & 0X01)
#define boton4 ((PIND >> 7) & 0X01)

#define SET_PIN(PORT, PIN) (PORT |= 1 << PIN)
#define CLEAR_PIN(PORT, PIN) (PORT &= ~(1 << PIN))

int main(void)
{
  DDRD &= 0x0f;
  DDRB |= 0x0f;
  while (1)
  {
    if (boton1 == 0)
    {
      SET_PIN(PORTB, 0);
    }

    if (boton2 == 0)
    {
      SET_PIN(PORTB, 1);
    }

    if (boton3 == 0)
    {
      SET_PIN(PORTB, 2);
    }

    if (boton4 == 0)
    {
      SET_PIN(PORTB, 3);
    }
  }

  return 0;
}