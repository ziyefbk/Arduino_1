/*
 * @Author: ziyefbk 2827567189@qq.com
 * @Date: 2024-05-17 17:45:23
 * @LastEditors: ziyefbk 2827567189@qq.com
 * @LastEditTime: 2024-05-17 19:53:20
 * @FilePath: \xlab\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
// put function declarations here:

void setup() {
  // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
for(int i = 2; i < 8; i++)
pinMode(i,OUTPUT);
}
void spark(){
  for(int i = 2; i < 8; i++ )
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
  }
  for(int i = 7;i >= 2;i--)
  {
    digitalWrite(i , HIGH);
    delay(500);
    digitalWrite(i , LOW);
    }
}
void smooth(){
  for(int j = 0;j<=255;j++){
    for(int i = 2;i<8;i++){
      analogWrite(i,j);
    }
    delay(5);
  }
  for(int j = 255;j>=0;j--){
    for(int i = 2;i<8;i++){
      analogWrite(i,j);
    }
    delay(5);
  }
}
void loop() {
  spark();
  smooth();
}