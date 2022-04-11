int ledred = D7;
int ledyellow = D6;
int ledgreen = D5;

void setup()
{

   pinMode(ledred, OUTPUT);
   pinMode(ledyellow, OUTPUT);
   pinMode(ledgreen, OUTPUT);

    //this exposes ledFunction to the cloud and lets us send a command to the device using the API
   Particle.function("ledFunction",toggleLight);

   digitalWrite(ledred, LOW);
   digitalWrite(ledyellow, LOW);
   digitalWrite(ledgreen, LOW);

}


void loop()
{

}


int toggleLight(String function) {


    if (function=="red") {
       digitalWrite(ledred, HIGH);
       digitalWrite(ledyellow, LOW);
       digitalWrite(ledgreen, LOW);
       return 1;

    }
    if (function=="yellow") {
       digitalWrite(ledred, LOW);
       digitalWrite(ledyellow, HIGH);
       digitalWrite(ledgreen, LOW);
       return 1;

    }
    if (function=="green") {
       digitalWrite(ledred, LOW);
       digitalWrite(ledyellow, LOW);
       digitalWrite(ledgreen, HIGH);
       return 1;

    }
    else
    {
        return -1;
    }
}

