#include <Arduino.h>     
String strings; // for incoming serial data//定义字符串数组
int i=0;
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
   
}
 
  

void dot() {   
  digitalWrite(2, HIGH);   
  delay(250);   
  digitalWrite(2, LOW);   
  delay(250);   
  }   
void dash() {   
  digitalWrite(2, HIGH);   
  delay(1000);   
  digitalWrite(2, LOW);   
  delay(250); 
  } 
  void c_space() {      
  digitalWrite(2, LOW);   
  delay(250*3); 
  } 
void loop() 
{
  // reply only when you receive data:
 while(Serial.available() > 0)
  {
    strings += char(Serial.read());//读取字符串
  }
    for(i=0;i<sizeof(strings)-1;i++)//逐个将字符串里的字符转换成摩尔斯码
     {
      switch(strings[i])
        {   case 'a':dot();dash();break;
            case 'b':dash();dot();dot();dot();break;
            case 'c':dash();dot();dash();dot();break;
            case 'd':dash();dot();dot();break;
            case 'e':dot();break;
            case 'f':dot();dot();dash();dot();break;
            case 'g':dash();dash();dot();break;
            case 'h':dot();dot();dot();dot();break;
            case 'i':dot();dot();break;
            case 'j':dot();dash();dash();dash();break;
            case 'k':dash();dot();dash();break;
            case 'l':dot();dash();dot();dot();break;
            case 'm':dash();dash();break;
            case 'n':dash();dot();break;
            case 'o':dash();dash();dash();dash();break;
            case 'p':dot();dash();dash();dot();break;
            case 'q':dash();dash();dot();dash();break;
            case 'r':dot();dash();dot();break;
            case 's':dot();dot();dot();break;
            case 't':dash();break;
            case 'u':dot();dot();dash();break;
            case 'v':dot();dot();dot();dash();break;
            case 'w':dot();dash();dash();break;
            case 'x':dash();dot();dot();dash();break;
            case 'y':dash();dot();dash();dash();break;
            case 'z':dash();dash();dot();dot();break;
        }
        delay(1);
      } 
    
  delay(1.5);
}
