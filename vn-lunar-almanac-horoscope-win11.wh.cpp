// ==WindhawkMod==
// @id              vn-lunar-almanac-horoscope
// @name            Vietnamese Lunar Almanac & Personalized Horoscope
// @name:vi-VN      Lịch Vạn Niên & Tử Vi Phong Thủy
// @description     Displays the Vietnamese Lunar Calendar, 24 Solar Terms, Five Elements (Ngũ Hành), Google Calendar notes, and personalized daily Horoscope (Tử Vi) on the Windows 11 taskbar clock, tooltip, and calendar flyout
// @description:vi-VN Hiển thị Âm lịch Việt Nam, 24 Tiết khí, Ngũ hành Nạp âm, đồng bộ ghi chú Google Calendar và Tử Vi cá nhân hóa theo tuổi trên đồng hồ Taskbar, hộp chú thích và khay Lịch Windows 11
// @version         0.1.3
// @author          bewbungbu
// @include         explorer.exe
// @include         ShellExperienceHost.exe
// @include         ShellHost.exe
// @architecture    x86-64
// @compilerOptions -lole32 -loleaut32 -lruntimeobject -lversion -lwinhttp -lurlmon
// @license         GPL-3.0-only
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# 🌕 Lịch Vạn Niên & Tử Vi Phong Thủy (Tích hợp Google Calendar)

Bản Mod biến đồng hồ Taskbar và khay Lịch (Calendar Flyout) mặc định của Windows 11 thành một **Lịch Vạn Niên Việt Nam** hoàn chỉnh, kết hợp **Đồng bộ lịch trình Google Calendar (.ics)** và hệ thống **Tử Vi - Phong Thủy cá nhân hóa theo năm sinh**.

---

## ✨ I. Tổng hợp tất cả các tính năng nổi bật

1. **Hiển thị Âm lịch trực tiếp trên thanh Taskbar:**
   * Hỗ trợ chế độ **2 dòng** (Giờ + Thứ/Ngày Dương lịch ở dòng trên, Ngày/Tháng/Năm Can Chi Âm lịch ở dòng dưới) hoặc chế độ **1 dòng nối tiếp**.
   * Tự động tính toán chính xác **tháng Nhuận** và múi giờ chuẩn Việt Nam (**UTC+7**).
2. **Hộp chú thích (Tooltip) thông minh & Bảo mật riêng tư khi rê chuột vào đồng hồ:**
   * Thiết kế phân tầng gọn gàng, chống tràn dòng, giúp xem nhanh thông tin ngày Âm lịch, Lễ Tết, Bát tự, Ngũ hành và gợi ý Tử Vi.
   * Hiển thị lịch trình Google Calendar trong ngày kèm theo các sự kiện sắp tới.
   * **Chế độ Riêng Tư:** Cho phép bật/tắt hiển thị nội dung ghi chú Google Calendar trên hộp rê chuột để tránh lộ thông tin cá nhân khi làm việc nơi công cộng hoặc chia sẻ màn hình.
3. **Khay Lịch tháng (Calendar Flyout) đa năng:**
   * Hiển thị ngày Âm lịch bên dưới từng ô ngày Dương lịch.
   * **Tự động tô đỏ** các ngày Lễ, Tết truyền thống Việt Nam (Tết Nguyên Đán, Giỗ Tổ Hùng Vương, Trung Thu, Vu Lan, Quốc Khánh...).
   * **Đánh dấu cá nhân hóa theo tuổi:** Tự động gắn ngôi sao **(★)** vào ngày **Tam Hợp / Lục Hợp / Tương Sinh** và dấu chấm than **(!)** vào ngày **Lục Xung / Thiên Khắc Địa Xung** với tuổi của bạn ngay bên cạnh ngày Âm lịch.
   * **Đánh dấu sự kiện Google Calendar:** Hiển thị chấm tròn **(•)** ngay bên cạnh số ngày Dương lịch (ví dụ `25•`) để dòng Âm lịch bên dưới luôn thoáng đãng, không bao giờ bị cắt chữ.
4. **Bảng Chi tiết Tử Vi & Ghi chú (Giao diện thẻ Fluent UI):**
   * Khi nhấp chuột trái vào bất kỳ ngày nào trên khay Lịch, một bảng thông tin chi tiết được thiết kế dạng thẻ bo góc hiện đại sẽ mở ra, hiển thị đầy đủ lịch trình Google Calendar và luận giải Tử Vi chi tiết của ngày hôm đó.
5. **Đồng bộ Google Calendar (.ics) tự động & xuyên suốt:**
   * Hỗ trợ đồng bộ một hoặc nhiều link lịch `.ics` cùng lúc.
   * Tự động làm mới mỗi khi mở khay Lịch và tự động đồng bộ ngầm theo chu kỳ số phút cài đặt (vượt qua tường lửa AppContainer của Windows 11 nhờ cơ chế cầu nối bộ nhớ đệm thông minh).

---

## 🔮 II. Giải thích chi tiết kiến thức Tử Vi & Phong Thủy trong Mod

Để giúp bạn đọc hiểu và ứng dụng hiệu quả các thông số phong thủy hiển thị trên Lịch, dưới đây là giải thích chi tiết từng mục:

### 1. 🐉 Bát Tự (Tứ Trụ: Giờ - Ngày - Tháng - Năm Can Chi)
Hệ thống lịch cổ truyền phương Đông sử dụng kết hợp **10 Thiên Can** (*Giáp, Ất, Bính, Đinh, Mậu, Kỷ, Canh, Tân, Nhâm, Quý*) và **12 Địa Chi** (*Tý, Sửu, Dần, Mão, Thìn, Tỵ, Ngọ, Mùi, Thân, Dậu, Tuất, Hợi*) tạo thành chu kỳ **60 Hoa Giáp**.
* **Trụ Năm & Trụ Tháng:** Xác định vận khí chung của năm và mùa.
* **Trụ Ngày (Nhật Chủ):** Là yếu tố quan trọng nhất để xét ngày Hoàng Đạo, Ngũ hành Nạp âm và tính độ xung hợp với tuổi của người dùng.
* **Trụ Giờ:** Thay đổi theo từng khung giờ (mỗi giờ Âm lịch kéo dài 2 tiếng Dương lịch, bắt đầu từ giờ Tý: 23h - 01h).

### 2. ☯ Ngũ Hành Nạp Âm (Mệnh Ngày & Mệnh Tuổi)
Khác với Ngũ hành cơ bản, **Lục Thập Hoa Giáp Nạp Âm** chia 60 cặp Can Chi thành **30 mệnh Nạp Âm** cụ thể (ví dụ: *Hải Trung Kim - Vàng trong biển*, *Thiên Hà Thủy - Nước ngân hà*, *Tích Lịch Hỏa - Lửa sấm sét*...), quy về 5 nguyên tố: **Kim - Mộc - Thủy - Hỏa - Thổ**.
* **Quy luật Tương Sinh (Tốt - Bổ trợ năng lượng):**
  * *Mộc sinh Hỏa* → *Hỏa sinh Thổ* → *Thổ sinh Kim* → *Kim sinh Thủy* → *Thủy sinh Mộc*.
  * Nếu **Ngũ hành của Ngày sinh cho Ngũ hành Tuổi của bạn** (ví dụ bạn mệnh *Hỏa*, gặp ngày mệnh *Mộc*), đó là ngày **Tương Sinh**, rất thuận lợi để tiến hành việc quan trọng.
* **Quy luật Tương Hòa (Tốt - Đồng hành):**
  * Ngày và Tuổi có cùng bản mệnh Ngũ hành (ví dụ cùng mệnh *Thủy*).
* **Quy luật Tương Khắc (Cần lưu ý):**
  * *Mộc khắc Thổ* → *Thổ khắc Thủy* → *Thủy khắc Hỏa* → *Hỏa khắc Kim* → *Kim khắc Mộc*.
  * Nếu **Ngũ hành của Ngày khắc bản mệnh của bạn** (ví dụ bạn mệnh *Hỏa* gặp ngày *Thủy*), bạn nên cẩn trọng hơn trong các quyết định lớn.

### 3. 🌟 Ngày Hoàng Đạo & Ngày Hắc Đạo (12 Sao Thanh Long)
Trong mỗi tháng Âm lịch có 12 vị thần (12 Sao) luân phiên trực nhật:
* **6 Sao Hoàng Đạo (🌟 Ngày Tốt):** *Thanh Long, Minh Đường, Kim Quỹ, Kim Đường (Thiên Đức), Ngọc Đường, Tư Mệnh*. Đây là những ngày có trường năng lượng cát lành, mọi việc khởi sự thường hanh thông, thuận lợi.
* **6 Sao Hắc Đạo (⚪ Ngày Xấu/Bình):** *Thiên Hình, Chu Tước, Bạch Hổ, Thiên Lao, Nguyên Vũ, Câu Trận*. Vào những ngày này nên hạn chế khởi công lớn, tranh chấp hoặc kiện tụng.

### 4. 📌 Nhị Thập Tứ Tiết Khí (24 Tiết Khí) & Thập Nhị Kiến Trừ (12 Trực)
* **24 Tiết Khí:** Được tính toán dựa trên **kinh độ Mặt Trời** (mỗi tiết khí ứng với 15° di chuyển của Mặt Trời trên hoàng đạo), phản ánh chính xác sự thay đổi thời tiết và mùa vụ (*Lập Xuân, Vũ Thủy, Kinh Trập, Xuân Phân, Thanh Minh...*).
* **12 Trực (*Kiến, Trừ, Mãn, Bình, Định, Chấp, Phá, Nguy, Thành, Thu, Khai, Bế*):** Cho biết tính chất năng lượng của từng ngày để gợi ý **Việc Nên Làm (✅)** và **Việc Kỵ (⛔)**:
  * **Trực tốt nhất:** *Khai* (mở mang), *Thành* (thành tựu), *Mãn* (viên mãn), *Định* (ổn định), *Kiến* (khởi đầu).
  * **Trực cần thận trọng:** *Phá* (chỉ hợp dỡ bỏ cái cũ, chữa bệnh), *Nguy* (hiểm trở, nên nghỉ ngơi cầu an), *Bế* (đóng lại, chỉ hợp cất giữ tài sản).

### 5. 👤 Cá nhân hóa theo Năm Sinh (Hợp ★ / Xung !)
Khi bạn nhập **Năm sinh Âm lịch** trong phần **Cài đặt** (ví dụ: `1995`, `2000`, `2005`), Mod sẽ đối chiếu Thiên Can - Địa Chi và Ngũ Hành của bạn với từng ngày:
* **✅ Tam Hợp (Đánh dấu ★ trên lịch):** Các bộ 3 con giáp hòa hợp tuyệt đối (*Dần - Ngọ - Tuất*, *Hợi - Mão - Mùi*, *Thân - Tý - Thìn*, *Tỵ - Dậu - Sửu*).
* **✅ Lục Hợp (Đánh dấu ★ trên lịch):** 6 cặp con giáp quý nhân tương trợ (*Tý - Sửu*, *Dần - Hợi*, *Mão - Tuất*, *Thìn - Dậu*, *Tỵ - Thân*, *Ngọ - Mùi*).
* **⚠️ Lục Xung & Thiên Khắc Địa Xung (Đánh dấu ! trên lịch):** Các cặp Địa Chi đối đỉnh xung khắc nhau (*Tý - Ngọ*, *Sửu - Mùi*, *Dần - Thân*, *Mão - Dậu*, *Thìn - Tuất*, *Tỵ - Hợi*). Nếu kết hợp thêm Thiên Can xung khắc thì gọi là **Thiên Khắc Địa Xung (Đại Kỵ)** — hệ thống sẽ cảnh báo rõ ràng để bạn chủ động sắp xếp lịch trình.

### 6. 🧭 Hướng Xuất Hành (Hỷ Thần & Tài Thần)
* **Hướng Hỷ Thần:** Hướng mang lại niềm vui, may mắn về nhân duyên, giao tiếp và sự kiện cưới hỏi, gặp gỡ.
* **Hướng Tài Thần:** Hướng mang lại may mắn về tiền bạc, ký kết hợp đồng, kinh doanh và thương mại.

---

## 📅 III. Hướng dẫn lấy link đồng bộ Google Calendar (.ics)

1. Mở trang web **Google Calendar** trên máy tính.
2. Nhấp vào biểu tượng **Cài đặt (⚙️ Settings)** ở góc trên bên phải → chọn **Cài đặt (Settings)**.
3. Ở cột menu bên trái, bấm vào **Tên lịch cá nhân của bạn** (nằm dưới mục *Cài đặt cho lịch của tôi / Settings for my calendars*).
4. Cuộn xuống gần cuối trang, tìm mục **Địa chỉ bí mật ở định dạng iCal (Secret address in iCal format)**.
5. Sao chép đường link có dạng `https://calendar.google.com/calendar/ical/.../basic.ics` và dán vào ô **Link Google Calendar cá nhân (.ics)** trong phần **Cài đặt** của Mod.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- language: auto
  $name: Ngôn ngữ hiển thị
  $description: Chọn ngôn ngữ cho Âm lịch, Tiết khí và trang Tử Vi.
  $options:
    - auto: Tự động theo hệ thống
    - vi: Tiếng Việt
    - en: English
- birthYear: 0
  $name: "Năm sinh Âm lịch (VD: 1995, 2005)"
  $description: "Nhập năm sinh để tính Ngũ hành Nạp âm và đánh dấu ngày Hợp (★) / Xung (!) theo tuổi. Để 0 nếu không dùng."
- markPersonalDaysOnCalendar: true
  $name: Đánh dấu ngày Hợp / Xung trên ô lịch
- googleIcsUrl: ""
  $name: "Link Google Calendar cá nhân (.ics)"
  $description: "Mỗi người dùng tự dán link 'Địa chỉ bí mật ở định dạng iCal' (Secret address in iCal format) từ Google Calendar Settings vào đây. Có thể dán nhiều link cách nhau bởi dấu chấm phẩy (;). Để trống nếu không dùng."
- icsRefreshMinutes: 10
  $name: "Chu kỳ tự động đồng bộ lịch (phút)"
  $description: "Thời gian tự động tải lại ghi chú mới từ Google Calendar (mặc định: 10 phút)."
- markGoogleEventsOnCalendar: true
  $name: "Đánh dấu chấm (•) vào ngày Dương lịch có sự kiện Google Calendar"
- showGoogleEventsInTooltip: true
  $name: "Hiển thị Ghi chú Google Calendar ở hộp rê chuột (Tooltip)"
  $description: "Nếu tắt, khi rê chuột vào đồng hồ Taskbar sẽ ẩn nội dung ghi chú chi tiết để giữ sự riêng tư (chỉ xem được khi bấm mở Lịch)."
- enableTaskbarClock: true
  $name: Hiển thị Âm lịch trên Taskbar
- taskbarClockSolarOnTop: true
  $name: Định dạng 2 dòng trên Taskbar
- enableTaskbarTooltip: true
  $name: Hiển thị Tử Vi & Ghi chú khi rê chuột vào Taskbar
- enableCalendarFlyout: true
  $name: Hiển thị Âm lịch trong khay Lịch
- enableHoroscopePage: true
  $name: Mở trang Tử Vi & Ghi chú khi bấm vào ngày trên lịch
*/
// ==/WindhawkModSettings==

#include <windhawk_utils.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <cwctype>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

#undef GetCurrentTime

#include <Unknwn.h>
#include <urlmon.h>
#include <winhttp.h>
#include <winrt/base.h>
#include <winrt/Windows.Devices.Input.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.Core.h>
#include <winrt/Windows.UI.Input.h>
#include <winrt/Windows.UI.Text.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Input.h>
#include <winrt/Windows.UI.Xaml.Markup.h>
#include <winrt/Windows.UI.Xaml.Media.h>
#include <winrt/Windows.UI.Xaml.h>

namespace wf = winrt::Windows::Foundation;
namespace wuc = winrt::Windows::UI::Core;
namespace wux = winrt::Windows::UI::Xaml;
namespace wuxc = winrt::Windows::UI::Xaml::Controls;
namespace wuxi = winrt::Windows::UI::Xaml::Input;
namespace wuxm = winrt::Windows::UI::Xaml::Media;

thread_local bool g_initializedForThread = false;
std::atomic<bool> g_shuttingDown{false};

enum class Target { Explorer, ShellExperienceHost, ShellHost };
Target g_target = Target::ShellExperienceHost;

#define FORMATTED_BUFFER_SIZE 256

////////////////////////////////////////////////////////////////////////////////
// Settings & Localization

enum class ModLanguage { Auto, English, Vietnamese };

struct ModSettings {
    ModLanguage language = ModLanguage::Auto;
    int birthYear = 0;
    bool markPersonalDaysOnCalendar = true;
    std::wstring googleIcsUrl;
    int icsRefreshMinutes = 10;
    bool markGoogleEventsOnCalendar = true;
    bool showGoogleEventsInTooltip = true;
    bool enableTaskbarClock = true;
    bool taskbarClockSolarOnTop = true;
    bool enableTaskbarTooltip = true;
    bool enableCalendarFlyout = true;
    bool enableHoroscopePage = true;
};

std::mutex g_settingsMutex;
ModSettings g_settings;

std::wstring TrimWhitespace(std::wstring const& text);

void LoadSettings() {
    ModSettings s;
    WindhawkUtils::StringSetting lang = WindhawkUtils::StringSetting::make(L"language");
    if (_wcsicmp(lang.get(), L"vi") == 0) {
        s.language = ModLanguage::Vietnamese;
    } else if (_wcsicmp(lang.get(), L"en") == 0) {
        s.language = ModLanguage::English;
    } else {
        s.language = ModLanguage::Auto;
    }

    s.birthYear = Wh_GetIntSetting(L"birthYear");
    s.markPersonalDaysOnCalendar = Wh_GetIntSetting(L"markPersonalDaysOnCalendar") != 0;

    WindhawkUtils::StringSetting icsUrl = WindhawkUtils::StringSetting::make(L"googleIcsUrl");
    if (icsUrl.get()) {
        s.googleIcsUrl = TrimWhitespace(icsUrl.get());
    }
    s.icsRefreshMinutes = Wh_GetIntSetting(L"icsRefreshMinutes");
    if (s.icsRefreshMinutes < 1) s.icsRefreshMinutes = 1;
    s.markGoogleEventsOnCalendar = Wh_GetIntSetting(L"markGoogleEventsOnCalendar") != 0;
    s.showGoogleEventsInTooltip = Wh_GetIntSetting(L"showGoogleEventsInTooltip") != 0;

    s.enableTaskbarClock = Wh_GetIntSetting(L"enableTaskbarClock") != 0;
    s.taskbarClockSolarOnTop = Wh_GetIntSetting(L"taskbarClockSolarOnTop") != 0;
    s.enableTaskbarTooltip = Wh_GetIntSetting(L"enableTaskbarTooltip") != 0;
    s.enableCalendarFlyout = Wh_GetIntSetting(L"enableCalendarFlyout") != 0;
    s.enableHoroscopePage = Wh_GetIntSetting(L"enableHoroscopePage") != 0;

    std::lock_guard<std::mutex> lock(g_settingsMutex);
    g_settings = std::move(s);
}

ModSettings GetSettings() {
    std::lock_guard<std::mutex> lock(g_settingsMutex);
    return g_settings;
}

bool UseVietnameseLabels(ModSettings const& settings) {
    if (settings.language == ModLanguage::Vietnamese) return true;
    if (settings.language == ModLanguage::English) return false;
    LANGID langId = GetUserDefaultUILanguage();
    return PRIMARYLANGID(langId) == LANG_VIETNAMESE;
}

PCWSTR PickText(bool vi, PCWSTR viText, PCWSTR enText) {
    return vi ? viText : enText;
}

////////////////////////////////////////////////////////////////////////////////
// String & Date Utilities & Vietnamese/English Constant Arrays

const PCWSTR kMonthsVi[12] = {
    L"Tháng 1", L"Tháng 2", L"Tháng 3", L"Tháng 4", L"Tháng 5", L"Tháng 6",
    L"Tháng 7", L"Tháng 8", L"Tháng 9", L"Tháng 10", L"Tháng 11", L"Tháng 12"
};

const PCWSTR kMonthsEn[12] = {
    L"January", L"February", L"March", L"April", L"May", L"June",
    L"July", L"August", L"September", L"October", L"November", L"December"
};

const PCWSTR kMonthsEnShort[12] = {
    L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun",
    L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec"
};

const PCWSTR kWeekdaysViFull[7] = {
    L"Thứ Hai", L"Thứ Ba", L"Thứ Tư", L"Thứ Năm", L"Thứ Sáu", L"Thứ Bảy", L"Chủ Nhật"
};

const PCWSTR kWeekdaysEnFull[7] = {
    L"Monday", L"Tuesday", L"Wednesday", L"Thursday", L"Friday", L"Saturday", L"Sunday"
};

std::wstring TrimWhitespace(std::wstring const& text) {
    std::wstring cleaned;
    cleaned.reserve(text.size());
    for (wchar_t c : text) {
        if (c == 0x200E || c == 0x200F || c == 0x202A || c == 0x202B ||
            c == 0x202C || c == 0x202D || c == 0x202E || c == 0x2066 ||
            c == 0x2067 || c == 0x2068 || c == 0x2069 || c == 0xFEFF) {
            continue;
        }
        cleaned.push_back(c);
    }
    size_t begin = 0, end = cleaned.size();
    while (begin < end && iswspace(cleaned[begin])) begin++;
    while (end > begin && iswspace(cleaned[end - 1])) end--;
    return cleaned.substr(begin, end - begin);
}

int32_t MakeDateKey(int year, int month, int day) {
    return year * 10000 + month * 100 + day;
}

int DaysInMonth(int year, int month) {
    if (month < 1 || month > 12) return 0;
    static const int kDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) return 29;
    return kDays[month - 1];
}

bool IsValidDate(int year, int month, int day) {
    if (year < 1900 || year > 9999) return false;
    return day >= 1 && day <= DaysInMonth(year, month);
}

void NextCalendarDay(int& y, int& m, int& d) {
    d++;
    if (d > DaysInMonth(y, m)) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
}

void PrevCalendarDay(int& y, int& m, int& d) {
    d--;
    if (d < 1) {
        m--;
        if (m < 1) {
            m = 12;
            y--;
        }
        d = DaysInMonth(y, m);
    }
}

int CalculateJDN(int sDay, int sMonth, int sYear) {
    int a = (14 - sMonth) / 12;
    int y = sYear + 4800 - a;
    int m = sMonth + 12 * a - 3;
    return sDay + (153 * m + 2) / 5 + 365 * y + y / 4 - y / 100 + y / 400 - 32045;
}

int32_t DateKeyFromDateTime(wf::DateTime const& dateTime) {
    ULARGE_INTEGER uli;
    uli.QuadPart = static_cast<ULONGLONG>(dateTime.time_since_epoch().count());
    FILETIME fileTime;
    fileTime.dwLowDateTime = uli.LowPart;
    fileTime.dwHighDateTime = uli.HighPart;
    SYSTEMTIME systemTimeUtc{};
    if (!FileTimeToSystemTime(&fileTime, &systemTimeUtc)) return 0;
    SYSTEMTIME systemTimeLocal{};
    if (!SystemTimeToTzSpecificLocalTime(nullptr, &systemTimeUtc, &systemTimeLocal)) return 0;
    return MakeDateKey(systemTimeLocal.wYear, systemTimeLocal.wMonth, systemTimeLocal.wDay);
}

bool TranslateCalendarExtraTextToVi(std::wstring const& rawText, std::wstring& outVi) {
    std::wstring text = TrimWhitespace(rawText);
    if (text.empty()) return false;

    struct MapEntry { PCWSTR en; PCWSTR vi; };
    static const MapEntry kExactMap[] = {
        { L"Mon", L"T2" }, { L"Mo", L"T2" },
        { L"Tue", L"T3" }, { L"Tu", L"T3" },
        { L"Wed", L"T4" }, { L"We", L"T4" },
        { L"Thu", L"T5" }, { L"Th", L"T5" },
        { L"Fri", L"T6" }, { L"Fr", L"T6" },
        { L"Sat", L"T7" }, { L"Sa", L"T7" },
        { L"Sun", L"CN" }, { L"Su", L"CN" },
        { L"Focus", L"Tập trung" },
        { L"End session", L"Kết thúc" },
        { L"mins", L"phút" },
        { L"min", L"phút" },
        { L"Clear all", L"Xóa tất cả" },
        { L"Notifications", L"Thông báo" },
    };
    for (const auto& entry : kExactMap) {
        if (_wcsicmp(text.c_str(), entry.en) == 0) {
            outVi = entry.vi;
            return true;
        }
    }

    if (text.size() >= 5 && iswdigit(text[0])) {
        size_t posMins = text.find(L" mins");
        if (posMins != std::wstring::npos && posMins + 5 == text.size()) {
            outVi = text.substr(0, posMins) + L" phút";
            return true;
        }
        size_t posMin = text.find(L" min");
        if (posMin != std::wstring::npos && posMin + 4 == text.size()) {
            outVi = text.substr(0, posMin) + L" phút";
            return true;
        }
    }

    return false;
}

bool IsMonthYearBannerString(std::wstring const& rawText, int* outMonth = nullptr, int* outYear = nullptr) {
    std::wstring text = TrimWhitespace(rawText);
    if (text.empty()) return false;

    if (_wcsnicmp(text.c_str(), L"Tháng ", 6) == 0) {
        size_t posNam = text.find(L"năm ");
        if (posNam != std::wstring::npos) {
            int m = _wtoi(text.c_str() + 6);
            int y = _wtoi(text.c_str() + posNam + 4);
            if (m >= 1 && m <= 12 && y >= 1900 && y <= 9999) {
                if (outMonth) *outMonth = m;
                if (outYear) *outYear = y;
                return true;
            }
        }
    }

    for (int m = 0; m < 12; m++) {
        PCWSTR monthNames[2] = { kMonthsEn[m], kMonthsEnShort[m] };
        for (PCWSTR mName : monthNames) {
            size_t len = wcslen(mName);
            if (text.size() > len && _wcsnicmp(text.c_str(), mName, len) == 0 &&
                !iswalpha(text[len])) {
                std::wstring digits;
                for (size_t i = len; i < text.size(); i++) {
                    if (iswdigit(text[i])) {
                        digits.push_back(text[i]);
                    } else if (!iswspace(text[i]) && text[i] != L',' && text[i] != L'.' && text[i] != L'-') {
                        digits.clear();
                        break;
                    }
                }
                if (digits.size() == 4) {
                    if (outMonth) *outMonth = m + 1;
                    if (outYear) *outYear = std::stoi(digits);
                    return true;
                }
            }
        }
    }

    return false;
}

bool ExtractYearFromText(std::wstring const& rawText, int& outYear) {
    std::wstring text = TrimWhitespace(rawText);
    std::wstring digits;
    for (wchar_t c : text) {
        if (iswdigit(c)) {
            digits.push_back(c);
            if (digits.size() == 4) {
                int y = std::stoi(digits);
                if (y >= 1900 && y <= 2100) {
                    outYear = y;
                    return true;
                }
            }
        } else {
            digits.clear();
        }
    }
    return false;
}

std::wstring LocalizeTooltipNativeTextToVi(std::wstring const& rawTooltip) {
    struct ReplacePair { PCWSTR from; PCWSTR to; };
    static const ReplacePair kReplaces[] = {
        { L"(Local time)", L"(Giờ địa phương)" },
        { L"Local time",   L"Giờ địa phương" },
        { L"Monday",       L"Thứ Hai" },
        { L"Tuesday",      L"Thứ Ba" },
        { L"Wednesday",    L"Thứ Tư" },
        { L"Thursday",     L"Thứ Năm" },
        { L"Friday",       L"Thứ Sáu" },
        { L"Saturday",     L"Thứ Bảy" },
        { L"Sunday",       L"Chủ Nhật" },
        { L"Mon ",         L"T2 " },
        { L"Tue ",         L"T3 " },
        { L"Wed ",         L"T4 " },
        { L"Thu ",         L"T5 " },
        { L"Fri ",         L"T6 " },
        { L"Sat ",         L"T7 " },
        { L"Sun ",         L"CN " },
    };

    std::wstring result = rawTooltip;
    for (const auto& r : kReplaces) {
        size_t fromLen = wcslen(r.from);
        size_t toLen = wcslen(r.to);
        size_t pos = 0;
        while ((pos = result.find(r.from, pos)) != std::wstring::npos) {
            result.replace(pos, fromLen, r.to);
            pos += toLen;
        }
    }
    return result;
}

////////////////////////////////////////////////////////////////////////////////
// Google Calendar (.ics) Sync, Cross-Process Cache Bridge & Parser

struct GoogleCalendarEvent {
    int32_t dateKey = 0;
    bool isAllDay = true;
    int startHour = 0;
    int startMin = 0;
    int endHour = 0;
    int endMin = 0;
    bool hasEndTime = false;
    std::wstring summary;
    std::wstring description;
    std::wstring location;
};

std::mutex g_icsMutex;
std::unordered_map<int32_t, std::vector<GoogleCalendarEvent>> g_icsEventsByDate;
size_t g_totalSyncedEventsCount = 0;
ULONGLONG g_lastIcsSyncTick = 0;
std::wstring g_lastSyncedIcsUrl;
std::wstring g_lastSyncStatusMsg;
std::atomic<bool> g_icsSyncInProgress{false};
std::atomic<uint32_t> g_icsDataGeneration{0};
std::atomic<bool> g_backgroundSyncLoopStarted{false};

void NotifyCalendarUiAfterIcsSync();

std::wstring Utf8ToWide(std::string const& utf8) {
    if (utf8.empty()) return {};
    int wlen = MultiByteToWideChar(CP_UTF8, 0, utf8.data(), static_cast<int>(utf8.size()), nullptr, 0);
    if (wlen <= 0) return {};
    std::wstring out(wlen, L'\0');
    MultiByteToWideChar(CP_UTF8, 0, utf8.data(), static_cast<int>(utf8.size()), out.data(), wlen);
    return out;
}

std::wstring CleanIcsUrl(std::wstring const& rawUrl) {
    std::wstring s = TrimWhitespace(rawUrl);
    while (!s.empty() && (s.front() == L'"' || s.front() == L'\'' || s.front() == L'<')) {
        s.erase(s.begin());
    }
    while (!s.empty() && (s.back() == L'"' || s.back() == L'\'' || s.back() == L'>')) {
        s.pop_back();
    }
    s = TrimWhitespace(s);
    if (_wcsnicmp(s.c_str(), L"webcal://", 9) == 0) {
        s = L"https://" + s.substr(9);
    } else if (_wcsnicmp(s.c_str(), L"webcals://", 10) == 0) {
        s = L"https://" + s.substr(10);
    }
    return s;
}

std::vector<std::wstring> GetCandidateIcsCachePaths() {
    std::vector<std::wstring> paths;
    WCHAR buf[MAX_PATH]{};

    if (GetTempPathW(ARRAYSIZE(buf), buf) > 0) {
        paths.push_back(std::wstring(buf) + L"windhawk_vn_lunar_gcal_cache.ics");
    }
    if (ExpandEnvironmentStringsW(L"%USERPROFILE%\\AppData\\Local\\Temp\\windhawk_vn_lunar_gcal_cache.ics", buf, ARRAYSIZE(buf)) > 0) {
        paths.push_back(buf);
    }
    if (ExpandEnvironmentStringsW(L"%PUBLIC%\\windhawk_vn_lunar_gcal_cache.ics", buf, ARRAYSIZE(buf)) > 0) {
        paths.push_back(buf);
    }
    return paths;
}

constexpr PCWSTR kIcsCacheRegSubKey = L"Software\\Windhawk_VnLunarCalendar_Cache";

void SaveIcsToSharedCache(std::string const& rawIcs) {
    if (rawIcs.empty()) return;

    if (rawIcs.size() <= 2 * 1024 * 1024) {
        HKEY hKey = nullptr;
        if (RegCreateKeyExW(HKEY_CURRENT_USER, kIcsCacheRegSubKey, 0, nullptr, 0, KEY_WRITE, nullptr, &hKey, nullptr) == ERROR_SUCCESS) {
            RegSetValueExW(hKey, L"IcsData", 0, REG_BINARY,
                           reinterpret_cast<const BYTE*>(rawIcs.data()),
                           static_cast<DWORD>(rawIcs.size()));
            ULONGLONG nowTick = GetTickCount64();
            RegSetValueExW(hKey, L"LastUpdateTick", 0, REG_QWORD,
                           reinterpret_cast<const BYTE*>(&nowTick), sizeof(nowTick));
            RegCloseKey(hKey);
        }
    }

    for (const auto& path : GetCandidateIcsCachePaths()) {
        HANDLE hFile = CreateFileW(path.c_str(), GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
                                   nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD written = 0;
            WriteFile(hFile, rawIcs.data(), static_cast<DWORD>(rawIcs.size()), &written, nullptr);
            CloseHandle(hFile);
        }
    }
}

std::string LoadIcsFromSharedCache() {
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kIcsCacheRegSubKey, 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        DWORD dataSize = 0;
        DWORD dataType = 0;
        if (RegQueryValueExW(hKey, L"IcsData", nullptr, &dataType, nullptr, &dataSize) == ERROR_SUCCESS &&
            dataType == REG_BINARY && dataSize > 32 && dataSize <= 4 * 1024 * 1024) {
            std::string buffer(dataSize, '\0');
            if (RegQueryValueExW(hKey, L"IcsData", nullptr, &dataType,
                                 reinterpret_cast<LPBYTE>(buffer.data()), &dataSize) == ERROR_SUCCESS) {
                RegCloseKey(hKey);
                if (buffer.find("BEGIN:VCALENDAR") != std::string::npos) {
                    return buffer;
                }
            }
        }
        RegCloseKey(hKey);
    }

    for (const auto& path : GetCandidateIcsCachePaths()) {
        HANDLE hFile = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                                   nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD fileSize = GetFileSize(hFile, nullptr);
            if (fileSize > 32 && fileSize <= 8 * 1024 * 1024) {
                std::string buffer(fileSize, '\0');
                DWORD bytesRead = 0;
                if (ReadFile(hFile, buffer.data(), fileSize, &bytesRead, nullptr) && bytesRead > 0) {
                    CloseHandle(hFile);
                    buffer.resize(bytesRead);
                    if (buffer.find("BEGIN:VCALENDAR") != std::string::npos) {
                        return buffer;
                    }
                }
            }
            CloseHandle(hFile);
        }
    }

    return {};
}

std::wstring UnescapeIcsText(std::wstring const& raw) {
    std::wstring unescaped;
    unescaped.reserve(raw.size());
    for (size_t i = 0; i < raw.size(); i++) {
        if (raw[i] == L'\\' && i + 1 < raw.size()) {
            wchar_t next = raw[i + 1];
            if (next == L'n' || next == L'N') {
                unescaped.push_back(L'\n');
                i++;
                continue;
            }
            if (next == L',' || next == L';' || next == L'\\') {
                unescaped.push_back(next);
                i++;
                continue;
            }
        }
        unescaped.push_back(raw[i]);
    }

    std::wstring cleaned;
    cleaned.reserve(unescaped.size());
    bool inTag = false;
    for (size_t i = 0; i < unescaped.size(); i++) {
        if (!inTag && unescaped[i] == L'<') {
            if (_wcsnicmp(unescaped.c_str() + i, L"<br>", 4) == 0 ||
                _wcsnicmp(unescaped.c_str() + i, L"<br/>", 5) == 0 ||
                _wcsnicmp(unescaped.c_str() + i, L"<br />", 6) == 0 ||
                _wcsnicmp(unescaped.c_str() + i, L"</p>", 4) == 0) {
                cleaned.push_back(L'\n');
            }
            inTag = true;
            continue;
        }
        if (inTag) {
            if (unescaped[i] == L'>') inTag = false;
            continue;
        }
        cleaned.push_back(unescaped[i]);
    }

    struct Entity { PCWSTR code; PCWSTR ch; };
    static const Entity kEntities[] = {
        { L"&nbsp;", L" " },
        { L"&amp;",  L"&" },
        { L"&lt;",   L"<" },
        { L"&gt;",   L">" },
        { L"&quot;", L"\"" },
        { L"&#39;",  L"'" },
    };
    for (const auto& e : kEntities) {
        size_t pos = 0;
        size_t codeLen = wcslen(e.code);
        size_t chLen = wcslen(e.ch);
        while ((pos = cleaned.find(e.code, pos)) != std::wstring::npos) {
            cleaned.replace(pos, codeLen, e.ch);
            pos += chLen;
        }
    }

    return TrimWhitespace(cleaned);
}

struct ParsedIcsDateTime {
    int year = 0, month = 0, day = 0;
    int hour = 0, minute = 0;
    bool isAllDay = true;
    bool valid = false;
};

ParsedIcsDateTime ParseIcsDateTimeProperty(std::string const& propParams, std::string const& val) {
    ParsedIcsDateTime out;
    std::string s = val;
    while (!s.empty() && (s.back() == '\r' || s.back() == '\n' || s.back() == ' ' || s.back() == '\t')) {
        s.pop_back();
    }
    while (!s.empty() && (s.front() == ' ' || s.front() == '\t')) {
        s.erase(s.begin());
    }
    if (s.size() < 8) return out;
    for (int i = 0; i < 8; i++) {
        if (s[i] < '0' || s[i] > '9') return out;
    }

    out.year = std::stoi(s.substr(0, 4));
    out.month = std::stoi(s.substr(4, 2));
    out.day = std::stoi(s.substr(6, 2));
    if (!IsValidDate(out.year, out.month, out.day)) return out;

    bool isValueDate = (propParams.find("VALUE=DATE") != std::string::npos &&
                        propParams.find("VALUE=DATE-TIME") == std::string::npos);

    if (isValueDate || s.size() == 8 || s[8] != 'T') {
        out.isAllDay = true;
        out.valid = true;
        return out;
    }

    if (s.size() >= 13) {
        out.isAllDay = false;
        out.hour = std::stoi(s.substr(9, 2));
        out.minute = std::stoi(s.substr(11, 2));
        bool isUtc = (s.back() == 'Z' || s.back() == 'z');

        if (isUtc) {
            SYSTEMTIME stUtc{};
            stUtc.wYear = static_cast<WORD>(out.year);
            stUtc.wMonth = static_cast<WORD>(out.month);
            stUtc.wDay = static_cast<WORD>(out.day);
            stUtc.wHour = static_cast<WORD>(out.hour);
            stUtc.wMinute = static_cast<WORD>(out.minute);
            SYSTEMTIME stLocal{};
            if (SystemTimeToTzSpecificLocalTime(nullptr, &stUtc, &stLocal)) {
                out.year = stLocal.wYear;
                out.month = stLocal.wMonth;
                out.day = stLocal.wDay;
                out.hour = stLocal.wHour;
                out.minute = stLocal.wMinute;
            } else {
                out.hour += 7;
                if (out.hour >= 24) {
                    out.hour -= 24;
                    NextCalendarDay(out.year, out.month, out.day);
                }
            }
        }
        out.valid = true;
    }
    return out;
}

std::string ToUpperAscii(std::string s) {
    for (char& c : s) {
        if (c >= 'a' && c <= 'z') c = static_cast<char>(c - 'a' + 'A');
    }
    return s;
}

std::unordered_map<int32_t, std::vector<GoogleCalendarEvent>> ParseIcsContent(std::string const& rawIcs, size_t* outTotalEvents = nullptr) {
    std::unordered_map<int32_t, std::vector<GoogleCalendarEvent>> result;
    if (outTotalEvents) *outTotalEvents = 0;
    if (rawIcs.empty()) return result;

    std::vector<std::string> lines;
    std::string currentLine;
    for (size_t i = 0; i < rawIcs.size(); i++) {
        char c = rawIcs[i];
        if (c == '\r') continue;
        if (c == '\n') {
            if (i + 1 < rawIcs.size() && (rawIcs[i + 1] == ' ' || rawIcs[i + 1] == '\t')) {
                i++;
                continue;
            }
            lines.push_back(std::move(currentLine));
            currentLine.clear();
        } else {
            currentLine.push_back(c);
        }
    }
    if (!currentLine.empty()) {
        lines.push_back(std::move(currentLine));
    }

    SYSTEMTIME stNow{};
    GetLocalTime(&stNow);
    int currentYear = stNow.wYear;

    bool inEvent = false;
    ParsedIcsDateTime dtStart{};
    ParsedIcsDateTime dtEnd{};
    std::wstring summary;
    std::wstring description;
    std::wstring location;
    bool isCancelled = false;
    std::string rruleStr;
    size_t parsedEventCount = 0;

    for (const auto& line : lines) {
        std::string trimmedLine = line;
        while (!trimmedLine.empty() && (trimmedLine.back() == ' ' || trimmedLine.back() == '\t')) {
            trimmedLine.pop_back();
        }

        if (trimmedLine == "BEGIN:VEVENT") {
            inEvent = true;
            dtStart = {};
            dtEnd = {};
            summary.clear();
            description.clear();
            location.clear();
            isCancelled = false;
            rruleStr.clear();
            continue;
        }

        if (trimmedLine == "END:VEVENT") {
            if (inEvent && dtStart.valid && !isCancelled) {
                parsedEventCount++;
                GoogleCalendarEvent baseEv;
                baseEv.isAllDay = dtStart.isAllDay;
                baseEv.startHour = dtStart.hour;
                baseEv.startMin = dtStart.minute;
                if (dtEnd.valid && !dtEnd.isAllDay) {
                    baseEv.endHour = dtEnd.hour;
                    baseEv.endMin = dtEnd.minute;
                    baseEv.hasEndTime = true;
                }
                baseEv.summary = summary.empty() ? L"(Sự kiện không tiêu đề)" : summary;
                baseEv.description = description;
                baseEv.location = location;

                int untilDateKey = 99991231;
                size_t untilPos = rruleStr.find("UNTIL=");
                if (untilPos != std::string::npos && untilPos + 14 <= rruleStr.size()) {
                    std::string uStr = rruleStr.substr(untilPos + 6, 8);
                    bool allDigits = true;
                    for (char ch : uStr) if (ch < '0' || ch > '9') allDigits = false;
                    if (allDigits) untilDateKey = std::stoi(uStr);
                }

                if (rruleStr.find("FREQ=YEARLY") != std::string::npos) {
                    for (int y = std::max(dtStart.year, currentYear - 1); y <= currentYear + 2; y++) {
                        int32_t k = MakeDateKey(y, dtStart.month, dtStart.day);
                        if (k <= untilDateKey && IsValidDate(y, dtStart.month, dtStart.day)) {
                            GoogleCalendarEvent ev = baseEv;
                            ev.dateKey = k;
                            result[ev.dateKey].push_back(std::move(ev));
                        }
                    }
                } else if (rruleStr.find("FREQ=MONTHLY") != std::string::npos) {
                    for (int y = std::max(dtStart.year, currentYear - 1); y <= currentYear + 1; y++) {
                        for (int m = 1; m <= 12; m++) {
                            int32_t k = MakeDateKey(y, m, dtStart.day);
                            if (k >= MakeDateKey(dtStart.year, dtStart.month, dtStart.day) &&
                                k <= untilDateKey && IsValidDate(y, m, dtStart.day)) {
                                GoogleCalendarEvent ev = baseEv;
                                ev.dateKey = k;
                                result[ev.dateKey].push_back(std::move(ev));
                            }
                        }
                    }
                } else if (rruleStr.find("FREQ=WEEKLY") != std::string::npos) {
                    int startJdn = CalculateJDN(dtStart.day, dtStart.month, dtStart.year);
                    int startWeekday = ((startJdn % 7) + 7) % 7;
                    for (int y = std::max(dtStart.year, currentYear - 1); y <= currentYear + 1; y++) {
                        for (int m = 1; m <= 12; m++) {
                            int maxD = DaysInMonth(y, m);
                            for (int d = 1; d <= maxD; d++) {
                                int32_t k = MakeDateKey(y, m, d);
                                if (k < MakeDateKey(dtStart.year, dtStart.month, dtStart.day) || k > untilDateKey) continue;
                                int jdn = CalculateJDN(d, m, y);
                                if (((jdn % 7) + 7) % 7 == startWeekday) {
                                    GoogleCalendarEvent ev = baseEv;
                                    ev.dateKey = k;
                                    result[ev.dateKey].push_back(std::move(ev));
                                }
                            }
                        }
                    }
                } else {
                    int y1 = dtStart.year, m1 = dtStart.month, d1 = dtStart.day;
                    int y2 = y1, m2 = m1, d2 = d1;

                    if (dtEnd.valid) {
                        y2 = dtEnd.year;
                        m2 = dtEnd.month;
                        d2 = dtEnd.day;
                        if (dtStart.isAllDay && MakeDateKey(y2, m2, d2) > MakeDateKey(y1, m1, d1)) {
                            PrevCalendarDay(y2, m2, d2);
                        }
                    }

                    int spanDays = 0;
                    while (MakeDateKey(y1, m1, d1) <= MakeDateKey(y2, m2, d2) && spanDays < 60) {
                        GoogleCalendarEvent ev = baseEv;
                        ev.dateKey = MakeDateKey(y1, m1, d1);
                        result[ev.dateKey].push_back(std::move(ev));
                        NextCalendarDay(y1, m1, d1);
                        spanDays++;
                    }
                }
            }
            inEvent = false;
            continue;
        }

        if (!inEvent) continue;

        size_t colonPos = line.find(':');
        if (colonPos == std::string::npos) continue;

        std::string propFull = line.substr(0, colonPos);
        std::string propVal = line.substr(colonPos + 1);

        std::string propName = propFull;
        std::string propParams;
        size_t semiPos = propFull.find(';');
        if (semiPos != std::string::npos) {
            propName = propFull.substr(0, semiPos);
            propParams = ToUpperAscii(propFull.substr(semiPos + 1));
        }
        propName = ToUpperAscii(propName);

        if (propName == "DTSTART") {
            dtStart = ParseIcsDateTimeProperty(propParams, propVal);
        } else if (propName == "DTEND") {
            dtEnd = ParseIcsDateTimeProperty(propParams, propVal);
        } else if (propName == "SUMMARY") {
            summary = UnescapeIcsText(Utf8ToWide(propVal));
        } else if (propName == "DESCRIPTION") {
            description = UnescapeIcsText(Utf8ToWide(propVal));
        } else if (propName == "LOCATION") {
            location = UnescapeIcsText(Utf8ToWide(propVal));
        } else if (propName == "STATUS") {
            if (ToUpperAscii(propVal).find("CANCELLED") != std::string::npos) {
                isCancelled = true;
            }
        } else if (propName == "RRULE") {
            rruleStr = ToUpperAscii(propVal);
        }
    }

    for (auto& kv : result) {
        auto& vec = kv.second;
        std::sort(vec.begin(), vec.end(), [](GoogleCalendarEvent const& a, GoogleCalendarEvent const& b) {
            if (a.isAllDay != b.isAllDay) return a.isAllDay > b.isAllDay;
            if (a.startHour != b.startHour) return a.startHour < b.startHour;
            if (a.startMin != b.startMin) return a.startMin < b.startMin;
            return a.summary < b.summary;
        });
        vec.erase(std::unique(vec.begin(), vec.end(), [](GoogleCalendarEvent const& a, GoogleCalendarEvent const& b) {
            return a.isAllDay == b.isAllDay &&
                   a.startHour == b.startHour &&
                   a.startMin == b.startMin &&
                   a.summary == b.summary;
        }), vec.end());
    }

    if (outTotalEvents) *outTotalEvents = parsedEventCount;
    return result;
}

std::string DownloadViaUrlMonFallback(std::wstring const& url) {
    WCHAR cacheFilePath[MAX_PATH]{};
    HRESULT hr = URLDownloadToCacheFileW(nullptr, url.c_str(), cacheFilePath, ARRAYSIZE(cacheFilePath), 0, nullptr);
    if (SUCCEEDED(hr) && cacheFilePath[0] != L'\0') {
        HANDLE hFile = CreateFileW(cacheFilePath, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                                   nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD fileSize = GetFileSize(hFile, nullptr);
            if (fileSize > 0 && fileSize <= 10 * 1024 * 1024) {
                std::string content(fileSize, '\0');
                DWORD bytesRead = 0;
                if (ReadFile(hFile, content.data(), fileSize, &bytesRead, nullptr) && bytesRead > 0) {
                    CloseHandle(hFile);
                    content.resize(bytesRead);
                    return content;
                }
            }
            CloseHandle(hFile);
        }
    }
    return {};
}

std::string DownloadHttpsUrl(std::wstring const& rawUrl) {
    std::wstring url = CleanIcsUrl(rawUrl);
    if (url.empty()) return {};

    std::wstring fetchUrl = url;
    WCHAR cacheBuster[64]{};
    _snwprintf_s(cacheBuster, _TRUNCATE, L"%c_wh_ts=%llu",
                 (fetchUrl.find(L'?') == std::wstring::npos) ? L'?' : L'&',
                 GetTickCount64() / 10000ULL);
    fetchUrl += cacheBuster;

    URL_COMPONENTS urlComp{};
    urlComp.dwStructSize = sizeof(urlComp);
    WCHAR hostName[256]{};
    WCHAR urlPath[2048]{};
    urlComp.lpszHostName = hostName;
    urlComp.dwHostNameLength = ARRAYSIZE(hostName);
    urlComp.lpszUrlPath = urlPath;
    urlComp.dwUrlPathLength = ARRAYSIZE(urlPath);

    std::string responseBody;
    if (WinHttpCrackUrl(fetchUrl.c_str(), static_cast<DWORD>(fetchUrl.size()), 0, &urlComp)) {
        HINTERNET hSession = WinHttpOpen(L"Mozilla/5.0 (Windows NT 10.0; Win64; x64) Windhawk-Lunar-Calendar/0.1.3",
                                         WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
                                         WINHTTP_NO_PROXY_NAME,
                                         WINHTTP_NO_PROXY_BYPASS, 0);
        if (!hSession) {
            hSession = WinHttpOpen(L"Mozilla/5.0 (Windows NT 10.0; Win64; x64) Windhawk-Lunar-Calendar/0.1.3",
                                   WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
                                   WINHTTP_NO_PROXY_NAME,
                                   WINHTTP_NO_PROXY_BYPASS, 0);
        }
        if (hSession) {
            DWORD secureProtocols = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2 | WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3;
            WinHttpSetOption(hSession, WINHTTP_OPTION_SECURE_PROTOCOLS, &secureProtocols, sizeof(secureProtocols));
            DWORD redirectPolicy = WINHTTP_OPTION_REDIRECT_POLICY_ALWAYS;
            WinHttpSetOption(hSession, WINHTTP_OPTION_REDIRECT_POLICY, &redirectPolicy, sizeof(redirectPolicy));
            WinHttpSetTimeouts(hSession, 8000, 8000, 12000, 12000);

            HINTERNET hConnect = WinHttpConnect(hSession, hostName, urlComp.nPort, 0);
            if (hConnect) {
                DWORD flags = (urlComp.nScheme == INTERNET_SCHEME_HTTPS) ? WINHTTP_FLAG_SECURE : 0;
                flags |= WINHTTP_FLAG_REFRESH;

                HINTERNET hRequest = WinHttpOpenRequest(hConnect, L"GET", urlPath,
                                                        nullptr, WINHTTP_NO_REFERER,
                                                        WINHTTP_DEFAULT_ACCEPT_TYPES, flags);
                if (hRequest) {
                    PCWSTR headers = L"Cache-Control: no-cache, no-store, must-revalidate\r\nPragma: no-cache\r\nAccept: text/calendar, text/plain, */*\r\n";
                    if (WinHttpSendRequest(hRequest, headers, static_cast<DWORD>(-1L),
                                           WINHTTP_NO_REQUEST_DATA, 0, 0, 0) &&
                        WinHttpReceiveResponse(hRequest, nullptr)) {
                        DWORD statusCode = 0;
                        DWORD statusSize = sizeof(statusCode);
                        WinHttpQueryHeaders(hRequest,
                                            WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER,
                                            WINHTTP_HEADER_NAME_BY_INDEX,
                                            &statusCode, &statusSize, WINHTTP_NO_HEADER_INDEX);

                        if (statusCode == 200) {
                            DWORD dwSize = 0;
                            while (!g_shuttingDown && WinHttpQueryDataAvailable(hRequest, &dwSize) && dwSize > 0) {
                                std::vector<char> buffer(dwSize);
                                DWORD dwDownloaded = 0;
                                if (WinHttpReadData(hRequest, buffer.data(), dwSize, &dwDownloaded) && dwDownloaded > 0) {
                                    responseBody.append(buffer.data(), dwDownloaded);
                                } else {
                                    break;
                                }
                                if (responseBody.size() > 10 * 1024 * 1024) break;
                            }
                        }
                    }
                    WinHttpCloseHandle(hRequest);
                }
                WinHttpCloseHandle(hConnect);
            }
            WinHttpCloseHandle(hSession);
        }
    }

    if (responseBody.find("BEGIN:VCALENDAR") == std::string::npos) {
        std::string fallbackBody = DownloadViaUrlMonFallback(fetchUrl);
        if (fallbackBody.find("BEGIN:VCALENDAR") != std::string::npos) {
            responseBody = std::move(fallbackBody);
        }
    }

    return responseBody;
}

void EnsureIcsCacheLoadedInMemory() {
    ModSettings settings = GetSettings();
    if (settings.googleIcsUrl.empty()) return;

    {
        std::lock_guard<std::mutex> lock(g_icsMutex);
        if (!g_icsEventsByDate.empty()) return;
    }

    std::string cachedIcs = LoadIcsFromSharedCache();
    if (!cachedIcs.empty()) {
        size_t evCount = 0;
        auto parsed = ParseIcsContent(cachedIcs, &evCount);
        if (!parsed.empty()) {
            std::lock_guard<std::mutex> lock(g_icsMutex);
            if (g_icsEventsByDate.empty()) {
                g_icsEventsByDate = std::move(parsed);
                g_totalSyncedEventsCount = evCount;
                if (g_lastSyncStatusMsg.empty()) {
                    WCHAR buf[128]{};
                    _snwprintf_s(buf, _TRUNCATE, L"Đã nạp %zu sự kiện", evCount);
                    g_lastSyncStatusMsg = buf;
                }
                g_icsDataGeneration.fetch_add(1);
            }
        }
    }
}

void TriggerGoogleCalendarSyncIfNeeded(bool forceSync = false) {
    if (g_shuttingDown) return;

    ModSettings settings = GetSettings();
    if (settings.googleIcsUrl.empty()) {
        std::lock_guard<std::mutex> lock(g_icsMutex);
        if (!g_icsEventsByDate.empty()) {
            g_icsEventsByDate.clear();
            g_totalSyncedEventsCount = 0;
            g_lastSyncedIcsUrl.clear();
            g_lastSyncStatusMsg.clear();
            g_icsDataGeneration.fetch_add(1);
        }
        return;
    }

    ULONGLONG now = GetTickCount64();
    ULONGLONG refreshIntervalMs = static_cast<ULONGLONG>(settings.icsRefreshMinutes) * 60ULL * 1000ULL;

    {
        std::lock_guard<std::mutex> lock(g_icsMutex);
        if (!forceSync &&
            g_lastIcsSyncTick != 0 &&
            settings.googleIcsUrl == g_lastSyncedIcsUrl &&
            (now - g_lastIcsSyncTick < refreshIntervalMs)) {
            return;
        }
    }

    if (g_icsSyncInProgress.exchange(true)) {
        return;
    }

    std::wstring rawUrls = settings.googleIcsUrl;
    std::thread([rawUrls]() {
        std::unordered_map<int32_t, std::vector<GoogleCalendarEvent>> mergedEvents;
        std::string combinedRawIcs;
        size_t totalEventsCount = 0;
        bool downloadedFromNetwork = false;

        size_t start = 0;
        while (start < rawUrls.size()) {
            size_t end = rawUrls.find_first_of(L";,\r\n", start);
            if (end == std::wstring::npos) end = rawUrls.size();

            std::wstring singleUrl = CleanIcsUrl(rawUrls.substr(start, end - start));
            if (!singleUrl.empty() && _wcsnicmp(singleUrl.c_str(), L"http", 4) == 0) {
                std::string rawIcs = DownloadHttpsUrl(singleUrl);
                if (rawIcs.find("BEGIN:VCALENDAR") != std::string::npos && !g_shuttingDown) {
                    downloadedFromNetwork = true;
                    combinedRawIcs += rawIcs + "\r\n";
                    size_t evCount = 0;
                    auto parsed = ParseIcsContent(rawIcs, &evCount);
                    totalEventsCount += evCount;
                    for (auto& kv : parsed) {
                        auto& destVec = mergedEvents[kv.first];
                        for (auto& ev : kv.second) {
                            destVec.push_back(std::move(ev));
                        }
                    }
                }
            }
            start = end + 1;
        }

        if (downloadedFromNetwork && !combinedRawIcs.empty()) {
            SaveIcsToSharedCache(combinedRawIcs);
        }

        bool loadedFromCache = false;
        if (!downloadedFromNetwork && !g_shuttingDown) {
            std::string cachedIcs = LoadIcsFromSharedCache();
            if (!cachedIcs.empty()) {
                loadedFromCache = true;
                size_t evCount = 0;
                mergedEvents = ParseIcsContent(cachedIcs, &evCount);
                totalEventsCount = evCount;
            }
        }

        if ((downloadedFromNetwork || loadedFromCache) && !g_shuttingDown) {
            for (auto& kv : mergedEvents) {
                auto& vec = kv.second;
                std::sort(vec.begin(), vec.end(), [](GoogleCalendarEvent const& a, GoogleCalendarEvent const& b) {
                    if (a.isAllDay != b.isAllDay) return a.isAllDay > b.isAllDay;
                    if (a.startHour != b.startHour) return a.startHour < b.startHour;
                    return a.startMin < b.startMin;
                });
            }

            SYSTEMTIME stSync{};
            GetLocalTime(&stSync);
            WCHAR statusBuf[128]{};
            _snwprintf_s(statusBuf, _TRUNCATE, L"Đã đồng bộ %zu sự kiện lúc %02d:%02d",
                         totalEventsCount, stSync.wHour, stSync.wMinute);

            {
                std::lock_guard<std::mutex> lock(g_icsMutex);
                g_icsEventsByDate = std::move(mergedEvents);
                g_totalSyncedEventsCount = totalEventsCount;
                g_lastIcsSyncTick = GetTickCount64();
                g_lastSyncedIcsUrl = rawUrls;
                g_lastSyncStatusMsg = statusBuf;
                g_icsDataGeneration.fetch_add(1);
            }
            NotifyCalendarUiAfterIcsSync();
        } else if (!g_shuttingDown) {
            std::lock_guard<std::mutex> lock(g_icsMutex);
            g_lastIcsSyncTick = GetTickCount64();
            if (g_lastSyncStatusMsg.empty()) {
                g_lastSyncStatusMsg = L"Chưa tải được dữ liệu (Kiểm tra lại link .ics)";
            }
        }
        g_icsSyncInProgress = false;
    }).detach();
}

void StartPeriodicGoogleCalendarSyncLoop() {
    if (g_backgroundSyncLoopStarted.exchange(true)) return;
    std::thread([]() {
        while (!g_shuttingDown) {
            for (int i = 0; i < 15 && !g_shuttingDown; i++) {
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            if (g_shuttingDown) break;
            TriggerGoogleCalendarSyncIfNeeded(false);
        }
    }).detach();
}

bool HasGoogleEventsOnDate(int32_t dateKey) {
    std::lock_guard<std::mutex> lock(g_icsMutex);
    auto it = g_icsEventsByDate.find(dateKey);
    return it != g_icsEventsByDate.end() && !it->second.empty();
}

std::vector<GoogleCalendarEvent> GetGoogleEventsOnDate(int32_t dateKey) {
    std::lock_guard<std::mutex> lock(g_icsMutex);
    auto it = g_icsEventsByDate.find(dateKey);
    if (it == g_icsEventsByDate.end()) return {};
    return it->second;
}

std::vector<GoogleCalendarEvent> GetUpcomingGoogleEventsAfterDate(int32_t todayKey, size_t maxCount = 2) {
    std::vector<GoogleCalendarEvent> upcoming;
    std::lock_guard<std::mutex> lock(g_icsMutex);

    std::vector<int32_t> futureKeys;
    futureKeys.reserve(g_icsEventsByDate.size());
    for (const auto& kv : g_icsEventsByDate) {
        if (kv.first > todayKey && !kv.second.empty()) {
            futureKeys.push_back(kv.first);
        }
    }
    std::sort(futureKeys.begin(), futureKeys.end());

    for (int32_t k : futureKeys) {
        for (const auto& ev : g_icsEventsByDate[k]) {
            upcoming.push_back(ev);
            if (upcoming.size() >= maxCount) return upcoming;
        }
    }
    return upcoming;
}

std::wstring FormatGoogleEventsForTooltip(int32_t todayKey, ModSettings const& settings, bool vi) {
    if (settings.googleIcsUrl.empty()) return {};

    EnsureIcsCacheLoadedInMemory();

    auto todayEvents = GetGoogleEventsOnDate(todayKey);
    auto upcomingEvents = GetUpcomingGoogleEventsAfterDate(todayKey, 2);

    if (!settings.showGoogleEventsInTooltip) {
        if (!todayEvents.empty()) {
            WCHAR privBuf[160]{};
            _snwprintf_s(privBuf, _TRUNCATE,
                         vi ? L"\r\n🔒 Lịch hôm nay: Có %zu sự kiện (Đã ẩn nội dung)"
                            : L"\r\n🔒 Today's Schedule: %zu event(s) (Hidden for privacy)",
                         todayEvents.size());
            return privBuf;
        }
        return {};
    }

    std::wstring out;

    if (!todayEvents.empty()) {
        out += vi ? L"\r\n📌 LỊCH TRÌNH HÔM NAY:" : L"\r\n📌 TODAY'S SCHEDULE:";
        size_t count = 0;
        for (const auto& ev : todayEvents) {
            if (count >= 3) {
                WCHAR moreBuf[64]{};
                _snwprintf_s(moreBuf, _TRUNCATE,
                             vi ? L"\r\n   ... (+%zu sự kiện khác)" : L"\r\n   ... (+%zu more)",
                             todayEvents.size() - count);
                out += moreBuf;
                break;
            }

            WCHAR timePrefix[32]{};
            if (ev.isAllDay) {
                wcscpy_s(timePrefix, vi ? L"Cả ngày" : L"All day");
            } else {
                _snwprintf_s(timePrefix, _TRUNCATE, L"%02d:%02d", ev.startHour, ev.startMin);
            }

            std::wstring summaryShort = ev.summary;
            if (summaryShort.size() > 32) summaryShort = summaryShort.substr(0, 32) + L"...";

            out += L"\r\n   • [";
            out += timePrefix;
            out += L"] ";
            out += summaryShort;

            if (!ev.description.empty()) {
                std::wstring desc = ev.description;
                size_t nl = desc.find(L'\n');
                if (nl != std::wstring::npos) desc = desc.substr(0, nl);
                if (desc.size() > 36) desc = desc.substr(0, 36) + L"...";
                out += L"\r\n     └ 📝 " + desc;
            }
            count++;
        }
    }

    if (todayEvents.empty() && !upcomingEvents.empty()) {
        out += vi ? L"\r\n📌 LỊCH SẮP TỚI (Google Calendar):" : L"\r\n📌 UPCOMING SCHEDULE:";
        for (const auto& ev : upcomingEvents) {
            int d = ev.dateKey % 100;
            int m = (ev.dateKey / 100) % 100;
            WCHAR datePrefix[32]{};
            _snwprintf_s(datePrefix, _TRUNCATE, L"%02d/%02d", d, m);

            std::wstring summaryShort = ev.summary;
            if (summaryShort.size() > 30) summaryShort = summaryShort.substr(0, 30) + L"...";

            out += L"\r\n   • [";
            out += datePrefix;
            out += L"] ";
            out += summaryShort;
        }
    }

    if (!out.empty()) {
        out = L"\r\n──────────────────────────" + out;
    }
    return out;
}

////////////////////////////////////////////////////////////////////////////////
// Pure Arithmetic Vietnamese Lunar Calendar & 24 Solar Terms (UTC+7)

const PCWSTR CAN_10[] = {
    L"Giáp", L"Ất", L"Bính", L"Đinh", L"Mậu", L"Kỷ", L"Canh", L"Tân", L"Nhâm", L"Quý"
};

const PCWSTR CHI_12[] = {
    L"Tý", L"Sửu", L"Dần", L"Mão", L"Thìn", L"Tỵ", L"Ngọ", L"Mùi", L"Thân", L"Dậu", L"Tuất", L"Hợi"
};

std::wstring GetCanChiYear(int year) {
    int canIdx = ((year + 6) % 10 + 10) % 10;
    int chiIdx = ((year + 8) % 12 + 12) % 12;
    return std::wstring(CAN_10[canIdx]) + L" " + CHI_12[chiIdx];
}

constexpr double kPi = 3.14159265358979323846;

int IntFloor(double d) {
    return static_cast<int>(std::floor(d));
}

double NewMoonJDN(int k) {
    double T = k / 1236.85;
    double T2 = T * T;
    double T3 = T2 * T;
    double dr = kPi / 180.0;
    double Jd1 = 2415020.75933 + 29.53058868 * k + 0.0001178 * T2 - 0.000000155 * T3;
    Jd1 += 0.00033 * std::sin((166.56 + 132.87 * T - 0.009173 * T2) * dr);
    double M = 359.2242 + 29.10535608 * k - 0.0000333 * T2 - 0.00000347 * T3;
    double Mpr = 306.0253 + 385.81691806 * k + 0.0107306 * T2 + 0.00001236 * T3;
    double F = 21.2964 + 390.67050646 * k - 0.0016528 * T2 - 0.00000239 * T3;
    double C1 = (0.1734 - 0.000393 * T) * std::sin(M * dr) + 0.0021 * std::sin(2 * dr * M);
    C1 = C1 - 0.4068 * std::sin(Mpr * dr) + 0.0161 * std::sin(dr * 2 * Mpr);
    C1 = C1 - 0.0004 * std::sin(dr * 3 * Mpr);
    C1 = C1 + 0.0104 * std::sin(dr * 2 * F) - 0.0051 * std::sin(dr * (M + Mpr));
    C1 = C1 - 0.0074 * std::sin(dr * (M - Mpr)) + 0.0004 * std::sin(dr * (2 * F + M));
    C1 = C1 - 0.0004 * std::sin(dr * (2 * F - M)) - 0.0006 * std::sin(dr * (2 * F + Mpr));
    C1 = C1 + 0.0010 * std::sin(dr * (2 * F - Mpr)) + 0.0005 * std::sin(dr * (2 * Mpr + M));
    double deltat;
    if (T < -11) {
        deltat = 0.001 + 0.000839 * T + 0.0002261 * T2 - 0.00000845 * T3 - 0.000000081 * T * T3;
    } else {
        deltat = -0.000278 + 0.000265 * T + 0.000262 * T2;
    }
    return Jd1 + C1 - deltat;
}

int GetNewMoonDay(int k, double timeZone) {
    return IntFloor(NewMoonJDN(k) + 0.5 + timeZone / 24.0);
}

double SunLongitudeRadians(double jdn) {
    double T = (jdn - 2451545.0) / 36525.0;
    double T2 = T * T;
    double dr = kPi / 180.0;
    double M = 357.52910 + 35999.05030 * T - 0.0001559 * T2 - 0.00000048 * T * T2;
    double L0 = 280.46645 + 36000.76983 * T + 0.0003032 * T2;
    double DL = (1.914600 - 0.004817 * T - 0.000014 * T2) * std::sin(dr * M);
    DL += (0.019993 - 0.000101 * T) * std::sin(dr * 2 * M) + 0.000290 * std::sin(dr * 3 * M);
    double L = (L0 + DL) * dr;
    L -= kPi * 2 * IntFloor(L / (kPi * 2));
    return L;
}

int GetSunLongitudeSector(int dayNumber, double timeZone) {
    return IntFloor(SunLongitudeRadians(dayNumber - 0.5 - timeZone / 24.0) / kPi * 6.0);
}

struct SolarTermEntry {
    PCWSTR viName;
    PCWSTR enName;
};

static const SolarTermEntry kSolarTerms24[24] = {
    { L"Xuân Phân",   L"Vernal Equinox (Xuân Phân)" },
    { L"Thanh Minh",  L"Clear and Bright (Thanh Minh)" },
    { L"Cốc Vũ",      L"Grain Rain (Cốc Vũ)" },
    { L"Lập Hạ",      L"Start of Summer (Lập Hạ)" },
    { L"Tiểu Mãn",    L"Grain Buds (Tiểu Mãn)" },
    { L"Mang Chủng",  L"Grain in Ear (Mang Chủng)" },
    { L"Hạ Chí",      L"Summer Solstice (Hạ Chí)" },
    { L"Tiểu Thử",    L"Minor Heat (Tiểu Thử)" },
    { L"Đại Thử",     L"Major Heat (Đại Thử)" },
    { L"Lập Thu",     L"Start of Autumn (Lập Thu)" },
    { L"Xử Thử",      L"End of Heat (Xử Thử)" },
    { L"Bạch Lộ",     L"White Dew (Bạch Lộ)" },
    { L"Thu Phân",    L"Autumnal Equinox (Thu Phân)" },
    { L"Hàn Lộ",      L"Cold Dew (Hàn Lộ)" },
    { L"Sương Giáng", L"Frost's Descent (Sương Giáng)" },
    { L"Lập Đông",    L"Start of Winter (Lập Đông)" },
    { L"Tiểu Tuyết",  L"Minor Snow (Tiểu Tuyết)" },
    { L"Đại Tuyết",   L"Major Snow (Đại Tuyết)" },
    { L"Đông Chí",    L"Winter Solstice (Đông Chí)" },
    { L"Tiểu Hàn",    L"Minor Cold (Tiểu Hàn)" },
    { L"Đại Hàn",     L"Major Cold (Đại Hàn)" },
    { L"Lập Xuân",    L"Start of Spring (Lập Xuân)" },
    { L"Vũ Thủy",     L"Rain Water (Vũ Thủy)" },
    { L"Kinh Trập",   L"Awakening of Insects (Kinh Trập)" }
};

int GetSolarTermIndex(int jdn, double timeZone = 7.0) {
    double rad = SunLongitudeRadians(jdn + 0.5 - timeZone / 24.0);
    int idx = IntFloor(rad / kPi * 12.0) % 24;
    return (idx + 24) % 24;
}

struct SolarTermInfo {
    int index = 0;
    PCWSTR name = L"";
    bool isTransitionDay = false;
};

SolarTermInfo EvaluateSolarTerm(int sDay, int sMonth, int sYear, bool vi) {
    constexpr double kVietnamTimeZone = 7.0;
    int jdnToday = CalculateJDN(sDay, sMonth, sYear);
    int termToday = GetSolarTermIndex(jdnToday, kVietnamTimeZone);
    int termYesterday = GetSolarTermIndex(jdnToday - 1, kVietnamTimeZone);

    SolarTermInfo info;
    info.index = termToday;
    info.name = PickText(vi, kSolarTerms24[termToday].viName, kSolarTerms24[termToday].enName);
    info.isTransitionDay = (termToday != termYesterday);
    return info;
}

int GetLunarMonth11(int yy, double timeZone) {
    int off = CalculateJDN(31, 12, yy) - 2415021;
    int k = IntFloor(off / 29.530588853);
    int nm = GetNewMoonDay(k, timeZone);
    int sunLong = GetSunLongitudeSector(nm, timeZone);
    if (sunLong >= 9) {
        nm = GetNewMoonDay(k - 1, timeZone);
    }
    return nm;
}

int GetLeapMonthOffset(int a11, double timeZone) {
    int k = IntFloor((a11 - 2415021.076998695) / 29.530588853 + 0.5);
    int last = 0;
    int i = 1;
    int arc = GetSunLongitudeSector(GetNewMoonDay(k + i, timeZone), timeZone);
    do {
        last = arc;
        i++;
        arc = GetSunLongitudeSector(GetNewMoonDay(k + i, timeZone), timeZone);
    } while (arc != last && i < 14);
    return i - 1;
}

void GetVietnameseLunarDate(int sYear, int sMonth, int sDay,
                            int& lDay, int& lMonth, int& lYear,
                            bool& isLeap, std::wstring& canChi) {
    constexpr double kVietnamTimeZone = 7.0;
    int dayNumber = CalculateJDN(sDay, sMonth, sYear);
    int k = IntFloor((dayNumber - 2415021.076998695) / 29.530588853);
    int monthStart = GetNewMoonDay(k + 1, kVietnamTimeZone);
    if (monthStart > dayNumber) {
        monthStart = GetNewMoonDay(k, kVietnamTimeZone);
    }
    int a11 = GetLunarMonth11(sYear, kVietnamTimeZone);
    int b11 = a11;
    if (a11 >= monthStart) {
        lYear = sYear;
        a11 = GetLunarMonth11(sYear - 1, kVietnamTimeZone);
    } else {
        lYear = sYear + 1;
        b11 = GetLunarMonth11(sYear + 1, kVietnamTimeZone);
    }
    lDay = dayNumber - monthStart + 1;
    int diff = IntFloor((monthStart - a11) / 29.0);
    isLeap = false;
    lMonth = diff + 11;
    if (b11 - a11 > 365) {
        int leapMonthDiff = GetLeapMonthOffset(a11, kVietnamTimeZone);
        if (diff >= leapMonthDiff) {
            lMonth = diff + 10;
            if (diff == leapMonthDiff) {
                isLeap = true;
            }
        }
    }
    if (lMonth > 12) {
        lMonth -= 12;
    }
    if (lMonth >= 11 && diff < 4) {
        lYear -= 1;
    }
    canChi = GetCanChiYear(lYear);
}

std::wstring FormatTaskbarLunarDate(int sYear, int sMonth, int sDay, bool vi) {
    static thread_local int32_t cachedKey = 0;
    static thread_local bool cachedVi = false;
    static thread_local std::wstring cachedResult;

    int32_t key = MakeDateKey(sYear, sMonth, sDay);
    if (key == cachedKey && vi == cachedVi && !cachedResult.empty()) {
        return cachedResult;
    }

    int lDay, lMonth, lYear;
    bool isLeap;
    std::wstring canChi;
    GetVietnameseLunarDate(sYear, sMonth, sDay, lDay, lMonth, lYear, isLeap, canChi);

    WCHAR buffer[128]{};
    if (isLeap) {
        _snwprintf_s(buffer, _TRUNCATE, L"%02d/%02d (%s) %s",
                     lDay, lMonth, PickText(vi, L"Nhuận", L"Leap"), canChi.c_str());
    } else {
        _snwprintf_s(buffer, _TRUNCATE, L"%02d/%02d %s", lDay, lMonth, canChi.c_str());
    }

    cachedKey = key;
    cachedVi = vi;
    cachedResult = buffer;
    return cachedResult;
}

////////////////////////////////////////////////////////////////////////////////
// Five Elements (Ngũ Hành Nạp Âm) & Personal Birth Year Compatibility

enum class FiveElement : uint8_t {
    Wood = 0,  // Mộc
    Fire = 1,  // Hỏa
    Earth = 2, // Thổ
    Metal = 3, // Kim
    Water = 4  // Thủy
};

constexpr FiveElement kNapAmElements[15] = {
    FiveElement::Metal, FiveElement::Fire,  FiveElement::Wood,
    FiveElement::Earth, FiveElement::Metal, FiveElement::Fire,
    FiveElement::Water, FiveElement::Earth, FiveElement::Metal,
    FiveElement::Wood,  FiveElement::Water, FiveElement::Earth,
    FiveElement::Fire,  FiveElement::Wood,  FiveElement::Water
};

int GetNapAmIndex(int canIdx, int chiIdx) {
    int hoaGiapIdx = (6 * canIdx - 5 * chiIdx + 60) % 60;
    return hoaGiapIdx / 2;
}

FiveElement GetElementFromNapAmIndex(int napAmIdx) {
    return kNapAmElements[napAmIdx % 15];
}

PCWSTR GetElementName(FiveElement elem, bool vi) {
    static const PCWSTR kNamesVi[] = { L"Mộc", L"Hỏa", L"Thổ", L"Kim", L"Thủy" };
    static const PCWSTR kNamesEn[] = { L"Wood", L"Fire", L"Earth", L"Metal", L"Water" };
    uint8_t idx = static_cast<uint8_t>(elem);
    return vi ? kNamesVi[idx] : kNamesEn[idx];
}

enum class AgeMatchState { None, ClashedMajor, ClashedMinor, Harmonious };

struct PersonalCompatibility {
    AgeMatchState state = AgeMatchState::None;
    std::wstring summary;
    std::wstring compactTooltipLine1;
    std::wstring compactTooltipLine2;
};

PersonalCompatibility EvaluatePersonalAgeCompatibility(int birthYear, int canDayIdx, int chiDayIdx, bool vi) {
    PersonalCompatibility res;
    if (birthYear < 1900 || birthYear > 2100) return res;

    int userCanIdx = ((birthYear + 6) % 10 + 10) % 10;
    int userChiIdx = ((birthYear + 8) % 12 + 12) % 12;
    std::wstring userCanChi = GetCanChiYear(birthYear);

    int userNapAmIdx = GetNapAmIndex(userCanIdx, userChiIdx);
    int dayNapAmIdx  = GetNapAmIndex(canDayIdx, chiDayIdx);

    FiveElement userElem = GetElementFromNapAmIndex(userNapAmIdx);
    FiveElement dayElem  = GetElementFromNapAmIndex(dayNapAmIdx);

    PCWSTR userElemStr = GetElementName(userElem, vi);
    PCWSTR dayElemStr  = GetElementName(dayElem, vi);

    int elemDiff = (static_cast<int>(dayElem) - static_cast<int>(userElem) + 5) % 5;

    WCHAR elemRelationBuf[128]{};
    if (elemDiff == 4) {
        _snwprintf_s(elemRelationBuf, _TRUNCATE,
                     vi ? L"Ngày %s TƯƠNG SINH tuổi %s (Tốt)"
                        : L"Day %s SUPPORTS your %s (Good)",
                     dayElemStr, userElemStr);
    } else if (elemDiff == 0) {
        _snwprintf_s(elemRelationBuf, _TRUNCATE,
                     vi ? L"Ngày %s TƯƠNG HÒA tuổi %s (Tốt)"
                        : L"Day %s HARMONIZES with your %s (Good)",
                     dayElemStr, userElemStr);
    } else if (elemDiff == 3) {
        _snwprintf_s(elemRelationBuf, _TRUNCATE,
                     vi ? L"Ngày %s TƯƠNG KHẮC tuổi %s (Kỵ)"
                        : L"Day %s CLASHES with your %s (Avoid)",
                     dayElemStr, userElemStr);
    } else if (elemDiff == 2) {
        _snwprintf_s(elemRelationBuf, _TRUNCATE,
                     vi ? L"Tuổi %s chế khắc được ngày %s (Bình)"
                        : L"Your %s controls Day %s (Neutral)",
                     userElemStr, dayElemStr);
    } else {
        _snwprintf_s(elemRelationBuf, _TRUNCATE,
                     vi ? L"Tuổi %s sinh xuất cho ngày %s (Hao khí nhẹ)"
                        : L"Your %s drains into Day %s (Minor drain)",
                     userElemStr, dayElemStr);
    }

    bool isLucXung    = ((chiDayIdx + 6) % 12 == userChiIdx);
    bool isCanKhac    = ((canDayIdx + 4) % 10 == userCanIdx) || ((canDayIdx + 6) % 10 == userCanIdx);
    bool isTamHop     = ((chiDayIdx + 4) % 12 == userChiIdx) || ((chiDayIdx + 8) % 12 == userChiIdx);
    bool isLucHop     = ((chiDayIdx + userChiIdx) % 12 == 1);
    bool isTuHanhXung = ((chiDayIdx + 3) % 12 == userChiIdx) || ((chiDayIdx + 9) % 12 == userChiIdx);

    PCWSTR branchStatus = L"";
    if (isLucXung && isCanKhac) {
        res.state = AgeMatchState::ClashedMajor;
        branchStatus = vi ? L"⚠️ ĐẠI KỴ (Thiên Khắc Địa Xung)" : L"⚠️ MAJOR CLASH";
    } else if (isLucXung) {
        res.state = AgeMatchState::ClashedMajor;
        branchStatus = vi ? L"⚠️ XUNG TUỔI (Lục Xung)" : L"⚠️ SIX-CLASH";
    } else if (isTamHop) {
        res.state = (elemDiff == 3) ? AgeMatchState::None : AgeMatchState::Harmonious;
        branchStatus = vi ? L"✅ TAM HỢP" : L"✅ TRINE HARMONY";
    } else if (isLucHop) {
        res.state = (elemDiff == 3) ? AgeMatchState::None : AgeMatchState::Harmonious;
        branchStatus = vi ? L"✅ LỤC HỢP" : L"✅ SIX HARMONY";
    } else if (isTuHanhXung) {
        res.state = AgeMatchState::ClashedMinor;
        branchStatus = vi ? L"🔸 HÌNH XUNG nhẹ" : L"🔸 MINOR FRICTION";
    } else {
        if (elemDiff == 4) res.state = AgeMatchState::Harmonious;
        else if (elemDiff == 3) res.state = AgeMatchState::ClashedMinor;
        branchStatus = vi ? L"👤 Bản mệnh" : L"👤 Your Sign";
    }

    WCHAR finalBuf[384]{};
    _snwprintf_s(finalBuf, _TRUNCATE,
                 L"%s (%s %d) • %s",
                 branchStatus, userCanChi.c_str(), birthYear, elemRelationBuf);
    res.summary = finalBuf;

    WCHAR line1Buf[160]{};
    _snwprintf_s(line1Buf, _TRUNCATE, L"%s — Tuổi %s (%d)",
                 branchStatus, userCanChi.c_str(), birthYear);
    res.compactTooltipLine1 = line1Buf;
    res.compactTooltipLine2 = std::wstring(L"   └ ") + elemRelationBuf;

    return res;
}

////////////////////////////////////////////////////////////////////////////////
// Holidays & Horoscope Data Tables (Bilingual Vietnamese & English)

enum class HolidayScope { None, SolarOnly, LunarOnly, Both };

struct VietnameseHolidayResult {
    HolidayScope scope = HolidayScope::None;
    std::wstring names;
};

VietnameseHolidayResult EvaluateVietnameseHoliday(int sDay, int sMonth, int sYear,
                                                  int lDay, int lMonth,
                                                  bool isLeap, bool vi) {
    VietnameseHolidayResult res;
    bool highlightSolar = false;
    bool highlightLunar = false;

    auto addName = [&](PCWSTR name) {
        if (!res.names.empty()) res.names += L" • ";
        res.names += name;
    };

    struct HolidayEntry {
        int day;
        int month;
        HolidayScope scope;
        PCWSTR viName;
        PCWSTR enName;
    };

    static const HolidayEntry kSolarHolidays[] = {
        { 1,  1,  HolidayScope::Both,      L"Tết Dương lịch",             L"New Year's Day" },
        { 14, 2,  HolidayScope::SolarOnly, L"Lễ Tình nhân (Valentine)",   L"Valentine's Day" },
        { 8,  3,  HolidayScope::SolarOnly, L"Quốc tế Phụ nữ",             L"International Women's Day" },
        { 26, 3,  HolidayScope::SolarOnly, L"Thành lập Đoàn TNCS HCM",    L"Youth Union Foundation Day" },
        { 30, 4,  HolidayScope::SolarOnly, L"Ngày Giải phóng miền Nam",   L"Reunification Day" },
        { 1,  5,  HolidayScope::SolarOnly, L"Quốc tế Lao động",           L"International Workers' Day" },
        { 1,  6,  HolidayScope::SolarOnly, L"Quốc tế Thiếu nhi",          L"International Children's Day" },
        { 2,  9,  HolidayScope::SolarOnly, L"Quốc khánh Việt Nam",        L"Vietnam National Day" },
        { 20, 10, HolidayScope::SolarOnly, L"Ngày Phụ nữ Việt Nam",       L"Vietnamese Women's Day" },
        { 20, 11, HolidayScope::SolarOnly, L"Ngày Nhà giáo Việt Nam",     L"Vietnamese Teachers' Day" },
        { 24, 11, HolidayScope::SolarOnly, L"Ngày Văn hóa Việt Nam",      L"Vietnam Cultural Heritage Day" },
        { 22, 12, HolidayScope::SolarOnly, L"Thành lập QĐND Việt Nam",    L"People's Army Foundation Day" },
        { 24, 12, HolidayScope::SolarOnly, L"Đêm Giáng Sinh",             L"Christmas Eve" },
        { 25, 12, HolidayScope::SolarOnly, L"Lễ Giáng Sinh (Noel)",       L"Christmas Day" },
    };

    static const HolidayEntry kLunarHolidays[] = {
        { 1,  1,  HolidayScope::Both,      L"Mùng 1 Tết Nguyên Đán",              L"Lunar New Year (Tết - Day 1)" },
        { 2,  1,  HolidayScope::Both,      L"Mùng 2 Tết Nguyên Đán",              L"Lunar New Year (Tết - Day 2)" },
        { 3,  1,  HolidayScope::Both,      L"Mùng 3 Tết Nguyên Đán",              L"Lunar New Year (Tết - Day 3)" },
        { 15, 1,  HolidayScope::Both,      L"Tết Nguyên Tiêu (Rằm tháng Giêng)",  L"First Full Moon Festival (Tết Nguyên Tiêu)" },
        { 3,  3,  HolidayScope::None,      L"Tết Hàn Thực",                       L"Cold Food Festival (Tết Hàn Thực)" },
        { 10, 3,  HolidayScope::LunarOnly, L"Giỗ Tổ Hùng Vương",                  L"Hùng Kings' Commemoration Day" },
        { 15, 4,  HolidayScope::LunarOnly, L"Lễ Phật Đản",                        L"Buddha's Birthday (Lễ Phật Đản)" },
        { 5,  5,  HolidayScope::LunarOnly, L"Tết Đoan Ngọ",                       L"Mid-Year Festival (Tết Đoan Ngọ)" },
        { 15, 7,  HolidayScope::Both,      L"Lễ Vu Lan (Rằm tháng Bảy)",          L"Vu Lan Festival (Ghost Festival)" },
        { 15, 8,  HolidayScope::Both,      L"Tết Trung Thu (Rằm tháng Tám)",      L"Mid-Autumn Festival (Tết Trung Thu)" },
        { 23, 12, HolidayScope::LunarOnly, L"Tiễn Ông Công Ông Táo",              L"Kitchen Guardians Day (Ông Công Ông Táo)" },
        { 29, 12, HolidayScope::Both,      L"Tất niên / Giao thừa",               L"Lunar New Year's Eve (Tất niên)" },
        { 30, 12, HolidayScope::Both,      L"Tất niên / Giao thừa",               L"Lunar New Year's Eve (Giao thừa)" },
    };

    for (const auto& entry : kSolarHolidays) {
        if (sDay == entry.day && sMonth == entry.month) {
            addName(PickText(vi, entry.viName, entry.enName));
            if (entry.scope == HolidayScope::Both || entry.scope == HolidayScope::SolarOnly) highlightSolar = true;
            if (entry.scope == HolidayScope::Both || entry.scope == HolidayScope::LunarOnly) highlightLunar = true;
        }
    }

    if (!isLeap) {
        bool matchedLunarFestival = false;
        for (const auto& entry : kLunarHolidays) {
            if (lDay == entry.day && lMonth == entry.month) {
                addName(PickText(vi, entry.viName, entry.enName));
                matchedLunarFestival = true;
                if (entry.scope == HolidayScope::Both || entry.scope == HolidayScope::SolarOnly) highlightSolar = true;
                if (entry.scope == HolidayScope::Both || entry.scope == HolidayScope::LunarOnly) highlightLunar = true;
            }
        }
        if (!matchedLunarFestival) {
            if (lDay == 1) addName(PickText(vi, L"Ngày Mùng 1 (Sóc)", L"New Moon Day (Mùng 1)"));
            else if (lDay == 15) addName(PickText(vi, L"Ngày Rằm (Vọng)", L"Full Moon Day (Ngày Rằm)"));
        }
    }

    SolarTermInfo st = EvaluateSolarTerm(sDay, sMonth, sYear, vi);
    if (st.isTransitionDay) {
        if (st.index == 1) {
            addName(PickText(vi, L"Tết Thanh Minh", L"Qingming Festival (Tết Thanh Minh)"));
            highlightSolar = true;
        } else {
            std::wstring termEvent = std::wstring(PickText(vi, L"Bắt đầu tiết ", L"Solar Term: ")) + st.name;
            addName(termEvent.c_str());
        }
    }

    if (highlightSolar && highlightLunar) res.scope = HolidayScope::Both;
    else if (highlightSolar) res.scope = HolidayScope::SolarOnly;
    else if (highlightLunar) res.scope = HolidayScope::LunarOnly;
    else res.scope = HolidayScope::None;

    return res;
}

struct ComputedHoroscope {
    int sDay = 1, sMonth = 1, sYear = 2000;
    int lDay = 1, lMonth = 1, lYear = 2000;
    bool isLeap = false;
    PCWSTR weekdayStr = L"";
    std::wstring hourCanChi;
    std::wstring dayCanChi;
    std::wstring monthCanChi;
    std::wstring yearCanChi;
    PCWSTR napAmStr = L"";
    PCWSTR starName = L"";
    bool isHoangDao = false;
    PCWSTR trucName = L"";
    PCWSTR tietKhiName = L"";
    bool isFirstDayOfTietKhi = false;
    PCWSTR goodFor = L"";
    PCWSTR badFor = L"";
    PCWSTR gioHoangDao = L"";
    PCWSTR gioHoangDaoLine1 = L"";
    PCWSTR gioHoangDaoLine2 = L"";
    std::wstring tuoiXung;
    PCWSTR huongHyThan = L"";
    PCWSTR huongTaiThan = L"";
    std::wstring specialHoliday;
    PersonalCompatibility personalMatch;
};

ComputedHoroscope ComputeHoroscopeForDate(int sYear, int sMonth, int sDay, bool vi, int hour = 0) {
    ComputedHoroscope info;
    info.sYear = sYear;
    info.sMonth = sMonth;
    info.sDay = sDay;

    GetVietnameseLunarDate(sYear, sMonth, sDay,
                           info.lDay, info.lMonth, info.lYear,
                           info.isLeap, info.yearCanChi);

    int jdn = CalculateJDN(sDay, sMonth, sYear);

    int weekdayIdx = ((jdn % 7) + 7) % 7;
    info.weekdayStr = vi ? kWeekdaysViFull[weekdayIdx] : kWeekdaysEnFull[weekdayIdx];

    int canDayIdx = ((jdn + 9) % 10 + 10) % 10;
    int chiDayIdx = ((jdn + 1) % 12 + 12) % 12;
    info.dayCanChi = std::wstring(CAN_10[canDayIdx]) + L" " + CHI_12[chiDayIdx];

    int canMonthIdx = ((info.lYear * 12 + info.lMonth + 3) % 10 + 10) % 10;
    int chiMonthIdx = ((info.lMonth + 1) % 12 + 12) % 12;
    info.monthCanChi = std::wstring(CAN_10[canMonthIdx]) + L" " + CHI_12[chiMonthIdx];

    int chiHourIdx = (((hour + 1) / 2) % 12 + 12) % 12;
    int canHourIdx = (((canDayIdx % 5) * 2 + chiHourIdx) % 10 + 10) % 10;
    info.hourCanChi = std::wstring(CAN_10[canHourIdx]) + L" " + CHI_12[chiHourIdx];

    struct BilingualText { PCWSTR vi; PCWSTR en; };
    static const BilingualText kNapAm[30] = {
        { L"Hải Trung Kim (Vàng trong biển)",    L"Hải Trung Kim (Sea Metal)" },
        { L"Lô Trung Hỏa (Lửa trong lò)",        L"Lô Trung Hỏa (Furnace Fire)" },
        { L"Đại Lâm Mộc (Gỗ rừng già)",          L"Đại Lâm Mộc (Forest Wood)" },
        { L"Lộ Bàng Thổ (Đất ven đường)",        L"Lộ Bàng Thổ (Roadside Earth)" },
        { L"Kiếm Phong Kim (Vàng mũi kiếm)",     L"Kiếm Phong Kim (Sword Metal)" },
        { L"Sơn Đầu Hỏa (Lửa đầu núi)",          L"Sơn Đầu Hỏa (Mountain Fire)" },
        { L"Giản Hạ Thủy (Nước dưới khe)",       L"Giản Hạ Thủy (Stream Water)" },
        { L"Thành Đầu Thổ (Đất tường thành)",    L"Thành Đầu Thổ (Fortress Earth)" },
        { L"Bạch Lạp Kim (Vàng chân đèn)",       L"Bạch Lạp Kim (Candlestick Metal)" },
        { L"Dương Liễu Mộc (Gỗ cây liễu)",       L"Dương Liễu Mộc (Willow Wood)" },
        { L"Tuyền Trung Thủy (Nước trong suối)", L"Tuyền Trung Thủy (Spring Water)" },
        { L"Ốc Thượng Thổ (Đất mái nhà)",        L"Ốc Thượng Thổ (Roof Earth)" },
        { L"Tích Lịch Hỏa (Lửa sấm sét)",        L"Tích Lịch Hỏa (Thunderbolt Fire)" },
        { L"Tùng Bách Mộc (Gỗ tùng bách)",       L"Tùng Bách Mộc (Pine Wood)" },
        { L"Trường Lưu Thủy (Nước chảy dài)",    L"Trường Lưu Thủy (River Water)" },
        { L"Sa Trung Kim (Vàng trong cát)",      L"Sa Trung Kim (Sand Metal)" },
        { L"Sơn Hạ Hỏa (Lửa dưới núi)",          L"Sơn Hạ Hỏa (Foothill Fire)" },
        { L"Bình Địa Mộc (Gỗ đồng bằng)",        L"Bình Địa Mộc (Plain Wood)" },
        { L"Bích Thượng Thổ (Đất tò vò)",        L"Bích Thượng Thổ (Wall Earth)" },
        { L"Kim Bạch Kim (Vàng pha bạc)",        L"Kim Bạch Kim (Gold Foil Metal)" },
        { L"Phúc Đăng Hỏa (Lửa đèn chụp)",       L"Phúc Đăng Hỏa (Lamp Fire)" },
        { L"Thiên Hà Thủy (Nước ngân hà)",       L"Thiên Hà Thủy (Celestial Water)" },
        { L"Đại Trạch Thổ (Đất nền nhà)",        L"Đại Trạch Thổ (Marsh Earth)" },
        { L"Thoa Xuyến Kim (Vàng trang sức)",    L"Thoa Xuyến Kim (Jewelry Metal)" },
        { L"Tang Đố Mộc (Gỗ cây dâu)",           L"Tang Đố Mộc (Mulberry Wood)" },
        { L"Đại Khê Thủy (Nước khe lớn)",        L"Đại Khê Thủy (Rapids Water)" },
        { L"Sa Trung Thổ (Đất pha cát)",         L"Sa Trung Thổ (Sand Earth)" },
        { L"Thiên Thượng Hỏa (Lửa trên trời)",   L"Thiên Thượng Hỏa (Solar Fire)" },
        { L"Thạch Lựu Mộc (Gỗ cây lựu)",         L"Thạch Lựu Mộc (Pomegranate Wood)" },
        { L"Đại Hải Thủy (Nước biển lớn)",       L"Đại Hải Thủy (Ocean Water)" },
    };
    int napAmIdx = GetNapAmIndex(canDayIdx, chiDayIdx);
    info.napAmStr = PickText(vi, kNapAm[napAmIdx].vi, kNapAm[napAmIdx].en);

    struct StarInfo { PCWSTR name; bool isHoangDao; };
    static const StarInfo kStars[12] = {
        { L"Thanh Long Hoàng Đạo", true },  { L"Minh Đường Hoàng Đạo", true },
        { L"Thiên Hình Hắc Đạo", false },   { L"Chu Tước Hắc Đạo", false },
        { L"Kim Quỹ Hoàng Đạo", true },     { L"Kim Đường Hoàng Đạo", true },
        { L"Bạch Hổ Hắc Đạo", false },      { L"Ngọc Đường Hoàng Đạo", true },
        { L"Thiên Lao Hắc Đạo", false },    { L"Nguyên Vũ Hắc Đạo", false },
        { L"Tư Mệnh Hoàng Đạo", true },     { L"Câu Trận Hắc Đạo", false }
    };
    int thanhLongStartChi = ((info.lMonth - 1) % 6) * 2;
    int starIdx = (chiDayIdx - thanhLongStartChi + 12) % 12;
    info.starName = kStars[starIdx].name;
    info.isHoangDao = kStars[starIdx].isHoangDao;

    struct TrucInfo {
        PCWSTR name;
        PCWSTR goodVi;
        PCWSTR badVi;
        PCWSTR goodEn;
        PCWSTR badEn;
    };
    static const TrucInfo kTruc[12] = {
        { L"Kiến",  L"Xuất hành, nhậm chức, cầu tài, ký kết",         L"Động thổ, đào đất, mở kho",
                    L"Travel, starting a role, signing contracts",     L"Groundbreaking, excavation" },
        { L"Trừ",   L"Thanh tẩy, chữa bệnh, dọn dẹp, cầu bình an",    L"Khai trương lớn, đi xa",
                    L"Cleansing, medical treatment, decluttering",     L"Grand openings, long journeys" },
        { L"Mãn",   L"Cúng tế, cầu tài lộc, khai trương, mở kho",     L"Kiện tụng, tranh chấp",
                    L"Prayers, wealth seeking, business opening",      L"Litigation, disputes" },
        { L"Bình",  L"Tu sửa, bàn bạc công việc, giao dịch, cưới hỏi", L"Khởi công lớn, thưa kiện",
                    L"Repairs, negotiations, trading, weddings",       L"Major construction, lawsuits" },
        { L"Định",  L"Ký hợp đồng, cầu danh, nhập học, mưu sự",        L"Xuất hành xa, kiện tụng",
                    L"Contracts, enrollment, long-term planning",      L"Long-distance travel, lawsuits" },
        { L"Chấp",  L"Xây dựng, tu tạo, lập khế ước, tuyển dụng",     L"Xuất tiền lớn, dọn nhà",
                    L"Building, renovations, hiring, agreements",      L"Large expenses, moving house" },
        { L"Phá",   L"Phá dỡ, giải quyết việc tồn đọng, chữa bệnh",    L"Khai trương, cưới hỏi, ký kết",
                    L"Demolition, resolving backlog, medical care",    L"Grand openings, weddings, contracts" },
        { L"Nguy",  L"Tế tự, cầu an, nghỉ ngơi, cẩn trọng đi lại",     L"Mạo hiểm, khởi công, đi sông nước",
                    L"Prayers for peace, rest, cautious travel",       L"High-risk activities, construction" },
        { L"Thành", L"Khai trương, nhập học, cưới hỏi, cầu tài lộc",   L"Kiện tụng, tranh cãi",
                    L"Grand openings, study, weddings, investments",   L"Litigation, arguments" },
        { L"Thu",   L"Thu hoạch, tích trữ, đòi nợ, cất giữ tài sản",   L"Khởi công mới, xuất hành xa",
                    L"Harvesting, saving, collecting debts",           L"Starting new projects, long trips" },
        { L"Khai",  L"Khai trương, động thổ, xuất hành, nhậm chức",    L"An táng, tranh chấp",
                    L"Grand openings, groundbreaking, travel",         L"Burials, disputes" },
        { L"Bế",    L"Đắp đê, tu bổ, cất giữ tài vật, lập kế hoạch",   L"Khai trương, xuất hành xa",
                    L"Maintenance, saving assets, planning",           L"Grand journeys" },
    };
    int trucIdx = (chiDayIdx - chiMonthIdx + 12) % 12;
    info.trucName = kTruc[trucIdx].name;
    info.goodFor = PickText(vi, kTruc[trucIdx].goodVi, kTruc[trucIdx].goodEn);
    info.badFor = PickText(vi, kTruc[trucIdx].badVi, kTruc[trucIdx].badEn);

    SolarTermInfo stInfo = EvaluateSolarTerm(sDay, sMonth, sYear, vi);
    info.tietKhiName = stInfo.name;
    info.isFirstDayOfTietKhi = stInfo.isTransitionDay;

    struct GioSplit { PCWSTR full; PCWSTR line1; PCWSTR line2; };
    static const GioSplit kGioHoangDao[6] = {
        { L"Tý (23-1h), Sửu (1-3h), Mão (5-7h), Ngọ (11-13h), Thân (15-17h), Dậu (17-19h)",
          L"Tý (23-1h) • Sửu (1-3h) • Mão (5-7h)",
          L"Ngọ (11-13h) • Thân (15-17h) • Dậu (17-19h)" },
        { L"Dần (3-5h), Mão (5-7h), Tỵ (9-11h), Thân (15-17h), Tuất (19-21h), Hợi (21-23h)",
          L"Dần (3-5h) • Mão (5-7h) • Tỵ (9-11h)",
          L"Thân (15-17h) • Tuất (19-21h) • Hợi (21-23h)" },
        { L"Tý (23-1h), Sửu (1-3h), Thìn (7-9h), Tỵ (9-11h), Mùi (13-15h), Tuất (19-21h)",
          L"Tý (23-1h) • Sửu (1-3h) • Thìn (7-9h)",
          L"Tỵ (9-11h) • Mùi (13-15h) • Tuất (19-21h)" },
        { L"Tý (23-1h), Dần (3-5h), Mão (5-7h), Ngọ (11-13h), Mùi (13-15h), Dậu (17-19h)",
          L"Tý (23-1h) • Dần (3-5h) • Mão (5-7h)",
          L"Ngọ (11-13h) • Mùi (13-15h) • Dậu (17-19h)" },
        { L"Dần (3-5h), Thìn (7-9h), Tỵ (9-11h), Thân (15-17h), Dậu (17-19h), Hợi (21-23h)",
          L"Dần (3-5h) • Thìn (7-9h) • Tỵ (9-11h)",
          L"Thân (15-17h) • Dậu (17-19h) • Hợi (21-23h)" },
        { L"Sửu (1-3h), Thìn (7-9h), Ngọ (11-13h), Mùi (13-15h), Tuất (19-21h), Hợi (21-23h)",
          L"Sửu (1-3h) • Thìn (7-9h) • Ngọ (11-13h)",
          L"Mùi (13-15h) • Tuất (19-21h) • Hợi (21-23h)" }
    };
    info.gioHoangDao = kGioHoangDao[chiDayIdx % 6].full;
    info.gioHoangDaoLine1 = kGioHoangDao[chiDayIdx % 6].line1;
    info.gioHoangDaoLine2 = kGioHoangDao[chiDayIdx % 6].line2;

    int xungChiIdx = (chiDayIdx + 6) % 12;
    int xungCan1 = (canDayIdx + 4) % 10;
    int xungCan2 = (canDayIdx + 6) % 10;
    info.tuoiXung = std::wstring(CAN_10[xungCan1]) + L" " + CHI_12[xungChiIdx] +
                    L", " + CAN_10[xungCan2] + L" " + CHI_12[xungChiIdx];

    static const BilingualText kHuongHyThan[10] = {
        { L"Đông Bắc", L"Northeast" }, { L"Tây Bắc",  L"Northwest" },
        { L"Tây Nam",  L"Southwest" }, { L"Chính Nam", L"South" },
        { L"Đông Nam", L"Southeast" }, { L"Đông Bắc", L"Northeast" },
        { L"Tây Bắc",  L"Northwest" }, { L"Tây Nam",  L"Southwest" },
        { L"Chính Nam", L"South" },    { L"Đông Nam", L"Southeast" },
    };
    static const BilingualText kHuongTaiThan[10] = {
        { L"Đông Nam",  L"Southeast" }, { L"Đông Nam",  L"Southeast" },
        { L"Chính Đông", L"East" },     { L"Chính Đông", L"East" },
        { L"Chính Bắc", L"North" },     { L"Chính Nam", L"South" },
        { L"Tây Nam",   L"Southwest" }, { L"Tây Nam",   L"Southwest" },
        { L"Chính Tây", L"West" },      { L"Tây Bắc",   L"Northwest" },
    };
    info.huongHyThan = PickText(vi, kHuongHyThan[canDayIdx].vi, kHuongHyThan[canDayIdx].en);
    info.huongTaiThan = PickText(vi, kHuongTaiThan[canDayIdx].vi, kHuongTaiThan[canDayIdx].en);

    info.specialHoliday = EvaluateVietnameseHoliday(
        sDay, sMonth, sYear, info.lDay, info.lMonth, info.isLeap, vi).names;

    ModSettings settings = GetSettings();
    info.personalMatch = EvaluatePersonalAgeCompatibility(settings.birthYear, canDayIdx, chiDayIdx, vi);

    return info;
}

std::wstring FormatTooltipHoroscope(ModSettings const& settings) {
    TriggerGoogleCalendarSyncIfNeeded(false);

    bool vi = UseVietnameseLabels(settings);
    SYSTEMTIME st{};
    GetLocalTime(&st);
    ComputedHoroscope h = ComputeHoroscopeForDate(st.wYear, st.wMonth, st.wDay, vi, st.wHour);
    int32_t todayKey = MakeDateKey(st.wYear, st.wMonth, st.wDay);

    WCHAR lunarHeader[256]{};
    if (vi) {
        if (h.isLeap) {
            _snwprintf_s(lunarHeader, _TRUNCATE,
                         L"🌙 Âm lịch: %02d/%02d/%d (Nhuận • Năm %s)",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
        } else {
            _snwprintf_s(lunarHeader, _TRUNCATE,
                         L"🌙 Âm lịch: %02d/%02d/%d (Năm %s)",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
        }
    } else {
        if (h.isLeap) {
            _snwprintf_s(lunarHeader, _TRUNCATE,
                         L"🌙 Lunar: %02d/%02d/%d (Leap • %s)",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
        } else {
            _snwprintf_s(lunarHeader, _TRUNCATE,
                         L"🌙 Lunar: %02d/%02d/%d (Year of %s)",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
        }
    }

    std::wstring holidayLine;
    if (!h.specialHoliday.empty()) {
        holidayLine = std::wstring(vi ? L"\r\n🎉 Sự kiện: " : L"\r\n🎉 Event: ") + h.specialHoliday;
    }

    std::wstring googleEventsBlock = FormatGoogleEventsForTooltip(todayKey, settings, vi);

    std::wstring personalBlock;
    if (!h.personalMatch.compactTooltipLine1.empty()) {
        personalBlock = L"\r\n──────────────────────────\r\n" +
                        h.personalMatch.compactTooltipLine1 + L"\r\n" +
                        h.personalMatch.compactTooltipLine2;
    }

    WCHAR buffer[3500]{};
    if (vi) {
        _snwprintf_s(
            buffer, _TRUNCATE,
            L"──────────────────────────\r\n"
            L"%s%s%s\r\n"
            L"──────────────────────────\r\n"
            L"🐉 Bát tự: Giờ %s • Ngày %s\r\n"
            L"   └ Tháng %s • Năm %s\r\n"
            L"☯ Mệnh: %s\r\n"
            L"%s Sao: %s (%s)\r\n"
            L"📌 Trực: %s  •  🌿 Tiết: %s\r\n"
            L"⏰ Giờ Hoàng Đạo:\r\n"
            L"   • %s\r\n"
            L"   • %s\r\n"
            L"✅ Nên: %s\r\n"
            L"⛔ Kỵ: %s\r\n"
            L"🧭 Tuổi xung: %s\r\n"
            L"✨ Xuất hành: %s (Hỷ) • %s (Tài)%s",
            lunarHeader,
            holidayLine.c_str(),
            googleEventsBlock.c_str(),
            h.hourCanChi.c_str(),
            h.dayCanChi.c_str(),
            h.monthCanChi.c_str(),
            h.yearCanChi.c_str(),
            h.napAmStr,
            h.isHoangDao ? L"🌟" : L"⚪",
            h.starName,
            h.isHoangDao ? L"Tốt" : L"Hắc Đạo",
            h.trucName,
            h.tietKhiName,
            h.gioHoangDaoLine1,
            h.gioHoangDaoLine2,
            h.goodFor,
            h.badFor,
            h.tuoiXung.c_str(),
            h.huongHyThan,
            h.huongTaiThan,
            personalBlock.c_str());
    } else {
        _snwprintf_s(
            buffer, _TRUNCATE,
            L"──────────────────────────\r\n"
            L"%s%s%s\r\n"
            L"──────────────────────────\r\n"
            L"🐉 Pillars: Hour %s • Day %s\r\n"
            L"   └ Month %s • Year %s\r\n"
            L"☯ Element: %s\r\n"
            L"%s Star: %s (%s)\r\n"
            L"📌 Officer: %s  •  🌿 Term: %s\r\n"
            L"⏰ Auspicious Hours:\r\n"
            L"   • %s\r\n"
            L"   • %s\r\n"
            L"✅ Good: %s\r\n"
            L"⛔ Avoid: %s\r\n"
            L"🧭 Clash: %s\r\n"
            L"✨ Directions: %s (Joy) • %s (Wealth)%s",
            lunarHeader,
            holidayLine.c_str(),
            googleEventsBlock.c_str(),
            h.hourCanChi.c_str(),
            h.dayCanChi.c_str(),
            h.monthCanChi.c_str(),
            h.yearCanChi.c_str(),
            h.napAmStr,
            h.isHoangDao ? L"🌟" : L"⚪",
            h.starName,
            h.isHoangDao ? L"Good" : L"Inauspicious",
            h.trucName,
            h.tietKhiName,
            h.gioHoangDaoLine1,
            h.gioHoangDaoLine2,
            h.goodFor,
            h.badFor,
            h.tuoiXung.c_str(),
            h.huongHyThan,
            h.huongTaiThan,
            personalBlock.c_str());
    }

    return buffer;
}

////////////////////////////////////////////////////////////////////////////////
// Calendar Flyout XAML Manipulation

constexpr PCWSTR kLunarTextBlockName = L"LunarTextBlock";
constexpr PCWSTR kCustomCellLunarName = L"CustomCellLunar";
constexpr PCWSTR kCustomHeaderLunarName = L"CustomHeaderLunar";
constexpr PCWSTR kCustomHoroscopePageName = L"CustomHoroscopePageOverlay";

struct FoundElement {
    wux::DependencyObject element{nullptr};
    int depth = 0;
};

void LogCalendarException(PCWSTR operation) noexcept {
    try {
        throw;
    } catch (winrt::hresult_error const& error) {
        Wh_Log(L"%s: HRESULT=0x%08X, %s", operation,
               static_cast<unsigned int>(error.code().value), error.message().c_str());
    } catch (...) {
        Wh_Log(L"%s: unknown exception", operation);
    }
}

void CollectDescendants(wux::DependencyObject const& root, std::vector<FoundElement>& out) {
    out.push_back({root, 0});
    for (size_t i = 0; i < out.size() && i < 256; i++) {
        wux::DependencyObject current = out[i].element;
        int depth = out[i].depth;
        if (!current || depth > 24) continue;
        int count = 0;
        try { count = wuxm::VisualTreeHelper::GetChildrenCount(current); } catch (...) { continue; }
        for (int childIndex = 0; childIndex < count; childIndex++) {
            wux::DependencyObject child = nullptr;
            try { child = wuxm::VisualTreeHelper::GetChild(current, childIndex); } catch (...) { continue; }
            if (!child) continue;
            out.push_back({child, depth + 1});
        }
    }
}

std::wstring ElementName(wux::DependencyObject const& element) {
    if (auto frameworkElement = element.try_as<wux::FrameworkElement>()) {
        try { return frameworkElement.Name().c_str(); } catch (...) {}
    }
    return {};
}

std::wstring ElementText(wuxc::TextBlock const& textBlock) {
    try { return TrimWhitespace(textBlock.Text().c_str()); } catch (...) { return {}; }
}

bool IsSolarDayLabelText(std::wstring const& text) {
    if (text.empty() || text.size() > 4) return false;
    if (text[0] < L'0' || text[0] > L'9') return false;
    for (size_t i = 1; i < text.size(); i++) {
        wchar_t c = text[i];
        if ((c >= L'0' && c <= L'9') || c == L'•' || c == L'●' || c == L'·') {
            continue;
        }
        return false;
    }
    return true;
}

thread_local bool t_applyWrote = false;
thread_local int32_t t_selectedHoroscopeKey = 0;
thread_local uint32_t t_lastSeenIcsGeneration = 0;
thread_local winrt::weak_ref<wuxc::CalendarView> t_calendarView{nullptr};
thread_local bool t_calendarViewHandlersAdded = false;

struct HeaderState {
    winrt::weak_ref<wuxc::Panel> headerPanel{nullptr};
    winrt::weak_ref<wuxc::TextBlock> headerLabel{nullptr};
    winrt::weak_ref<wuxc::TextBlock> primarySolarLabel{nullptr};
    bool createdByMod = false;
    bool hasSavedState = false;
    std::wstring savedText;
    wux::Visibility savedVisibility = wux::Visibility::Visible;
    bool hasSavedPrimaryText = false;
    std::wstring savedPrimaryText;
    std::wstring appliedPrimaryText;
};

thread_local HeaderState t_headerState;

struct TranslatedLabelState {
    winrt::weak_ref<wuxc::TextBlock> label{nullptr};
    std::wstring savedText;
    std::wstring appliedText;
    int64_t propToken = 0;
    bool busy = false;
};

thread_local std::unordered_map<void*, TranslatedLabelState> t_translatedLabels;
thread_local winrt::weak_ref<wuxc::TextBlock> t_monthYearBannerTb{nullptr};
thread_local winrt::weak_ref<wuxc::Button> t_monthYearHeaderBtn{nullptr};
thread_local int t_lastKnownCalendarYear = 2026;

struct HiddenCalendarChild {
    winrt::weak_ref<wux::UIElement> element{nullptr};
    double opacity = 1.0;
    bool hitTestVisible = true;
};

struct HoroscopePageControls {
    winrt::weak_ref<wuxc::Panel> hostPanel{nullptr};
    winrt::weak_ref<wux::UIElement> calendarSlot{nullptr};
    winrt::weak_ref<wux::FrameworkElement> pageRoot{nullptr};
    std::vector<HiddenCalendarChild> hiddenChildren;
    int32_t renderedKey = 0;
};

thread_local HoroscopePageControls t_horoscopePage;

void SweepDayItems();
void StartSweepTimer();
void UpdateHeaderLabelOnCurrentThread();
void UpdateHoroscopePageOnCurrentThread();
void RequestOpenHoroscopeForDateKey(int32_t key);

// Căn chỉnh khoảng cách giữa dòng ngày Dương lịch (ở trên) và ngày Âm lịch (ở dưới),
// đồng thời mở rộng nhẹ lề ngang để chữ và dấu ★ không bị cắt ở hai mép.
void EnsureDualLineSpacing(wuxc::CalendarViewDayItem const& item,
                           wuxc::TextBlock const& solarOut,
                           wuxc::TextBlock const& lunarOut,
                           bool forceTransform) {
    if (!solarOut || !lunarOut) return;
    try {
        solarOut.Margin({-4.0, 0.0, -4.0, 0.0});
        solarOut.TextAlignment(wux::TextAlignment::Center);
        solarOut.TextTrimming(wux::TextTrimming::None);

        lunarOut.Margin({-4.0, 0.0, -4.0, 0.0});
        lunarOut.TextAlignment(wux::TextAlignment::Center);
        lunarOut.TextTrimming(wux::TextTrimming::None);
        lunarOut.TextWrapping(wux::TextWrapping::NoWrap);

        double currentSolarShift = 0.0;
        double currentLunarShift = 0.0;
        if (auto st = solarOut.RenderTransform().try_as<wuxm::TranslateTransform>()) {
            currentSolarShift = st.Y();
        }
        if (auto lt = lunarOut.RenderTransform().try_as<wuxm::TranslateTransform>()) {
            currentLunarShift = lt.Y();
        }

        bool needShift = forceTransform;
        double targetSolarShift = -5.5;
        double targetLunarShift = 3.5;

        try {
            wf::Point ptSolar = solarOut.TransformToVisual(item).TransformPoint({0, 0});
            wf::Point ptLunar = lunarOut.TransformToVisual(item).TransformPoint({0, 0});
            double baseSolarY = ptSolar.Y - currentSolarShift;
            double baseLunarY = ptLunar.Y - currentLunarShift;
            double baseDeltaY = baseLunarY - baseSolarY;

            if (baseDeltaY > 0.1 && baseDeltaY < 16.5) {
                needShift = true;
                double extra = 18.0 - baseDeltaY;
                targetSolarShift = -extra * 0.65;
                targetLunarShift = extra * 0.35;
            } else if (baseDeltaY >= 16.5) {
                needShift = false;
            }
        } catch (...) {}

        if (needShift) {
            if (std::abs(currentSolarShift - targetSolarShift) > 0.2) {
                wuxm::TranslateTransform solarTransform;
                solarTransform.Y(targetSolarShift);
                solarOut.RenderTransform(solarTransform);
            }
            if (std::abs(currentLunarShift - targetLunarShift) > 0.2) {
                wuxm::TranslateTransform lunarTransform;
                lunarTransform.Y(targetLunarShift);
                lunarOut.RenderTransform(lunarTransform);
            }
        }
    } catch (...) {}
}

struct ColorState {
    wuxm::Brush savedForeground{nullptr};
    bool hasSavedForeground = false;
    bool savedForegroundWasLocal = false;
    wuxm::Brush ownBrush{nullptr};
    bool hadColor = false;
};

struct DayCell {
    winrt::weak_ref<wuxc::CalendarViewDayItem> item{nullptr};
    winrt::weak_ref<wuxc::TextBlock> lunarLabel{nullptr};
    winrt::weak_ref<wuxc::TextBlock> solarLabel{nullptr};
    winrt::weak_ref<wuxc::Panel> createdParentPanel{nullptr};
    bool createdByMod = false;

    int64_t lunarLabelChangedToken = 0;
    int64_t solarLabelChangedToken = 0;
    std::wstring savedText;
    bool hasSavedText = false;
    wux::Visibility savedVisibility = wux::Visibility::Visible;
    bool hasSavedVisibility = false;
    std::wstring appliedText;
    std::wstring appliedSolarText;

    ColorState lunarColor;
    ColorState solarColor;
    ColorState itemColor;
    wuxm::Brush normalForeground{nullptr};

    int32_t key = 0;
    int64_t dateChangedToken = 0;
    bool pointerHandlersRegistered = false;
    bool busy = false;
};

struct TrackedDayItem {
    void* id = nullptr;
    winrt::weak_ref<wuxc::CalendarViewDayItem> item{nullptr};
};

constexpr size_t kMaxTrackedDayItems = 512;

thread_local std::unordered_map<void*, std::unique_ptr<DayCell>> t_cells;
thread_local std::vector<TrackedDayItem> t_dayItems;
thread_local std::unordered_map<void*, winrt::weak_ref<wuxc::CalendarViewDayItem>> t_labelOwners;

void ApplyToDayItem(wuxc::CalendarViewDayItem const& item);

void* CellId(wuxc::CalendarViewDayItem const& item) {
    return winrt::get_abi(item);
}

DayCell& CellFor(wuxc::CalendarViewDayItem const& item) {
    std::unique_ptr<DayCell>& entry = t_cells[CellId(item)];
    if (entry && entry->item.get() != item) entry = nullptr;
    if (!entry) {
        entry = std::make_unique<DayCell>();
        entry->item = winrt::make_weak(item);
    }
    return *entry;
}

void TrackDayItem(wuxc::CalendarViewDayItem const& item) {
    void* id = winrt::get_abi(item);
    for (auto it = t_dayItems.begin(); it != t_dayItems.end(); ++it) {
        if (it->id != id) continue;
        if (it->item.get()) {
            TrackedDayItem tracked = *it;
            t_dayItems.erase(it);
            t_dayItems.push_back(tracked);
        } else {
            it->item = winrt::make_weak(item);
        }
        return;
    }
    if (t_dayItems.size() >= kMaxTrackedDayItems) {
        t_dayItems.erase(t_dayItems.begin());
    }
    t_dayItems.push_back({id, winrt::make_weak(item)});
}

void FindOrCreateLunarTextBlock(wuxc::CalendarViewDayItem const& item,
                                DayCell& cell,
                                wuxc::TextBlock& solarOut,
                                wuxc::TextBlock& lunarOut) {
    solarOut = nullptr;
    lunarOut = nullptr;
    wuxc::Panel containerPanel = nullptr;

    std::vector<FoundElement> descendants;
    CollectDescendants(item, descendants);

    for (const auto& found : descendants) {
        if (!containerPanel) {
            if (auto panel = found.element.try_as<wuxc::Panel>()) {
                containerPanel = panel;
            }
        }

        auto tb = found.element.try_as<wuxc::TextBlock>();
        if (!tb) continue;

        std::wstring name = ElementName(tb);
        std::wstring text = ElementText(tb);

        if (name == kLunarTextBlockName || name == kCustomCellLunarName) {
            lunarOut = tb;
            continue;
        }

        if (IsSolarDayLabelText(text)) {
            if (!solarOut) solarOut = tb;
            continue;
        }

        if (!lunarOut && !text.empty()) {
            lunarOut = tb;
        }
    }

    if (lunarOut) {
        if (!cell.createdByMod && ElementName(lunarOut) != kCustomCellLunarName) {
            if (!cell.hasSavedVisibility) {
                try {
                    cell.savedVisibility = lunarOut.Visibility();
                    cell.hasSavedVisibility = true;
                } catch (...) {}
            }
            if (!cell.hasSavedText) {
                try {
                    cell.savedText = lunarOut.Text().c_str();
                    cell.hasSavedText = true;
                } catch (...) {}
            }
        }
        try {
            if (lunarOut.Visibility() != wux::Visibility::Visible) {
                lunarOut.Visibility(wux::Visibility::Visible);
                t_applyWrote = true;
            }
        } catch (...) {}
        return;
    }

    if (!lunarOut && solarOut) {
        try {
            wuxc::Panel parentPanel = nullptr;
            if (auto parent = wuxm::VisualTreeHelper::GetParent(solarOut)) {
                parentPanel = parent.try_as<wuxc::Panel>();
            }
            if (!parentPanel) parentPanel = containerPanel;

            if (parentPanel) {
                wuxc::TextBlock newLunar;
                newLunar.Name(kCustomCellLunarName);
                newLunar.FontSize(10.0);
                newLunar.HorizontalAlignment(wux::HorizontalAlignment::Center);
                newLunar.VerticalAlignment(wux::VerticalAlignment::Bottom);
                newLunar.Opacity(0.8);

                parentPanel.Children().Append(newLunar);
                lunarOut = newLunar;
                cell.createdByMod = true;
                cell.createdParentPanel = winrt::make_weak(parentPanel);
                t_applyWrote = true;
            }
        } catch (...) {}
    }
}

bool SameBrush(wuxm::Brush const& left, wuxm::Brush const& right) {
    return left && right && winrt::get_abi(left) == winrt::get_abi(right);
}

bool IsOwnBrush(wuxc::TextBlock const& textBlock, wuxm::Brush const& ownBrush) {
    if (!ownBrush) return false;
    try { return SameBrush(textBlock.Foreground(), ownBrush); } catch (...) { return false; }
}

bool IsOwnControlBrush(wuxc::Control const& ctrl, wuxm::Brush const& ownBrush) {
    if (!ownBrush) return false;
    try { return SameBrush(ctrl.Foreground(), ownBrush); } catch (...) { return false; }
}

wuxm::Brush SetForegroundIfDifferent(wuxc::TextBlock const& textBlock,
                                     winrt::Windows::UI::Color const& color,
                                     wuxm::Brush const& previousOwn) {
    try {
        if (auto current = textBlock.Foreground().try_as<wuxm::SolidColorBrush>()) {
            if (current.Color() == color) return SameBrush(current, previousOwn) ? previousOwn : nullptr;
        }
        wuxm::SolidColorBrush brush(color);
        textBlock.Foreground(brush);
        t_applyWrote = true;
        return brush;
    } catch (...) { return nullptr; }
}

wuxm::Brush SetControlForegroundIfDifferent(wuxc::Control const& ctrl,
                                            winrt::Windows::UI::Color const& color,
                                            wuxm::Brush const& previousOwn) {
    try {
        if (auto current = ctrl.Foreground().try_as<wuxm::SolidColorBrush>()) {
            if (current.Color() == color) return SameBrush(current, previousOwn) ? previousOwn : nullptr;
        }
        wuxm::SolidColorBrush brush(color);
        ctrl.Foreground(brush);
        t_applyWrote = true;
        return brush;
    } catch (...) { return nullptr; }
}

void SaveForeground(ColorState& state, wuxc::TextBlock const& label) {
    if (state.hasSavedForeground) return;
    try {
        if (IsOwnBrush(label, state.ownBrush)) return;
        wf::IInspectable value = label.ReadLocalValue(wuxc::TextBlock::ForegroundProperty());
        if (auto brush = value.try_as<wuxm::Brush>()) {
            state.savedForeground = brush;
            state.savedForegroundWasLocal = true;
        }
        state.hasSavedForeground = true;
    } catch (...) {}
}

void SaveControlForeground(ColorState& state, wuxc::Control const& ctrl) {
    if (state.hasSavedForeground) return;
    try {
        if (IsOwnControlBrush(ctrl, state.ownBrush)) return;
        wf::IInspectable value = ctrl.ReadLocalValue(wuxc::Control::ForegroundProperty());
        if (auto brush = value.try_as<wuxm::Brush>()) {
            state.savedForeground = brush;
            state.savedForegroundWasLocal = true;
        }
        state.hasSavedForeground = true;
    } catch (...) {}
}

void RestoreForeground(wuxc::TextBlock const& label, ColorState& state) {
    try {
        if (!IsOwnBrush(label, state.ownBrush)) return;
        if (state.savedForegroundWasLocal && state.savedForeground) label.Foreground(state.savedForeground);
        else label.ClearValue(wuxc::TextBlock::ForegroundProperty());
        t_applyWrote = true;
    } catch (...) {}
    state.ownBrush = nullptr;
    state.hasSavedForeground = false;
}

void RestoreControlForeground(wuxc::Control const& ctrl, ColorState& state) {
    try {
        if (!IsOwnControlBrush(ctrl, state.ownBrush)) return;
        if (state.savedForegroundWasLocal && state.savedForeground) ctrl.Foreground(state.savedForeground);
        else ctrl.ClearValue(wuxc::Control::ForegroundProperty());
        t_applyWrote = true;
    } catch (...) {}
    state.ownBrush = nullptr;
    state.hasSavedForeground = false;
}

void OnLabelTextChanged(wux::DependencyObject const& sender) {
    auto it = t_labelOwners.find(winrt::get_abi(sender));
    if (it == t_labelOwners.end()) return;
    if (auto item = it->second.get()) {
        ApplyToDayItem(item);
        StartSweepTimer();
    }
}

void RequestOpenHoroscopeForDateKey(int32_t key) {
    ModSettings settings = GetSettings();
    if (!settings.enableCalendarFlyout || !settings.enableHoroscopePage) return;
    if (g_shuttingDown) return;
    if (key != 0 && !IsValidDate(key / 10000, (key / 100) % 100, key % 100)) return;

    t_selectedHoroscopeKey = key;

    try {
        auto dq = winrt::Windows::System::DispatcherQueue::GetForCurrentThread();
        if (dq) {
            dq.TryEnqueue([]() {
                if (!g_shuttingDown) {
                    UpdateHoroscopePageOnCurrentThread();
                }
            });
            return;
        }
    } catch (...) {}

    UpdateHoroscopePageOnCurrentThread();
}

bool IsOwnLunarCellText(std::wstring const& text) {
    return !text.empty() && text.find(L'/') != std::wstring::npos;
}

void ApplyToDayItem(wuxc::CalendarViewDayItem const& item) {
    ModSettings settings = GetSettings();
    if (!settings.enableCalendarFlyout || !item) return;

    int32_t key = DateKeyFromDateTime(item.Date());
    if (!key) return;

    DayCell& cell = CellFor(item);
    if (cell.busy) return;
    cell.busy = true;
    struct BusyGuard { bool& busy; ~BusyGuard() { busy = false; } } guard{cell.busy};

    if (cell.key != key) {
        cell.key = key;
        cell.appliedText.clear();
        cell.appliedSolarText.clear();
        if (!cell.createdByMod) {
            cell.savedText.clear();
            cell.hasSavedText = false;
        }
    }

    if (cell.dateChangedToken == 0) {
        try {
            cell.dateChangedToken = item.RegisterPropertyChangedCallback(
                wuxc::CalendarViewDayItem::DateProperty(),
                [](wux::DependencyObject const& sender, wux::DependencyProperty const&) {
                    if (auto dayItem = sender.try_as<wuxc::CalendarViewDayItem>()) {
                        ApplyToDayItem(dayItem);
                        UpdateHeaderLabelOnCurrentThread();
                        StartSweepTimer();
                    }
                });
        } catch (...) {}
    }

    if (!cell.pointerHandlersRegistered) {
        try {
            item.AddHandler(
                wux::UIElement::PointerPressedEvent(),
                winrt::box_value(wuxi::PointerEventHandler(
                    [](wf::IInspectable const& sender, wuxi::PointerRoutedEventArgs const& args) {
                        if (!GetSettings().enableHoroscopePage) return;
                        if (auto dayItem = sender.try_as<wuxc::CalendarViewDayItem>()) {
                            try {
                                auto pt = args.GetCurrentPoint(dayItem);
                                if (pt.PointerDevice().PointerDeviceType() ==
                                    winrt::Windows::Devices::Input::PointerDeviceType::Mouse) {
                                    if (!pt.Properties().IsLeftButtonPressed()) return;
                                }
                            } catch (...) {}

                            int32_t clickedKey = DateKeyFromDateTime(dayItem.Date());
                            if (clickedKey != 0) {
                                RequestOpenHoroscopeForDateKey(clickedKey);
                            }
                        }
                    })),
                true);

            cell.pointerHandlersRegistered = true;
        } catch (...) {
            LogCalendarException(L"AddHandler PointerPressed");
        }
    }

    wuxc::TextBlock solarLabel = nullptr;
    wuxc::TextBlock lunarLabel = nullptr;
    FindOrCreateLunarTextBlock(item, cell, solarLabel, lunarLabel);

    if (!lunarLabel) return;

    if (cell.lunarLabel.get() != lunarLabel) {
        if (auto previous = cell.lunarLabel.get()) {
            if (cell.lunarLabelChangedToken) {
                try { previous.UnregisterPropertyChangedCallback(wuxc::TextBlock::TextProperty(), cell.lunarLabelChangedToken); } catch (...) {}
            }
            t_labelOwners.erase(winrt::get_abi(previous));
        }
        cell.lunarLabelChangedToken = 0;
        cell.lunarLabel = winrt::make_weak(lunarLabel);
        cell.appliedText.clear();
        cell.lunarColor = ColorState();
        cell.normalForeground = nullptr;
        t_labelOwners[winrt::get_abi(lunarLabel)] = winrt::make_weak(item);

        try {
            cell.lunarLabelChangedToken = lunarLabel.RegisterPropertyChangedCallback(
                wuxc::TextBlock::TextProperty(),
                [](wux::DependencyObject const& sender, wux::DependencyProperty const&) {
                    OnLabelTextChanged(sender);
                });
        } catch (...) {}
    }

    if (solarLabel && cell.solarLabel.get() != solarLabel) {
        if (auto prevSolar = cell.solarLabel.get()) {
            if (cell.solarLabelChangedToken) {
                try { prevSolar.UnregisterPropertyChangedCallback(wuxc::TextBlock::TextProperty(), cell.solarLabelChangedToken); } catch (...) {}
            }
            t_labelOwners.erase(winrt::get_abi(prevSolar));
        }
        cell.solarLabelChangedToken = 0;
        cell.solarLabel = winrt::make_weak(solarLabel);
        cell.appliedSolarText.clear();
        cell.solarColor = ColorState();
        t_labelOwners[winrt::get_abi(solarLabel)] = winrt::make_weak(item);

        try {
            cell.solarLabelChangedToken = solarLabel.RegisterPropertyChangedCallback(
                wuxc::TextBlock::TextProperty(),
                [](wux::DependencyObject const& sender, wux::DependencyProperty const&) {
                    OnLabelTextChanged(sender);
                });
        } catch (...) {}
    }

    int year = key / 10000;
    int month = (key / 100) % 100;
    int day = key % 100;

    int lDay, lMonth, lYear;
    bool isLeap;
    std::wstring canChi;
    GetVietnameseLunarDate(year, month, day, lDay, lMonth, lYear, isLeap, canChi);

    bool vi = UseVietnameseLabels(settings);
    WCHAR buffer[64]{};
    if (isLeap) {
        _snwprintf_s(buffer, _TRUNCATE, L"%d/%d%s",
                     lDay, lMonth, PickText(vi, L"N", L"L"));
    } else {
        _snwprintf_s(buffer, _TRUNCATE, L"%d/%d", lDay, lMonth);
    }
    std::wstring desired = buffer;

    if (settings.markPersonalDaysOnCalendar && settings.birthYear >= 1900 && settings.birthYear <= 2100) {
        int jdn = CalculateJDN(day, month, year);
        int canDayIdx = ((jdn + 9) % 10 + 10) % 10;
        int chiDayIdx = ((jdn + 1) % 12 + 12) % 12;
        auto match = EvaluatePersonalAgeCompatibility(settings.birthYear, canDayIdx, chiDayIdx, vi);
        if (match.state == AgeMatchState::ClashedMajor) {
            desired += L"!";
        } else if (match.state == AgeMatchState::Harmonious) {
            desired += L"★";
        }
    }

    bool hasGoogleEvents = settings.markGoogleEventsOnCalendar && HasGoogleEventsOnDate(key);
    if (solarLabel) {
        WCHAR baseSolarBuf[16]{};
        _snwprintf_s(baseSolarBuf, _TRUNCATE, L"%d", day);
        std::wstring baseSolarDigits = baseSolarBuf;
        std::wstring desiredSolar = baseSolarDigits + (hasGoogleEvents ? L"•" : L"");

        std::wstring currentSolar = ElementText(solarLabel);
        if (currentSolar != desiredSolar) {
            try {
                solarLabel.Text(desiredSolar);
                t_applyWrote = true;
            } catch (...) {}
        }
        cell.appliedSolarText = desiredSolar;
    }

    HolidayScope scope = EvaluateVietnameseHoliday(day, month, year, lDay, lMonth, isLeap, vi).scope;
    bool colorSolar = (scope == HolidayScope::Both || scope == HolidayScope::SolarOnly);
    bool colorLunar = (scope == HolidayScope::Both || scope == HolidayScope::LunarOnly);

    std::wstring current = ElementText(lunarLabel);
    if (!desired.empty() && current != desired) {
        if (!cell.createdByMod && current != cell.appliedText && !IsOwnLunarCellText(current)) {
            cell.savedText = current;
            cell.hasSavedText = true;
        }
        try {
            lunarLabel.Text(desired);
            t_applyWrote = true;
        } catch (...) {}
    }
    cell.appliedText = desired;

    EnsureDualLineSpacing(item, solarLabel, lunarLabel, cell.createdByMod || cell.savedText.empty());

    winrt::Windows::UI::Color redColor{255, 255, 90, 90};

    if (!cell.normalForeground && !cell.lunarColor.hadColor) {
        try { cell.normalForeground = lunarLabel.Foreground(); } catch (...) {}
    }

    if (colorSolar) {
        SaveControlForeground(cell.itemColor, item);
        cell.itemColor.ownBrush = SetControlForegroundIfDifferent(item, redColor, cell.itemColor.ownBrush);
        cell.itemColor.hadColor = true;

        if (solarLabel) {
            SaveForeground(cell.solarColor, solarLabel);
            cell.solarColor.ownBrush = SetForegroundIfDifferent(solarLabel, redColor, cell.solarColor.ownBrush);
            cell.solarColor.hadColor = true;
        }
    } else {
        if (cell.itemColor.hadColor) {
            RestoreControlForeground(item, cell.itemColor);
            cell.itemColor.hadColor = false;
        }
        if (solarLabel && cell.solarColor.hadColor) {
            RestoreForeground(solarLabel, cell.solarColor);
            cell.solarColor.hadColor = false;
        }
    }

    if (colorLunar) {
        SaveForeground(cell.lunarColor, lunarLabel);
        cell.lunarColor.ownBrush = SetForegroundIfDifferent(lunarLabel, redColor, cell.lunarColor.ownBrush);
        cell.lunarColor.hadColor = true;
    } else if (colorSolar) {
        SaveForeground(cell.lunarColor, lunarLabel);
        winrt::Windows::UI::Color normalColor{255, 180, 180, 180};
        if (cell.normalForeground) {
            if (auto scb = cell.normalForeground.try_as<wuxm::SolidColorBrush>()) {
                if (scb.Color() != redColor) normalColor = scb.Color();
            }
        }
        cell.lunarColor.ownBrush = SetForegroundIfDifferent(lunarLabel, normalColor, cell.lunarColor.ownBrush);
        cell.lunarColor.hadColor = true;
    } else if (cell.lunarColor.hadColor) {
        RestoreForeground(lunarLabel, cell.lunarColor);
        cell.lunarColor.hadColor = false;
    }
}

////////////////////////////////////////////////////////////////////////////////
// Modern Card-Based Horoscope & Notes Page (Fluent UI XAML Overlay)

std::wstring XmlEscape(std::wstring const& s) {
    std::wstring out;
    out.reserve(s.size() + 16);
    for (wchar_t c : s) {
        switch (c) {
            case L'&':  out += L"&amp;"; break;
            case L'<':  out += L"&lt;"; break;
            case L'>':  out += L"&gt;"; break;
            case L'"':  out += L"&quot;"; break;
            case L'\'': out += L"&apos;"; break;
            default:    out.push_back(c); break;
        }
    }
    return out;
}

wux::FrameworkElement BuildModernHoroscopeCardView(int32_t key, bool vi) {
    int sYear = key / 10000;
    int sMonth = (key / 100) % 100;
    int sDay = key % 100;

    SYSTEMTIME stNow{};
    GetLocalTime(&stNow);

    ComputedHoroscope h = ComputeHoroscopeForDate(sYear, sMonth, sDay, vi, stNow.wHour);
    int monthIdx = (sMonth >= 1 && sMonth <= 12) ? (sMonth - 1) : 0;

    WCHAR solarHeaderBuf[256]{};
    if (vi) {
        _snwprintf_s(solarHeaderBuf, _TRUNCATE, L"☀️ %s, Ngày %02d %s Năm %d",
                     h.weekdayStr, sDay, kMonthsVi[monthIdx], sYear);
    } else {
        _snwprintf_s(solarHeaderBuf, _TRUNCATE, L"☀️ %s, %s %02d, %d",
                     h.weekdayStr, kMonthsEn[monthIdx], sDay, sYear);
    }

    WCHAR lunarBadgeBuf[256]{};
    if (vi) {
        if (h.isLeap) {
            _snwprintf_s(lunarBadgeBuf, _TRUNCATE, L"🌙 Âm lịch: %02d/%02d (Nhuận) • Năm %s",
                         h.lDay, h.lMonth, h.yearCanChi.c_str());
        } else {
            _snwprintf_s(lunarBadgeBuf, _TRUNCATE, L"🌙 Âm lịch: %02d/%02d/%d • Năm %s",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
        }
    } else {
        if (h.isLeap) {
            _snwprintf_s(lunarBadgeBuf, _TRUNCATE, L"🌙 Lunar: %02d/%02d/%d (Leap) • Year of %s",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
        } else {
            _snwprintf_s(lunarBadgeBuf, _TRUNCATE, L"🌙 Lunar: %02d/%02d/%d • Year of %s",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
        }
    }

    std::wstring holidayXaml;
    if (!h.specialHoliday.empty()) {
        holidayXaml = L"<Border Background='#28FF6B6B' CornerRadius='6' Padding='8,4' Margin='0,6,0,0'>"
                      L"<TextBlock Text='🎉 " + XmlEscape(h.specialHoliday) + L"' FontSize='12' FontWeight='SemiBold' Foreground='#FFFFB3B3' TextWrapping='Wrap'/>"
                      L"</Border>";
    }

    std::wstring googleCardXaml;
    ModSettings settings = GetSettings();
    if (!settings.googleIcsUrl.empty()) {
        auto events = GetGoogleEventsOnDate(key);
        if (!events.empty()) {
            std::wstring itemsXaml;
            size_t count = 0;
            for (const auto& ev : events) {
                if (count >= 8) {
                    WCHAR moreBuf[64]{};
                    _snwprintf_s(moreBuf, _TRUNCATE,
                                 vi ? L"... (+%zu sự kiện khác)" : L"... (+%zu more events)",
                                 events.size() - count);
                    itemsXaml += L"<TextBlock Text='" + XmlEscape(moreBuf) + L"' FontSize='11.5' Opacity='0.75' Margin='0,4,0,0'/>";
                    break;
                }

                WCHAR timeBadge[64]{};
                if (ev.isAllDay) {
                    wcscpy_s(timeBadge, vi ? L"Cả ngày" : L"All day");
                } else if (ev.hasEndTime) {
                    _snwprintf_s(timeBadge, _TRUNCATE, L"%02d:%02d - %02d:%02d",
                                 ev.startHour, ev.startMin, ev.endHour, ev.endMin);
                } else {
                    _snwprintf_s(timeBadge, _TRUNCATE, L"%02d:%02d", ev.startHour, ev.startMin);
                }

                std::wstring titleLine = L"[" + std::wstring(timeBadge) + L"]  " + ev.summary;
                if (!ev.location.empty()) {
                    titleLine += L"  (📍 " + ev.location + L")";
                }

                itemsXaml += L"<Border Background='#18FFFFFF' CornerRadius='5' Padding='8,6' Margin='0,5,0,0'>"
                             L"<StackPanel>"
                             L"<TextBlock Text='" + XmlEscape(titleLine) + L"' FontSize='12.3' FontWeight='SemiBold' TextWrapping='Wrap'/>";

                if (!ev.description.empty()) {
                    std::wstring desc = ev.description;
                    if (desc.size() > 300) desc = desc.substr(0, 300) + L"...";
                    itemsXaml += L"<TextBlock Text='📝 " + XmlEscape(desc) + L"' FontSize='11.5' Opacity='0.85' Margin='0,3,0,0' TextWrapping='Wrap'/>";
                }

                itemsXaml += L"</StackPanel></Border>";
                count++;
            }

            googleCardXaml =
                L"<Border Background='#1A55AAFF' BorderBrush='#4055AAFF' BorderThickness='1' CornerRadius='8' Padding='12,10' Margin='0,0,0,8'>"
                L"<StackPanel>"
                L"<TextBlock Text='" + std::wstring(vi ? L"📌 LỊCH TRÌNH &amp; GHI CHÚ GOOGLE CALENDAR" : L"📌 GOOGLE CALENDAR SCHEDULE &amp; NOTES") + L"' FontSize='11.5' FontWeight='Bold' Foreground='#FF99CCFF'/>"
                + itemsXaml +
                L"</StackPanel></Border>";
        } else {
            std::wstring statusCopy;
            {
                std::lock_guard<std::mutex> lock(g_icsMutex);
                statusCopy = g_lastSyncStatusMsg;
            }
            if (!statusCopy.empty()) {
                std::wstring emptyNote = (vi ? L"📌 Không có lịch trình trong ngày • " : L"📌 No events today • ") + statusCopy;
                googleCardXaml =
                    L"<Border Background='#12FFFFFF' CornerRadius='8' Padding='10,7' Margin='0,0,0,8'>"
                    L"<TextBlock Text='" + XmlEscape(emptyNote) + L"' FontSize='11.3' Opacity='0.75' TextWrapping='Wrap'/>"
                    L"</Border>";
            }
        }
    }

    std::wstring personalCardXaml;
    if (!h.personalMatch.summary.empty()) {
        PCWSTR cardBg = L"#18FFFFFF";
        PCWSTR cardBorder = L"#30FFFFFF";
        if (h.personalMatch.state == AgeMatchState::Harmonious) {
            cardBg = L"#224CAF50";
            cardBorder = L"#5581C784";
        } else if (h.personalMatch.state == AgeMatchState::ClashedMajor) {
            cardBg = L"#26F44336";
            cardBorder = L"#66E57373";
        } else if (h.personalMatch.state == AgeMatchState::ClashedMinor) {
            cardBg = L"#22FF9800";
            cardBorder = L"#55FFB74D";
        }

        personalCardXaml =
            std::wstring(L"<Border Background='") + cardBg + L"' BorderBrush='" + cardBorder + L"' BorderThickness='1' CornerRadius='8' Padding='12,9' Margin='0,0,0,4'>"
            L"<TextBlock Text='" + XmlEscape(h.personalMatch.summary) + L"' FontSize='12' FontWeight='SemiBold' TextWrapping='Wrap'/>"
            L"</Border>";
    }

    std::wstring backBtnText = vi ? L"⬅  Quay lại Lịch tháng" : L"⬅  Back to Month Calendar";
    std::wstring fourPillarsLine = (vi ? L"Giờ " : L"Hour ") + h.hourCanChi + L"  •  " +
                                   (vi ? L"Ngày " : L"Day ") + h.dayCanChi + L"  •  " +
                                   (vi ? L"Tháng " : L"Month ") + h.monthCanChi + L"  •  " +
                                   (vi ? L"Năm " : L"Year ") + h.yearCanChi;
    std::wstring starLine = std::wstring(h.isHoangDao ? L"🌟 " : L"⚪ ") + h.starName +
                            (h.isHoangDao ? (vi ? L" (Ngày Hoàng Đạo)" : L" (Auspicious)")
                                          : (vi ? L" (Ngày Hắc Đạo)" : L" (Inauspicious)"));
    std::wstring trucTietLine = (vi ? L"📌 Trực: " : L"📌 Officer: ") + std::wstring(h.trucName) +
                                (vi ? L"   •   🌿 Tiết khí: " : L"   •   🌿 Term: ") + std::wstring(h.tietKhiName);
    std::wstring directionsLine = std::wstring(h.huongHyThan) + (vi ? L" (Hỷ Thần)  •  " : L" (Joy)  •  ") +
                                  std::wstring(h.huongTaiThan) + (vi ? L" (Tài Thần)" : L" (Wealth)");

    std::wstring xaml =
        L"<Grid xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' "
        L"      xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml' "
        L"      Name='" + std::wstring(kCustomHoroscopePageName) + L"' "
        L"      HorizontalAlignment='Stretch' VerticalAlignment='Stretch'>"
        L"  <Grid.RowDefinitions>"
        L"    <RowDefinition Height='Auto'/>"
        L"    <RowDefinition Height='*'/>"
        L"  </Grid.RowDefinitions>"

        L"  <Border Grid.Row='0' Background='#22FFFFFF' BorderBrush='#33FFFFFF' BorderThickness='1' CornerRadius='7' Padding='10,7' Margin='0,0,0,8'>"
        L"    <TextBlock Text='" + XmlEscape(backBtnText) + L"' FontSize='12.2' FontWeight='SemiBold' HorizontalAlignment='Center'/>"
        L"  </Border>"

        L"  <ScrollViewer Grid.Row='1' VerticalScrollBarVisibility='Auto' HorizontalScrollBarVisibility='Disabled'>"
        L"    <StackPanel>"

        L"      <Border Background='#18FFFFFF' BorderBrush='#28FFFFFF' BorderThickness='1' CornerRadius='8' Padding='12,10' Margin='0,0,0,8'>"
        L"        <StackPanel>"
        L"          <TextBlock Text='" + XmlEscape(solarHeaderBuf) + L"' FontSize='14' FontWeight='Bold' TextWrapping='Wrap'/>"
        L"          <TextBlock Text='" + XmlEscape(lunarBadgeBuf) + L"' FontSize='12.8' FontWeight='SemiBold' Foreground='#FFFFD580' Margin='0,3,0,0' TextWrapping='Wrap'/>"
        + holidayXaml +
        L"        </StackPanel>"
        L"      </Border>"

        + googleCardXaml +

        L"      <Border Background='#14FFFFFF' BorderBrush='#24FFFFFF' BorderThickness='1' CornerRadius='8' Padding='12,10' Margin='0,0,0,8'>"
        L"        <StackPanel>"
        L"          <TextBlock Text='" + std::wstring(vi ? L"🔮 BÁT TỰ &amp; TỬ VI PHONG THỦY" : L"🔮 FOUR PILLARS &amp; ALMANAC") + L"' FontSize='11.5' FontWeight='Bold' Opacity='0.8' Margin='0,0,0,6'/>"
        L"          <TextBlock Text='🐉 " + XmlEscape(fourPillarsLine) + L"' FontSize='12' FontWeight='SemiBold' TextWrapping='Wrap' Margin='0,0,0,4'/>"
        L"          <TextBlock Text='☯ " + XmlEscape(std::wstring(vi ? L"Nạp âm: " : L"Element: ") + h.napAmStr) + L"' FontSize='12' TextWrapping='Wrap' Margin='0,0,0,4'/>"
        L"          <TextBlock Text='" + XmlEscape(starLine) + L"' FontSize='12' FontWeight='SemiBold' Foreground='" + std::wstring(h.isHoangDao ? L"#FFFFE082" : L"#FFE0E0E0") + L"' TextWrapping='Wrap' Margin='0,0,0,4'/>"
        L"          <TextBlock Text='" + XmlEscape(trucTietLine) + L"' FontSize='12' TextWrapping='Wrap' Margin='0,0,0,8'/>"

        L"          <Border Background='#12FFFFFF' CornerRadius='6' Padding='9,7' Margin='0,0,0,6'>"
        L"            <StackPanel>"
        L"              <TextBlock Text='⏰ " + std::wstring(vi ? L"Giờ Hoàng Đạo:" : L"Auspicious Hours:") + L"' FontSize='11.5' FontWeight='SemiBold' Opacity='0.9'/>"
        L"              <TextBlock Text='" + XmlEscape(h.gioHoangDao) + L"' FontSize='11.8' Opacity='0.9' Margin='0,2,0,0' TextWrapping='Wrap'/>"
        L"            </StackPanel>"
        L"          </Border>"

        L"          <TextBlock Text='✅ " + XmlEscape(std::wstring(vi ? L"Nên làm: " : L"Good for: ") + h.goodFor) + L"' FontSize='12' Foreground='#FFA5D6A7' TextWrapping='Wrap' Margin='0,0,0,3'/>"
        L"          <TextBlock Text='⛔ " + XmlEscape(std::wstring(vi ? L"Việc kỵ: " : L"Avoid: ") + h.badFor) + L"' FontSize='12' Foreground='#FFEF9A9A' TextWrapping='Wrap' Margin='0,0,0,6'/>"
        L"          <TextBlock Text='🧭 " + XmlEscape(std::wstring(vi ? L"Tuổi xung: " : L"Clash: ") + h.tuoiXung) + L"' FontSize='11.8' Opacity='0.9' TextWrapping='Wrap' Margin='0,0,0,2'/>"
        L"          <TextBlock Text='✨ " + XmlEscape(std::wstring(vi ? L"Xuất hành: " : L"Directions: ") + directionsLine) + L"' FontSize='11.8' Opacity='0.9' TextWrapping='Wrap'/>"
        L"        </StackPanel>"
        L"      </Border>"

        + personalCardXaml +

        L"    </StackPanel>"
        L"  </ScrollViewer>"
        L"</Grid>";

    try {
        auto parsed = wux::Markup::XamlReader::Load(xaml).try_as<wux::FrameworkElement>();
        if (parsed) {
            parsed.AddHandler(
                wux::UIElement::PointerPressedEvent(),
                winrt::box_value(wuxi::PointerEventHandler(
                    [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const& args) {
                        args.Handled(true);
                        RequestOpenHoroscopeForDateKey(0);
                    })),
                true);
            return parsed;
        }
    } catch (...) {
        LogCalendarException(L"XamlReader::Load Horoscope Card");
    }

    return nullptr;
}

bool ResolveCalendarSlotAndHost(wuxc::Panel& hostOut, wux::UIElement& slotOut) {
    hostOut = t_horoscopePage.hostPanel.get();
    slotOut = t_horoscopePage.calendarSlot.get();
    if (hostOut && slotOut) return true;

    wuxc::CalendarView calView = t_calendarView.get();
    if (!calView) {
        for (const auto& tracked : t_dayItems) {
            auto item = tracked.item.get();
            if (!item) continue;

            wux::DependencyObject curr = item;
            for (int depth = 0; depth < 16 && curr; depth++) {
                if (auto cv = curr.try_as<wuxc::CalendarView>()) {
                    calView = cv;
                    break;
                }
                try { curr = wuxm::VisualTreeHelper::GetParent(curr); } catch (...) { break; }
            }
            if (calView) break;
        }
    }

    if (!calView) return false;
    t_calendarView = winrt::make_weak(calView);

    wux::DependencyObject child = calView;
    wux::DependencyObject parent = nullptr;
    try { parent = wuxm::VisualTreeHelper::GetParent(child); } catch (...) {}

    wuxc::Panel firstPanelParent = nullptr;
    wux::UIElement firstPanelSlot = nullptr;

    for (int depth = 0; depth < 10 && parent; depth++) {
        if (auto panel = parent.try_as<wuxc::Panel>()) {
            if (!firstPanelParent) {
                firstPanelParent = panel;
                firstPanelSlot = child.try_as<wux::UIElement>();
            }
            if (ElementName(panel) == L"CalendarCenterGrid") {
                hostOut = panel;
                slotOut = child.try_as<wux::UIElement>();
                t_horoscopePage.hostPanel = winrt::make_weak(hostOut);
                t_horoscopePage.calendarSlot = winrt::make_weak(slotOut);
                return hostOut && slotOut;
            }
        }
        child = parent;
        try { parent = wuxm::VisualTreeHelper::GetParent(child); } catch (...) { break; }
    }

    if (firstPanelParent && firstPanelSlot) {
        hostOut = firstPanelParent;
        slotOut = firstPanelSlot;
        t_horoscopePage.hostPanel = winrt::make_weak(hostOut);
        t_horoscopePage.calendarSlot = winrt::make_weak(slotOut);
        return true;
    }

    return false;
}

void SyncHoroscopePagePosition(wuxc::Panel const& hostPanel,
                               wux::UIElement const& calendarSlot,
                               wux::FrameworkElement const& pageElement) {
    if (!hostPanel || !calendarSlot || !pageElement) return;

    double topMargin = 8.0;
    try {
        if (auto slotFe = calendarSlot.try_as<wux::FrameworkElement>()) {
            int row = wuxc::Grid::GetRow(slotFe);
            int col = wuxc::Grid::GetColumn(slotFe);
            int rowSpan = wuxc::Grid::GetRowSpan(slotFe);
            int colSpan = wuxc::Grid::GetColumnSpan(slotFe);

            wuxc::Grid::SetRow(pageElement, row);
            wuxc::Grid::SetColumn(pageElement, col);
            wuxc::Grid::SetRowSpan(pageElement, rowSpan > 1 ? rowSpan : 1);
            wuxc::Grid::SetColumnSpan(pageElement, colSpan > 1 ? colSpan : 1);

            if (row == 0) {
                wf::Point pt = calendarSlot.TransformToVisual(hostPanel).TransformPoint({0.0f, 0.0f});
                if (pt.Y > 20.0f && pt.Y < 200.0f) {
                    topMargin = static_cast<double>(pt.Y) + 6.0;
                }
            }
        }
    } catch (...) {}

    try {
        pageElement.Margin({12.0, topMargin, 12.0, 10.0});
    } catch (...) {}
}

void RestoreHoroscopeCalendarChildren() {
    for (const auto& saved : t_horoscopePage.hiddenChildren) {
        if (auto ui = saved.element.get()) {
            try {
                ui.Opacity(saved.opacity);
                ui.IsHitTestVisible(saved.hitTestVisible);
            } catch (...) {}
        }
    }
    t_horoscopePage.hiddenChildren.clear();
}

void RemoveExistingHoroscopePageFromHost(wuxc::Panel const& hostPanel) {
    if (!hostPanel) return;
    try {
        int count = wuxm::VisualTreeHelper::GetChildrenCount(hostPanel);
        for (int i = count - 1; i >= 0; i--) {
            auto child = wuxm::VisualTreeHelper::GetChild(hostPanel, i);
            if (ElementName(child) == kCustomHoroscopePageName) {
                if (auto ui = child.try_as<wux::UIElement>()) {
                    uint32_t idx = 0;
                    if (hostPanel.Children().IndexOf(ui, idx)) {
                        hostPanel.Children().RemoveAt(idx);
                    }
                }
            }
        }
    } catch (...) {}
    t_horoscopePage.pageRoot = nullptr;
}

void UpdateHoroscopePageOnCurrentThread() {
    ModSettings settings = GetSettings();
    if (!settings.enableCalendarFlyout || !settings.enableHoroscopePage) {
        t_selectedHoroscopeKey = 0;
    }

    wuxc::Panel hostPanel = nullptr;
    wux::UIElement calendarSlot = nullptr;
    if (!ResolveCalendarSlotAndHost(hostPanel, calendarSlot)) return;

    if (t_horoscopePage.renderedKey == t_selectedHoroscopeKey) return;

    const bool showDetail = (t_selectedHoroscopeKey != 0);

    try {
        RemoveExistingHoroscopePageFromHost(hostPanel);

        if (showDetail) {
            bool vi = UseVietnameseLabels(settings);
            auto newCardRoot = BuildModernHoroscopeCardView(t_selectedHoroscopeKey, vi);
            if (newCardRoot) {
                SyncHoroscopePagePosition(hostPanel, calendarSlot, newCardRoot);
                hostPanel.Children().Append(newCardRoot);
                t_horoscopePage.pageRoot = winrt::make_weak(newCardRoot);

                if (t_horoscopePage.hiddenChildren.empty()) {
                    wux::UIElement targetToHide = calendarSlot ? calendarSlot : t_calendarView.get().try_as<wux::UIElement>();
                    if (targetToHide) {
                        t_horoscopePage.hiddenChildren.push_back(
                            {winrt::make_weak(targetToHide), targetToHide.Opacity(), targetToHide.IsHitTestVisible()});
                        targetToHide.Opacity(0.0);
                        targetToHide.IsHitTestVisible(false);
                    }
                }
            }
        } else {
            RestoreHoroscopeCalendarChildren();
        }

        t_horoscopePage.renderedKey = t_selectedHoroscopeKey;
        t_applyWrote = true;
    } catch (...) {
        LogCalendarException(L"Update horoscope page");
        RestoreHoroscopeCalendarChildren();
        RemoveExistingHoroscopePageFromHost(hostPanel);
        t_horoscopePage.renderedKey = -1;
    }
}

////////////////////////////////////////////////////////////////////////////////
// Scoped Calendar Header & Dynamic Month/Year Header Synchronization

bool ComputeDisplayedMonthYearFromGrid(int& outYear, int& outMonth) {
    auto calView = t_calendarView.get();
    if (!calView) return false;

    double cvWidth = 300.0;
    double cvHeight = 340.0;
    try {
        if (calView.ActualWidth() > 50.0) cvWidth = calView.ActualWidth();
        if (calView.ActualHeight() > 50.0) cvHeight = calView.ActualHeight();
    } catch (...) {}

    std::unordered_map<int, int> ymCounts;
    int visibleCellCount = 0;
    int bestYm = 0;
    int bestCount = 0;

    for (const auto& tracked : t_dayItems) {
        auto item = tracked.item.get();
        if (!item) continue;
        try {
            if (item.Visibility() != wux::Visibility::Visible) continue;
            if (item.ActualWidth() < 8.0 || item.ActualHeight() < 8.0) continue;

            wf::Point pt = item.TransformToVisual(calView).TransformPoint({0.0f, 0.0f});
            if (pt.Y < 20.0f || pt.Y > cvHeight - 10.0f) continue;
            if (pt.X < -10.0f || pt.X > cvWidth + 10.0f) continue;

            bool ancestorHidden = false;
            wux::DependencyObject curr = item;
            for (int d = 0; d < 8 && curr && curr != calView; d++) {
                if (auto ui = curr.try_as<wux::UIElement>()) {
                    if (ui.Visibility() != wux::Visibility::Visible || ui.Opacity() < 0.1) {
                        ancestorHidden = true;
                        break;
                    }
                }
                curr = wuxm::VisualTreeHelper::GetParent(curr);
            }
            if (ancestorHidden) continue;

            int32_t k = DateKeyFromDateTime(item.Date());
            if (k <= 0) continue;

            visibleCellCount++;
            int ym = k / 100;
            int c = ++ymCounts[ym];
            if (c > bestCount) {
                bestCount = c;
                bestYm = ym;
            }
        } catch (...) {}
    }

    if (visibleCellCount >= 20 && bestYm > 0) {
        outYear = bestYm / 100;
        outMonth = bestYm % 100;
        return (outMonth >= 1 && outMonth <= 12);
    }

    return false;
}

void SyncCalendarMonthYearHeader(bool vi) {
    auto calView = t_calendarView.get();
    if (!calView) return;

    wuxc::TextBlock bannerTb = t_monthYearBannerTb.get();
    wuxc::Button headerBtn = t_monthYearHeaderBtn.get();

    if (!bannerTb || !headerBtn) {
        std::vector<FoundElement> descendants;
        CollectDescendants(calView, descendants);
        for (const auto& f : descendants) {
            if (f.element.try_as<wuxc::CalendarViewDayItem>()) continue;
            if (auto btn = f.element.try_as<wuxc::Button>()) {
                if (ElementName(btn) == L"HeaderButton") {
                    headerBtn = btn;
                    t_monthYearHeaderBtn = winrt::make_weak(btn);
                    std::vector<FoundElement> btnSub;
                    CollectDescendants(btn, btnSub);
                    for (const auto& sub : btnSub) {
                        if (auto innerTb = sub.element.try_as<wuxc::TextBlock>()) {
                            bannerTb = innerTb;
                            t_monthYearBannerTb = winrt::make_weak(innerTb);
                            break;
                        }
                    }
                    if (bannerTb) break;
                }
            }
            if (!bannerTb) {
                if (auto tb = f.element.try_as<wuxc::TextBlock>()) {
                    if (IsMonthYearBannerString(ElementText(tb))) {
                        bannerTb = tb;
                        t_monthYearBannerTb = winrt::make_weak(tb);
                    }
                }
            }
        }
    }

    if (!bannerTb) return;

    int visYear = 0, visMonth = 0;
    bool isMonthViewActive = ComputeDisplayedMonthYearFromGrid(visYear, visMonth);

    if (isMonthViewActive) {
        t_lastKnownCalendarYear = visYear;
        WCHAR desiredBuf[64]{};
        if (vi) {
            _snwprintf_s(desiredBuf, _TRUNCATE, L"%s năm %d", kMonthsVi[visMonth - 1], visYear);
        } else {
            _snwprintf_s(desiredBuf, _TRUNCATE, L"%s %d", kMonthsEn[visMonth - 1], visYear);
        }
        std::wstring desired = desiredBuf;
        if (ElementText(bannerTb) != desired) {
            try {
                bannerTb.Text(desired);
                t_applyWrote = true;
            } catch (...) {}
        }
    } else {
        std::wstring currentTbText = ElementText(bannerTb);
        std::wstring nativeBtnContent;
        if (headerBtn) {
            try {
                if (auto contentObj = headerBtn.Content()) {
                    if (auto hstr = contentObj.try_as<winrt::hstring>()) {
                        nativeBtnContent = TrimWhitespace(hstr->c_str());
                    }
                }
            } catch (...) {}
        }

        int extractedY = 0;
        if (!nativeBtnContent.empty() && !IsMonthYearBannerString(nativeBtnContent)) {
            if (ExtractYearFromText(nativeBtnContent, extractedY) && nativeBtnContent.find(L'-') == std::wstring::npos) {
                t_lastKnownCalendarYear = extractedY;
            }
            if (nativeBtnContent.find(L'-') != std::wstring::npos) {
                if (currentTbText != nativeBtnContent) {
                    try {
                        bannerTb.Text(nativeBtnContent);
                        t_applyWrote = true;
                    } catch (...) {}
                }
                return;
            }
        } else if (!currentTbText.empty() && !IsMonthYearBannerString(currentTbText)) {
            if (currentTbText.find(L'-') != std::wstring::npos) {
                return;
            }
            if (ExtractYearFromText(currentTbText, extractedY)) {
                t_lastKnownCalendarYear = extractedY;
            }
        }

        WCHAR yearHeaderBuf[64]{};
        if (vi) {
            _snwprintf_s(yearHeaderBuf, _TRUNCATE, L"Năm %d", t_lastKnownCalendarYear);
        } else {
            _snwprintf_s(yearHeaderBuf, _TRUNCATE, L"%d", t_lastKnownCalendarYear);
        }
        std::wstring desiredYearHeader = yearHeaderBuf;
        if (currentTbText != desiredYearHeader) {
            try {
                bannerTb.Text(desiredYearHeader);
                t_applyWrote = true;
            } catch (...) {}
        }
    }
}

void ApplyOrUpdateTranslatedTextBlock(wuxc::TextBlock const& tb) {
    if (!tb) return;

    std::wstring text = ElementText(tb);
    if (IsMonthYearBannerString(text)) {
        if (!t_monthYearBannerTb.get()) {
            t_monthYearBannerTb = winrt::make_weak(tb);
        }
        return;
    }

    void* abi = winrt::get_abi(tb);
    auto& st = t_translatedLabels[abi];
    if (st.busy) return;
    st.busy = true;
    struct Guard { bool& b; ~Guard() { b = false; } } guard{st.busy};

    st.label = winrt::make_weak(tb);
    std::wstring outVi;
    if (TranslateCalendarExtraTextToVi(text, outVi)) {
        if (text != st.appliedText) {
            st.savedText = text;
        }
        if (text != outVi) {
            try {
                tb.Text(outVi);
                st.appliedText = outVi;
                t_applyWrote = true;
            } catch (...) {}
        }
        if (st.propToken == 0) {
            try {
                st.propToken = tb.RegisterPropertyChangedCallback(
                    wuxc::TextBlock::TextProperty(),
                    [](wux::DependencyObject const& sender, wux::DependencyProperty const&) {
                        if (!UseVietnameseLabels(GetSettings())) return;
                        if (auto targetTb = sender.try_as<wuxc::TextBlock>()) {
                            ApplyOrUpdateTranslatedTextBlock(targetTb);
                        }
                    });
            } catch (...) {}
        }
    }
}

void RestoreTranslatedCalendarLabels() {
    t_monthYearBannerTb = nullptr;
    t_monthYearHeaderBtn = nullptr;

    for (auto& kv : t_translatedLabels) {
        if (auto tb = kv.second.label.get()) {
            if (kv.second.propToken != 0) {
                try { tb.UnregisterPropertyChangedCallback(wuxc::TextBlock::TextProperty(), kv.second.propToken); } catch (...) {}
            }
            try {
                if (ElementText(tb) == kv.second.appliedText && !kv.second.savedText.empty()) {
                    tb.Text(kv.second.savedText);
                }
            } catch (...) {}
        }
    }
    t_translatedLabels.clear();
}

void UpdateHeaderLabelOnCurrentThread() {
    ModSettings settings = GetSettings();
    if (!settings.enableCalendarFlyout) return;

    bool vi = UseVietnameseLabels(settings);

    SyncCalendarMonthYearHeader(vi);

    wuxc::Panel headerPanel = t_headerState.headerPanel.get();
    if (!headerPanel) return;

    wuxc::TextBlock headerLabel = t_headerState.headerLabel.get();
    wuxc::TextBlock primaryButtonTextBlock = t_headerState.primarySolarLabel.get();

    if (!headerLabel || !primaryButtonTextBlock) {
        try {
            int count = wuxm::VisualTreeHelper::GetChildrenCount(headerPanel);
            for (int i = 0; i < count; i++) {
                auto child = wuxm::VisualTreeHelper::GetChild(headerPanel, i);
                if (!child) continue;

                if (auto tb = child.try_as<wuxc::TextBlock>()) {
                    headerLabel = tb;
                    t_headerState.createdByMod = (ElementName(tb) == kCustomHeaderLunarName);
                    continue;
                }

                if (!primaryButtonTextBlock) {
                    std::vector<FoundElement> sub;
                    CollectDescendants(child, sub);
                    for (const auto& f : sub) {
                        if (auto innerTb = f.element.try_as<wuxc::TextBlock>()) {
                            primaryButtonTextBlock = innerTb;
                            break;
                        }
                    }
                }
            }

            if (primaryButtonTextBlock) {
                t_headerState.primarySolarLabel = winrt::make_weak(primaryButtonTextBlock);
            }

            if (headerLabel && !t_headerState.createdByMod && !t_headerState.hasSavedState) {
                try {
                    t_headerState.savedText = headerLabel.Text().c_str();
                    t_headerState.savedVisibility = headerLabel.Visibility();
                    t_headerState.hasSavedState = true;
                } catch (...) {}
            }

            if (!headerLabel) {
                wuxc::TextBlock newHeaderLunar;
                newHeaderLunar.Name(kCustomHeaderLunarName);
                newHeaderLunar.FontSize(13.5);
                newHeaderLunar.Opacity(0.85);
                newHeaderLunar.Margin({12, 0, 12, 6});
                if (primaryButtonTextBlock) {
                    try {
                        newHeaderLunar.Foreground(primaryButtonTextBlock.Foreground());
                    } catch (...) {}
                }

                headerPanel.Children().Append(newHeaderLunar);
                headerLabel = newHeaderLunar;
                t_headerState.createdByMod = true;
            }

            if (headerLabel) {
                t_headerState.headerLabel = winrt::make_weak(headerLabel);
            }
        } catch (...) {}
    }

    SYSTEMTIME st{};
    GetLocalTime(&st);

    if (primaryButtonTextBlock) {
        try {
            std::wstring currentPrimary = ElementText(primaryButtonTextBlock);
            if (vi) {
                int jdn = CalculateJDN(st.wDay, st.wMonth, st.wYear);
                int weekdayIdx = ((jdn % 7) + 7) % 7;
                int monthIdx = (st.wMonth >= 1 && st.wMonth <= 12) ? (st.wMonth - 1) : 0;
                WCHAR primaryViBuf[128]{};
                _snwprintf_s(primaryViBuf, _TRUNCATE, L"%s, %d %s",
                             kWeekdaysViFull[weekdayIdx], st.wDay, kMonthsVi[monthIdx]);
                std::wstring desiredPrimary = primaryViBuf;

                if (currentPrimary != desiredPrimary) {
                    if (currentPrimary != t_headerState.appliedPrimaryText) {
                        t_headerState.savedPrimaryText = currentPrimary;
                        t_headerState.hasSavedPrimaryText = true;
                    }
                    primaryButtonTextBlock.Text(desiredPrimary);
                    t_headerState.appliedPrimaryText = desiredPrimary;
                    t_applyWrote = true;
                }
            } else if (t_headerState.hasSavedPrimaryText) {
                if (currentPrimary == t_headerState.appliedPrimaryText && !t_headerState.savedPrimaryText.empty()) {
                    primaryButtonTextBlock.Text(t_headerState.savedPrimaryText);
                    t_applyWrote = true;
                }
                t_headerState.hasSavedPrimaryText = false;
                t_headerState.appliedPrimaryText.clear();
            }
        } catch (...) {}
    }

    if (headerLabel) {
        int lDay, lMonth, lYear;
        bool isLeap;
        std::wstring canChi;
        GetVietnameseLunarDate(st.wYear, st.wMonth, st.wDay, lDay, lMonth, lYear, isLeap, canChi);

        SolarTermInfo stInfo = EvaluateSolarTerm(st.wYear == 0 ? 1 : st.wDay, st.wMonth, st.wYear, vi);

        WCHAR buffer[160]{};
        if (vi) {
            if (isLeap) {
                _snwprintf_s(buffer, _TRUNCATE, L"%d Tháng %d (Nhuận) Năm %s • Tiết %s",
                             lDay, lMonth, canChi.c_str(), stInfo.name);
            } else {
                _snwprintf_s(buffer, _TRUNCATE, L"%d Tháng %d Năm %s • Tiết %s",
                             lDay, lMonth, canChi.c_str(), stInfo.name);
            }
        } else {
            if (isLeap) {
                _snwprintf_s(buffer, _TRUNCATE, L"Lunar: %d/%d (Leap), %s • %s",
                             lDay, lMonth, canChi.c_str(), stInfo.name);
            } else {
                _snwprintf_s(buffer, _TRUNCATE, L"Lunar: %d/%d, Year of %s • %s",
                             lDay, lMonth, canChi.c_str(), stInfo.name);
            }
        }

        std::wstring desired = buffer;
        std::wstring current;
        try { current = headerLabel.Text().c_str(); } catch (...) {}

        try {
            if (headerLabel.Visibility() != wux::Visibility::Visible) {
                headerLabel.Visibility(wux::Visibility::Visible);
                t_applyWrote = true;
            }
        } catch (...) {}

        if (current != desired) {
            try {
                headerLabel.Text(desired);
                t_applyWrote = true;
            } catch (...) {}
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
// Keeping the Calendar Flyout Up to Date

thread_local winrt::Windows::System::DispatcherQueueTimer t_sweepTimer{nullptr};
thread_local winrt::Windows::System::DispatcherQueueTimer::Tick_revoker t_sweepTimerRevoker;

constexpr int kSweepIntervalMs = 250;
constexpr int kSweepQuietTicksToStop = 20;
thread_local int t_sweepQuietTicks = 0;

void StopSweepTimer() {
    t_sweepQuietTicks = 0;
    if (t_sweepTimer) {
        try { t_sweepTimer.Stop(); } catch (...) {}
    }
}

void StartSweepTimer() {
    t_sweepQuietTicks = 0;
    try {
        if (!t_sweepTimer) {
            auto dispatcherQueue = winrt::Windows::System::DispatcherQueue::GetForCurrentThread();
            if (!dispatcherQueue) return;
            t_sweepTimer = dispatcherQueue.CreateTimer();
            t_sweepTimer.Interval(std::chrono::milliseconds{kSweepIntervalMs});
            t_sweepTimerRevoker = t_sweepTimer.Tick(
                winrt::auto_revoke,
                [](winrt::Windows::System::DispatcherQueueTimer const&, wf::IInspectable const&) {
                    SweepDayItems();
                });
        }
        if (!t_sweepTimer.IsRunning()) t_sweepTimer.Start();
    } catch (...) {}
}

struct CoreWindowTriggers {
    wuc::CoreWindow coreWindow{nullptr};
    winrt::event_token activatedToken{};
    winrt::event_token visibilityChangedToken{};
};

thread_local CoreWindowTriggers t_windowTriggers;

constexpr ULONGLONG kCalendarOpenedDebounceMs = 300;
thread_local ULONGLONG t_lastCalendarOpenedTick = 0;

void OnCalendarOpenedOnCurrentThread();
void InitializeForCurrentThread();
void UninitializeDayItemsForCurrentThread();

void RegisterCalendarTriggersOnCurrentThread() {
    try {
        if (t_windowTriggers.coreWindow) return;
        auto coreWindow = wuc::CoreWindow::GetForCurrentThread();
        if (!coreWindow) return;
        t_windowTriggers.coreWindow = coreWindow;
        t_windowTriggers.activatedToken = coreWindow.Activated(
            [](wuc::CoreWindow const&, wuc::WindowActivatedEventArgs const& args) {
                if (args.WindowActivationState() != wuc::CoreWindowActivationState::Deactivated) {
                    OnCalendarOpenedOnCurrentThread();
                }
            });
        t_windowTriggers.visibilityChangedToken = coreWindow.VisibilityChanged(
            [](wuc::CoreWindow const&, wuc::VisibilityChangedEventArgs const& args) {
                if (args.Visible()) OnCalendarOpenedOnCurrentThread();
            });
    } catch (...) {}
}

void UnregisterCalendarTriggersOnCurrentThread() {
    try {
        auto coreWindow = t_windowTriggers.coreWindow;
        if (coreWindow) {
            if (t_windowTriggers.activatedToken.value != 0) coreWindow.Activated(t_windowTriggers.activatedToken);
            if (t_windowTriggers.visibilityChangedToken.value != 0) coreWindow.VisibilityChanged(t_windowTriggers.visibilityChangedToken);
        }
    } catch (...) {}
    t_windowTriggers = {};
}

thread_local wux::FrameworkElement t_layoutUpdatedElement{nullptr};
thread_local winrt::event_token t_layoutUpdatedToken{};
thread_local ULONGLONG t_layoutUpdatedStartTick = 0;
thread_local ULONGLONG t_lastLayoutUpdatedPassTick = 0;

constexpr ULONGLONG kLayoutUpdatedWatchMs = 8000;
constexpr ULONGLONG kLayoutUpdatedThrottleMs = 120;

void RevokeLayoutUpdatedWatch() {
    if (t_layoutUpdatedToken.value != 0) {
        auto element = t_layoutUpdatedElement;
        if (element) {
            try { element.LayoutUpdated(t_layoutUpdatedToken); } catch (...) {}
        }
    }
    t_layoutUpdatedToken = {};
    t_layoutUpdatedElement = nullptr;
}

void OnCalendarLayoutUpdatedOnCurrentThread() {
    const ULONGLONG now = GetTickCount64();
    if (now - t_layoutUpdatedStartTick > kLayoutUpdatedWatchMs) {
        RevokeLayoutUpdatedWatch();
        return;
    }
    if (now - t_lastLayoutUpdatedPassTick < kLayoutUpdatedThrottleMs) return;
    t_lastLayoutUpdatedPassTick = now;
    SweepDayItems();
}

void WatchCalendarLayoutOnCurrentThread() {
    t_layoutUpdatedStartTick = GetTickCount64();
    if (t_layoutUpdatedToken.value != 0) return;
    try {
        auto window = wux::Window::Current();
        if (!window) return;
        auto root = window.Content().try_as<wux::FrameworkElement>();
        if (!root) return;
        t_layoutUpdatedElement = root;
        t_lastLayoutUpdatedPassTick = 0;
        t_layoutUpdatedToken = root.LayoutUpdated(
            [](wf::IInspectable const&, wf::IInspectable const&) {
                OnCalendarLayoutUpdatedOnCurrentThread();
            });
    } catch (...) { RevokeLayoutUpdatedWatch(); }
}

constexpr size_t kMaxScannedElements = 16384;
constexpr int kMaxScanDepth = 96;

void CollectDayItemsFromElement(wux::DependencyObject const& root,
                                size_t& budget,
                                int depth,
                                bool insideCalendarCenter,
                                bool insideCalendarView,
                                bool vi) {
    if (!root || budget == 0 || depth > kMaxScanDepth) return;
    budget--;

    std::wstring name = ElementName(root);
    if (name == L"NotificationCenterGrid" || name == L"CustomCalendarView" || name == kCustomHoroscopePageName) {
        return;
    }
    if (name == L"CalendarCenterGrid") {
        insideCalendarCenter = true;
    }

    if (name == L"CalendarHeader") {
        insideCalendarCenter = true;
        if (auto panel = root.try_as<wuxc::Panel>()) {
            t_headerState.headerPanel = winrt::make_weak(panel);
        }
    }

    if (auto cv = root.try_as<wuxc::CalendarView>()) {
        insideCalendarCenter = true;
        insideCalendarView = true;
        if (t_calendarView.get() != cv) {
            t_calendarView = winrt::make_weak(cv);
            t_calendarViewHandlersAdded = false;
        }
        if (!t_calendarViewHandlersAdded) {
            try {
                cv.AddHandler(
                    wux::UIElement::PointerPressedEvent(),
                    winrt::box_value(wuxi::PointerEventHandler(
                        [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const&) {
                            StartSweepTimer();
                            WatchCalendarLayoutOnCurrentThread();
                        })),
                    true);
                cv.AddHandler(
                    wux::UIElement::PointerReleasedEvent(),
                    winrt::box_value(wuxi::PointerEventHandler(
                        [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const&) {
                            StartSweepTimer();
                            WatchCalendarLayoutOnCurrentThread();
                        })),
                    true);
                cv.AddHandler(
                    wux::UIElement::PointerWheelChangedEvent(),
                    winrt::box_value(wuxi::PointerEventHandler(
                        [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const&) {
                            StartSweepTimer();
                            WatchCalendarLayoutOnCurrentThread();
                        })),
                    true);
                t_calendarViewHandlersAdded = true;
            } catch (...) {}
        }
    }

    if (auto dayItem = root.try_as<wuxc::CalendarViewDayItem>()) {
        TrackDayItem(dayItem);
        return;
    }

    if (vi && (insideCalendarView || insideCalendarCenter)) {
        if (auto tb = root.try_as<wuxc::TextBlock>()) {
            ApplyOrUpdateTranslatedTextBlock(tb);
        }
    }

    int count = 0;
    try { count = wuxm::VisualTreeHelper::GetChildrenCount(root); } catch (...) { return; }
    for (int childIndex = 0; childIndex < count; childIndex++) {
        wux::DependencyObject child = nullptr;
        try { child = wuxm::VisualTreeHelper::GetChild(root, childIndex); } catch (...) { continue; }
        CollectDayItemsFromElement(child, budget, depth + 1, insideCalendarCenter, insideCalendarView, vi);
    }
}

void CollectDayItemsOnCurrentThread() {
    wux::Window window = nullptr;
    try { window = wux::Window::Current(); } catch (...) { return; }
    if (!window) return;
    bool vi = UseVietnameseLabels(GetSettings());
    if (!vi && !t_translatedLabels.empty()) {
        RestoreTranslatedCalendarLabels();
    }
    try {
        size_t budget = kMaxScannedElements;
        if (auto content = window.Content()) {
            CollectDayItemsFromElement(content, budget, 0, false, false, vi);
        }
        for (auto popup : wuxm::VisualTreeHelper::GetOpenPopups(window)) {
            if (budget == 0) break;
            if (auto child = popup.Child()) {
                CollectDayItemsFromElement(child, budget, 0, false, false, vi);
            }
        }
    } catch (...) {}
}

void OnCalendarOpenedOnCurrentThread() {
    InitializeForCurrentThread();
    const ULONGLONG now = GetTickCount64();
    if (now - t_lastCalendarOpenedTick < kCalendarOpenedDebounceMs) return;
    t_lastCalendarOpenedTick = now;

    t_selectedHoroscopeKey = 0;

    if (!GetSettings().enableCalendarFlyout) return;

    EnsureIcsCacheLoadedInMemory();
    TriggerGoogleCalendarSyncIfNeeded(true);

    RegisterCalendarTriggersOnCurrentThread();
    SweepDayItems();
    StartSweepTimer();
    WatchCalendarLayoutOnCurrentThread();
}

void SweepDayItems() {
    ModSettings settings = GetSettings();
    if (!settings.enableCalendarFlyout) {
        UninitializeDayItemsForCurrentThread();
        return;
    }

    TriggerGoogleCalendarSyncIfNeeded(false);

    t_applyWrote = false;
    uint32_t currentGen = g_icsDataGeneration.load();
    if (currentGen != t_lastSeenIcsGeneration) {
        t_lastSeenIcsGeneration = currentGen;
        t_horoscopePage.renderedKey = -1;
        t_applyWrote = true;
    }

    InitializeForCurrentThread();
    RegisterCalendarTriggersOnCurrentThread();
    CollectDayItemsOnCurrentThread();

    for (size_t i = 0; i < t_dayItems.size();) {
        auto item = t_dayItems[i].item.get();
        if (!item) {
            t_dayItems.erase(t_dayItems.begin() + i);
            continue;
        }
        ApplyToDayItem(item);
        i++;
    }

    UpdateHeaderLabelOnCurrentThread();
    UpdateHoroscopePageOnCurrentThread();

    for (auto it = t_cells.begin(); it != t_cells.end();) {
        if (it->second->item.get()) ++it;
        else it = t_cells.erase(it);
    }
    for (auto it = t_labelOwners.begin(); it != t_labelOwners.end();) {
        if (it->second.get()) ++it;
        else it = t_labelOwners.erase(it);
    }
    for (auto it = t_translatedLabels.begin(); it != t_translatedLabels.end();) {
        if (it->second.label.get()) ++it;
        else it = t_translatedLabels.erase(it);
    }

    if (t_applyWrote || g_icsSyncInProgress.load()) t_sweepQuietTicks = 0;
    else if (++t_sweepQuietTicks >= kSweepQuietTicksToStop) StopSweepTimer();
}

void UninitializeDayItemsForCurrentThread() {
    t_calendarView = nullptr;
    t_calendarViewHandlersAdded = false;

    RestoreTranslatedCalendarLabels();

    for (auto& entry : t_cells) {
        DayCell& cell = *entry.second;
        auto item = cell.item.get();
        if (item) {
            if (cell.dateChangedToken != 0) {
                try { item.UnregisterPropertyChangedCallback(wuxc::CalendarViewDayItem::DateProperty(), cell.dateChangedToken); } catch (...) {}
                cell.dateChangedToken = 0;
            }
            try {
                if (cell.itemColor.hadColor) RestoreControlForeground(item, cell.itemColor);
            } catch (...) {}
        }

        if (auto lunarLabel = cell.lunarLabel.get()) {
            if (cell.lunarLabelChangedToken) {
                try { lunarLabel.UnregisterPropertyChangedCallback(wuxc::TextBlock::TextProperty(), cell.lunarLabelChangedToken); } catch (...) {}
                cell.lunarLabelChangedToken = 0;
            }
            if (cell.createdByMod) {
                if (auto parentPanel = cell.createdParentPanel.get()) {
                    try {
                        uint32_t idx = 0;
                        if (parentPanel.Children().IndexOf(lunarLabel, idx)) {
                            parentPanel.Children().RemoveAt(idx);
                        }
                    } catch (...) {}
                }
            } else {
                try {
                    lunarLabel.RenderTransform(nullptr);
                    lunarLabel.ClearValue(wux::FrameworkElement::MarginProperty());
                    if (cell.hasSavedText) lunarLabel.Text(cell.savedText);
                    if (cell.hasSavedVisibility) lunarLabel.Visibility(cell.savedVisibility);
                    if (cell.lunarColor.hadColor) RestoreForeground(lunarLabel, cell.lunarColor);
                } catch (...) {}
            }
        }

        if (auto solarLabel = cell.solarLabel.get()) {
            if (cell.solarLabelChangedToken) {
                try { solarLabel.UnregisterPropertyChangedCallback(wuxc::TextBlock::TextProperty(), cell.solarLabelChangedToken); } catch (...) {}
                cell.solarLabelChangedToken = 0;
            }
            try {
                solarLabel.RenderTransform(nullptr);
                solarLabel.ClearValue(wux::FrameworkElement::MarginProperty());
                if (cell.key != 0) {
                    WCHAR cleanDay[16]{};
                    _snwprintf_s(cleanDay, _TRUNCATE, L"%d", cell.key % 100);
                    solarLabel.Text(cleanDay);
                }
                if (cell.solarColor.hadColor) RestoreForeground(solarLabel, cell.solarColor);
            } catch (...) {}
        }
    }

    if (auto primarySolar = t_headerState.primarySolarLabel.get()) {
        if (t_headerState.hasSavedPrimaryText && !t_headerState.savedPrimaryText.empty()) {
            try { primarySolar.Text(t_headerState.savedPrimaryText); } catch (...) {}
        }
    }

    if (auto headerLabel = t_headerState.headerLabel.get()) {
        if (t_headerState.createdByMod) {
            if (auto headerPanel = t_headerState.headerPanel.get()) {
                try {
                    uint32_t idx = 0;
                    if (headerPanel.Children().IndexOf(headerLabel, idx)) {
                        headerPanel.Children().RemoveAt(idx);
                    }
                } catch (...) {}
            }
        } else if (t_headerState.hasSavedState) {
            try {
                headerLabel.Text(t_headerState.savedText);
                headerLabel.Visibility(t_headerState.savedVisibility);
            } catch (...) {}
        }
    }
    t_headerState = {};

    RestoreHoroscopeCalendarChildren();
    if (auto hostPanel = t_horoscopePage.hostPanel.get()) {
        RemoveExistingHoroscopePageFromHost(hostPanel);
    }
    t_horoscopePage = {};
    t_selectedHoroscopeKey = 0;

    decltype(t_cells)().swap(t_cells);
    decltype(t_dayItems)().swap(t_dayItems);
    decltype(t_labelOwners)().swap(t_labelOwners);

    t_sweepQuietTicks = 0;
    try { if (t_sweepTimer) t_sweepTimer.Stop(); } catch (...) {}
    t_sweepTimerRevoker.revoke();
    t_sweepTimer = nullptr;
}

////////////////////////////////////////////////////////////////////////////////
// Taskbar Clock & Tooltip Horoscope (explorer.exe)

std::atomic<bool> g_systemTrayModuleHooked{false};
thread_local bool t_inRefreshIcon = false;
thread_local bool t_inGetTimeToolTipString = false;

using GetTimeFormatEx_t = decltype(&GetTimeFormatEx);
GetTimeFormatEx_t GetTimeFormatEx_Original;

using GetDateFormatEx_t = decltype(&GetDateFormatEx);
GetDateFormatEx_t GetDateFormatEx_Original;

using ClockSystemTrayIconDataModel_RefreshIcon_t = void(WINAPI*)(LPVOID pThis, LPVOID param1);
ClockSystemTrayIconDataModel_RefreshIcon_t ClockSystemTrayIconDataModel_RefreshIcon_Original;
ClockSystemTrayIconDataModel_RefreshIcon_t ClockSystemTrayIconDataModel2_RefreshIcon_Original;

using ClockSystemTrayIconDataModel_GetTimeToolTipString_t =
    LPVOID(WINAPI*)(LPVOID pThis, LPVOID, LPVOID, LPVOID, LPVOID);
ClockSystemTrayIconDataModel_GetTimeToolTipString_t
    ClockSystemTrayIconDataModel_GetTimeToolTipString_Original;
ClockSystemTrayIconDataModel_GetTimeToolTipString_t
    ClockSystemTrayIconDataModel2_GetTimeToolTipString_Original;
ClockSystemTrayIconDataModel_GetTimeToolTipString_t
    ClockSystemTrayIconDataModel_GetTimeToolTipString2_Original;
ClockSystemTrayIconDataModel_GetTimeToolTipString_t
    ClockSystemTrayIconDataModel2_GetTimeToolTipString2_Original;
ClockSystemTrayIconDataModel_GetTimeToolTipString_t
    ClockSystemTrayIconDataModel_GetTimeToolTipString_Legacy_Original;

void WINAPI ClockSystemTrayIconDataModel_RefreshIcon_Hook(LPVOID pThis, LPVOID param1) {
    t_inRefreshIcon = true;
    ClockSystemTrayIconDataModel_RefreshIcon_Original(pThis, param1);
    t_inRefreshIcon = false;
}

void WINAPI ClockSystemTrayIconDataModel2_RefreshIcon_Hook(LPVOID pThis, LPVOID param1) {
    t_inRefreshIcon = true;
    ClockSystemTrayIconDataModel2_RefreshIcon_Original(pThis, param1);
    t_inRefreshIcon = false;
}

void AppendHoroscopeToToolTipString(LPVOID tooltipPtrPtr) {
    if (!tooltipPtrPtr || !*(void**)tooltipPtrPtr) return;

    ModSettings settings = GetSettings();
    if (!settings.enableTaskbarTooltip) return;

    std::wstring extraLine = FormatTooltipHoroscope(settings);
    if (extraLine.empty()) return;

    struct hstring_header {
        uint32_t flags;
        uint32_t length;
        uint32_t padding1;
        uint32_t padding2;
        wchar_t const* ptr;
    };

    struct shared_hstring_header : hstring_header {
        int32_t count;
        wchar_t buffer[1];
    };

    shared_hstring_header* tooltipHeader = *(shared_hstring_header**)tooltipPtrPtr;
    if (!tooltipHeader) return;

    std::wstring currentTooltip(tooltipHeader->buffer, tooltipHeader->length);

    if (UseVietnameseLabels(settings)) {
        SYSTEMTIME st{};
        GetLocalTime(&st);
        int jdn = CalculateJDN(st.wDay, st.wMonth, st.wYear);
        int weekdayIdx = ((jdn % 7) + 7) % 7;
        int monthIdx = (st.wMonth >= 1 && st.wMonth <= 12) ? (st.wMonth - 1) : 0;

        WCHAR viSolarLine[128]{};
        _snwprintf_s(viSolarLine, _TRUNCATE, L"☀️ %s, Ngày %02d %s Năm %d",
                     kWeekdaysViFull[weekdayIdx], st.wDay, kMonthsVi[monthIdx], st.wYear);

        size_t firstBreak = currentTooltip.find(L"\r\n");
        if (firstBreak != std::wstring::npos) {
            std::wstring remainder = TrimWhitespace(LocalizeTooltipNativeTextToVi(currentTooltip.substr(firstBreak)));
            if (!remainder.empty()) {
                currentTooltip = std::wstring(viSolarLine) + L"\r\n🕒 " + remainder;
            } else {
                currentTooltip = viSolarLine;
            }
        } else {
            currentTooltip = viSolarLine;
        }
    }

    std::wstring fullTooltip = currentTooltip + L"\r\n" + extraLine;
    uint64_t bytesRequired = sizeof(shared_hstring_header) + sizeof(wchar_t) * fullTooltip.size();

    shared_hstring_header* tooltipHeaderNew =
        (shared_hstring_header*)HeapReAlloc(GetProcessHeap(), 0, tooltipHeader, bytesRequired);
    if (!tooltipHeaderNew) return;

    tooltipHeaderNew->ptr = tooltipHeaderNew->buffer;
    tooltipHeaderNew->length = static_cast<uint32_t>(fullTooltip.size());
    memcpy(tooltipHeaderNew->buffer, fullTooltip.data(), sizeof(wchar_t) * fullTooltip.size());
    tooltipHeaderNew->buffer[tooltipHeaderNew->length] = L'\0';
    *(shared_hstring_header**)tooltipPtrPtr = tooltipHeaderNew;
}

LPVOID InvokeGetTimeToolTipStringHook(
    LPVOID pThis, LPVOID p1, LPVOID p2, LPVOID p3, LPVOID p4,
    ClockSystemTrayIconDataModel_GetTimeToolTipString_t original) {
    t_inGetTimeToolTipString = true;
    LPVOID ret = original(pThis, p1, p2, p3, p4);
    AppendHoroscopeToToolTipString(ret);
    t_inGetTimeToolTipString = false;
    return ret;
}

LPVOID WINAPI ClockSystemTrayIconDataModel_GetTimeToolTipString_Hook(
    LPVOID pThis, LPVOID p1, LPVOID p2, LPVOID p3, LPVOID p4) {
    return InvokeGetTimeToolTipStringHook(
        pThis, p1, p2, p3, p4, ClockSystemTrayIconDataModel_GetTimeToolTipString_Original);
}

LPVOID WINAPI ClockSystemTrayIconDataModel2_GetTimeToolTipString_Hook(
    LPVOID pThis, LPVOID p1, LPVOID p2, LPVOID p3, LPVOID p4) {
    return InvokeGetTimeToolTipStringHook(
        pThis, p1, p2, p3, p4, ClockSystemTrayIconDataModel2_GetTimeToolTipString_Original);
}

LPVOID WINAPI ClockSystemTrayIconDataModel_GetTimeToolTipString2_Hook(
    LPVOID pThis, LPVOID p1, LPVOID p2, LPVOID p3, LPVOID p4) {
    return InvokeGetTimeToolTipStringHook(
        pThis, p1, p2, p3, p4, ClockSystemTrayIconDataModel_GetTimeToolTipString2_Original);
}

LPVOID WINAPI ClockSystemTrayIconDataModel2_GetTimeToolTipString2_Hook(
    LPVOID pThis, LPVOID p1, LPVOID p2, LPVOID p3, LPVOID p4) {
    return InvokeGetTimeToolTipStringHook(
        pThis, p1, p2, p3, p4, ClockSystemTrayIconDataModel2_GetTimeToolTipString2_Original);
}

LPVOID WINAPI ClockSystemTrayIconDataModel_GetTimeToolTipString_Legacy_Hook(
    LPVOID pThis, LPVOID p1, LPVOID p2, LPVOID p3, LPVOID p4) {
    return InvokeGetTimeToolTipStringHook(
        pThis, p1, p2, p3, p4, ClockSystemTrayIconDataModel_GetTimeToolTipString_Legacy_Original);
}

bool HookSystemTraySymbols(HMODULE module) {
    if (!module) return false;

    WindhawkUtils::SYMBOL_HOOK symbolHooks[] = {
        {
            {LR"(private: void __cdecl winrt::SystemTray::implementation::ClockSystemTrayIconDataModel::RefreshIcon(class SystemTrayTelemetry::ClockUpdate &))"},
            &ClockSystemTrayIconDataModel_RefreshIcon_Original,
            ClockSystemTrayIconDataModel_RefreshIcon_Hook,
        },
        {
            {LR"(private: void __cdecl winrt::SystemTray::implementation::ClockSystemTrayIconDataModel2::RefreshIcon(class SystemTrayTelemetry::ClockUpdate &))"},
            &ClockSystemTrayIconDataModel2_RefreshIcon_Original,
            ClockSystemTrayIconDataModel2_RefreshIcon_Hook,
            true,
        },
        {
            {LR"(private: struct winrt::hstring __cdecl winrt::SystemTray::implementation::ClockSystemTrayIconDataModel::GetTimeToolTipString(struct _SYSTEMTIME const &,struct _SYSTEMTIME const &,class SystemTrayTelemetry::ClockUpdate &))"},
            &ClockSystemTrayIconDataModel_GetTimeToolTipString_Original,
            ClockSystemTrayIconDataModel_GetTimeToolTipString_Hook,
            true,
        },
        {
            {LR"(private: struct winrt::hstring __cdecl winrt::SystemTray::implementation::ClockSystemTrayIconDataModel2::GetTimeToolTipString(struct _SYSTEMTIME const &,struct _SYSTEMTIME const &,class SystemTrayTelemetry::ClockUpdate &))"},
            &ClockSystemTrayIconDataModel2_GetTimeToolTipString_Original,
            ClockSystemTrayIconDataModel2_GetTimeToolTipString_Hook,
            true,
        },
        {
            {LR"(private: struct winrt::hstring __cdecl winrt::SystemTray::implementation::ClockSystemTrayIconDataModel::GetTimeToolTipString2(struct _SYSTEMTIME const &,struct _SYSTEMTIME const &,class SystemTrayTelemetry::ClockUpdate &))"},
            &ClockSystemTrayIconDataModel_GetTimeToolTipString2_Original,
            ClockSystemTrayIconDataModel_GetTimeToolTipString2_Hook,
            true,
        },
        {
            {LR"(private: struct winrt::hstring __cdecl winrt::SystemTray::implementation::ClockSystemTrayIconDataModel2::GetTimeToolTipString2(struct _SYSTEMTIME const &,struct _SYSTEMTIME const &,class SystemTrayTelemetry::ClockUpdate &))"},
            &ClockSystemTrayIconDataModel2_GetTimeToolTipString2_Original,
            ClockSystemTrayIconDataModel2_GetTimeToolTipString2_Hook,
            true,
        },
        {
            {LR"(private: struct winrt::hstring __cdecl winrt::SystemTray::implementation::ClockSystemTrayIconDataModel::GetTimeToolTipString(struct _SYSTEMTIME *,struct _TIME_DYNAMIC_ZONE_INFORMATION *,class SystemTrayTelemetry::ClockUpdate &))"},
            &ClockSystemTrayIconDataModel_GetTimeToolTipString_Legacy_Original,
            ClockSystemTrayIconDataModel_GetTimeToolTipString_Legacy_Hook,
            true,
        },
    };
    if (!HookSymbols(module, symbolHooks, ARRAYSIZE(symbolHooks))) {
        Wh_Log(L"HookSymbols failed for system tray module");
        return false;
    }
    return true;
}

VS_FIXEDFILEINFO* GetModuleVersionInfo(HMODULE hModule, UINT* puPtrLen) {
    void* pFixedFileInfo = nullptr;
    UINT uPtrLen = 0;

    HRSRC hResource =
        FindResourceW(hModule, MAKEINTRESOURCEW(VS_VERSION_INFO), RT_VERSION);
    if (hResource) {
        HGLOBAL hGlobal = LoadResource(hModule, hResource);
        if (hGlobal) {
            void* pData = LockResource(hGlobal);
            if (pData) {
                if (!VerQueryValueW(pData, L"\\", &pFixedFileInfo, &uPtrLen) ||
                    uPtrLen == 0) {
                    pFixedFileInfo = nullptr;
                    uPtrLen = 0;
                }
            }
        }
    }

    if (puPtrLen) {
        *puPtrLen = uPtrLen;
    }

    return static_cast<VS_FIXEDFILEINFO*>(pFixedFileInfo);
}

HMODULE GetSystemTrayModuleHandle() {
    HMODULE module = GetModuleHandleW(L"SystemTray.dll");
    if (!module) {
        module = GetModuleHandleW(L"Taskbar.View.dll");
        if (module) {
            VS_FIXEDFILEINFO* fixedFileInfo = GetModuleVersionInfo(module, nullptr);
            WORD moduleMajor = fixedFileInfo ? HIWORD(fixedFileInfo->dwFileVersionMS) : 0;
            if (!moduleMajor || moduleMajor >= 2604) {
                module = nullptr;
            }
        }
    }
    if (!module) {
        module = GetModuleHandleW(L"ExplorerExtensions.dll");
    }
    return module;
}

using LoadLibraryExW_t = decltype(&LoadLibraryExW);
LoadLibraryExW_t LoadLibraryExW_Original;
HMODULE WINAPI LoadLibraryExW_Hook(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags) {
    HMODULE module = LoadLibraryExW_Original(lpLibFileName, hFile, dwFlags);
    if (module && !g_systemTrayModuleHooked && GetSystemTrayModuleHandle() == module) {
        if (!g_systemTrayModuleHooked.exchange(true)) {
            if (HookSystemTraySymbols(module)) {
                Wh_ApplyHookOperations();
            }
        }
    }
    return module;
}

int WINAPI GetTimeFormatEx_Hook(LPCWSTR lpLocaleName,
                                DWORD dwFlags,
                                CONST SYSTEMTIME* lpTime,
                                LPCWSTR lpFormat,
                                LPWSTR lpTimeStr,
                                int cchTime) {
    if (t_inRefreshIcon && !t_inGetTimeToolTipString) {
        ModSettings settings = GetSettings();
        if (settings.enableTaskbarClock && settings.taskbarClockSolarOnTop) {
            if (!cchTime) {
                return FORMATTED_BUFFER_SIZE;
            }

            WCHAR origTime[128]{};
            GetTimeFormatEx_Original(lpLocaleName, dwFlags, lpTime, lpFormat,
                                     origTime, ARRAYSIZE(origTime));

            SYSTEMTIME st{};
            if (lpTime) {
                st = *lpTime;
            } else {
                GetLocalTime(&st);
            }

            WCHAR weekdayBuf[32]{};
            if (UseVietnameseLabels(settings)) {
                static const PCWSTR kWeekdaysVi[] = {
                    L"CN", L"T2", L"T3", L"T4", L"T5", L"T6", L"T7"
                };
                wcscpy_s(weekdayBuf, (st.wDayOfWeek < 7) ? kWeekdaysVi[st.wDayOfWeek] : L"");
            } else {
                GetDateFormatEx_Original(lpLocaleName, DATE_AUTOLAYOUT, &st, L"ddd",
                                         weekdayBuf, ARRAYSIZE(weekdayBuf), nullptr);
            }

            _snwprintf_s(lpTimeStr, cchTime, _TRUNCATE, L"%s - %s, %02d/%02d",
                         origTime, weekdayBuf, st.wDay, st.wMonth);
            return static_cast<int>(wcslen(lpTimeStr)) + 1;
        }
    }
    return GetTimeFormatEx_Original(lpLocaleName, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}

int WINAPI GetDateFormatEx_Hook(LPCWSTR lpLocaleName,
                                DWORD dwFlags,
                                CONST SYSTEMTIME* lpDate,
                                LPCWSTR lpFormat,
                                LPWSTR lpDateStr,
                                int cchDate,
                                LPCWSTR lpCalendar) {
    if (t_inRefreshIcon && !t_inGetTimeToolTipString && !(dwFlags & DATE_LONGDATE)) {
        ModSettings settings = GetSettings();
        if (settings.enableTaskbarClock) {
            if (!cchDate) {
                return FORMATTED_BUFFER_SIZE;
            }

            SYSTEMTIME st{};
            if (lpDate) {
                st = *lpDate;
            } else {
                GetLocalTime(&st);
            }

            bool vi = UseVietnameseLabels(settings);
            std::wstring lunarStr = FormatTaskbarLunarDate(st.wYear, st.wMonth, st.wDay, vi);

            if (settings.taskbarClockSolarOnTop) {
                _snwprintf_s(lpDateStr, cchDate, _TRUNCATE, L"%s", lunarStr.c_str());
            } else {
                WCHAR origDate[128]{};
                GetDateFormatEx_Original(lpLocaleName, dwFlags, lpDate, lpFormat,
                                         origDate, ARRAYSIZE(origDate), lpCalendar);
                _snwprintf_s(lpDateStr, cchDate, _TRUNCATE, L"%s • %s",
                             origDate, lunarStr.c_str());
            }
            return static_cast<int>(wcslen(lpDateStr)) + 1;
        }
    }
    return GetDateFormatEx_Original(lpLocaleName, dwFlags, lpDate, lpFormat, lpDateStr, cchDate, lpCalendar);
}

void RefreshTaskbarClock() {
    constexpr WCHAR kTempValueName[] = L"_temp_windhawk_vn_lunar_clock";
    HKEY hSubKey;
    if (RegOpenKeyExW(HKEY_CURRENT_USER,
                      L"Control Panel\\TimeDate\\AdditionalClocks", 0,
                      KEY_WRITE, &hSubKey) == ERROR_SUCCESS) {
        if (RegSetValueExW(hSubKey, kTempValueName, 0, REG_SZ,
                           reinterpret_cast<const BYTE*>(L""),
                           sizeof(WCHAR)) == ERROR_SUCCESS) {
            RegDeleteValueW(hSubKey, kTempValueName);
        }
        RegCloseKey(hSubKey);
    }
}

////////////////////////////////////////////////////////////////////////////////
// Process Plumbing

std::atomic<UINT> g_runFromWindowThreadViaPostMessageMsg{0};

UINT RunFromWindowThreadViaPostMessageMsg() {
    UINT message = g_runFromWindowThreadViaPostMessageMsg.load();
    if (!message) {
        message = RegisterWindowMessageW(L"Windhawk_RunFromWindowThreadViaPostMessage_" WH_MOD_ID);
        g_runFromWindowThreadViaPostMessageMsg.store(message);
    }
    return message;
}

std::mutex g_pendingPostHooksMutex;
std::vector<HHOOK> g_pendingPostHooks;

void RememberPendingPostHook(HHOOK hook) {
    std::lock_guard<std::mutex> lock(g_pendingPostHooksMutex);
    g_pendingPostHooks.push_back(hook);
}

void ForgetPendingPostHook(HHOOK hook) {
    std::lock_guard<std::mutex> lock(g_pendingPostHooksMutex);
    for (auto it = g_pendingPostHooks.begin(); it != g_pendingPostHooks.end(); ++it) {
        if (*it == hook) {
            g_pendingPostHooks.erase(it);
            break;
        }
    }
}

void UnhookPendingPostHooks() {
    std::vector<HHOOK> hooks;
    {
        std::lock_guard<std::mutex> lock(g_pendingPostHooksMutex);
        hooks.swap(g_pendingPostHooks);
    }
    for (HHOOK hook : hooks) UnhookWindowsHookEx(hook);
}

void DrainPendingRunFromWindowThreadPostsOnCurrentThread() {
    const UINT message = g_runFromWindowThreadViaPostMessageMsg.load();
    if (!message) return;
    MSG msg;
    while (PeekMessageW(&msg, nullptr, message, message, PM_REMOVE)) {}
}

void InitializeForCurrentThread() {
    if (g_initializedForThread) return;
    g_initializedForThread = true;
    RegisterCalendarTriggersOnCurrentThread();
}

void UninitializeForCurrentThread() {
    DrainPendingRunFromWindowThreadPostsOnCurrentThread();
    if (!g_initializedForThread) return;
    UnregisterCalendarTriggersOnCurrentThread();
    RevokeLayoutUpdatedWatch();
    UninitializeDayItemsForCurrentThread();
    g_initializedForThread = false;
}

using RunFromWindowThreadProc_t = void(WINAPI*)(PVOID parameter);

bool RunFromWindowThread(HWND hWnd, RunFromWindowThreadProc_t proc, PVOID procParam) {
    static const UINT runFromWindowThreadRegisteredMsg =
        RegisterWindowMessageW(L"Windhawk_RunFromWindowThread_" WH_MOD_ID);
    struct RUN_FROM_WINDOW_THREAD_PARAM {
        RunFromWindowThreadProc_t proc;
        PVOID procParam;
    };
    DWORD dwThreadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (dwThreadId == 0) return false;
    if (dwThreadId == GetCurrentThreadId()) {
        proc(procParam);
        return true;
    }

    HHOOK hook = SetWindowsHookExW(
        WH_CALLWNDPROC,
        [](int nCode, WPARAM wParam, LPARAM lParam) -> LRESULT {
            if (nCode == HC_ACTION) {
                const CWPSTRUCT* cwp = reinterpret_cast<const CWPSTRUCT*>(lParam);
                if (cwp->message == runFromWindowThreadRegisteredMsg) {
                    auto* param = reinterpret_cast<RUN_FROM_WINDOW_THREAD_PARAM*>(cwp->lParam);
                    param->proc(param->procParam);
                }
            }
            return CallNextHookEx(nullptr, nCode, wParam, lParam);
        },
        nullptr, dwThreadId);
    if (!hook) return false;

    RUN_FROM_WINDOW_THREAD_PARAM param{proc, procParam};
    SendMessageW(hWnd, runFromWindowThreadRegisteredMsg, 0, reinterpret_cast<LPARAM>(&param));
    UnhookWindowsHookEx(hook);
    return true;
}

bool RunFromWindowThreadViaPostMessage(HWND hWnd, RunFromWindowThreadProc_t proc, PVOID procParam) {
    struct RUN_FROM_WINDOW_THREAD_PARAM {
        RunFromWindowThreadProc_t proc;
        PVOID procParam;
        HHOOK hook;
    };
    const UINT message = RunFromWindowThreadViaPostMessageMsg();
    DWORD dwThreadId = GetWindowThreadProcessId(hWnd, nullptr);
    if (dwThreadId == 0) return false;

    HHOOK hook = SetWindowsHookExW(
        WH_GETMESSAGE,
        [](int nCode, WPARAM wParam, LPARAM lParam) -> LRESULT {
            if (nCode == HC_ACTION && wParam == PM_REMOVE) {
                MSG* msg = reinterpret_cast<MSG*>(lParam);
                if (msg->message == g_runFromWindowThreadViaPostMessageMsg.load()) {
                    auto* param = reinterpret_cast<RUN_FROM_WINDOW_THREAD_PARAM*>(msg->lParam);
                    if (param) {
                        ForgetPendingPostHook(param->hook);
                        param->proc(param->procParam);
                        UnhookWindowsHookEx(param->hook);
                        delete param;
                        msg->lParam = 0;
                    }
                }
            }
            return CallNextHookEx(nullptr, nCode, wParam, lParam);
        },
        nullptr, dwThreadId);
    if (!hook) return false;

    auto* param = new RUN_FROM_WINDOW_THREAD_PARAM{proc, procParam, hook};
    RememberPendingPostHook(hook);
    if (!PostMessageW(hWnd, message, 0, reinterpret_cast<LPARAM>(param))) {
        ForgetPendingPostHook(hook);
        UnhookWindowsHookEx(hook);
        delete param;
        return false;
    }
    return true;
}

bool IsCalendarWindowClass(PCWSTR className) {
    switch (g_target) {
        case Target::ShellExperienceHost: return _wcsicmp(className, L"Windows.UI.Core.CoreWindow") == 0;
        case Target::ShellHost: return _wcsicmp(className, L"ControlCenterWindow") == 0;
        default: return false;
    }
}

std::vector<HWND> GetCalendarWindows() {
    struct ENUM_WINDOWS_PARAM {
        std::vector<HWND>* hWnds;
    };
    std::vector<HWND> hWnds;
    ENUM_WINDOWS_PARAM param = {&hWnds};
    EnumWindows(
        [](HWND hWnd, LPARAM lParam) -> BOOL {
            auto& param = *reinterpret_cast<ENUM_WINDOWS_PARAM*>(lParam);
            DWORD dwProcessId = 0;
            if (!GetWindowThreadProcessId(hWnd, &dwProcessId) || dwProcessId != GetCurrentProcessId()) return TRUE;
            WCHAR szClassName[32];
            if (GetClassNameW(hWnd, szClassName, ARRAYSIZE(szClassName)) == 0) return TRUE;
            if (IsCalendarWindowClass(szClassName)) param.hWnds->push_back(hWnd);
            return TRUE;
        },
        reinterpret_cast<LPARAM>(&param));
    return hWnds;
}

void NotifyCalendarUiAfterIcsSync() {
    if (g_shuttingDown) return;
    if (g_target == Target::Explorer) return;

    for (auto hCoreWnd : GetCalendarWindows()) {
        RunFromWindowThreadViaPostMessage(
            hCoreWnd,
            [](PVOID) {
                if (!g_shuttingDown && GetSettings().enableCalendarFlyout) {
                    t_horoscopePage.renderedKey = -1;
                    SweepDayItems();
                    StartSweepTimer();
                }
            },
            nullptr);
    }
}

void OnWindowCreated(HWND hWnd, LPCWSTR lpClassName) {
    if (g_shuttingDown) return;
    BOOL bTextualClassName = ((ULONG_PTR)lpClassName & ~(ULONG_PTR)0xffff) != 0;
    if (!bTextualClassName || !IsCalendarWindowClass(lpClassName)) return;
    RunFromWindowThreadViaPostMessage(
        hWnd,
        [](PVOID) {
            InitializeForCurrentThread();
            OnCalendarOpenedOnCurrentThread();
        },
        nullptr);
}

using CreateWindowInBand_t = HWND(WINAPI*)(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName,
                                           DWORD dwStyle, int X, int Y, int nWidth, int nHeight,
                                           HWND hWndParent, HMENU hMenu, HINSTANCE hInstance,
                                           PVOID lpParam, DWORD dwBand);
CreateWindowInBand_t CreateWindowInBand_Original;
HWND WINAPI CreateWindowInBand_Hook(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName,
                                    DWORD dwStyle, int X, int Y, int nWidth, int nHeight,
                                    HWND hWndParent, HMENU hMenu, HINSTANCE hInstance,
                                    PVOID lpParam, DWORD dwBand) {
    HWND hWnd = CreateWindowInBand_Original(dwExStyle, lpClassName, lpWindowName, dwStyle,
                                            X, Y, nWidth, nHeight, hWndParent, hMenu,
                                            hInstance, lpParam, dwBand);
    if (hWnd) OnWindowCreated(hWnd, lpClassName);
    return hWnd;
}

using CreateWindowInBandEx_t = HWND(WINAPI*)(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName,
                                             DWORD dwStyle, int X, int Y, int nWidth, int nHeight,
                                             HWND hWndParent, HMENU hMenu, HINSTANCE hInstance,
                                             PVOID lpParam, DWORD dwBand, DWORD dwTypeFlags);
CreateWindowInBandEx_t CreateWindowInBandEx_Original;
HWND WINAPI CreateWindowInBandEx_Hook(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName,
                                      DWORD dwStyle, int X, int Y, int nWidth, int nHeight,
                                      HWND hWndParent, HMENU hMenu, HINSTANCE hInstance,
                                      PVOID lpParam, DWORD dwBand, DWORD dwTypeFlags) {
    HWND hWnd = CreateWindowInBandEx_Original(dwExStyle, lpClassName, lpWindowName, dwStyle,
                                              X, Y, nWidth, nHeight, hWndParent, hMenu,
                                              hInstance, lpParam, dwBand, dwTypeFlags);
    if (hWnd) OnWindowCreated(hWnd, lpClassName);
    return hWnd;
}

void OnWindowShown(HWND hWnd) {
    if (g_shuttingDown) return;
    DWORD dwProcessId = 0;
    if (!hWnd || !GetWindowThreadProcessId(hWnd, &dwProcessId) || dwProcessId != GetCurrentProcessId()) return;
    WCHAR szClassName[32];
    if (GetClassNameW(hWnd, szClassName, ARRAYSIZE(szClassName)) == 0 || !IsCalendarWindowClass(szClassName)) return;
    RunFromWindowThreadViaPostMessage(hWnd, [](PVOID) { OnCalendarOpenedOnCurrentThread(); }, nullptr);
}

using ShowWindow_t = decltype(&ShowWindow);
ShowWindow_t ShowWindow_Original;
BOOL WINAPI ShowWindow_Hook(HWND hWnd, int nCmdShow) {
    const BOOL wasVisible = ShowWindow_Original(hWnd, nCmdShow);
    if (nCmdShow != SW_HIDE) OnWindowShown(hWnd);
    return wasVisible;
}

template <typename Prototype>
bool InstallHook(HMODULE module, PCSTR functionName, Prototype* hook, Prototype** original) {
    if (!module) {
        Wh_Log(L"Module is null when hooking %S", functionName);
        return false;
    }
    Prototype* target = reinterpret_cast<Prototype*>(GetProcAddress(module, functionName));
    if (!target) {
        Wh_Log(L"Failed to resolve %S", functionName);
        return false;
    }
    if (!WindhawkUtils::SetFunctionHook(target, hook, original)) {
        Wh_Log(L"Failed to set function hook for %S", functionName);
        return false;
    }
    return true;
}

BOOL Wh_ModInit() {
    g_shuttingDown = false;
    g_target = Target::ShellExperienceHost;
    WCHAR moduleFilePath[MAX_PATH];
    switch (GetModuleFileNameW(nullptr, moduleFilePath, ARRAYSIZE(moduleFilePath))) {
        case 0:
        case ARRAYSIZE(moduleFilePath):
            return FALSE;
        default:
            if (PCWSTR moduleFileName = wcsrchr(moduleFilePath, L'\\')) {
                moduleFileName++;
                if (_wcsicmp(moduleFileName, L"explorer.exe") == 0) {
                    g_target = Target::Explorer;
                } else if (_wcsicmp(moduleFileName, L"ShellHost.exe") == 0) {
                    g_target = Target::ShellHost;
                }
            } else {
                return FALSE;
            }
            break;
    }

    LoadSettings();
    ModSettings settings = GetSettings();

    EnsureIcsCacheLoadedInMemory();
    TriggerGoogleCalendarSyncIfNeeded(true);
    StartPeriodicGoogleCalendarSyncLoop();

    if (g_target == Target::Explorer) {
        if (!settings.enableTaskbarClock && !settings.enableTaskbarTooltip) {
            return TRUE;
        }

        if (HMODULE sysTrayModule = GetSystemTrayModuleHandle()) {
            g_systemTrayModuleHooked = true;
            HookSystemTraySymbols(sysTrayModule);
        }

        HMODULE kernelBaseModule = GetModuleHandleW(L"kernelbase.dll");
        if (!kernelBaseModule) {
            Wh_Log(L"Failed to get kernelbase.dll handle");
            return FALSE;
        }
        InstallHook(kernelBaseModule, "LoadLibraryExW", LoadLibraryExW_Hook, &LoadLibraryExW_Original);
        InstallHook(kernelBaseModule, "GetTimeFormatEx", GetTimeFormatEx_Hook, &GetTimeFormatEx_Original);
        InstallHook(kernelBaseModule, "GetDateFormatEx", GetDateFormatEx_Hook, &GetDateFormatEx_Original);
        return TRUE;
    }

    if (!settings.enableCalendarFlyout) {
        return FALSE;
    }

    RunFromWindowThreadViaPostMessageMsg();
    HMODULE user32Module = LoadLibraryExW(L"user32.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    InstallHook(user32Module, "CreateWindowInBand", CreateWindowInBand_Hook, &CreateWindowInBand_Original);
    InstallHook(user32Module, "CreateWindowInBandEx", CreateWindowInBandEx_Hook, &CreateWindowInBandEx_Original);
    InstallHook(user32Module, "ShowWindow", ShowWindow_Hook, &ShowWindow_Original);
    return TRUE;
}

void Wh_ModAfterInit() {
    if (g_target == Target::Explorer) {
        if (!g_systemTrayModuleHooked) {
            if (HMODULE sysTrayModule = GetSystemTrayModuleHandle()) {
                if (!g_systemTrayModuleHooked.exchange(true)) {
                    if (HookSystemTraySymbols(sysTrayModule)) {
                        Wh_ApplyHookOperations();
                    }
                }
            }
        }
        RefreshTaskbarClock();
        return;
    }
    for (auto hCoreWnd : GetCalendarWindows()) {
        RunFromWindowThread(
            hCoreWnd,
            [](PVOID) {
                InitializeForCurrentThread();
                OnCalendarOpenedOnCurrentThread();
            },
            nullptr);
    }
}

void Wh_ModUninit() {
    g_shuttingDown = true;
    if (g_target == Target::Explorer) {
        RefreshTaskbarClock();
        return;
    }
    for (auto hCoreWnd : GetCalendarWindows()) {
        RunFromWindowThread(hCoreWnd, [](PVOID) { UninitializeForCurrentThread(); }, nullptr);
    }
    UnhookPendingPostHooks();
}

void Wh_ModSettingsChanged() {
    LoadSettings();
    TriggerGoogleCalendarSyncIfNeeded(true);

    if (g_target == Target::Explorer) {
        RefreshTaskbarClock();
        return;
    }
    for (auto hCoreWnd : GetCalendarWindows()) {
        RunFromWindowThread(
            hCoreWnd,
            [](PVOID) {
                if (!GetSettings().enableCalendarFlyout) {
                    UninitializeDayItemsForCurrentThread();
                } else {
                    t_horoscopePage.renderedKey = -1;
                    SweepDayItems();
                    StartSweepTimer();
                }
            },
            nullptr);
    }
}
