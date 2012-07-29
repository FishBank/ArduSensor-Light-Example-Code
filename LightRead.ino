/* ArduSensor Light Read

Reads the ArduSensor Light, and prints how much light it has received on the 
Serial monitor

Qtechknow kits required:
  ArduSensor Light
  
made on 12 July 12
created by Quin
*/

int ArduSensorValue;   // variable to store the value of the ArduSensor Light

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor Light
  ArduSensorValue=analogRead(0);

  int val = map(ArduSensorValue, 32, 930, 0, 10);  // convert the value
  // to easily readable numbers
  
  Serial.println(val);  // print the value on the Serial monitor
  delay(100);
}
