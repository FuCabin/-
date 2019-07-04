void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);//声明使用的接线端口
  Serial.begin(9600);
}
int income=0;
void loop()
{
    if(Serial.available()>0)
    {
        income=Serial.read();
        switch(income)
        {
            case 'f':forward();break;
            case 'b':backward();break;
            case 'l':left();break;
            case 'r':right();break;
            case 's':stop();break;
            default:break;//控制小车各个行动的缩写命令
        }
    }
}

void forward()
{
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);//控制前进

}

void backward()
{
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);//控制后退
}

void left()
{
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);//控制左转
}

void right()
{
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);

//控制右转
}

void stop()
{
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(13,LOW);
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);//控制停车
}
