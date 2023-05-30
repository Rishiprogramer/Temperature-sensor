float temp;
int tempPin = 1;

void setup() {
   Serial.begin(9600);
}

void loop() {
   temp = analogRead(tempPin);
  Serial.println(temp);
   // read analog volt from sensor and save to variable temp
    float voltage = temp * 5.0 / 1024;
    float temperatureC = (voltage - 0.5) * 100;
  
   // convert the analog volt to its temperature equivalent
   Serial.print("TEMPERATURE = ");
   Serial.print(temperatureC); // display temperature value
   Serial.print("*C");
   Serial.println();
   delay(1); // update sensor reading each one second
}
