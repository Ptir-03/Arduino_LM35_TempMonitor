Dự án Giám sát nhiệt độ Arduino LM35
1. Mô tả
Dự án theo dõi nhiệt độ môi trường sử dụng cảm biến LM35 kết hợp với vi điều khiển Arduino. Hệ thống đọc giá trị analog từ các cảm biến và truyền dữ liệu lên máy tính để giám sát.

2. Tính năng
- Đọc nhiệt độ đồng thời từ 3 kênh cảm biến (A0, A1, A2).
- Đóng gói và xuất dữ liệu qua cổng Serial dưới định dạng chuẩn JSON để dễ dàng xử lý bằng phần mềm trên máy tính.

3. Phần cứng
| Linh kiện          | Số lượng | Công dụng                     |
| Board Arduino Uno  |    1     | Vi điều khiển xử lý trung tâm |
| Cảm biến LM35      |    3     | Đo nhiệt độ                   |           
| Dây cắm & Testboard|  Nhiều   | Kết nối các linh kiện         |

4. Hướng dẫn sử dụng
	1. Lắp ráp mạch: Kết nối chân VCC/GND của LM35 vào nguồn 5V/GND của Arduino, chân Out nối vào A0, A1, A2.
	2. Mở file `.ino` trong thư mục `firmware/` bằng Arduino IDE.
	3. Kết nối Arduino với máy tính và nạp code.
	4. Mở Serial Monitor ở baudrate 9600 để xem luồng dữ liệu JSON trả về.

5. Cấu trúc thư mục
	- `firmware/`: Chứa mã nguồn Arduino điều khiển đọc cảm biến.
	- `pc_app/`: Chứa mã nguồn ứng dụng C# hiển thị đồ thị trên máy tính.
	- `simulation/`: Chứa file mô phỏng sơ đồ mạch trên phần mềm Proteus.
	- `docs/`: Chứa sơ đồ mạch và báo cáo thực hành.

6. Thành viên nhóm
- Phan Nguyễn Công Trí - MSSV: N23DCCI072 (Lớp D23CQCI01-N)
- Nguyễn Quang Anh - MSSV: N23DCCI003 ( Lớp D23CQCI01-N)
