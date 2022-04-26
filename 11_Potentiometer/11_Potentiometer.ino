const int potPin=6; //设置电位器模块的连接引脚为6
void setup() {
  Serial.begin(9600); //打开串口并设置串口的波特率
}
void loop() {
  int potVal = analogRead(potPin); //从6引脚读取模拟值
  Serial.print("Value= ");  
  Serial.println(potVal);  //将串口值输送到串口监视器
  Serial.println(potVal,HEX);  //将串口值以十六进制的方式输送到串口监视器
  delay(1000);  //等待100毫秒
}
