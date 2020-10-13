#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "oxAzM6_bh5mZGf36Fzix-Ql_2XBwZQzR"; //You will get this Auth Token in Gmail if you signin Blynk app with your Gmail ID

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Boogie"; //Enter your WIFI Name
char pass[] = "Aaaaaa11";//Enter your WIFI Password

void setup()
{

  Blynk.begin(auth, ssid, pass);
 
}

void loop()
{
  Blynk.run();
}
