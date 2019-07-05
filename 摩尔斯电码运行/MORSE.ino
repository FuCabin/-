char ch_get = '?';

String num = "";
void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
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
       char a[] = num;
       int i = strlen(a);
       for(int j=0;j<i;j++)
{     
       if(a[j] = '*')
       { digitalWrite(6,HIGH);
         digitalWrite(7,LOW);
         delay(1000);
         digitalWrite(6,LOW);
         digitalWrite(7,LOW);
       }
       if(a[j] = '-') 
       {digitalWrite(6,HIGH);
        digitalWrite(7,LOW);  
        delay(3000);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
       }
}
}
}
