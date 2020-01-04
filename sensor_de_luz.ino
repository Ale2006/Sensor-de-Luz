/*
 * ldr1 A0
 * ldr2 A1
 * Salida PWM D11  coenctado con R10k al Gate, entre Gate y Source R100k
 * 
 * 
 *        masa
 *       |
 *       <
 *       > R10k
 *       |
 * Señal-----\
 *        ---/ LDR
 *       |
 *       5V
*/

int led=11;
int ldr1=0;
int ldr2=1;
int valor=0;


void setup() {
pinMode (led,OUTPUT);
pinMode (ldr1, INPUT);
pinMode (ldr2, INPUT);
Serial.begin(9600);
}

void loop() {

int lec1= analogRead (ldr1)/4;
int lec2= analogRead (ldr2)/4;
//Serial.print("Monitor (Ldr1): ");
//Serial.println(lec1);
//Serial.print("PWM: ");
//Serial.println(valor);
//Serial.print("Ambiente (Ldr2): ");
//Serial.println(lec2);
//delay(500);

if(lec1<lec2 && valor>5){
  valor--;
  
  }
  else
  {
    if(valor<254)
    valor++;
   }

analogWrite (led,valor);

}
