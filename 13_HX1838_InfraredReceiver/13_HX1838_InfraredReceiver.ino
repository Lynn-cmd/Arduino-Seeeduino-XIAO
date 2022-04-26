/*【Arduino】168种传感器模块系列实验（资料代码+图形编程+仿真编程）
实验七十一：HX1838红外无线遥控套件红外扩展模块(遥控器+接收板)*/
  
#include <IRremote.h>
int PIN_RECV = 3;
 
IRrecv irrecv(PIN_RECV);
decode_results results;
 
void setup()
{
 Serial.begin(9600);
  irrecv.enableIRIn();
}
 
void loop() {
 if (irrecv.decode(&results)) {
  Serial.println(results.value);
  irrecv.resume();
 }
}