#include<avr/io.h>
#include<util/delay.h>

int main(void){
  DDRB=(1<<PB5);//pino 5 da porta B como saída. 1=saída, 0=entrada, todos os outros pinos como entrada
  while(1){
    PORTB|=(1<<PB5);//liga o pino PB5 (5V)
    _delay_ms(1000); //espera 1000ms (1s)
    PORTB&=~(1<<PB5);// desliga o pino PB5 (0V)
    _delay_ms(1000);
  }
}
