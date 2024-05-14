/*****************************
 *   Edusesc Taguatinga      *
 *   Nome: Yan Silva         *
 *   Itinerário de robótica  *
 *   *************************
 */
 const int LED =13;

 void setup(){
  pinMode(LED,OUTPUT);
 }
 
 void loop(){
digitalWrite(LED,LOW);
delay(15); 

digitalWrite(LED, HIGH);
delay(15);
 }
