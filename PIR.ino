void setup()
{
  pinMode(13, OUTPUT);
  pinMode(4, INPUT);
  
}

void loop()
{
  int A = digitalRead(4);
  
  if(A==1){
    digitalWrite(13, HIGH);
  }
   if(A==0){
    digitalWrite(13, LOW);
  }

}