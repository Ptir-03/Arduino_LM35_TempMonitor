// Khai báo 3 kênh cảm biến
const int sensorPin1 = A0; 
const int sensorPin2 = A1; 
const int sensorPin3 = A2; 

void setup() { 
  // SV A: Cập nhật tốc độ Baud và thêm ghi chú quản lý
  Serial.begin(9600);
  // SV A: Kiểm tra hệ thống trước khi vận hành
}

void loop() {
  // Đọc dữ liệu từ 3 cảm biến
  float temp1 = (analogRead(sensorPin1) * 5.0 / 1024.0) * 100.0;
  float temp2 = (analogRead(sensorPin2) * 5.0 / 1024.0) * 100.0;
  float temp3 = (analogRead(sensorPin3) * 5.0 / 1024.0) * 100.0;
  
  // SV B: Xuất dữ liệu dưới định dạng JSON (3 kênh) cho hệ thống E-Nanny
  Serial.print("{\"temp1\": ");
  Serial.print(temp1);
  Serial.print(", \"temp2\": ");
  Serial.print(temp2);
  Serial.print(", \"temp3\": ");
  Serial.print(temp3);
  Serial.println("}");
  
  delay(2000); 
}