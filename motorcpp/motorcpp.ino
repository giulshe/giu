void motor::setTerminal(int terminal){
  this->terminal= terminal;
  pinMode(this->terminal, OUTPUT);  
 }
  void motor::ligarMotor(){
    if(this->terminal >=0 && this->terminal <=13){
      digitalWrite(this->terminal, HIGH);
      this->estado = HIGH;
    }
  }
void motor::desligarMotor(){
  if(this->terminal >=0 && this->terminal <=13){
    digitalWrite(this->terminal, LOW);
    this->estado= LOW;
  }
