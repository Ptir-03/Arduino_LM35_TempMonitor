const int sensor1Pin = A0;
const int sensor2Pin = A1;
const int sensor3Pin = A2; // THÊM MỚI: Chân cho cảm biến thứ 3

int adcValues[3]; // THAY ĐỔI: Tăng mảng lên 3 phần tử
float temp[3];    // THAY ĐỔI: Tăng mảng lên 3 phần tử

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị ADC từ 3 kênh A0, A1 và A2
  adcValues[0] = analogRead(sensor1Pin);
  adcValues[1] = analogRead(sensor2Pin);
  adcValues[2] = analogRead(sensor3Pin); // THÊM MỚI

  // Chuyển đổi sang độ C cho cả 3 cảm biến
  temp[0] = (adcValues[0] * 5.0 * 100.0) / 1024.0;
  temp[1] = (adcValues[1] * 5.0 * 100.0) / 1024.0;
  temp[2] = (adcValues[2] * 5.0 * 100.0) / 1024.0; // THÊM MỚI

  // Gửi dữ liệu định dạng CSV (nhiệt độ 1, nhiệt độ 2, nhiệt độ 3)
  Serial.print(temp[0]);
  Serial.print(",");
  Serial.print(temp[1]);
  Serial.print(",");
  Serial.println(temp[2]); // THÊM MỚI

  delay(1000); 
}