int tp1=7;
int tp2=7;
int tp3=7;
int tp4=7;
int tp5=7;

int ep1=8;
int ep2=9;
int ep3=10;
int ep4=11;
int ep5=12;

void setup()
{
  Serial.begin(9600);
 pinMode(tp1, OUTPUT);
 pinMode(ep1,INPUT);
  pinMode(tp2, OUTPUT);
 pinMode(ep2,INPUT);
  pinMode(tp3, OUTPUT);
 pinMode(ep3,INPUT);
  pinMode(tp4, OUTPUT);
 pinMode(ep4,INPUT);
  pinMode(tp5, OUTPUT);
 pinMode(ep5,INPUT);
}

void loop()
{
long time1;
long distance1;
String status1;
digitalWrite(tp1,LOW);
delay(10);
digitalWrite(tp1,HIGH);
delay(10);
digitalWrite(tp1,LOW);
  
time1 = pulseIn(ep1,HIGH);
distance1 = 344*time1/2000;//distn in mm
Serial.println(distance1);
 if(distance1<200){
          
          status1="is full";
          digitalWrite(6,HIGH);
          }
        else{
          
          status1="is empty";
          digitalWrite(6,LOW);
        }
   Serial.println("1");
   Serial.println(status1);
  
long time2;
long distance2;
String status2;
digitalWrite(tp2,LOW);
delay(10);
digitalWrite(tp2,HIGH);
delay(10);
digitalWrite(tp2,LOW);
  
time2 = pulseIn(ep2,HIGH);
distance2 = 344*time2/2000;//distn in mm
Serial.println(distance2);
 if(distance2<200){
          
          status2="is full";
          digitalWrite(5,HIGH);
          }
        else{
          
          status2="is empty";
          digitalWrite(5,LOW);
        }
   Serial.println("2");
   Serial.println(status2);
  
long time3;
long distance3;
String status3;
digitalWrite(tp3,LOW);
delay(10);
digitalWrite(tp3,HIGH);
delay(10);
digitalWrite(tp3,LOW);
  
time3 = pulseIn(ep3,HIGH);
distance3 = 344*time3/2000;//distn in mm
Serial.println(distance3);
 if(distance3<200){
          
          status3="is full";
          digitalWrite(4,HIGH);
          }
        else{
          
          status3="is empty";
          digitalWrite(4,LOW);
        }
        
   Serial.println("3");
   Serial.println(status3);
  
long time4;
long distance4;
String status4;
digitalWrite(tp4,LOW);
delay(10);
digitalWrite(tp4,HIGH);
delay(10);
digitalWrite(tp4,LOW);
  
time4 = pulseIn(ep4,HIGH);
distance4 = 344*time4/2000;//distn in mm
Serial.println(distance4);
 if(distance4<200){
          
          status4="is full";
          digitalWrite(3,HIGH);
          }
        else{
          
          status4="is empty";
          digitalWrite(3,LOW);
        } 
  Serial.println("4");
   Serial.println(status4);
  
long time5;
long distance5;
String status5;
digitalWrite(tp5,LOW);
delay(10);
digitalWrite(tp5,HIGH);
delay(10);
digitalWrite(tp5,LOW);
  
time5 = pulseIn(ep5,HIGH);
distance5 = 344*time5/2000;//distn in mm
Serial.println(distance5);
 if(distance5<200){
          
          status5="is full";
          digitalWrite(2,HIGH);
          }
        else{
          
          status5="is empty";
          digitalWrite(2,LOW);
        }
   Serial.println("5");
   Serial.println(status5);
}
