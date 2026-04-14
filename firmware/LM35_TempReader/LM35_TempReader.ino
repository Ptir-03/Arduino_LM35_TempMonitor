const int sensor1Pin = A0;
const int sensor2Pin = A1;
int adcValues[2]; // Mảng chứa 2 giá trị ADC
float temp[2];    // Mảng chứa 2 giá trị nhiệt độ

void setup() {
  // SV A thêm dòng này để tạo conflict
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị ADC từ 2 kênh A0 và A1
  adcValues[0] = analogRead(sensor1Pin);
  adcValues[1] = analogRead(sensor2Pin);

  // Chuyển đổi sang độ C (giả sử nguồn 5V, LM35 tăng 10mV/độ)
  temp[0] = (adcValues[0] * 5.0 * 100.0) / 1024.0;
  temp[1] = (adcValues[1] * 5.0 * 100.0) / 1024.0;

  // Gửi dữ liệu định dạng CSV (nhiệt độ 1, nhiệt độ 2)
  Serial.print(temp[0]);
  Serial.print(",");
  Serial.println(temp[1]);

  delay(1000); // Đọc mỗi giây 1 lần
}
