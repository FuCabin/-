#include<string.h>
char ch_get = '?';

String num = "";
void setup() {
   Serial.begin(9600);
}

void loop() {
    if(Serial.available()>0){
      ch_get = Serial.read(); 
      }else{
        Serial.print(num);
        
        }
    if(ch_get==' ' || ch_get=='\n'){
      num += " /";
      }
    else{
      switch(ch_get){
        case 'a':num += "*-"; break; 
        case 'b':num += "-***";  break;
        case 'c':num += "-*-*";   break;
        case 'd':num += "-**";  break;
        case 'e':num += "*";break;
        case 'f':num += "**-*";  break;
        case 'g':num += "--*";break;
        case 'h':num += "****";break;
        case 'i':num += "**";   break;
        case 'j':num += "*---";break;
        case 'k':num += "-*-";break;
        case 'l':num += "*-**";   break;
        case 'm':num += "--";break;
        case 'n':num += "-*";break;
        case 'o':num += "---";break;
        case 'p':num += "*--*";break;
        case 'q':num += "--*-";break;
        case 'r':num += "*-*";break;
        case 's':num += "***";  break;
        case 't':num += "-";  break;
        case 'u':num += "**-";break;
        case 'v':num += "***-";  break;
        case 'w':num += "*--";break;
        case 'x':num += "-**-";break;
        case 'y':num += "-*--";break;
        case 'z':num += "--**";  break;

        }
      } 
for(int i=0;i<4;i++){
          if(num[i] == '*'){
              on(1);
              off(1);
          }else if(num[i] == '-'){
              on(3);
              off(1);
          }else if(num[i] == '/'){
              off(4);
          }
          
          
      }
      off(2);
      num = "";
      }

void on(int time){
    int baseTime = 200;
    digitalWrite(7, HIGH);
    delay(time * baseTime);

}

void off(int time){
    int baseTime = 200;
    digitalWrite(7, LOW);
    delay(time * baseTime);
}
