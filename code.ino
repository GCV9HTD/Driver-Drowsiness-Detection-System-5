//Auther-Sanket Hiremath
//connect the x axis output to the A0 pin of the arduino nano.
//connect the ir sensor output to the digital pin 2. 
//connect the buzzer positive terminal to digital pin 8 of arduino. 
int ir=2;
int xPin=A0;
int out1=8;     

void setup(){
  pinMode(xPin,INPUT);
  pinMode(ir,INPUT);

  pinMode(out1,OUTPUT);
 
}


void loop() 
{
   int irval=digitalRead(ir);
   
  if(irval==HIGH)
  
  {
   
    
    int xval=analogRead(xPin);
  if ((xval>376 && xval<430)) //stop
  {
    digitalWrite(out1,LOW);  
   } 
  else if((xval<376 && xval>430))
  {
    digitalWrite(out1,HIGH);
  }
    else
     {
      digitalWrite(out1,HIGH);
      
     }
  
  }
  else
  {
    digitalWrite(out1,LOW);
     
     }
}
       
  

