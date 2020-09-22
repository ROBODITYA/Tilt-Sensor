int sensor_led=13;
int sensor_input=3;
unsigned char state=0;

void setup()
{
  pinMode(sensor_led, OUTPUT);
  pinMode(sensor_input, INPUT);
  
  attachInterrupt(1,blink,RISING);
}
void loop()
{
  if(state!=0)
  {
    state=0;
    digitalWrite(sensor_led, HIGH);
    delay(1000);
  }
  else
    digitalWrite(sensor_led, LOW);
}
void blink()
{
  state++;
}
