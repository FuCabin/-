void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

int number = 0,i=0;
int a[] = {0,1,2,3,4,5,6,7,8,9};
int arr[4]={0, 0, 0, 0};
int count = 0;
int j=0;
void loop()
{
  if(Serial.available()>0){
      number = Serial.read() - '0';
      Serial.print("Please give a number:");
      Serial.println(number);
    for(;i<10;i++)
  {
    if(i<0)
      a[i]=a[i+1];
    else
      a[i]=a[i];
  }
  
      if(a[i]>0)
    {   while(number > 0){
        
        if(number % 2 == 0){
            arr[count] = 0;
        }
        else{
            arr[count] = 1;
        }
        
        number = number / 2;
        count ++ ;
   	    }
    } 
    //通过二进制控制7段显示的亮暗
    if(a[i] <= -1&& a[i] >= -9) 
    {
      a[i] = a[i+2];
    }
    for(i = 0;i < 4 ;i++){
    
          if(arr[i]==0){
              digitalWrite(i+2, LOW);
            i--;
    }
          else{
              digitalWrite(i+2, HIGH);
            i++;
    }
       //更改7段显示中字母对应项
  }
      if(number == 0)
        a[i]=0;
      Serial.print("Pin:");
      Serial.print(digitalRead(5));
      Serial.print(digitalRead(4));
      Serial.print(digitalRead(3));
      Serial.print(digitalRead(2));     
      Serial.println();Serial.print("The number is");
      for(;j<4;j++){
          Serial.print(arr[j]);
    }   
      Serial.println();
  }
}
