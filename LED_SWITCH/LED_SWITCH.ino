#define LED_PIN 2
#define SWITCH_PIN 3

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT);  //CONFIGURES AS OUTPUT
  pinMode(SWITCH_PIN,INPUT_PULLUP); //CONFIGURES AS INPUT WITH 
                                    //PULLUP RESISTORS

}


void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SWITCH_PIN) == LOW){
    delay(200);                     //debounce switch
    digitalWrite(LED_PIN,HIGH);     //turn on LED
    delay(2000);                    //wait 2 seconds
    digitalWrite(LED_PIN,LOW);      //turn off LED
  }
}
