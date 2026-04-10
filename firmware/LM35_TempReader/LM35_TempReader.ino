const int lm35Pin = A0; // Khai báo chân Analog A0 nối với LM35

void setup() {
  Serial.begin(9600);   // Khởi tạo giao tiếp Serial ở baudrate 9600
}

void loop() {
  int adcValue = analogRead(lm35Pin); // Đọc giá trị Analog từ chân A0
  
  // Áp dụng công thức chuyển đổi từ giá trị ADC sang nhiệt độ (độ C)
  float temperature = (adcValue * 500.0) / 1023.0; 
  
  // In kết quả ra Serial Monitor
  Serial.print("Nhiet do: ");
  Serial.print(temperature);
  Serial.println(" *C");
  
  delay(1000); // Đợi 1 giây trước khi đọc lại
}