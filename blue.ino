int state=0;

void setup() {
  Serial.begin(9600);
  analogWrite(10,0);
  //pinMode(LED, OUTPUT); 
}

void loop()
{
    int i=0;
    if(Serial.available()>0)
    {
      state = Serial.read();
      state=state-48;
      Serial.println(state);

      if(state==1)
      {
               for(i=0;i<=255;i++)
                  {     
                           analogWrite(10,i);
                           delay(50);
                           Serial.println("Brigjhtness of GREEN LED is increasing");
                  }
        
      }
      if(state==3)
      {
               for(i=0;i<=255;i++)
                  {     
                           analogWrite(7,i);
                           delay(50);
                           Serial.println("Brigjhtness of RED LED is increasing");
                  }
        
      }
      if(state==5)
      {
               for(i=0;i<=255;i++)
                  {     
                           analogWrite(12,i);
                           delay(50);
                           Serial.println("Brigjhtness of WHITE LED is increasing");
                  }
        
      }
      if(state==2)
      {
               for(i=255;i>=0;i--)
                  {     
                           analogWrite(10,i);
                           delay(50);
                           Serial.println("Brigjhtness of GREEN LED is decreasing");
                  }
        
      }
      if(state==4)
      {
               for(i=255;i>=0;i--)
                  {     
                           analogWrite(7,i);
                           delay(50);
                           Serial.println("Brigjhtness of RED LED is decreasing");
                  }
        
      }
      if(state==6)
      {
               for(i=255;i>=0;i--)
                  {     
                           analogWrite(12,i);
                           delay(50);
                           Serial.println("Brigjhtness of WHITE LED is increasing");
                  }
        
      }

    }
}
