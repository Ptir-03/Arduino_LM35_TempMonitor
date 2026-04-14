const int sensorPin1 = A0; 
const int sensorPin2 = A1; 

<<<<<<< HEAD
void setup() { 
=======
void setup() {
  // SV A thêm dòng này để tạo conflict
>>>>>>> main
  Serial.begin(9600);
}

void loop() {
  // Đọc dữ liệu
  int read1 = analogRead(sensorPin1);
  float temp1 = (read1 * 5.0 / 1024.0) * 100.0;

<<<<<<< HEAD
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
=======
  // Chuyển đổi sang độ C (giả sử nguồn 5V, LM35 tăng 10mV/độ)
  temp[0] = (adcValues[0] * 5.0 * 100.0) / 1024.0;
  temp[1] = (adcValues[1] * 5.0 * 100.0) / 1024.0;

  // Gửi dữ liệu định dạng CSV (nhiệt độ 1, nhiệt độ 2)
  Serial.print(temp[0]);
  Serial.print(",");
  Serial.println(temp[1]);

  delay(1000); // Đọc mỗi giây 1 lần
}
>>>>>>> main
