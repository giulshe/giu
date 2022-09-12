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
