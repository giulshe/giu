class motor {
  private:
  bool estado;
  int terminal;
  public:
  void ligarMotor();
  void desligarMotor();
  void setTerminal(int);
 };
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

}
motor meuMotor;
void setup() {
  meuMotor.setTerminal(2);
}
void loop(){
  meuMotor.ligarMotor();
  delay(1000);
  meuMotor.desligarMotor();
  delay(1000);
}
