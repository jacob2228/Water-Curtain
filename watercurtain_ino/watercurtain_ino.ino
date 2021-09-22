#define pirPin 2
#define lowertanklow 3
#define lowertankhigh 4
#define uppertanklow 5
#define uppertankhigh 6
#define motorupper 7
#define motorlower 8
int pir ;
int uptlow,upthigh;
void setup()
{
  pinMode(pirPin,INPUT);
  pinMode(uppertanklow,INPUT);
  pinMode(uppertankhigh,INPUT);
  pinMode(motorupper,OUTPUT);
  pinMode(motorlower,OUTPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
}
void loop()
{
  pir=digitalRead(pirPin);
  Serial.print(pir);
  Serial.print("\t");
  Serial.println(digitalRead(12));
  upthigh=digitalRead(uppertankhigh);
  uptlow=digitalRead(uppertanklow);
 
 
    
  if(pir==1){
 
   digitalWrite(motorupper,LOW);
    digitalWrite(motorlower,LOW);
    
  }
  else
  {
   
    
    digitalWrite(motorupper,HIGH);
    digitalWrite(motorlower,HIGH);
    
  }
}
