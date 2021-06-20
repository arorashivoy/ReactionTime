short btn = 13;
short led[11] = {2,3,4,5,6,7,8,9,10,11,12};
short pos=0;
int t= 1000;
short lvl =1;
short forward = 1;

void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,INPUT);
  
}


void loop(){
  pos=0;
  lvl=1;
  while (1){
    if (pos == 10){
      forward = 0;
    }
    if (pos == 0){
      forward=1;
    }
    
    digitalWrite(led[pos],HIGH);
    delay(t/(4*lvl)); //done 4 times to detect single click
    if (digitalRead(btn)==HIGH) 
    {
      if (pos==5){
        lvl++;
        delay(2000);
        digitalWrite(led[pos],LOW);
        pos =0;
        forward=1;
      }
      else{
        delay(1500);
        digitalWrite(led[pos],LOW);
        break;
    
      }
    }
    delay(t/(4*lvl));
    if (digitalRead(btn)==HIGH) 
    {
      if (pos==5){
        lvl++;
        delay(2000);
        digitalWrite(led[pos],LOW);
        pos =0;
        forward=1;
      }
      else{
        delay(1500);
        digitalWrite(led[pos],LOW);
        break;
    
      }
    }
    delay(t/(4*lvl));
    if (digitalRead(btn)==HIGH) 
    {
      if (pos==5){
        lvl++;
        delay(2000);
        digitalWrite(led[pos],LOW);
        pos =0;
        forward=1;
      }
      else{
        delay(1500);
        digitalWrite(led[pos],LOW);
        break;
    
      }
    }
    delay(t/(4*lvl));
    if (digitalRead(btn)==HIGH) 
    {
      if (pos==5){
        lvl++;
        delay(2000);
        digitalWrite(led[pos],LOW);
        forward=1;
        pos =0;
      
      }
      else{
        delay(1500);
        digitalWrite(led[pos],LOW);
        break;
    
      }
    }
    digitalWrite(led[pos],LOW);
    if (forward == 1){ 
      pos++;
    }
    if (forward == 0){
      pos--;
    }    
  }
}
