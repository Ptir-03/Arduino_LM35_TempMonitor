const int sensorPin1 = A0; 
const int sensorPin2 = A1; 

void setup() { 
  Serial.begin(9600);
}

void loop() {
  // Đọc dữ liệu
  int read1 = analogRead(sensorPin1);
  float temp1 = (read1 * 5.0 / 1024.0) * 100.0;

  int read2 = analogRead(sensorPin2);
  float temp2 = (read2 * 5.0 / 1024.0) * 100.0;
  
  // In ra định dạng JSON: {"temp1": 25.5, "temp2": 26.0}
  Serial.print("{\"temp1\": ");
  Serial.print(temp1);
  Serial.print(", \"temp2\": ");
  Serial.print(temp2);
  Serial.println("}");
  
  delay(2000); 
}