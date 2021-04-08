<<<<<<< HEAD
#define MQ3pin A3

float sensorValue;  //variable to store sensor value

void setup() {
  Serial.begin(9600); // sets the serial port to 9600
  Serial.println("MQ3 warming up!");
  //delay(20000); // allow the MQ3 to warm up
}

void loop() {
  sensorValue = analogRead(MQ3pin); // read analog input pin 0

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  delay(200); // wait 2s for next reading
=======
int a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
>>>>>>> cc6d2bf78332edaa9f73a03270465b26bd6c3f38
}
