const int hot = 87;
const int cold = 75; 
int i=0;
void setup()
{
  pinMode(A2, INPUT); 
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT); 
  Serial.begin(9600);
}
void loop() 
{ 
  int sensor = analogRead(A2);
  float voltage = (sensor / 1024.0) * 5.0;
  float tempC = (voltage - .5) * 100;
  float tempF = (tempC * 1.8) + 32;
  Serial.print("temp: ");
  Serial.print(tempF);
  if(tempF >=hot){
for(i=1;i<=5;i++){
   digitalWrite(10,HIGH);
   delay(200);
   digitalWrite(10,LOW);
   delay(200);
   }
     digitalWrite(10,LOW);
  while(1){
     digitalWrite(9,HIGH);
   delay(200);
   digitalWrite(9,LOW);
   delay(200);
  }
  }
  }