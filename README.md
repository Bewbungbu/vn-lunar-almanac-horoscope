# 🌕 Lịch Vạn Niên & Tử Vi Phong Thủy (Windhawk Mod cho Windows 10 & 11)

![Version](https://img.shields.io/badge/version-0.1.3-blue)
![Platform](https://img.shields.io/badge/platform-Windows%2010%20%7C%2011%20(x86--64)-0078D6)
![License](https://img.shields.io/badge/license-GPL--3.0-green)

Bản Mod dành cho **Windhawk** giúp tích hợp **Âm lịch Việt Nam**, **24 Tiết Khí**, **Bát tự Can Chi**, **Ngũ Hành Nạp Âm**, **Đồng bộ Ghi chú Google Calendar (.ics)** và **Tử Vi cá nhân hóa theo năm sinh** trực tiếp vào thanh Taskbar, hộp chú thích (Tooltip) và khay Lịch (Calendar Flyout) của **Windows 10** và **Windows 11**.

## ✨ Tính năng nổi bật
- **Đồng hồ Taskbar 2 dòng:** Hiển thị song song Dương lịch và Âm lịch Can Chi (chuẩn múi giờ UTC+7).
- **Khay Lịch tháng thông minh:**
  * Đánh dấu ngôi sao **(★)** cho ngày Hợp tuổi (Tam Hợp, Lục Hợp, Tương Sinh) và dấu **(!)** cho ngày Xung tuổi.
  * Đánh dấu chấm **(•)** cạnh ngày Dương lịch có sự kiện Google Calendar (ví dụ: `25•`).
  * Tự động tô đỏ các ngày Lễ, Tết truyền thống Việt Nam.
- **Bảng Chi tiết Tử Vi & Ghi chú (Fluent Card UI):** Bấm vào bất kỳ ngày nào trên lịch để xem chi tiết lịch trình Google Calendar, Bát tự, Nạp âm, Sao Hoàng/Hắc Đạo, 12 Trực, Giờ Hoàng Đạo và hướng xuất hành.
- **Hộp chú thích (Tooltip) hiện đại & Bảo mật riêng tư:** Hỗ trợ nền trong suốt với biểu tượng cảm xúc màu (Color Emoji) trên cả Windows 10 & 11, đồng thời cho phép ẩn nội dung ghi chú nhạy cảm khi vô tình rê chuột qua đồng hồ Taskbar.

## 🚀 Cách cài đặt vào Windhawk
1. Tải và cài đặt phần mềm [Windhawk](https://windhawk.net/).
2. Mở Windhawk, bấm vào nút **Create a new mod** (Tạo mod mới) ở góc dưới bên phải.
3. Sao chép toàn bộ mã nguồn tương ứng với hệ điều hành của bạn và dán đè vào cửa sổ soạn thảo của Windhawk:
   * 💻 **Dành cho Windows 11:** Sao chép nội dung tệp [`vn-lunar-almanac-horoscope-win11.wh.cpp`](./vn-lunar-almanac-horoscope-win11.wh.cpp)
   * 🖥️ **Dành cho Windows 10:** Sao chép nội dung tệp [`vn-lunar-almanac-horoscope-win10.wh.cpp`](./vn-lunar-almanac-horoscope-win10.wh.cpp)
4. Nhấn **Compile Mod** (Biên dịch) và chuyển sang tab **Settings** (Cài đặt) để nhập Năm sinh Âm lịch cũng như link `.ics` Google Calendar của bạn.
