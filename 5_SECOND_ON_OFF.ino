int pinButton = 8;
int LED       = 2;
int StateButton = 1;

void setup() {
 // pinMode(pinButton, INPUT); //set the switch pin as INPUT
    pinMode(pinButton, INPUT_PULLUP);
    pinMode(LED, OUTPUT); //set the LED pin as OUTPUT
}

void loop() {

    int stateButton = digitalRead(pinButton); //read the state of the switch

    Serial.println (stateButton);

 // if (stateButton == 1) { //if is switched on
    if (stateButton == 0) { //if is switched on
        digitalWrite(LED, HIGH);//write 1 to LED
        delay(5000);
        digitalWrite(LED, LOW);//write 0 to LED
    }
    else { //if not pressed
        digitalWrite(LED, LOW);    //write 0 to LED
    }

 // int stateButton = digitalRead(pinButton); //read the state of the switch
 //     while (stateButton == 1) {
 //         delay(1);
 //     }
}
