void main()

{
int x;
UART1_Init(9600);
Delay_ms(100);
ANSELA = 0xFF;
ANSELB = 0;
ANSELC = 0;
ANSELD = 0;

TRISA = 0xFF;
TRISB = 0;
TRISC = 0;
TRISD = 0;


while(1)

{

x = ADC_Read(1);

if(x > 1500)
{
UART1_Write_Text("The lights are turned on") ;
UART_write(13);
UART_write(10);
PORTB = 0xFF;
PORTD = 0x00;
}
else
{
UART1_Write_Text("The lights are turned off") ;
UART_write(13);
UART_write(10);
PORTB = 0x00;
PORTD = 0xFF;
}

}
}
