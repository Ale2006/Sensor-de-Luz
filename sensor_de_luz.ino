int ldr1=0;
int ldr2=1;

void setup() {
  pinMode (ldr1,INPUT);
  pinMode (ldr2,INPUT);
  Serial.begin(9600);
}

void loop() {
  double sensor1;
  double sensor2;
  sensor1= analogRead(ldr1);
  sensor2= analogRead(ldr2);
  Serial.print("Ambiente: ");
  Serial.print(sensor2);
   Serial.print("    Monitor: ");
  Serial.println(sensor1);
  delay(200);
}
