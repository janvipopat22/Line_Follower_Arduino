#define rf 5
#define rb 3
#define lf 10
#define lb 11
void setup() {
  // put your setup code here, to run once:
  int a,b;
   Serial.begin(9600);
   void stop();
   analogRead(rf);
   analogRead(lf);
   a=rf;
   b=lf;
   for(; a>=0; a-20)
   {
   _delay_ms(100);
   }
   for(; b>=0; b-20)
   {
   _delay_ms(100);
   }
   analogWrite(rf,a);
   analogWrite(rb,0);
   analogWrite(lf,b);
   analogWrite(lb,0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
