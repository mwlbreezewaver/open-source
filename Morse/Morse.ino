#include <Morse.h>   
 Morse test(13);   
String strings; // for incoming serial data//定义字符串数组
int i=0;
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
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
        {   case 'a':test.dot();test.dash();break;
            case 'b':test.dash();test.dot();test.dot();test.dot();break;
            case 'c':test.dash();test.dot();test.dash();test.dot();break;
            case 'd':test.dash();test.dot();test.dot();break;
            case 'e':test.dot();break;
            case 'f':test.dot();test.dot();test.dash();test.dot();break;
            case 'g':test.dash();test.dash();test.dot();break;
            case 'h':test.dot();test.dot();test.dot();test.dot();break;
            case 'i':test.dot();test.dot();break;
            case 'j':test.dot();test.dash();test.dash();test.dash();break;
            case 'k':test.dash();test.dot();test.dash();break;
            case 'l':test.dot();test.dash();test.dot();test.dot();break;
            case 'm':test.dash();test.dash();break;
            case 'n':test.dash();test.dot();break;
            case 'o':test.dash();test.dash();test.dash();test.dash();break;
            case 'p':test.dot();test.dash();test.dash();test.dot();break;
            case 'q':test.dash();test.dash();test.dot();test.dash();break;
            case 'r':test.dot();test.dash();test.dot();break;
            case 's':test.dot();test.dot();test.dot();break;
            case 't':test.dash();break;
            case 'u':test.dot();test.dot();test.dash();break;
            case 'v':test.dot();test.dot();test.dot();test.dash();break;
            case 'w':test.dot();test.dash();test.dash();break;
            case 'x':test.dash();test.dot();test.dot();test.dash();break;
            case 'y':test.dash();test.dot();test.dash();test.dash();break;
            case 'z':test.dash();test.dash();test.dot();test.dot();break;
        }
        delay(1);
      } 
    
  delay(1.5);
}
