// ==WindhawkMod==
// @id              vn-lunar-almanac-horoscope-win10
// @name            Vietnamese Lunar Almanac & Personalized Horoscope
// @name:vi-VN      Lịch Vạn Niên & Tử Vi Phong Thủy
// @description     Displays the Vietnamese Lunar Calendar, 24 Solar Terms, Five Elements (Ngũ Hành), Google Calendar notes, personalized daily Horoscope (Tử Vi), live Taskbar System Stats, and independent Multi-Monitor Wi-Fi & Audio controls on Windows 10
// @description:vi-VN Hiển thị Âm lịch Việt Nam, 24 Tiết khí, Ngũ hành Nạp âm, đồng bộ Google Calendar, Tử Vi cá nhân hóa, khung thông số hệ thống (CPU/GPU/RAM/Mạng/Ping) và cụm điều khiển Wi-Fi & Âm thanh độc lập cho màn hình phụ trên Windows 10
// @version         0.2.5
// @author          bewbungbu
// @include         explorer.exe
// @include         ShellExperienceHost.exe
// @architecture    x86-64
// @compilerOptions -lole32 -loleaut32 -lruntimeobject -lversion -lwinhttp -lurlmon -lcomctl32 -ld2d1 -ldwrite -lgdi32 -ldwmapi -lshell32
// @license         GPL-3.0-only
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# 🌕 Lịch Vạn Niên, Tử Vi & Tiện Ích Taskbar Đa Màn Hình (Windows 10)

Bản Mod tích hợp **Âm lịch Việt Nam**, **24 Tiết Khí**, **Bát tự Can Chi**, **Ngũ Hành Nạp Âm**, **Ngày lễ truyền thống**, **Đồng bộ Ghi chú Google Calendar (.ics)**, **Tử Vi cá nhân hóa theo năm sinh**, **Khung theo dõi thông số hệ thống (CPU, GPU, RAM, Mạng, Ping)** và **Cụm điều khiển Wi-Fi & Âm thanh độc lập cho màn hình phụ** trực tiếp vào thanh Taskbar, hộp chú thích trong suốt (hỗ trợ Color Emoji) và khay Lịch (Calendar Flyout) của **Windows 10**.

---

## ✨ I. Tổng hợp tất cả các tính năng nổi bật

1. **Hiển thị Âm lịch trực tiếp trên thanh Taskbar:**
   * Hỗ trợ chế độ **2 dòng** (Giờ + Thứ/Ngày Dương lịch ở dòng trên, Ngày/Tháng/Năm Can Chi Âm lịch ở dòng dưới) hoặc chế độ **1 dòng nối tiếp**.
   * Tự động tính toán chính xác **tháng Nhuận** và múi giờ chuẩn Việt Nam (**UTC+7**).
2. **Hộp chú thích trong suốt (Acrylic Color-Emoji Tooltip) & Bảo mật riêng tư:**
   * Hiển thị nhanh Âm lịch, Lễ Tết, Bát tự, Ngũ hành, Tử Vi và lịch trình Google Calendar trong ngày kèm tùy chỉnh độ trong suốt nền (`tooltipOpacity`).
   * **Chế độ Riêng Tư:** Bật/tắt hiển thị nội dung ghi chú Google Calendar trên hộp rê chuột để tránh lộ thông tin cá nhân.
3. **Khay Lịch tháng (Calendar Flyout) & Bảng Chi tiết Tử Vi:**
   * Hiển thị ngày Âm lịch dưới từng ô ngày Dương lịch, **tự động tô đỏ** ngày Lễ, Tết truyền thống Việt Nam.
   * **Đánh dấu cá nhân hóa theo tuổi:** Gắn sao **(★)** cho ngày Tam Hợp / Lục Hợp / Tương Sinh và dấu chấm than **(!)** cho ngày Lục Xung / Thiên Khắc Địa Xung.
   * **Đánh dấu sự kiện Google Calendar `(•)`:** Nhấp vào bất kỳ ngày nào để mở bảng luận giải Tử Vi và lịch trình chi tiết.
4. **📊 Khung theo dõi Thông số hệ thống trực tiếp trên Taskbar (CPU, GPU, RAM, Mạng, Ping):**
   * Hiển thị thời gian thực `% CPU`, `% GPU`, `% & GB RAM`, tốc độ mạng (`↓ / ↑`) và độ trễ `Ping (ms)`.
   * **Kéo thả tự do & Ghi nhớ vị trí vĩnh viễn:** Giữ chuột trái kéo tới vị trí mong muốn; tọa độ được lưu vĩnh viễn vào `HKCU\Software\VnLunarAlmanac\Settings`, không bị mất sau khi khởi động lại máy.
   * Nhấp đúp chuột trái mở nhanh **Task Manager**; nhấp chuột phải để bật/tắt nhanh từng chỉ số hoặc chọn **"Đặt lại vị trí"**.
5. **🖥️ Tiện ích Đa Màn Hình (Multi-Monitor): Wi-Fi, Âm thanh & Thông số độc lập trên Màn hình phụ:**
   * **Tự động phát hiện toàn bộ màn hình thứ 2 trở lên** (bỏ qua màn hình chính), hoạt động tách biệt hoàn toàn không ảnh hưởng màn hình chính.
   * **2 nút tách biệt (Wi-Fi / Mạng và Âm thanh) với bảng điều khiển nổi Fluent UI 120fps:**
     * **Nút Wi-Fi / Mạng:** Xem mạng Wi-Fi khả dụng cùng cường độ sóng, bấm **Kết nối / Ngắt kết nối** trực tiếp, nút **Quét lại (`↻`)**, hiển thị chính xác Ethernet vật lý (tự loại card ảo Hyper-V / WSL / VPN).
     * **Nút Âm thanh:** Thanh trượt âm lượng mượt 120fps, nút Mute/Unmute, lăn chuột trực tiếp trên icon Loa để chỉnh ±2% kèm OSD `%`, hỗ trợ **chuyển đổi thiết bị đầu ra** và tích hợp chuyển loa vật lý thông minh cho **FxSound**.
   * **Đồng bộ màu & co giãn thông minh:** Nền bảng nổi tự động đổi màu theo đúng màu Taskbar, tự trượt ngang tránh đè đồng hồ/chuông thông báo, khóa vị trí vững khi bật **Ẩn Taskbar (Auto-Hide)**.
   * **Nhân bản Khung Thông số lên màn hình phụ:** Hỗ trợ kéo thả và lưu vị trí độc lập với màn hình chính.

---

## ⚙️ II. Danh sách các tùy chỉnh (Settings) trong Mod

### 1. Ngôn ngữ & Cá nhân hóa Tử Vi
* **Ngôn ngữ hiển thị (`language`):** `Tự động theo hệ thống`, `Tiếng Việt` hoặc `English`.
* **Năm sinh Âm lịch (`birthYear`):** Nhập năm sinh (VD: `1995`, `2000`) để tính Ngũ hành Nạp âm và đánh dấu ngày Hợp `(★)` / Xung `(!)`. Để `0` nếu không dùng.
* **Đánh dấu ngày Hợp / Xung trên ô lịch (`markPersonalDaysOnCalendar`).**

### 2. Đồng bộ Google Calendar (.ics)
* **Link Google Calendar cá nhân (`googleIcsUrl`):** Dán 1 hoặc nhiều link `.ics` (cách nhau bằng dấu `;`).
* **Chu kỳ tự động đồng bộ (`icsRefreshMinutes`):** Mặc định `10` phút.
* **Đánh dấu chấm `(•)` trên ô lịch (`markGoogleEventsOnCalendar`).**
* **Hiển thị ghi chú trên Tooltip (`showGoogleEventsInTooltip`)** & **Độ trong suốt nền Tooltip (`tooltipOpacity`: 80–240).**

### 3. Đồng hồ Taskbar & Khay Lịch
* **Hiển thị Âm lịch trên Taskbar (`enableTaskbarClock`)** & **Định dạng 2 dòng (`taskbarClockSolarOnTop`).**
* **Hiển thị Tooltip phong thủy (`enableTaskbarTooltip`).**
* **Hiển thị Âm lịch trong khay Lịch (`enableCalendarFlyout`)** & **Mở trang chi tiết khi bấm vào ngày (`enableHoroscopePage`).**

### 4. Khung Thông số hệ thống & Đa màn hình (Multi-Monitor)
* **Hiển thị khung thông số trên Taskbar chính (`enableTaskbarSystemStats`).**
* **Hiển thị nút Wi-Fi & Âm thanh độc lập trên màn hình phụ (`enableSecondaryMonitorTray`).**
* **Hiển thị khung thông số hệ thống trên màn hình phụ (`enableSecondaryMonitorStats`).**
* **Tùy chọn từng chỉ số:** `showCpuStats`, `showGpuStats`, `showRamStats`, `showNetStats`, `showPingStats`.

---

## 📅 III. Hướng dẫn lấy link đồng bộ Google Calendar (.ics)

1. Mở **Google Calendar** trên trình duyệt máy tính → **Cài đặt (⚙️ Settings)**.
2. Ở cột trái, chọn **Tên lịch cá nhân của bạn** dưới mục *Cài đặt cho lịch của tôi*.
3. Cuộn xuống mục **Địa chỉ bí mật ở định dạng iCal (Secret address in iCal format)**.
4. Sao chép đường link `.ics` và dán vào mục **Link Google Calendar cá nhân (.ics)** trong phần **Cài đặt** của Mod.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- language: auto
  $name: Ngôn ngữ hiển thị
  $description: Chọn ngôn ngữ hiển thị cho Âm lịch, Tiết khí và trang Tử Vi.
  $options:
    - auto: Tự động theo hệ thống
    - vi: Tiếng Việt
    - en: English
- birthYear: 0
  $name: "Năm sinh Âm lịch (VD: 1995, 2005)"
  $description: "Nhập năm sinh Âm lịch để tính Ngũ hành Nạp âm và đánh dấu ngày Hợp (★) / Xung (!) theo tuổi. Để 0 nếu không dùng."
- markPersonalDaysOnCalendar: true
  $name: Đánh dấu ngày Hợp / Xung trên ô lịch
- googleIcsUrl: ""
  $name: "Link Google Calendar cá nhân (.ics)"
  $description: "Dán link 'Địa chỉ bí mật ở định dạng iCal' (Secret address in iCal format) từ Google Calendar Settings vào đây. Có thể dán nhiều link cách nhau bởi dấu chấm phẩy (;)."
- icsRefreshMinutes: 10
  $name: "Chu kỳ tự động đồng bộ lịch (phút)"
  $description: "Thời gian tự động tải lại ghi chú từ Google Calendar (mặc định: 10 phút)."
- markGoogleEventsOnCalendar: true
  $name: "Đánh dấu chấm (•) vào ngày có lịch / ghi chú Google Calendar"
- showGoogleEventsInTooltip: true
  $name: "Hiển thị lịch trình Google Calendar trên hộp chú thích (Tooltip)"
- tooltipOpacity: 210
  $name: "Độ trong suốt nền Tooltip (80 = Rất trong suốt, 240 = Đậm)"
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
- enableTaskbarSystemStats: true
  $name: "Hiển thị khung thông số hệ thống (CPU, GPU, RAM, Mạng) trên Taskbar"
  $description: "Hiển thị bảng theo dõi CPU, GPU, RAM, Mạng và Ping thời gian thực ngay bên trái khay hệ thống. Hỗ trợ kéo chuột trái để chỉnh vị trí, nhấp đúp mở Task Manager, hoặc chuột phải để bật/tắt nhanh từng thông số."
- enableSecondaryMonitorTray: true
  $name: "Hiển thị nút Wi-Fi & Âm thanh độc lập trên màn hình phụ"
  $description: "Tự động phát hiện các màn hình thứ 2 trở lên và hiển thị 2 nút tách biệt (Wi-Fi / Mạng và Âm thanh) có bảng điều khiển nổi riêng ngay trên màn hình phụ, không ảnh hưởng màn hình chính."
- enableSecondaryMonitorStats: false
  $name: "Hiển thị khung thông số hệ thống trên màn hình phụ"
  $description: "Nhân bản khung đo CPU, GPU, RAM, Mạng lên các màn hình phụ (đặt bên trái cụm khay hệ thống phụ)."
- showCpuStats: true
  $name: "  • Hiển thị % CPU trên Taskbar"
- showGpuStats: true
  $name: "  • Hiển thị % GPU trên Taskbar"
- showRamStats: true
  $name: "  • Hiển thị % và dung lượng RAM trên Taskbar"
- showNetStats: true
  $name: "  • Hiển thị tốc độ Mạng (↓ Tải xuống / ↑ Tải lên) trên Taskbar"
- showPingStats: true
  $name: "  • Hiển thị độ trễ mạng Ping (ms) trên Taskbar"
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
#include <unordered_set>
#include <utility>
#include <vector>

#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <audiopolicy.h>
#include <propsys.h>
#include <wlanapi.h>
#include <tlhelp32.h>
#include <uiautomationclient.h>

#undef GetCurrentTime

#include <Unknwn.h>
#include <commctrl.h>
#include <d2d1.h>
#include <dwmapi.h>
#include <dwrite.h>
#include <shellapi.h>
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

enum class Target { Explorer, ShellExperienceHost };
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
    int tooltipOpacity = 210;
    bool enableTaskbarClock = true;
    bool taskbarClockSolarOnTop = true;
    bool enableTaskbarTooltip = true;
    bool enableTaskbarSystemStats = true;
    bool enableSecondaryMonitorTray = true;
    bool enableSecondaryMonitorStats = false;
    bool showCpuStats = true;
    bool showGpuStats = true;
    bool showRamStats = true;
    bool showNetStats = true;
    bool showPingStats = true;
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

    s.tooltipOpacity = Wh_GetIntSetting(L"tooltipOpacity");
    if (s.tooltipOpacity < 80) s.tooltipOpacity = 80;
    if (s.tooltipOpacity > 255) s.tooltipOpacity = 255;

    s.enableTaskbarClock = Wh_GetIntSetting(L"enableTaskbarClock") != 0;
    s.taskbarClockSolarOnTop = Wh_GetIntSetting(L"taskbarClockSolarOnTop") != 0;
    s.enableTaskbarTooltip = Wh_GetIntSetting(L"enableTaskbarTooltip") != 0;
    s.enableTaskbarSystemStats = Wh_GetIntSetting(L"enableTaskbarSystemStats") != 0;
    s.enableSecondaryMonitorTray = Wh_GetIntSetting(L"enableSecondaryMonitorTray") != 0;
    s.enableSecondaryMonitorStats = Wh_GetIntSetting(L"enableSecondaryMonitorStats") != 0;
    s.showCpuStats = Wh_GetIntSetting(L"showCpuStats") != 0;
    s.showGpuStats = Wh_GetIntSetting(L"showGpuStats") != 0;
    s.showRamStats = Wh_GetIntSetting(L"showRamStats") != 0;
    s.showNetStats = Wh_GetIntSetting(L"showNetStats") != 0;
    s.showPingStats = Wh_GetIntSetting(L"showPingStats") != 0;
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
        { L"Show agenda", L"Hiện lịch biểu" },
        { L"Hide agenda", L"Ẩn lịch biểu" },
        { L"Today", L"Hôm nay" },
    };
    for (const auto& entry : kExactMap) {
        if (_wcsicmp(text.c_str(), entry.en) == 0) {
            outVi = entry.vi;
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

enum class IcsSyncStatus { None, LoadedFromCache, Synced, Failed };

std::mutex g_icsMutex;
std::unordered_map<int32_t, std::vector<GoogleCalendarEvent>> g_icsEventsByDate;
size_t g_totalSyncedEventsCount = 0;
ULONGLONG g_lastIcsSyncTick = 0;
std::wstring g_lastSyncedIcsUrl;
IcsSyncStatus g_lastSyncStatus = IcsSyncStatus::None;
int g_lastSyncHour = 0;
int g_lastSyncMin = 0;
std::atomic<bool> g_icsSyncInProgress{false};
std::atomic<uint32_t> g_icsDataGeneration{0};
std::atomic<bool> g_backgroundSyncLoopStarted{false};

std::mutex g_syncThreadsMutex;
HANDLE g_stopEvent = nullptr;
std::thread g_syncWorkerThread;
std::thread g_periodicLoopThread;

std::mutex g_activeHttpMutex;
HINTERNET g_activeHttpSession = nullptr;
HINTERNET g_activeHttpConnect = nullptr;
HINTERNET g_activeHttpRequest = nullptr;

void NotifyCalendarUiAfterIcsSync();

std::wstring DisplayEventSummary(std::wstring const& summary, bool vi) {
    if (!summary.empty()) return summary;
    return vi ? L"(Sự kiện không tiêu đề)" : L"(Untitled event)";
}

std::wstring FormatIcsSyncStatus(bool vi) {
    IcsSyncStatus status;
    size_t count = 0;
    int hour = 0, min = 0;
    {
        std::lock_guard<std::mutex> lock(g_icsMutex);
        status = g_lastSyncStatus;
        count = g_totalSyncedEventsCount;
        hour = g_lastSyncHour;
        min = g_lastSyncMin;
    }
    WCHAR buf[128]{};
    switch (status) {
        case IcsSyncStatus::LoadedFromCache:
            _snwprintf_s(buf, _TRUNCATE,
                         vi ? L"Đã nạp %zu sự kiện" : L"Loaded %zu event(s)", count);
            return buf;
        case IcsSyncStatus::Synced:
            _snwprintf_s(buf, _TRUNCATE,
                         vi ? L"Đã đồng bộ %zu sự kiện lúc %02d:%02d"
                            : L"Synced %zu event(s) at %02d:%02d",
                         count, hour, min);
            return buf;
        case IcsSyncStatus::Failed:
            return vi ? L"Chưa tải được dữ liệu (Kiểm tra lại link .ics)"
                      : L"Failed to sync (Check .ics link)";
        default:
            return {};
    }
}

uint64_t ComputeIcsUrlHash(std::wstring const& url) {
    uint64_t h = 14695981039346656037ULL;
    for (wchar_t c : url) {
        h ^= static_cast<uint64_t>(c);
        h *= 1099511628211ULL;
    }
    return h;
}

std::string FormatUrlHashHeader(uint64_t hash) {
    char buf[64]{};
    snprintf(buf, sizeof(buf), "X-WH-URL-HASH:%016llx\r\n", static_cast<unsigned long long>(hash));
    return buf;
}

bool CheckCachedUrlHashHeader(std::string const& data, uint64_t expectedHash) {
    if (expectedHash == 0) return true;
    const std::string prefix = "X-WH-URL-HASH:";
    if (data.rfind(prefix, 0) != 0) return false;
    return data.rfind(FormatUrlHashHeader(expectedHash), 0) == 0;
}

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

    auto addUnique = [&](std::wstring const& p) {
        if (p.empty()) return;
        for (const auto& existing : paths) {
            if (_wcsicmp(existing.c_str(), p.c_str()) == 0) return;
        }
        paths.push_back(p);
    };

    if (GetTempPathW(ARRAYSIZE(buf), buf) > 0) {
        addUnique(std::wstring(buf) + L"windhawk_vn_lunar_gcal_cache.ics");
    }
    if (ExpandEnvironmentStringsW(L"%USERPROFILE%\\AppData\\Local\\Temp\\windhawk_vn_lunar_gcal_cache.ics", buf, ARRAYSIZE(buf)) > 0) {
        addUnique(buf);
    }
    return paths;
}

constexpr PCWSTR kIcsCacheRegSubKey = L"Software\\Windhawk_VnLunarCalendar_Cache";

void ClearSharedIcsCache() {
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kIcsCacheRegSubKey, 0, KEY_SET_VALUE, &hKey) == ERROR_SUCCESS) {
        RegDeleteValueW(hKey, L"IcsData");
        RegDeleteValueW(hKey, L"UrlHash");
        RegDeleteValueW(hKey, L"LastUpdateTick");
        RegCloseKey(hKey);
    }
    for (const auto& path : GetCandidateIcsCachePaths()) {
        DeleteFileW(path.c_str());
    }
    // Best-effort cleanup of legacy world-readable cache file if present
    WCHAR legacyPublic[MAX_PATH]{};
    if (ExpandEnvironmentStringsW(L"%PUBLIC%\\windhawk_vn_lunar_gcal_cache.ics", legacyPublic, ARRAYSIZE(legacyPublic)) > 0) {
        DeleteFileW(legacyPublic);
    }
}

void SaveIcsToSharedCache(std::string const& rawIcs, uint64_t urlHash) {
    if (rawIcs.empty()) return;

    std::string taggedIcs = FormatUrlHashHeader(urlHash) + rawIcs;

    if (taggedIcs.size() <= 2 * 1024 * 1024) {
        HKEY hKey = nullptr;
        if (RegCreateKeyExW(HKEY_CURRENT_USER, kIcsCacheRegSubKey, 0, nullptr, 0, KEY_WRITE, nullptr, &hKey, nullptr) == ERROR_SUCCESS) {
            RegSetValueExW(hKey, L"IcsData", 0, REG_BINARY,
                           reinterpret_cast<const BYTE*>(taggedIcs.data()),
                           static_cast<DWORD>(taggedIcs.size()));
            RegSetValueExW(hKey, L"UrlHash", 0, REG_QWORD,
                           reinterpret_cast<const BYTE*>(&urlHash), sizeof(urlHash));
            ULONGLONG nowTick = GetTickCount64();
            RegSetValueExW(hKey, L"LastUpdateTick", 0, REG_QWORD,
                           reinterpret_cast<const BYTE*>(&nowTick), sizeof(nowTick));
            RegCloseKey(hKey);
        }
    }

    WCHAR pidSuffix[32]{};
    _snwprintf_s(pidSuffix, _TRUNCATE, L".tmp.%lu", GetCurrentProcessId());
    for (const auto& path : GetCandidateIcsCachePaths()) {
        std::wstring tmpPath = path + pidSuffix;
        HANDLE hFile = CreateFileW(tmpPath.c_str(), GENERIC_WRITE, 0,
                                   nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD written = 0;
            BOOL ok = WriteFile(hFile, taggedIcs.data(), static_cast<DWORD>(taggedIcs.size()), &written, nullptr);
            CloseHandle(hFile);
            if (ok && written == taggedIcs.size()) {
                MoveFileExW(tmpPath.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING);
            } else {
                DeleteFileW(tmpPath.c_str());
            }
        }
    }
}

std::string LoadIcsFromSharedCache(uint64_t expectedUrlHash) {
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kIcsCacheRegSubKey, 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        uint64_t storedHash = 0;
        DWORD hashSize = sizeof(storedHash);
        DWORD hashType = 0;
        bool hashMatches = (RegQueryValueExW(hKey, L"UrlHash", nullptr, &hashType,
                                             reinterpret_cast<LPBYTE>(&storedHash), &hashSize) == ERROR_SUCCESS &&
                            hashType == REG_QWORD && storedHash == expectedUrlHash);

        DWORD dataSize = 0;
        DWORD dataType = 0;
        if (hashMatches &&
            RegQueryValueExW(hKey, L"IcsData", nullptr, &dataType, nullptr, &dataSize) == ERROR_SUCCESS &&
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
        HANDLE hFile = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                                   nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (hFile != INVALID_HANDLE_VALUE) {
            DWORD fileSize = GetFileSize(hFile, nullptr);
            if (fileSize > 32 && fileSize <= 8 * 1024 * 1024) {
                std::string buffer(fileSize, '\0');
                DWORD bytesRead = 0;
                if (ReadFile(hFile, buffer.data(), fileSize, &bytesRead, nullptr) && bytesRead > 0) {
                    CloseHandle(hFile);
                    buffer.resize(bytesRead);
                    if (CheckCachedUrlHashHeader(buffer, expectedUrlHash) &&
                        buffer.find("BEGIN:VCALENDAR") != std::string::npos) {
                        return buffer;
                    }
                    continue;
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
    for (size_t i = 0; i < unescaped.size(); i++) {
        if (unescaped[i] == L'<' && i + 1 < unescaped.size()) {
            wchar_t next = unescaped[i + 1];
            if (iswalpha(next) || next == L'/' || next == L'!') {
                size_t closePos = unescaped.find(L'>', i + 1);
                if (closePos != std::wstring::npos && closePos - i <= 256) {
                    if (_wcsnicmp(unescaped.c_str() + i, L"<br>", 4) == 0 ||
                        _wcsnicmp(unescaped.c_str() + i, L"<br/>", 5) == 0 ||
                        _wcsnicmp(unescaped.c_str() + i, L"<br />", 6) == 0 ||
                        _wcsnicmp(unescaped.c_str() + i, L"</p>", 4) == 0 ||
                        _wcsnicmp(unescaped.c_str() + i, L"</div>", 6) == 0 ||
                        _wcsnicmp(unescaped.c_str() + i, L"</li>", 5) == 0) {
                        cleaned.push_back(L'\n');
                    }
                    i = closePos;
                    continue;
                }
            }
        }
        cleaned.push_back(unescaped[i]);
    }

    struct Entity { PCWSTR code; PCWSTR ch; };
    static const Entity kEntities[] = {
        { L"&nbsp;", L" " },
        { L"&lt;",   L"<" },
        { L"&gt;",   L">" },
        { L"&quot;", L"\"" },
        { L"&#39;",  L"'" },
        { L"&amp;",  L"&" },
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

bool ParseAsciiDigits(std::string const& s, size_t offset, size_t len, int& outVal) {
    if (offset + len > s.size()) return false;
    int v = 0;
    for (size_t i = 0; i < len; i++) {
        char c = s[offset + i];
        if (c < '0' || c > '9') return false;
        v = v * 10 + (c - '0');
    }
    outVal = v;
    return true;
}

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
    if (!ParseAsciiDigits(s, 0, 4, out.year) ||
        !ParseAsciiDigits(s, 4, 2, out.month) ||
        !ParseAsciiDigits(s, 6, 2, out.day)) {
        return out;
    }
    if (!IsValidDate(out.year, out.month, out.day)) return out;

    bool isValueDate = (propParams.find("VALUE=DATE") != std::string::npos &&
                        propParams.find("VALUE=DATE-TIME") == std::string::npos);

    if (isValueDate || s.size() == 8 || s[8] != 'T') {
        out.isAllDay = true;
        out.valid = true;
        return out;
    }

    if (s.size() >= 13) {
        if (!ParseAsciiDigits(s, 9, 2, out.hour) ||
            !ParseAsciiDigits(s, 11, 2, out.minute)) {
            return out;
        }
        if (out.hour < 0 || out.hour > 23 || out.minute < 0 || out.minute > 59) {
            return out;
        }
        out.isAllDay = false;
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

void DateFromJDN(int jdn, int& y, int& m, int& d) {
    int a = jdn + 32044;
    int b = (4 * a + 3) / 146097;
    int c = a - (146097 * b) / 4;
    int dd = (4 * c + 3) / 1461;
    int e = c - (1461 * dd) / 4;
    int mm = (5 * e + 2) / 153;
    d = e - (153 * mm + 2) / 5 + 1;
    m = mm + 3 - 12 * (mm / 10);
    y = 100 * b + dd - 4800 + mm / 10;
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
    int windowMinYear = currentYear - 1;
    int windowMaxYear = currentYear + 2;

    bool inEvent = false;
    bool inAlarm = false;
    ParsedIcsDateTime dtStart{};
    ParsedIcsDateTime dtEnd{};
    std::wstring summary;
    std::wstring description;
    std::wstring location;
    bool isCancelled = false;
    std::string rruleStr;
    std::unordered_set<int32_t> exDates;
    size_t parsedEventCount = 0;

    for (const auto& line : lines) {
        std::string trimmedLine = line;
        while (!trimmedLine.empty() && (trimmedLine.back() == ' ' || trimmedLine.back() == '\t')) {
            trimmedLine.pop_back();
        }

        std::string upperLine = ToUpperAscii(trimmedLine);
        if (upperLine == "BEGIN:VEVENT") {
            inEvent = true;
            inAlarm = false;
            dtStart = {};
            dtEnd = {};
            summary.clear();
            description.clear();
            location.clear();
            isCancelled = false;
            rruleStr.clear();
            exDates.clear();
            continue;
        }

        if (upperLine == "BEGIN:VALARM") {
            if (inEvent) inAlarm = true;
            continue;
        }

        if (upperLine == "END:VALARM") {
            inAlarm = false;
            continue;
        }

        if (upperLine == "END:VEVENT") {
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
                baseEv.summary = summary;
                baseEv.description = description;
                baseEv.location = location;

                if (!rruleStr.empty()) {
                    std::string freq;
                    int interval = 1;
                    int maxCount = 0;
                    int32_t untilDateKey = 99991231;
                    uint8_t byDayMask = 0;

                    size_t pos = 0;
                    while (pos < rruleStr.size()) {
                        size_t semi = rruleStr.find(';', pos);
                        if (semi == std::string::npos) semi = rruleStr.size();
                        std::string token = rruleStr.substr(pos, semi - pos);
                        size_t eq = token.find('=');
                        if (eq != std::string::npos) {
                            std::string k = token.substr(0, eq);
                            std::string v = token.substr(eq + 1);
                            if (k == "FREQ") {
                                freq = v;
                            } else if (k == "INTERVAL") {
                                int iv = 0;
                                if (ParseAsciiDigits(v, 0, v.size(), iv) && iv >= 1) interval = iv;
                            } else if (k == "COUNT") {
                                int cnt = 0;
                                if (ParseAsciiDigits(v, 0, v.size(), cnt) && cnt >= 1) maxCount = cnt;
                            } else if (k == "UNTIL") {
                                ParsedIcsDateTime udt = ParseIcsDateTimeProperty("", v);
                                if (udt.valid) {
                                    untilDateKey = MakeDateKey(udt.year, udt.month, udt.day);
                                }
                            } else if (k == "BYDAY") {
                                static const char* kDayCodes[7] = { "MO", "TU", "WE", "TH", "FR", "SA", "SU" };
                                size_t dpos = 0;
                                while (dpos < v.size()) {
                                    size_t comma = v.find(',', dpos);
                                    if (comma == std::string::npos) comma = v.size();
                                    std::string dtok = v.substr(dpos, comma - dpos);
                                    if (dtok.size() >= 2) {
                                        std::string code = dtok.substr(dtok.size() - 2);
                                        for (int wd = 0; wd < 7; wd++) {
                                            if (code == kDayCodes[wd]) {
                                                byDayMask |= static_cast<uint8_t>(1u << wd);
                                            }
                                        }
                                    }
                                    dpos = comma + 1;
                                }
                            }
                        }
                        pos = semi + 1;
                    }

                    auto emitOccurrence = [&](int y, int m, int d) {
                        int32_t k = MakeDateKey(y, m, d);
                        if (y < windowMinYear || y > windowMaxYear) return;
                        if (exDates.find(k) != exDates.end()) return;
                        GoogleCalendarEvent ev = baseEv;
                        ev.dateKey = k;
                        result[k].push_back(std::move(ev));
                    };

                    int emittedTotal = 0;
                    int32_t maxWindowKey = MakeDateKey(windowMaxYear, 12, 31);
                    int32_t stopKey = std::min(untilDateKey, maxWindowKey);

                    if (freq == "DAILY") {
                        int startJdn = CalculateJDN(dtStart.day, dtStart.month, dtStart.year);
                        int maxJdn = CalculateJDN(31, 12, windowMaxYear);
                        int curJdn = startJdn;
                        if (maxCount == 0 && dtStart.year < windowMinYear) {
                            int minJdn = CalculateJDN(1, 1, windowMinYear);
                            int skipSteps = (minJdn - startJdn) / interval;
                            if (skipSteps > 0) curJdn += skipSteps * interval;
                        }
                        for (int iter = 0; iter < 4000 && curJdn <= maxJdn; iter++, curJdn += interval) {
                            int y, m, d;
                            DateFromJDN(curJdn, y, m, d);
                            int32_t k = MakeDateKey(y, m, d);
                            if (k > stopKey) break;
                            emitOccurrence(y, m, d);
                            emittedTotal++;
                            if (maxCount > 0 && emittedTotal >= maxCount) break;
                        }
                    } else if (freq == "WEEKLY") {
                        int startJdn = CalculateJDN(dtStart.day, dtStart.month, dtStart.year);
                        int startWeekday = ((startJdn % 7) + 7) % 7;
                        if (byDayMask == 0) {
                            byDayMask = static_cast<uint8_t>(1u << startWeekday);
                        }
                        int weekMondayJdn = startJdn - startWeekday;
                        int maxJdn = CalculateJDN(31, 12, windowMaxYear);
                        if (maxCount == 0 && dtStart.year < windowMinYear) {
                            int minJdn = CalculateJDN(1, 1, windowMinYear);
                            int skipWeeks = ((minJdn - weekMondayJdn) / 7) / interval;
                            if (skipWeeks > 0) weekMondayJdn += skipWeeks * interval * 7;
                        }
                        bool done = false;
                        for (int iter = 0; iter < 1500 && !done && weekMondayJdn <= maxJdn; iter++, weekMondayJdn += interval * 7) {
                            for (int wd = 0; wd < 7; wd++) {
                                if (!(byDayMask & (1u << wd))) continue;
                                int curJdn = weekMondayJdn + wd;
                                if (curJdn < startJdn) continue;
                                int y, m, d;
                                DateFromJDN(curJdn, y, m, d);
                                int32_t k = MakeDateKey(y, m, d);
                                if (k > stopKey) {
                                    done = true;
                                    break;
                                }
                                emitOccurrence(y, m, d);
                                emittedTotal++;
                                if (maxCount > 0 && emittedTotal >= maxCount) {
                                    done = true;
                                    break;
                                }
                            }
                        }
                    } else if (freq == "MONTHLY") {
                        int totalMonths = dtStart.year * 12 + (dtStart.month - 1);
                        if (maxCount == 0 && dtStart.year < windowMinYear) {
                            int minMonths = windowMinYear * 12;
                            int skipSteps = (minMonths - totalMonths) / interval;
                            if (skipSteps > 0) totalMonths += skipSteps * interval;
                        }
                        for (int iter = 0; iter < 2400; iter++, totalMonths += interval) {
                            int y = totalMonths / 12;
                            int m = (totalMonths % 12) + 1;
                            if (y > windowMaxYear) break;
                            if (!IsValidDate(y, m, dtStart.day)) continue;
                            int32_t k = MakeDateKey(y, m, dtStart.day);
                            if (k > stopKey) break;
                            emitOccurrence(y, m, dtStart.day);
                            emittedTotal++;
                            if (maxCount > 0 && emittedTotal >= maxCount) break;
                        }
                    } else if (freq == "YEARLY") {
                        int y = dtStart.year;
                        if (maxCount == 0 && y < windowMinYear) {
                            int skipSteps = (windowMinYear - y) / interval;
                            if (skipSteps > 0) y += skipSteps * interval;
                        }
                        for (int iter = 0; iter < 500 && y <= windowMaxYear; iter++, y += interval) {
                            if (!IsValidDate(y, dtStart.month, dtStart.day)) continue;
                            int32_t k = MakeDateKey(y, dtStart.month, dtStart.day);
                            if (k > stopKey) break;
                            emitOccurrence(y, dtStart.month, dtStart.day);
                            emittedTotal++;
                            if (maxCount > 0 && emittedTotal >= maxCount) break;
                        }
                    } else {
                        emitOccurrence(dtStart.year, dtStart.month, dtStart.day);
                    }
                } else {
                    int y1 = dtStart.year, m1 = dtStart.month, d1 = dtStart.day;
                    int y2 = y1, m2 = m1, d2 = d1;

                    if (dtEnd.valid) {
                        y2 = dtEnd.year;
                        m2 = dtEnd.month;
                        d2 = dtEnd.day;
                        if (MakeDateKey(y2, m2, d2) > MakeDateKey(y1, m1, d1)) {
                            if (dtStart.isAllDay || (!dtEnd.isAllDay && dtEnd.hour == 0 && dtEnd.minute == 0)) {
                                PrevCalendarDay(y2, m2, d2);
                            }
                        }
                    }

                    int spanDays = 0;
                    while (MakeDateKey(y1, m1, d1) <= MakeDateKey(y2, m2, d2) && spanDays < 60) {
                        int32_t k = MakeDateKey(y1, m1, d1);
                        if (exDates.find(k) == exDates.end()) {
                            GoogleCalendarEvent ev = baseEv;
                            ev.dateKey = k;
                            result[ev.dateKey].push_back(std::move(ev));
                        }
                        NextCalendarDay(y1, m1, d1);
                        spanDays++;
                    }
                }
            }
            inEvent = false;
            inAlarm = false;
            continue;
        }

        if (!inEvent || inAlarm) continue;

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
        } else if (propName == "EXDATE") {
            size_t epos = 0;
            while (epos < propVal.size()) {
                size_t comma = propVal.find(',', epos);
                if (comma == std::string::npos) comma = propVal.size();
                ParsedIcsDateTime exDt = ParseIcsDateTimeProperty(propParams, propVal.substr(epos, comma - epos));
                if (exDt.valid) {
                    exDates.insert(MakeDateKey(exDt.year, exDt.month, exDt.day));
                }
                epos = comma + 1;
            }
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

struct ActiveHttpGuard {
    HINTERNET* slot;
    HINTERNET handle;
    ActiveHttpGuard(HINTERNET* s, HINTERNET h) : slot(s), handle(h) {
        std::lock_guard<std::mutex> lock(g_activeHttpMutex);
        *slot = handle;
    }
    ~ActiveHttpGuard() {
        HINTERNET toClose = nullptr;
        {
            std::lock_guard<std::mutex> lock(g_activeHttpMutex);
            if (*slot == handle) {
                *slot = nullptr;
                toClose = handle;
            }
        }
        if (toClose) WinHttpCloseHandle(toClose);
    }
};

void AbortActiveHttpRequests() {
    HINTERNET req = nullptr, conn = nullptr, sess = nullptr;
    {
        std::lock_guard<std::mutex> lock(g_activeHttpMutex);
        req = g_activeHttpRequest; g_activeHttpRequest = nullptr;
        conn = g_activeHttpConnect; g_activeHttpConnect = nullptr;
        sess = g_activeHttpSession; g_activeHttpSession = nullptr;
    }
    if (req) WinHttpCloseHandle(req);
    if (conn) WinHttpCloseHandle(conn);
    if (sess) WinHttpCloseHandle(sess);
}

std::string DownloadHttpsUrl(std::wstring const& rawUrl) {
    if (g_shuttingDown) return {};
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
    if (!g_shuttingDown && WinHttpCrackUrl(fetchUrl.c_str(), static_cast<DWORD>(fetchUrl.size()), 0, &urlComp)) {
        HINTERNET hSession = WinHttpOpen(L"Mozilla/5.0 (Windows NT 10.0; Win64; x64) Windhawk-Lunar-Calendar/0.2.0",
                                         WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
                                         WINHTTP_NO_PROXY_NAME,
                                         WINHTTP_NO_PROXY_BYPASS, 0);
        if (!hSession) {
            hSession = WinHttpOpen(L"Mozilla/5.0 (Windows NT 10.0; Win64; x64) Windhawk-Lunar-Calendar/0.2.0",
                                   WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
                                   WINHTTP_NO_PROXY_NAME,
                                   WINHTTP_NO_PROXY_BYPASS, 0);
        }
        if (hSession) {
            ActiveHttpGuard sessionGuard(&g_activeHttpSession, hSession);
            DWORD secureProtocols = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2 | WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3;
            WinHttpSetOption(hSession, WINHTTP_OPTION_SECURE_PROTOCOLS, &secureProtocols, sizeof(secureProtocols));
            DWORD redirectPolicy = WINHTTP_OPTION_REDIRECT_POLICY_DISALLOW_HTTPS_TO_HTTP;
            WinHttpSetOption(hSession, WINHTTP_OPTION_REDIRECT_POLICY, &redirectPolicy, sizeof(redirectPolicy));
            WinHttpSetTimeouts(hSession, 5000, 5000, 8000, 8000);

            if (!g_shuttingDown) {
                HINTERNET hConnect = WinHttpConnect(hSession, hostName, urlComp.nPort, 0);
                if (hConnect) {
                    ActiveHttpGuard connectGuard(&g_activeHttpConnect, hConnect);
                    DWORD flags = (urlComp.nScheme == INTERNET_SCHEME_HTTPS) ? WINHTTP_FLAG_SECURE : 0;
                    flags |= WINHTTP_FLAG_REFRESH;

                    if (!g_shuttingDown) {
                        HINTERNET hRequest = WinHttpOpenRequest(hConnect, L"GET", urlPath,
                                                                nullptr, WINHTTP_NO_REFERER,
                                                                WINHTTP_DEFAULT_ACCEPT_TYPES, flags);
                        if (hRequest) {
                            ActiveHttpGuard requestGuard(&g_activeHttpRequest, hRequest);
                            PCWSTR headers = L"Cache-Control: no-cache, no-store, must-revalidate\r\nPragma: no-cache\r\nAccept: text/calendar, text/plain, */*\r\n";
                            if (!g_shuttingDown &&
                                WinHttpSendRequest(hRequest, headers, static_cast<DWORD>(-1L),
                                                   WINHTTP_NO_REQUEST_DATA, 0, 0, 0) &&
                                !g_shuttingDown &&
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
                        }
                    }
                }
            }
        }
    }

    if (!g_shuttingDown && responseBody.find("BEGIN:VCALENDAR") == std::string::npos) {
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
        if (!g_icsEventsByDate.empty() && g_lastSyncedIcsUrl == settings.googleIcsUrl) return;
    }

    uint64_t urlHash = ComputeIcsUrlHash(settings.googleIcsUrl);
    std::string cachedIcs = LoadIcsFromSharedCache(urlHash);
    if (!cachedIcs.empty()) {
        size_t evCount = 0;
        auto parsed = ParseIcsContent(cachedIcs, &evCount);
        if (!parsed.empty()) {
            std::lock_guard<std::mutex> lock(g_icsMutex);
            if (g_icsEventsByDate.empty() || g_lastSyncedIcsUrl != settings.googleIcsUrl) {
                g_icsEventsByDate = std::move(parsed);
                g_totalSyncedEventsCount = evCount;
                g_lastSyncedIcsUrl = settings.googleIcsUrl;
                if (g_lastSyncStatus == IcsSyncStatus::None) {
                    g_lastSyncStatus = IcsSyncStatus::LoadedFromCache;
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
        bool cleared = false;
        {
            std::lock_guard<std::mutex> lock(g_icsMutex);
            if (!g_icsEventsByDate.empty() || !g_lastSyncedIcsUrl.empty() || g_lastSyncStatus != IcsSyncStatus::None) {
                g_icsEventsByDate.clear();
                g_totalSyncedEventsCount = 0;
                g_lastIcsSyncTick = 0;
                g_lastSyncedIcsUrl.clear();
                g_lastSyncStatus = IcsSyncStatus::None;
                g_icsDataGeneration.fetch_add(1);
                cleared = true;
            }
        }
        if (cleared || forceSync) {
            ClearSharedIcsCache();
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
    std::lock_guard<std::mutex> threadLock(g_syncThreadsMutex);
    if (g_shuttingDown) {
        g_icsSyncInProgress = false;
        return;
    }
    if (g_syncWorkerThread.joinable()) {
        g_syncWorkerThread.join();
    }

    g_syncWorkerThread = std::thread([rawUrls]() {
        try {
            uint64_t urlHash = ComputeIcsUrlHash(rawUrls);
            std::unordered_map<int32_t, std::vector<GoogleCalendarEvent>> mergedEvents;
            std::string combinedRawIcs;
            size_t totalEventsCount = 0;
            bool downloadedFromNetwork = false;

            size_t start = 0;
            while (start < rawUrls.size() && !g_shuttingDown) {
                size_t end = rawUrls.find_first_of(L";\r\n", start);
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

            if (downloadedFromNetwork && !combinedRawIcs.empty() && !g_shuttingDown) {
                SaveIcsToSharedCache(combinedRawIcs, urlHash);
            }

            bool loadedFromCache = false;
            if (!downloadedFromNetwork && !g_shuttingDown) {
                std::string cachedIcs = LoadIcsFromSharedCache(urlHash);
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
                        if (a.startMin != b.startMin) return a.startMin < b.startMin;
                        return a.summary < b.summary;
                    });
                }

                SYSTEMTIME stSync{};
                GetLocalTime(&stSync);

                {
                    std::lock_guard<std::mutex> lock(g_icsMutex);
                    g_icsEventsByDate = std::move(mergedEvents);
                    g_totalSyncedEventsCount = totalEventsCount;
                    g_lastIcsSyncTick = GetTickCount64();
                    g_lastSyncedIcsUrl = rawUrls;
                    g_lastSyncStatus = IcsSyncStatus::Synced;
                    g_lastSyncHour = stSync.wHour;
                    g_lastSyncMin = stSync.wMinute;
                    g_icsDataGeneration.fetch_add(1);
                }
                NotifyCalendarUiAfterIcsSync();
            } else if (!g_shuttingDown) {
                std::lock_guard<std::mutex> lock(g_icsMutex);
                g_lastIcsSyncTick = GetTickCount64();
                if (g_lastSyncStatus == IcsSyncStatus::None) {
                    g_lastSyncStatus = IcsSyncStatus::Failed;
                }
            }
        } catch (...) {}
        g_icsSyncInProgress = false;
    });
}

void StartPeriodicGoogleCalendarSyncLoop() {
    if (g_shuttingDown) return;
    if (g_backgroundSyncLoopStarted.exchange(true)) return;
    std::lock_guard<std::mutex> lock(g_syncThreadsMutex);
    if (g_shuttingDown) {
        g_backgroundSyncLoopStarted = false;
        return;
    }
    if (!g_stopEvent) {
        g_stopEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    } else {
        ResetEvent(g_stopEvent);
    }
    if (g_periodicLoopThread.joinable()) {
        g_periodicLoopThread.join();
    }
    g_periodicLoopThread = std::thread([]() {
        while (!g_shuttingDown) {
            DWORD waitRes = g_stopEvent
                ? WaitForSingleObject(g_stopEvent, 15000)
                : WAIT_TIMEOUT;
            if (g_shuttingDown || waitRes == WAIT_OBJECT_0) break;
            TriggerGoogleCalendarSyncIfNeeded(false);
        }
    });
}

void StopGoogleCalendarSyncThreads() {
    g_shuttingDown = true;
    HANDLE stopEv = nullptr;
    {
        std::lock_guard<std::mutex> lock(g_syncThreadsMutex);
        stopEv = g_stopEvent;
    }
    if (stopEv) {
        SetEvent(stopEv);
    }
    AbortActiveHttpRequests();

    std::thread periodic;
    {
        std::lock_guard<std::mutex> lock(g_syncThreadsMutex);
        periodic = std::move(g_periodicLoopThread);
    }
    if (periodic.joinable()) {
        periodic.join();
    }

    std::thread worker;
    {
        std::lock_guard<std::mutex> lock(g_syncThreadsMutex);
        worker = std::move(g_syncWorkerThread);
    }
    if (worker.joinable()) {
        worker.join();
    }

    {
        std::lock_guard<std::mutex> lock(g_syncThreadsMutex);
        if (g_stopEvent) {
            CloseHandle(g_stopEvent);
            g_stopEvent = nullptr;
        }
    }
    g_backgroundSyncLoopStarted = false;
    g_icsSyncInProgress = false;
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

            std::wstring summaryShort = DisplayEventSummary(ev.summary, vi);
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

            std::wstring summaryShort = DisplayEventSummary(ev.summary, vi);
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
    _snwprintf_s(line1Buf, _TRUNCATE,
                 vi ? L"%s — Tuổi %s (%d)" : L"%s — Sign %s (%d)",
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
        { 24, 11, HolidayScope::SolarOnly, L"Ngày Văn hóa Việt Nam",      L"Vietnam Culture Day" },
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
        if (lDay == 29 && lMonth == 12) {
            int ny = sYear, nm = sMonth, nd = sDay;
            NextCalendarDay(ny, nm, nd);
            int nld = 0, nlm = 0, nly = 0;
            bool nleap = false;
            std::wstring ncc;
            GetVietnameseLunarDate(ny, nm, nd, nld, nlm, nly, nleap, ncc);
            if (nld == 1 && nlm == 1) {
                addName(PickText(vi, L"Tất niên / Giao thừa", L"Lunar New Year's Eve (Giao thừa)"));
                highlightSolar = true;
                highlightLunar = true;
            } else {
                addName(PickText(vi, L"29 Tết (Áp Tết)", L"29th of Lunar December"));
                highlightLunar = true;
            }
            matchedLunarFestival = true;
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

    int effectiveCanDayForHour = (hour == 23) ? ((canDayIdx + 1) % 10) : canDayIdx;
    int chiHourIdx = (((hour + 1) / 2) % 12 + 12) % 12;
    int canHourIdx = (((effectiveCanDayForHour % 5) * 2 + chiHourIdx) % 10 + 10) % 10;
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
                    L"Maintenance, saving assets, planning",           L"Grand openings, long journeys" },
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
// Calendar Flyout XAML Manipulation (Windows 10)

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
thread_local wf::IInspectable t_cvPressedHandler{nullptr};
thread_local wf::IInspectable t_cvReleasedHandler{nullptr};
thread_local wf::IInspectable t_cvWheelHandler{nullptr};

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
thread_local int t_lastKnownCalendarYear = 0;

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

void EnsureDualLineSpacing(wuxc::CalendarViewDayItem const& item,
                           wuxc::TextBlock const& solarOut,
                           wuxc::TextBlock const& lunarOut,
                           bool forceTransform) {
    if (!solarOut || !lunarOut) return;
    try {
        double cellWidth = 48.0;
        try {
            if (item.ActualWidth() > 28.0 && item.ActualWidth() < 120.0) {
                cellWidth = item.ActualWidth();
            }
        } catch (...) {}

        if (auto parent = wuxm::VisualTreeHelper::GetParent(lunarOut)) {
            if (auto parentFe = parent.try_as<wux::FrameworkElement>()) {
                parentFe.ClearValue(wux::FrameworkElement::WidthProperty());
                parentFe.ClearValue(wux::FrameworkElement::MaxWidthProperty());
                parentFe.MinWidth(cellWidth);
                parentFe.HorizontalAlignment(wux::HorizontalAlignment::Center);
            }
        }

        solarOut.ClearValue(wux::FrameworkElement::WidthProperty());
        solarOut.ClearValue(wux::FrameworkElement::MaxWidthProperty());
        solarOut.MinWidth(cellWidth);
        solarOut.HorizontalAlignment(wux::HorizontalAlignment::Center);
        solarOut.Margin({-6.0, 0.0, -6.0, 0.0});
        solarOut.TextAlignment(wux::TextAlignment::Center);
        solarOut.TextTrimming(wux::TextTrimming::None);
        solarOut.TextWrapping(wux::TextWrapping::NoWrap);

        lunarOut.ClearValue(wux::FrameworkElement::WidthProperty());
        lunarOut.ClearValue(wux::FrameworkElement::MaxWidthProperty());
        lunarOut.MinWidth(cellWidth);
        lunarOut.HorizontalAlignment(wux::HorizontalAlignment::Center);
        lunarOut.Margin({-6.0, 0.0, -6.0, 0.0});
        lunarOut.Padding({0.0, 0.0, 0.0, 0.0});
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
    wf::IInspectable pointerPressedHandler{nullptr};
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

    std::vector<wuxc::TextBlock> allTextBlocks;
    for (const auto& found : descendants) {
        if (!containerPanel) {
            if (auto panel = found.element.try_as<wuxc::Panel>()) {
                containerPanel = panel;
            }
        }

        auto tb = found.element.try_as<wuxc::TextBlock>();
        if (!tb) continue;
        allTextBlocks.push_back(tb);

        std::wstring name = ElementName(tb);
        if (name == kLunarTextBlockName || name == kCustomCellLunarName) {
            lunarOut = tb;
            continue;
        }
    }

    for (const auto& tb : allTextBlocks) {
        if (tb == lunarOut) continue;
        if (IsSolarDayLabelText(ElementText(tb))) {
            solarOut = tb;
            break;
        }
    }

    if (!solarOut) {
        for (const auto& tb : allTextBlocks) {
            if (tb == lunarOut) continue;
            solarOut = tb;
            break;
        }
    }

    if (!lunarOut && allTextBlocks.size() >= 2) {
        for (const auto& tb : allTextBlocks) {
            if (tb != solarOut) {
                lunarOut = tb;
                break;
            }
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
                newLunar.FontSize(9.5);
                newLunar.HorizontalAlignment(wux::HorizontalAlignment::Center);
                newLunar.VerticalAlignment(wux::VerticalAlignment::Bottom);
                newLunar.Opacity(0.85);

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

    if (!cell.pointerPressedHandler) {
        try {
            auto handler = winrt::box_value(wuxi::PointerEventHandler(
                [](wf::IInspectable const& sender, wuxi::PointerRoutedEventArgs const& args) {
                    if (g_shuttingDown || !GetSettings().enableHoroscopePage) return;
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
                }));
            item.AddHandler(wux::UIElement::PointerPressedEvent(), handler, true);
            cell.pointerPressedHandler = std::move(handler);
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
        std::wstring desiredSolar = baseSolarBuf;
        if (hasGoogleEvents) {
            desiredSolar += L"•";
        }

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
// Modern Card-Based Horoscope & Notes Page (Windows 10)

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

bool IsLightSystemThemeFallback() {
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
                      0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        DWORD val = 0, size = sizeof(val), type = 0;
        if (RegQueryValueExW(hKey, L"SystemUsesLightTheme", nullptr, &type,
                             reinterpret_cast<LPBYTE>(&val), &size) == ERROR_SUCCESS &&
            type == REG_DWORD) {
            RegCloseKey(hKey);
            return val != 0;
        }
        RegCloseKey(hKey);
    }
    return false;
}

bool DetectPanelLightTheme(wuxc::Panel const& panel) {
    if (panel) {
        try {
            auto theme = panel.ActualTheme();
            if (theme == wux::ElementTheme::Light) return true;
            if (theme == wux::ElementTheme::Dark) return false;
        } catch (...) {}
    }
    return IsLightSystemThemeFallback();
}

wux::FrameworkElement BuildModernHoroscopeCardView(int32_t key, bool vi, bool isLightTheme) {
    int sYear = key / 10000;
    int sMonth = (key / 100) % 100;
    int sDay = key % 100;

    SYSTEMTIME stNow{};
    GetLocalTime(&stNow);

    ComputedHoroscope h = ComputeHoroscopeForDate(sYear, sMonth, sDay, vi, stNow.wHour);
    int monthIdx = (sMonth >= 1 && sMonth <= 12) ? (sMonth - 1) : 0;

    PCWSTR backBg        = isLightTheme ? L"#18000000" : L"#28FFFFFF";
    PCWSTR backBorder    = isLightTheme ? L"#30000000" : L"#40FFFFFF";
    PCWSTR cardBg        = isLightTheme ? L"#10000000" : L"#18FFFFFF";
    PCWSTR cardBgAlt     = isLightTheme ? L"#0C000000" : L"#14FFFFFF";
    PCWSTR cardBgSoft    = isLightTheme ? L"#0A000000" : L"#12FFFFFF";
    PCWSTR cardBorder    = isLightTheme ? L"#22000000" : L"#28FFFFFF";
    PCWSTR cardBorderAlt = isLightTheme ? L"#1E000000" : L"#24FFFFFF";
    PCWSTR lunarFg       = isLightTheme ? L"#FF9A5B00" : L"#FFFFD580";
    PCWSTR holidayBg     = isLightTheme ? L"#22D32F2F" : L"#28FF6B6B";
    PCWSTR holidayFg     = isLightTheme ? L"#FFB71C1C" : L"#FFFFB3B3";
    PCWSTR gcalBg        = isLightTheme ? L"#181976D2" : L"#1A55AAFF";
    PCWSTR gcalBorder    = isLightTheme ? L"#441976D2" : L"#4055AAFF";
    PCWSTR gcalTitleFg   = isLightTheme ? L"#FF0D47A1" : L"#FF99CCFF";
    PCWSTR starGoodFg    = isLightTheme ? L"#FF9A6000" : L"#FFFFE082";
    PCWSTR starBadFg     = isLightTheme ? L"#FF424242" : L"#FFE0E0E0";
    PCWSTR goodFg        = isLightTheme ? L"#FF1B5E20" : L"#FFA5D6A7";
    PCWSTR badFg         = isLightTheme ? L"#FFB71C1C" : L"#FFEF9A9A";

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
            _snwprintf_s(lunarBadgeBuf, _TRUNCATE, L"🌙 Âm lịch: %02d/%02d/%d (Nhuận) • Năm %s",
                         h.lDay, h.lMonth, h.lYear, h.yearCanChi.c_str());
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
        holidayXaml = std::wstring(L"<Border Background='") + holidayBg + L"' CornerRadius='5' Padding='7,3' Margin='0,4,0,0'>"
                      L"<TextBlock Text='🎉 " + XmlEscape(h.specialHoliday) + L"' FontSize='11.5' FontWeight='SemiBold' Foreground='" + holidayFg + L"' TextWrapping='Wrap'/>"
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
                    itemsXaml += L"<TextBlock Text='" + XmlEscape(moreBuf) + L"' FontSize='11' Opacity='0.75' Margin='0,3,0,0'/>";
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

                std::wstring titleLine = L"[" + std::wstring(timeBadge) + L"]  " + DisplayEventSummary(ev.summary, vi);
                if (!ev.location.empty()) {
                    titleLine += L"  (📍 " + ev.location + L")";
                }

                itemsXaml += std::wstring(L"<Border Background='") + cardBg + L"' CornerRadius='5' Padding='7,4' Margin='0,4,0,0'>"
                             L"<StackPanel>"
                             L"<TextBlock Text='" + XmlEscape(titleLine) + L"' FontSize='11.8' FontWeight='SemiBold' TextWrapping='Wrap'/>";

                if (!ev.description.empty()) {
                    std::wstring desc = ev.description;
                    if (desc.size() > 300) desc = desc.substr(0, 300) + L"...";
                    itemsXaml += L"<TextBlock Text='📝 " + XmlEscape(desc) + L"' FontSize='11.2' Opacity='0.85' Margin='0,2,0,0' TextWrapping='Wrap'/>";
                }

                itemsXaml += L"</StackPanel></Border>";
                count++;
            }

            googleCardXaml =
                std::wstring(L"<Border Background='") + gcalBg + L"' BorderBrush='" + gcalBorder + L"' BorderThickness='1' CornerRadius='7' Padding='10,7' Margin='0,0,0,6'>"
                L"<StackPanel>"
                L"<TextBlock Text='" + std::wstring(vi ? L"📌 LỊCH TRÌNH &amp; GHI CHÚ GOOGLE CALENDAR" : L"📌 GOOGLE CALENDAR SCHEDULE &amp; NOTES") + L"' FontSize='11' FontWeight='Bold' Foreground='" + gcalTitleFg + L"'/>"
                + itemsXaml +
                L"</StackPanel></Border>";
        } else {
            std::wstring statusCopy = FormatIcsSyncStatus(vi);
            if (!statusCopy.empty()) {
                std::wstring emptyNote = (vi ? L"📌 Không có lịch trình trong ngày • " : L"📌 No events today • ") + statusCopy;
                googleCardXaml =
                    std::wstring(L"<Border Background='") + cardBgSoft + L"' CornerRadius='7' Padding='9,5' Margin='0,0,0,6'>"
                    L"<TextBlock Text='" + XmlEscape(emptyNote) + L"' FontSize='11' Opacity='0.75' TextWrapping='Wrap'/>"
                    L"</Border>";
            }
        }
    }

    std::wstring personalCardXaml;
    if (!h.personalMatch.summary.empty()) {
        PCWSTR pBg = cardBg;
        PCWSTR pBorder = isLightTheme ? L"#28000000" : L"#30FFFFFF";
        if (h.personalMatch.state == AgeMatchState::Harmonious) {
            pBg = isLightTheme ? L"#242E7D32" : L"#224CAF50";
            pBorder = isLightTheme ? L"#662E7D32" : L"#5581C784";
        } else if (h.personalMatch.state == AgeMatchState::ClashedMajor) {
            pBg = isLightTheme ? L"#24C62828" : L"#26F44336";
            pBorder = isLightTheme ? L"#66C62828" : L"#66E57373";
        } else if (h.personalMatch.state == AgeMatchState::ClashedMinor) {
            pBg = isLightTheme ? L"#24EF6C00" : L"#22FF9800";
            pBorder = isLightTheme ? L"#66EF6C00" : L"#55FFB74D";
        }

        personalCardXaml =
            std::wstring(L"<Border Background='") + pBg + L"' BorderBrush='" + pBorder + L"' BorderThickness='1' CornerRadius='7' Padding='10,6' Margin='0,0,0,4'>"
            L"<TextBlock Text='" + XmlEscape(h.personalMatch.summary) + L"' FontSize='11.5' FontWeight='SemiBold' TextWrapping='Wrap'/>"
            L"</Border>";
    } else {
        std::wstring tipText = vi ? L"💡 Nhập Năm sinh Âm lịch trong Settings của Mod để xem xung hợp bản mệnh."
                                  : L"💡 Set your Birth Year in Mod Settings for personal compatibility.";
        personalCardXaml =
            std::wstring(L"<Border Background='") + cardBgSoft + L"' CornerRadius='7' Padding='9,5' Margin='0,0,0,4'>"
            L"<TextBlock Text='" + XmlEscape(tipText) + L"' FontSize='11' Opacity='0.75' TextWrapping='Wrap'/>"
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
        L"      MaxHeight='370' "
        L"      HorizontalAlignment='Stretch' VerticalAlignment='Top'>"
        L"  <Grid.RowDefinitions>"
        L"    <RowDefinition Height='Auto'/>"
        L"    <RowDefinition Height='*'/>"
        L"  </Grid.RowDefinitions>"

        L"  <Border x:Name='BackBannerBorder' Grid.Row='0' Background='" + std::wstring(backBg) + L"' BorderBrush='" + backBorder + L"' BorderThickness='1' CornerRadius='6' Padding='8,5' Margin='0,0,0,6'>"
        L"    <TextBlock Text='" + XmlEscape(backBtnText) + L"' FontSize='11.8' FontWeight='SemiBold' HorizontalAlignment='Center'/>"
        L"  </Border>"

        L"  <ScrollViewer Grid.Row='1' VerticalScrollBarVisibility='Auto' HorizontalScrollBarVisibility='Disabled'>"
        L"    <StackPanel Padding='0,0,4,6'>"

        L"      <Border Background='" + std::wstring(cardBg) + L"' BorderBrush='" + cardBorder + L"' BorderThickness='1' CornerRadius='7' Padding='10,7' Margin='0,0,0,6'>"
        L"        <StackPanel>"
        L"          <TextBlock Text='" + XmlEscape(solarHeaderBuf) + L"' FontSize='13.2' FontWeight='Bold' TextWrapping='Wrap'/>"
        L"          <TextBlock Text='" + XmlEscape(lunarBadgeBuf) + L"' FontSize='12.2' FontWeight='SemiBold' Foreground='" + lunarFg + L"' Margin='0,2,0,0' TextWrapping='Wrap'/>"
        + holidayXaml +
        L"        </StackPanel>"
        L"      </Border>"

        + googleCardXaml +

        L"      <Border Background='" + std::wstring(cardBgAlt) + L"' BorderBrush='" + cardBorderAlt + L"' BorderThickness='1' CornerRadius='7' Padding='10,7' Margin='0,0,0,6'>"
        L"        <StackPanel>"
        L"          <TextBlock Text='" + std::wstring(vi ? L"🔮 BÁT TỰ &amp; TỬ VI PHONG THỦY" : L"🔮 FOUR PILLARS &amp; ALMANAC") + L"' FontSize='11' FontWeight='Bold' Opacity='0.8' Margin='0,0,0,4'/>"
        L"          <TextBlock Text='🐉 " + XmlEscape(fourPillarsLine) + L"' FontSize='11.5' FontWeight='SemiBold' TextWrapping='Wrap' Margin='0,0,0,3'/>"
        L"          <TextBlock Text='☯ " + XmlEscape(std::wstring(vi ? L"Nạp âm: " : L"Element: ") + h.napAmStr) + L"' FontSize='11.5' TextWrapping='Wrap' Margin='0,0,0,3'/>"
        L"          <TextBlock Text='" + XmlEscape(starLine) + L"' FontSize='11.5' FontWeight='SemiBold' Foreground='" + std::wstring(h.isHoangDao ? starGoodFg : starBadFg) + L"' TextWrapping='Wrap' Margin='0,0,0,3'/>"
        L"          <TextBlock Text='" + XmlEscape(trucTietLine) + L"' FontSize='11.5' TextWrapping='Wrap' Margin='0,0,0,5'/>"

        L"          <Border Background='" + std::wstring(cardBgSoft) + L"' CornerRadius='5' Padding='8,5' Margin='0,0,0,5'>"
        L"            <StackPanel>"
        L"              <TextBlock Text='⏰ " + std::wstring(vi ? L"Giờ Hoàng Đạo:" : L"Auspicious Hours:") + L"' FontSize='11.2' FontWeight='SemiBold' Opacity='0.9'/>"
        L"              <TextBlock Text='" + XmlEscape(h.gioHoangDao) + L"' FontSize='11.2' Opacity='0.9' Margin='0,1,0,0' TextWrapping='Wrap'/>"
        L"            </StackPanel>"
        L"          </Border>"

        L"          <TextBlock Text='✅ " + XmlEscape(std::wstring(vi ? L"Nên làm: " : L"Good for: ") + h.goodFor) + L"' FontSize='11.5' Foreground='" + goodFg + L"' TextWrapping='Wrap' Margin='0,0,0,2'/>"
        L"          <TextBlock Text='⛔ " + XmlEscape(std::wstring(vi ? L"Việc kỵ: " : L"Avoid: ") + h.badFor) + L"' FontSize='11.5' Foreground='" + badFg + L"' TextWrapping='Wrap' Margin='0,0,0,4'/>"
        L"          <TextBlock Text='🧭 " + XmlEscape(std::wstring(vi ? L"Tuổi xung: " : L"Clash: ") + h.tuoiXung) + L"' FontSize='11.3' Opacity='0.9' TextWrapping='Wrap' Margin='0,0,0,2'/>"
        L"          <TextBlock Text='✨ " + XmlEscape(std::wstring(vi ? L"Xuất hành: " : L"Directions: ") + directionsLine) + L"' FontSize='11.3' Opacity='0.9' TextWrapping='Wrap'/>"
        L"        </StackPanel>"
        L"      </Border>"

        + personalCardXaml +

        L"    </StackPanel>"
        L"  </ScrollViewer>"
        L"</Grid>";

    try {
        auto parsed = wux::Markup::XamlReader::Load(xaml).try_as<wux::FrameworkElement>();
        if (parsed) {
            auto backBorderEl = parsed.FindName(L"BackBannerBorder").try_as<wux::UIElement>();
            wux::UIElement clickTarget = backBorderEl ? backBorderEl : parsed.try_as<wux::UIElement>();
            if (clickTarget) {
                clickTarget.AddHandler(
                    wux::UIElement::PointerPressedEvent(),
                    winrt::box_value(wuxi::PointerEventHandler(
                        [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const& args) {
                            args.Handled(true);
                            RequestOpenHoroscopeForDateKey(0);
                        })),
                    true);
            }
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
            std::wstring pName = ElementName(panel);
            if (pName == L"CalendarCenterGrid" || pName == L"ClockAndCalendarCenterGrid" || pName == L"RootGrid") {
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

    double topMargin = 4.0;
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

            double slotHeight = slotFe.ActualHeight();
            if (slotHeight > 220.0 && slotHeight < 650.0) {
                pageElement.MaxHeight(slotHeight - 8.0);
            }

            if (row == 0) {
                wf::Point pt = calendarSlot.TransformToVisual(hostPanel).TransformPoint({0.0f, 0.0f});
                if (pt.Y > 20.0f && pt.Y < 260.0f) {
                    topMargin = static_cast<double>(pt.Y) + 4.0;
                }
            }
        }
    } catch (...) {}

    try {
        pageElement.Margin({10.0, topMargin, 10.0, 6.0});
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
            bool isLightTheme = DetectPanelLightTheme(hostPanel);
            auto newCardRoot = BuildModernHoroscopeCardView(t_selectedHoroscopeKey, vi, isLightTheme);
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

        if (t_lastKnownCalendarYear < 1900) {
            SYSTEMTIME stCur{};
            GetLocalTime(&stCur);
            t_lastKnownCalendarYear = stCur.wYear;
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

        SolarTermInfo stInfo = EvaluateSolarTerm(st.wDay == 0 ? 1 : st.wDay, st.wMonth, st.wYear, vi);

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
    if (name == L"CalendarCenterGrid" || name == L"ClockAndCalendarCenterGrid") {
        insideCalendarCenter = true;
    }

    if (name == L"CalendarHeader" || name == L"DateHeader" || name == L"ClockAndCalendarHeader") {
        insideCalendarCenter = true;
        if (auto panel = root.try_as<wuxc::Panel>()) {
            t_headerState.headerPanel = winrt::make_weak(panel);
        }
    }

    if (auto cv = root.try_as<wuxc::CalendarView>()) {
        insideCalendarCenter = true;
        insideCalendarView = true;
        auto prevCv = t_calendarView.get();
        if (prevCv != cv) {
            if (prevCv && t_calendarViewHandlersAdded) {
                try {
                    if (t_cvPressedHandler) prevCv.RemoveHandler(wux::UIElement::PointerPressedEvent(), t_cvPressedHandler);
                    if (t_cvReleasedHandler) prevCv.RemoveHandler(wux::UIElement::PointerReleasedEvent(), t_cvReleasedHandler);
                    if (t_cvWheelHandler) prevCv.RemoveHandler(wux::UIElement::PointerWheelChangedEvent(), t_cvWheelHandler);
                } catch (...) {}
            }
            t_cvPressedHandler = nullptr;
            t_cvReleasedHandler = nullptr;
            t_cvWheelHandler = nullptr;
            t_calendarView = winrt::make_weak(cv);
            t_calendarViewHandlersAdded = false;
        }
        if (!t_calendarViewHandlersAdded) {
            try {
                t_cvPressedHandler = winrt::box_value(wuxi::PointerEventHandler(
                    [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const&) {
                        if (g_shuttingDown) return;
                        StartSweepTimer();
                        WatchCalendarLayoutOnCurrentThread();
                    }));
                t_cvReleasedHandler = winrt::box_value(wuxi::PointerEventHandler(
                    [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const&) {
                        if (g_shuttingDown) return;
                        StartSweepTimer();
                        WatchCalendarLayoutOnCurrentThread();
                    }));
                t_cvWheelHandler = winrt::box_value(wuxi::PointerEventHandler(
                    [](wf::IInspectable const&, wuxi::PointerRoutedEventArgs const&) {
                        if (g_shuttingDown) return;
                        StartSweepTimer();
                        WatchCalendarLayoutOnCurrentThread();
                    }));
                cv.AddHandler(wux::UIElement::PointerPressedEvent(), t_cvPressedHandler, true);
                cv.AddHandler(wux::UIElement::PointerReleasedEvent(), t_cvReleasedHandler, true);
                cv.AddHandler(wux::UIElement::PointerWheelChangedEvent(), t_cvWheelHandler, true);
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
    if (g_shuttingDown) return;
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
    if (auto cv = t_calendarView.get()) {
        if (t_calendarViewHandlersAdded) {
            try {
                if (t_cvPressedHandler) cv.RemoveHandler(wux::UIElement::PointerPressedEvent(), t_cvPressedHandler);
                if (t_cvReleasedHandler) cv.RemoveHandler(wux::UIElement::PointerReleasedEvent(), t_cvReleasedHandler);
                if (t_cvWheelHandler) cv.RemoveHandler(wux::UIElement::PointerWheelChangedEvent(), t_cvWheelHandler);
            } catch (...) {}
        }
    }
    t_cvPressedHandler = nullptr;
    t_cvReleasedHandler = nullptr;
    t_cvWheelHandler = nullptr;
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
            if (cell.pointerPressedHandler) {
                try { item.RemoveHandler(wux::UIElement::PointerPressedEvent(), cell.pointerPressedHandler); } catch (...) {}
                cell.pointerPressedHandler = nullptr;
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
                    lunarLabel.ClearValue(wux::FrameworkElement::WidthProperty());
                    lunarLabel.ClearValue(wux::FrameworkElement::MaxWidthProperty());
                    lunarLabel.ClearValue(wux::FrameworkElement::MinWidthProperty());
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
                solarLabel.ClearValue(wux::FrameworkElement::MinWidthProperty());
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
// Windows 10 Taskbar Clock & Direct2D Color-Emoji Acrylic Tooltip (explorer.exe)

thread_local bool t_inRefreshIcon = false;

using GetTimeFormatEx_t = decltype(&GetTimeFormatEx);
GetTimeFormatEx_t GetTimeFormatEx_Original;

using GetDateFormatEx_t = decltype(&GetDateFormatEx);
GetDateFormatEx_t GetDateFormatEx_Original;

using ClockButton_v_GetTimeString_t = HRESULT(WINAPI*)(LPVOID pThis, WORD flags, LPWSTR buf, UINT cch);
ClockButton_v_GetTimeString_t ClockButton_v_GetTimeString_Original;

HRESULT WINAPI ClockButton_v_GetTimeString_Hook(LPVOID pThis, WORD flags, LPWSTR buf, UINT cch) {
    t_inRefreshIcon = true;
    HRESULT hr = ClockButton_v_GetTimeString_Original(pThis, flags, buf, cch);
    t_inRefreshIcon = false;
    return hr;
}

bool IsCurrentThreadWin10TrayClock() {
    HWND hTrayWnd = FindWindowW(L"Shell_TrayWnd", nullptr);
    if (!hTrayWnd) return false;
    DWORD trayThreadId = GetWindowThreadProcessId(hTrayWnd, nullptr);
    return trayThreadId != 0 && trayThreadId == GetCurrentThreadId();
}

// --- Windows 10 Acrylic Blur & Direct2D Color Emoji Tooltip Renderer ---

enum ACCENT_STATE {
    ACCENT_DISABLED = 0,
    ACCENT_ENABLE_BLURBEHIND = 3,
    ACCENT_ENABLE_ACRYLICBLURBEHIND = 4,
};

struct ACCENT_POLICY {
    ACCENT_STATE AccentState;
    DWORD AccentFlags;
    DWORD GradientColor;
    DWORD AnimationId;
};

struct WINDOWCOMPOSITIONATTRIBDATA {
    DWORD Attrib;
    PVOID pvData;
    SIZE_T cbData;
};

using SetWindowCompositionAttribute_t = BOOL(WINAPI*)(HWND, WINDOWCOMPOSITIONATTRIBDATA*);

void EnableWin10TooltipTransparency(HWND hTooltipWnd) {
    if (!hTooltipWnd || !IsWindow(hTooltipWnd)) return;

    int opacity = GetSettings().tooltipOpacity;
    LONG_PTR exStyle = GetWindowLongPtrW(hTooltipWnd, GWL_EXSTYLE);
    SetWindowLongPtrW(hTooltipWnd, GWL_EXSTYLE, exStyle | WS_EX_LAYERED);
    SetLayeredWindowAttributes(hTooltipWnd, 0, static_cast<BYTE>(opacity), LWA_ALPHA);

    static auto pSetWindowCompositionAttribute =
        reinterpret_cast<SetWindowCompositionAttribute_t>(
            GetProcAddress(GetModuleHandleW(L"user32.dll"), "SetWindowCompositionAttribute"));

    if (pSetWindowCompositionAttribute) {
        ACCENT_POLICY policy{};
        policy.AccentState = ACCENT_ENABLE_BLURBEHIND;
        policy.AccentFlags = 2;
        policy.GradientColor = (static_cast<DWORD>(opacity) << 24) | 0x001E1E1E;
        WINDOWCOMPOSITIONATTRIBDATA data{};
        data.Attrib = 19; // WCA_ACCENT_POLICY
        data.pvData = &policy;
        data.cbData = sizeof(policy);
        pSetWindowCompositionAttribute(hTooltipWnd, &data);
    }
}

using RunFromWindowThreadProc_t = void(WINAPI*)(PVOID parameter);
bool RunFromWindowThread(HWND hWnd, RunFromWindowThreadProc_t proc, PVOID procParam);

ID2D1Factory* g_d2dFactory = nullptr;
IDWriteFactory* g_dwriteFactory = nullptr;
IDWriteTextFormat* g_dwriteTextFormat = nullptr;
std::mutex g_d2dInitMutex;

bool EnsureD2DAndDWriteInitializedLocked() {
    if (g_d2dFactory && g_dwriteFactory && g_dwriteTextFormat) return true;

    if (!g_d2dFactory) {
        D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &g_d2dFactory);
    }
    if (!g_dwriteFactory) {
        DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED, __uuidof(IDWriteFactory),
                            reinterpret_cast<IUnknown**>(&g_dwriteFactory));
    }
    if (g_dwriteFactory && !g_dwriteTextFormat) {
        g_dwriteFactory->CreateTextFormat(
            L"Segoe UI",
            nullptr,
            DWRITE_FONT_WEIGHT_NORMAL,
            DWRITE_FONT_STYLE_NORMAL,
            DWRITE_FONT_STRETCH_NORMAL,
            12.0f,
            L"vi-VN",
            &g_dwriteTextFormat);
        if (g_dwriteTextFormat) {
            g_dwriteTextFormat->SetWordWrapping(DWRITE_WORD_WRAPPING_WRAP);
            g_dwriteTextFormat->SetLineSpacing(DWRITE_LINE_SPACING_METHOD_UNIFORM, 16.5f, 13.0f);
        }
    }
    return g_d2dFactory && g_dwriteFactory && g_dwriteTextFormat;
}

void ReleaseD2DAndDWriteResources() {
    std::lock_guard<std::mutex> lock(g_d2dInitMutex);
    if (g_dwriteTextFormat) {
        g_dwriteTextFormat->Release();
        g_dwriteTextFormat = nullptr;
    }
    if (g_dwriteFactory) {
        g_dwriteFactory->Release();
        g_dwriteFactory = nullptr;
    }
    if (g_d2dFactory) {
        g_d2dFactory->Release();
        g_d2dFactory = nullptr;
    }
}

UINT GetWindowDpiSafe(HWND hWnd) {
    using GetDpiForWindow_t = UINT(WINAPI*)(HWND);
    static auto pGetDpiForWindow = reinterpret_cast<GetDpiForWindow_t>(
        GetProcAddress(GetModuleHandleW(L"user32.dll"), "GetDpiForWindow"));
    if (pGetDpiForWindow && hWnd) {
        UINT dpi = pGetDpiForWindow(hWnd);
        if (dpi >= 96 && dpi <= 480) return dpi;
    }
    HDC hdc = GetDC(hWnd);
    UINT dpi = 96;
    if (hdc) {
        int px = GetDeviceCaps(hdc, LOGPIXELSX);
        if (px >= 96 && px <= 480) dpi = static_cast<UINT>(px);
        ReleaseDC(hWnd, hdc);
    }
    return dpi;
}

RECT GetMonitorWorkAreaForWindow(HWND hWnd) {
    RECT workArea{};
    HMONITOR hMon = MonitorFromWindow(hWnd, MONITOR_DEFAULTTONEAREST);
    if (hMon) {
        MONITORINFO mi{};
        mi.cbSize = sizeof(mi);
        if (GetMonitorInfoW(hMon, &mi)) {
            return mi.rcWork;
        }
    }
    SystemParametersInfoW(SPI_GETWORKAREA, 0, &workArea, 0);
    return workArea;
}

std::mutex g_win10SubclassedClocksMutex;
std::vector<HWND> g_win10SubclassedClocks;
std::vector<HWND> g_win10SubclassedTooltips;
thread_local std::wstring t_win10TooltipBuffer;

constexpr UINT_PTR kWin10ClockSubclassId = 0x20261022;
constexpr UINT_PTR kWin10TooltipSubclassId = 0x20261023;

void ForgetWin10SubclassedHwnd(std::vector<HWND>& list, HWND hWnd) {
    std::lock_guard<std::mutex> lock(g_win10SubclassedClocksMutex);
    list.erase(std::remove(list.begin(), list.end(), hWnd), list.end());
}

// Đo chính xác kích thước chữ bằng DirectWrite TextLayout (có quy đổi theo DPI thực tế của màn hình)
bool MeasureTooltipTextWithDWrite(HWND hWnd, std::wstring const& text, int& outWidth, int& outHeight) {
    if (text.empty()) return false;
    std::lock_guard<std::mutex> lock(g_d2dInitMutex);
    if (!EnsureD2DAndDWriteInitializedLocked()) return false;

    IDWriteTextLayout* textLayout = nullptr;
    HRESULT hr = g_dwriteFactory->CreateTextLayout(
        text.c_str(),
        static_cast<UINT32>(text.size()),
        g_dwriteTextFormat,
        420.0f,
        2000.0f,
        &textLayout);

    if (SUCCEEDED(hr) && textLayout) {
        DWRITE_TEXT_METRICS metrics{};
        if (SUCCEEDED(textLayout->GetMetrics(&metrics))) {
            float scale = static_cast<float>(GetWindowDpiSafe(hWnd)) / 96.0f;
            outWidth = static_cast<int>(std::ceil((metrics.widthIncludingTrailingWhitespace + 24.0f) * scale));
            outHeight = static_cast<int>(std::ceil((metrics.height + 20.0f) * scale));
            textLayout->Release();
            return true;
        }
        textLayout->Release();
    }
    return false;
}

LRESULT CALLBACK Win10TooltipSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam,
                                          UINT_PTR uIdSubclass, DWORD_PTR dwRefData) {
    (void)dwRefData;
    if (!g_shuttingDown && GetSettings().enableTaskbarTooltip && !t_win10TooltipBuffer.empty()) {
        if (uMsg == WM_WINDOWPOSCHANGING && lParam != 0) {
            auto* wp = reinterpret_cast<WINDOWPOS*>(lParam);
            int reqW = 0, reqH = 0;
            if (MeasureTooltipTextWithDWrite(hWnd, t_win10TooltipBuffer, reqW, reqH)) {
                if (!(wp->flags & SWP_NOSIZE)) {
                    if (wp->cx < reqW) wp->cx = reqW;
                    if (wp->cy < reqH) wp->cy = reqH;
                } else {
                    RECT rcWnd{};
                    GetWindowRect(hWnd, &rcWnd);
                    int curW = rcWnd.right - rcWnd.left;
                    int curH = rcWnd.bottom - rcWnd.top;
                    if (curW < reqW || curH < reqH) {
                        wp->cx = std::max(curW, reqW);
                        wp->cy = std::max(curH, reqH);
                        wp->flags &= ~SWP_NOSIZE;
                    }
                }

                // Căn tọa độ theo đúng màn hình chứa Tooltip và kẹp đủ 4 cạnh (Taskbar dưới/trên/trái/phải)
                RECT workArea = GetMonitorWorkAreaForWindow(hWnd);
                if (workArea.bottom > workArea.top && workArea.right > workArea.left) {
                    int finalW = (wp->flags & SWP_NOSIZE) ? reqW : wp->cx;
                    int finalH = (wp->flags & SWP_NOSIZE) ? reqH : wp->cy;
                    int curX = wp->x;
                    int curY = wp->y;
                    if (wp->flags & SWP_NOMOVE) {
                        RECT rcWnd{};
                        GetWindowRect(hWnd, &rcWnd);
                        curX = rcWnd.left;
                        curY = rcWnd.top;
                    }
                    bool moved = false;
                    if (curY + finalH > workArea.bottom - 4) {
                        curY = workArea.bottom - finalH - 6;
                        moved = true;
                    }
                    if (curY < workArea.top + 4) {
                        curY = workArea.top + 6;
                        moved = true;
                    }
                    if (curX + finalW > workArea.right - 4) {
                        curX = workArea.right - finalW - 6;
                        moved = true;
                    }
                    if (curX < workArea.left + 4) {
                        curX = workArea.left + 6;
                        moved = true;
                    }
                    if (moved) {
                        wp->x = curX;
                        wp->y = curY;
                        wp->flags &= ~SWP_NOMOVE;
                    }
                }
            }
        } else if (uMsg == WM_SHOWWINDOW && wParam == TRUE) {
            EnableWin10TooltipTransparency(hWnd);
            int reqW = 0, reqH = 0;
            if (MeasureTooltipTextWithDWrite(hWnd, t_win10TooltipBuffer, reqW, reqH)) {
                RECT rcWnd{};
                GetWindowRect(hWnd, &rcWnd);
                RECT workArea = GetMonitorWorkAreaForWindow(hWnd);
                int newX = rcWnd.left;
                int newY = rcWnd.top;
                if (workArea.bottom > workArea.top && workArea.right > workArea.left) {
                    if (newY + reqH > workArea.bottom - 4) newY = workArea.bottom - reqH - 6;
                    if (newY < workArea.top + 4) newY = workArea.top + 6;
                    if (newX + reqW > workArea.right - 4) newX = workArea.right - reqW - 6;
                    if (newX < workArea.left + 4) newX = workArea.left + 6;
                }
                SetWindowPos(hWnd, nullptr, newX, newY, reqW, reqH,
                             SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOSENDCHANGING);
            }
        } else if (uMsg == WM_ERASEBKGND) {
            return 1;
        } else if (uMsg == WM_PAINT) {
            std::lock_guard<std::mutex> d2dLock(g_d2dInitMutex);
            if (EnsureD2DAndDWriteInitializedLocked()) {
                PAINTSTRUCT ps{};
                HDC hdc = BeginPaint(hWnd, &ps);
                if (hdc) {
                    RECT rc{};
                    GetClientRect(hWnd, &rc);
                    float dpi = static_cast<float>(GetWindowDpiSafe(hWnd));
                    float scale = dpi / 96.0f;
                    float dipW = static_cast<float>(rc.right - rc.left) / scale;
                    float dipH = static_cast<float>(rc.bottom - rc.top) / scale;

                    D2D1_RENDER_TARGET_PROPERTIES rtProps = D2D1::RenderTargetProperties(
                        D2D1_RENDER_TARGET_TYPE_DEFAULT,
                        D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED),
                        dpi, dpi);

                    ID2D1DCRenderTarget* dcTarget = nullptr;
                    if (SUCCEEDED(g_d2dFactory->CreateDCRenderTarget(&rtProps, &dcTarget)) && dcTarget) {
                        if (SUCCEEDED(dcTarget->BindDC(hdc, &rc))) {
                            dcTarget->BeginDraw();

                            dcTarget->Clear(D2D1::ColorF(0.10f, 0.11f, 0.13f, 1.0f));

                            ID2D1SolidColorBrush* borderBrush = nullptr;
                            if (SUCCEEDED(dcTarget->CreateSolidColorBrush(D2D1::ColorF(0.35f, 0.38f, 0.42f, 1.0f), &borderBrush)) && borderBrush) {
                                D2D1_RECT_F borderRect = D2D1::RectF(0.5f, 0.5f, dipW - 0.5f, dipH - 0.5f);
                                dcTarget->DrawRectangle(borderRect, borderBrush, 1.0f);
                                borderBrush->Release();
                            }

                            ID2D1SolidColorBrush* textBrush = nullptr;
                            if (SUCCEEDED(dcTarget->CreateSolidColorBrush(D2D1::ColorF(0.96f, 0.96f, 0.97f, 1.0f), &textBrush)) && textBrush) {
                                D2D1_RECT_F layoutRect = D2D1::RectF(
                                    11.0f, 8.0f,
                                    std::max(20.0f, dipW - 10.0f),
                                    std::max(20.0f, dipH - 6.0f));

                                dcTarget->DrawText(
                                    t_win10TooltipBuffer.c_str(),
                                    static_cast<UINT32>(t_win10TooltipBuffer.size()),
                                    g_dwriteTextFormat,
                                    layoutRect,
                                    textBrush,
                                    D2D1_DRAW_TEXT_OPTIONS_ENABLE_COLOR_FONT);

                                textBrush->Release();
                            }

                            dcTarget->EndDraw();
                        }
                        dcTarget->Release();
                    }
                    EndPaint(hWnd, &ps);
                    return 0;
                }
            }
        }
    }
    if (uMsg == WM_NCDESTROY) {
        ForgetWin10SubclassedHwnd(g_win10SubclassedTooltips, hWnd);
        RemoveWindowSubclass(hWnd, Win10TooltipSubclassProc, uIdSubclass);
    }
    return DefSubclassProc(hWnd, uMsg, wParam, lParam);
}

void EnsureWin10TooltipSubclassed(HWND hTooltipWnd) {
    if (!hTooltipWnd || !IsWindow(hTooltipWnd)) return;

    EnableWin10TooltipTransparency(hTooltipWnd);

    std::lock_guard<std::mutex> lock(g_win10SubclassedClocksMutex);
    for (HWND h : g_win10SubclassedTooltips) {
        if (h == hTooltipWnd) return;
    }
    if (SetWindowSubclass(hTooltipWnd, Win10TooltipSubclassProc, kWin10TooltipSubclassId, 0)) {
        g_win10SubclassedTooltips.push_back(hTooltipWnd);
    }
}

LRESULT CALLBACK Win10ClockSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam,
                                        UINT_PTR uIdSubclass, DWORD_PTR dwRefData) {
    (void)dwRefData;
    if (uMsg == WM_NOTIFY && !g_shuttingDown) {
        NMHDR* nmhdr = reinterpret_cast<NMHDR*>(lParam);
        if (nmhdr && (nmhdr->code == TTN_GETDISPINFOW || nmhdr->code == TTN_NEEDTEXTW)) {
            ModSettings settings = GetSettings();
            if (settings.enableTaskbarTooltip) {
                LRESULT lr = DefSubclassProc(hWnd, uMsg, wParam, lParam);
                auto* dispInfo = reinterpret_cast<NMTTDISPINFOW*>(lParam);

                SendMessageW(nmhdr->hwndFrom, TTM_SETMAXTIPWIDTH, 0, 430);
                RECT marginRect{12, 10, 12, 14};
                SendMessageW(nmhdr->hwndFrom, TTM_SETMARGIN, 0, reinterpret_cast<LPARAM>(&marginRect));

                bool vi = UseVietnameseLabels(settings);
                SYSTEMTIME st{};
                GetLocalTime(&st);
                int jdn = CalculateJDN(st.wDay, st.wMonth, st.wYear);
                int weekdayIdx = ((jdn % 7) + 7) % 7;
                int monthIdx = (st.wMonth >= 1 && st.wMonth <= 12) ? (st.wMonth - 1) : 0;

                WCHAR solarHeader[128]{};
                if (vi) {
                    _snwprintf_s(solarHeader, _TRUNCATE, L"☀️ %s, Ngày %02d %s Năm %d",
                                 kWeekdaysViFull[weekdayIdx], st.wDay, kMonthsVi[monthIdx], st.wYear);
                } else {
                    _snwprintf_s(solarHeader, _TRUNCATE, L"☀️ %s, %s %02d, %d",
                                 kWeekdaysEnFull[weekdayIdx], kMonthsEn[monthIdx], st.wDay, st.wYear);
                }

                t_win10TooltipBuffer = std::wstring(solarHeader) + L"\r\n" + FormatTooltipHoroscope(settings);
                dispInfo->lpszText = const_cast<LPWSTR>(t_win10TooltipBuffer.c_str());
                dispInfo->szText[0] = L'\0';

                EnsureWin10TooltipSubclassed(nmhdr->hwndFrom);
                return lr;
            }
        }
    } else if (uMsg == WM_NCDESTROY) {
        ForgetWin10SubclassedHwnd(g_win10SubclassedClocks, hWnd);
        RemoveWindowSubclass(hWnd, Win10ClockSubclassProc, uIdSubclass);
    }
    return DefSubclassProc(hWnd, uMsg, wParam, lParam);
}

void EnsureWin10ClockHwndSubclassedOnOwnThread(HWND hClockWnd) {
    if (!hClockWnd || !IsWindow(hClockWnd)) return;
    if (GetWindowThreadProcessId(hClockWnd, nullptr) != GetCurrentThreadId()) return;

    std::lock_guard<std::mutex> lock(g_win10SubclassedClocksMutex);
    for (HWND h : g_win10SubclassedClocks) {
        if (h == hClockWnd) return;
    }
    if (SetWindowSubclass(hClockWnd, Win10ClockSubclassProc, kWin10ClockSubclassId, 0)) {
        g_win10SubclassedClocks.push_back(hClockWnd);
    }
}

void EnsureWin10TrayClockSubclassedOnTrayThread() {
    HWND hTrayWnd = FindWindowW(L"Shell_TrayWnd", nullptr);
    if (hTrayWnd) {
        HWND hNotifyWnd = FindWindowExW(hTrayWnd, nullptr, L"TrayNotifyWnd", nullptr);
        if (hNotifyWnd) {
            HWND hClockWnd = FindWindowExW(hNotifyWnd, nullptr, L"TrayClockWClass", nullptr);
            EnsureWin10ClockHwndSubclassedOnOwnThread(hClockWnd);
        }
    }

    HWND hSecTray = nullptr;
    while ((hSecTray = FindWindowExW(nullptr, hSecTray, L"Shell_SecondaryTrayWnd", nullptr)) != nullptr) {
        HWND hSecClock = FindWindowExW(hSecTray, nullptr, L"ClockButton", nullptr);
        EnsureWin10ClockHwndSubclassedOnOwnThread(hSecClock);
    }
}

void RemoveAllWin10TrayClockSubclasses() {
    std::vector<HWND> clocks;
    std::vector<HWND> tooltips;
    {
        std::lock_guard<std::mutex> lock(g_win10SubclassedClocksMutex);
        clocks.swap(g_win10SubclassedClocks);
        tooltips.swap(g_win10SubclassedTooltips);
    }
    for (HWND hTooltipWnd : tooltips) {
        if (IsWindow(hTooltipWnd)) {
            RunFromWindowThread(
                hTooltipWnd,
                [](PVOID p) {
                    HWND hw = reinterpret_cast<HWND>(p);
                    if (IsWindow(hw)) {
                        RemoveWindowSubclass(hw, Win10TooltipSubclassProc, kWin10TooltipSubclassId);
                    }
                },
                hTooltipWnd);
        }
    }
    for (HWND hClockWnd : clocks) {
        if (IsWindow(hClockWnd)) {
            RunFromWindowThread(
                hClockWnd,
                [](PVOID p) {
                    HWND hw = reinterpret_cast<HWND>(p);
                    if (IsWindow(hw)) {
                        RemoveWindowSubclass(hw, Win10ClockSubclassProc, kWin10ClockSubclassId);
                    }
                },
                hClockWnd);
        }
    }
}

bool HookWin10ExplorerClockSymbols() {
    HMODULE explorerModule = GetModuleHandleW(nullptr);
    if (!explorerModule) return false;

    WindhawkUtils::SYMBOL_HOOK win10Hooks[] = {
        {
            {LR"(protected: virtual long __cdecl ClockButton::v_GetTimeString(unsigned short,unsigned short *,unsigned int))"},
            &ClockButton_v_GetTimeString_Original,
            ClockButton_v_GetTimeString_Hook,
            true,
        },
    };
    return HookSymbols(explorerModule, win10Hooks, ARRAYSIZE(win10Hooks));
}

int WINAPI GetTimeFormatEx_Hook(LPCWSTR lpLocaleName,
                                DWORD dwFlags,
                                CONST SYSTEMTIME* lpTime,
                                LPCWSTR lpFormat,
                                LPWSTR lpTimeStr,
                                int cchTime) {
    bool isTrayThread = IsCurrentThreadWin10TrayClock();
    if (isTrayThread) {
        EnsureWin10TrayClockSubclassedOnTrayThread();
    }

    if (t_inRefreshIcon || isTrayThread) {
        ModSettings settings = GetSettings();
        if (settings.enableTaskbarClock && settings.taskbarClockSolarOnTop) {
            if (!cchTime) {
                return FORMATTED_BUFFER_SIZE;
            }

            WCHAR origTime[128]{};
            GetTimeFormatEx_Original(lpLocaleName, dwFlags, lpTime, lpFormat,
                                     origTime, ARRAYSIZE(origTime));

            SYSTEMTIME st{};
            if (lpTime && IsValidDate(lpTime->wYear, lpTime->wMonth, lpTime->wDay)) {
                st = *lpTime;
            } else {
                GetLocalTime(&st);
            }
            int jdn = CalculateJDN(st.wDay, st.wMonth, st.wYear);
            int weekdayIdx = ((jdn % 7) + 7) % 7; // 0=Mon .. 6=Sun
            st.wDayOfWeek = static_cast<WORD>((weekdayIdx + 1) % 7);

            WCHAR weekdayBuf[32]{};
            if (UseVietnameseLabels(settings)) {
                static const PCWSTR kWeekdaysViShort[] = {
                    L"T2", L"T3", L"T4", L"T5", L"T6", L"T7", L"CN"
                };
                wcscpy_s(weekdayBuf, kWeekdaysViShort[weekdayIdx]);
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
    bool isTrayThread = IsCurrentThreadWin10TrayClock();
    if (isTrayThread) {
        EnsureWin10TrayClockSubclassedOnTrayThread();
    }

    if ((t_inRefreshIcon || isTrayThread) && !(dwFlags & DATE_LONGDATE)) {
        ModSettings settings = GetSettings();
        if (settings.enableTaskbarClock) {
            if (lpFormat && wcscmp(lpFormat, L"dddd") == 0 && settings.taskbarClockSolarOnTop) {
                if (!cchDate) return 1;
                lpDateStr[0] = L'\0';
                return 1;
            }

            if (!cchDate) {
                return FORMATTED_BUFFER_SIZE;
            }

            SYSTEMTIME st{};
            if (lpDate && IsValidDate(lpDate->wYear, lpDate->wMonth, lpDate->wDay)) {
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
    HWND hTrayWnd = FindWindowW(L"Shell_TrayWnd", nullptr);
    if (hTrayWnd) {
        HWND hNotifyWnd = FindWindowExW(hTrayWnd, nullptr, L"TrayNotifyWnd", nullptr);
        if (hNotifyWnd) {
            HWND hClockWnd = FindWindowExW(hNotifyWnd, nullptr, L"TrayClockWClass", nullptr);
            if (hClockWnd) {
                if (!g_shuttingDown) {
                    RunFromWindowThread(
                        hClockWnd,
                        [](PVOID) { EnsureWin10TrayClockSubclassedOnTrayThread(); },
                        nullptr);
                }
                PostMessageW(hClockWnd, WM_TIMECHANGE, 0, 0);
                InvalidateRect(hClockWnd, nullptr, TRUE);
            }
        }
    }
}


////////////////////////////////////////////////////////////////////////////////
// Taskbar System Monitor Widget (CPU, GPU, RAM, Network - explorer.exe)

namespace SysMonitor {

using PDH_HQUERY_T = HANDLE;
using PDH_HCOUNTER_T = HANDLE;
using PDH_STATUS_T = LONG;
constexpr LONG kPdhMoreData = static_cast<LONG>(0x800007D2L);
constexpr DWORD kPdhFmtDouble = 0x00000200;

struct PdhFmtCounterValueDbl {
    DWORD CStatus;
    double doubleValue;
};

struct PdhFmtCounterValueItemW {
    LPWSTR szName;
    PdhFmtCounterValueDbl FmtValue;
};

using PdhOpenQueryW_t = PDH_STATUS_T(WINAPI*)(LPCWSTR, DWORD_PTR, PDH_HQUERY_T*);
using PdhAddEnglishCounterW_t = PDH_STATUS_T(WINAPI*)(PDH_HQUERY_T, LPCWSTR, DWORD_PTR, PDH_HCOUNTER_T*);
using PdhCollectQueryData_t = PDH_STATUS_T(WINAPI*)(PDH_HQUERY_T);
using PdhGetFormattedCounterValue_t = PDH_STATUS_T(WINAPI*)(PDH_HCOUNTER_T, DWORD, LPDWORD, PdhFmtCounterValueDbl*);
using PdhGetFormattedCounterArrayW_t = PDH_STATUS_T(WINAPI*)(PDH_HCOUNTER_T, DWORD, LPDWORD, LPDWORD, PdhFmtCounterValueItemW*);
using PdhCloseQuery_t = PDH_STATUS_T(WINAPI*)(PDH_HQUERY_T);

// Exact x64 ABI offsets of MIB_IF_TABLE2 / MIB_IF_ROW2 / ICMP_ECHO_REPLY (iphlpapi.dll)
using GetIfTable2_t = ULONG(WINAPI*)(PVOID* Table);
using FreeMibTable_t = void(WINAPI*)(PVOID Memory);
using IcmpCreateFile_t = HANDLE(WINAPI*)();
using IcmpSendEcho_t = DWORD(WINAPI*)(HANDLE, DWORD, LPVOID, WORD, LPVOID, LPVOID, DWORD, DWORD);
using IcmpCloseHandle_t = BOOL(WINAPI*)(HANDLE);

constexpr size_t kMibIfTable2TableOffset    = 8;
constexpr size_t kMibIfRow2Size             = 1352;
constexpr size_t kMibIfRow2TypeOffset       = 1128;
constexpr size_t kMibIfRow2FlagsOffset      = 1152;
constexpr size_t kMibIfRow2OperStatusOffset = 1156;
constexpr size_t kMibIfRow2MediaConnOffset  = 1164;
constexpr size_t kMibIfRow2InOctetsOffset   = 1208;
constexpr size_t kMibIfRow2OutOctetsOffset  = 1280;

constexpr size_t kIcmpReplySize             = 40;
constexpr size_t kIcmpReplyStatusOffset     = 4;
constexpr size_t kIcmpReplyRttOffset        = 8;

struct LiveSystemMetrics {
    int cpuPercent = 0;
    int gpuPercent = 0;
    int ramPercent = 0;
    double ramUsedGb = 0.0;
    double ramTotalGb = 0.0;
    double netDownBytesPerSec = 0.0;
    double netUpBytesPerSec = 0.0;
    int pingMs = -1; // -1 = offline / scanning
};

struct StatsColumn {
    std::wstring topLabel;
    std::wstring topValue;
    D2D1_COLOR_F topLabelColor;
    D2D1_COLOR_F topValueColor;
    std::wstring botLabel;
    std::wstring botValue;
    D2D1_COLOR_F botLabelColor;
    D2D1_COLOR_F botValueColor;
    bool singleRow = false;
    bool topCentered = false;
    bool botCentered = false;
    bool valueLeading = false;
    float widthDip = 60.0f;
};

std::mutex g_sysMonitorMutex;
std::thread g_sysMonitorThread;
std::thread g_pingScannerThread;
HANDLE g_sysMonitorStopEvent = nullptr;
HANDLE g_sysMonitorWakeEvent = nullptr;
std::atomic<bool> g_sysMonitorRunning{false};
std::atomic<HWND> g_statsWidgetHwnd{nullptr};
std::atomic<int> g_userOffsetX{0};
std::atomic<int> g_secUserOffsetX{0};
std::atomic<HWND> g_draggedHwnd{nullptr};
std::atomic<int> g_cachedBaseDefaultSecX{0};
std::atomic<int> g_cachedMinAllowedSecX{0};
std::atomic<int> g_cachedMaxAllowedSecX{0};
std::atomic<int> g_livePingMs{-1};
std::atomic<DWORD> g_activePingTargetIp{0};
std::atomic<bool> g_isDraggingWidget{false};
std::atomic<bool> g_isContextMenuOpen{false};
std::atomic<int> g_cachedBaseDefaultX{0};
std::atomic<int> g_cachedMinAllowedX{0};
std::atomic<int> g_cachedMaxAllowedX{0};
POINT g_dragStartCursor{};
int g_dragStartOffsetX = 0;

constexpr PCWSTR kStatsWidgetClassName = L"VnLunarTaskbarStatsWidgetWnd";
constexpr PCWSTR kStandaloneRegKey = L"Software\\VnLunarAlmanac\\Settings";

int LoadPersistedOffsetX() {
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kStandaloneRegKey, 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        int val = 0;
        DWORD sz = sizeof(val), type = 0;
        if (RegQueryValueExW(hKey, L"StatsOffsetX", nullptr, &type, reinterpret_cast<LPBYTE>(&val), &sz) == ERROR_SUCCESS &&
            type == REG_DWORD) {
            RegCloseKey(hKey);
            return std::clamp(val, -8000, 8000);
        }
        RegCloseKey(hKey);
    }
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kIcsCacheRegSubKey, 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        int val = 0;
        DWORD sz = sizeof(val), type = 0;
        if (RegQueryValueExW(hKey, L"StatsOffsetX", nullptr, &type, reinterpret_cast<LPBYTE>(&val), &sz) == ERROR_SUCCESS &&
            type == REG_DWORD) {
            RegCloseKey(hKey);
            return std::clamp(val, -8000, 8000);
        }
        RegCloseKey(hKey);
    }
    return 0;
}

int LoadPersistedSecOffsetX() {
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kStandaloneRegKey, 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        int val = 0;
        DWORD sz = sizeof(val), type = 0;
        if (RegQueryValueExW(hKey, L"SecondaryStatsOffsetX", nullptr, &type, reinterpret_cast<LPBYTE>(&val), &sz) == ERROR_SUCCESS &&
            type == REG_DWORD) {
            RegCloseKey(hKey);
            return std::clamp(val, -8000, 8000);
        }
        RegCloseKey(hKey);
    }
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kIcsCacheRegSubKey, 0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        int val = 0;
        DWORD sz = sizeof(val), type = 0;
        if (RegQueryValueExW(hKey, L"SecondaryStatsOffsetX", nullptr, &type, reinterpret_cast<LPBYTE>(&val), &sz) == ERROR_SUCCESS &&
            type == REG_DWORD) {
            RegCloseKey(hKey);
            return std::clamp(val, -8000, 8000);
        }
        RegCloseKey(hKey);
    }
    return 0;
}

void SavePersistedSecOffsetX(int offsetX) {
    HKEY hKey = nullptr;
    if (RegCreateKeyExW(HKEY_CURRENT_USER, kStandaloneRegKey, 0, nullptr, 0, KEY_WRITE, nullptr, &hKey, nullptr) == ERROR_SUCCESS) {
        DWORD dw = static_cast<DWORD>(offsetX);
        RegSetValueExW(hKey, L"SecondaryStatsOffsetX", 0, REG_DWORD, reinterpret_cast<const BYTE*>(&dw), sizeof(dw));
        RegCloseKey(hKey);
    }
}

void SavePersistedOffsetX(int offsetX) {
    HKEY hKey = nullptr;
    if (RegCreateKeyExW(HKEY_CURRENT_USER, kStandaloneRegKey, 0, nullptr, 0, KEY_WRITE, nullptr, &hKey, nullptr) == ERROR_SUCCESS) {
        DWORD dw = static_cast<DWORD>(offsetX);
        RegSetValueExW(hKey, L"StatsOffsetX", 0, REG_DWORD, reinterpret_cast<const BYTE*>(&dw), sizeof(dw));
        RegCloseKey(hKey);
    }
}

void PersistToggleToStandaloneRegistry(PCWSTR name, bool enabled) {
    HKEY hKey = nullptr;
    if (RegOpenKeyExW(HKEY_CURRENT_USER, kStandaloneRegKey, 0, KEY_WRITE, &hKey) == ERROR_SUCCESS) {
        DWORD dw = enabled ? 1u : 0u;
        RegSetValueExW(hKey, name, 0, REG_DWORD, reinterpret_cast<const BYTE*>(&dw), sizeof(dw));
        RegCloseKey(hKey);
    }
}

uint64_t FileTimeToU64(FILETIME const& ft) {
    return (static_cast<uint64_t>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
}

std::wstring FormatNetSpeedCompact(double bytesPerSec) {
    if (bytesPerSec < 0.0) bytesPerSec = 0.0;
    double kb = bytesPerSec / 1024.0;
    WCHAR buf[32]{};
    if (kb < 999.95) {
        _snwprintf_s(buf, _TRUNCATE, L"%.1f KB/s", kb);
    } else {
        double mb = kb / 1024.0;
        if (mb < 999.95) {
            _snwprintf_s(buf, _TRUNCATE, L"%.1f MB/s", mb);
        } else {
            double gb = mb / 1024.0;
            _snwprintf_s(buf, _TRUNCATE, L"%.1f GB/s", gb);
        }
    }
    return buf;
}

std::wstring FormatPingMsCompact(int pingMs) {
    if (pingMs < 0) return L"-- ms";
    WCHAR buf[32]{};
    if (pingMs > 999) {
        wcscpy_s(buf, L"999+ms");
    } else {
        _snwprintf_s(buf, _TRUNCATE, L"%d ms", pingMs);
    }
    return buf;
}

D2D1_COLOR_F PickLoadValueColor(int percent, bool lightTheme) {
    if (percent >= 90) {
        return lightTheme ? D2D1::ColorF(0.80f, 0.12f, 0.12f, 1.0f)
                          : D2D1::ColorF(1.00f, 0.48f, 0.45f, 1.0f);
    }
    if (percent >= 75) {
        return lightTheme ? D2D1::ColorF(0.82f, 0.42f, 0.00f, 1.0f)
                          : D2D1::ColorF(1.00f, 0.75f, 0.35f, 1.0f);
    }
    return lightTheme ? D2D1::ColorF(0.10f, 0.11f, 0.13f, 1.0f)
                      : D2D1::ColorF(0.97f, 0.98f, 0.99f, 1.0f);
}

D2D1_COLOR_F PickPingValueColor(int pingMs, bool lightTheme) {
    if (pingMs < 0 || pingMs > 120) {
        return lightTheme ? D2D1::ColorF(0.80f, 0.12f, 0.12f, 1.0f)
                          : D2D1::ColorF(1.00f, 0.48f, 0.45f, 1.0f);
    }
    if (pingMs >= 50) {
        return lightTheme ? D2D1::ColorF(0.80f, 0.44f, 0.00f, 1.0f)
                          : D2D1::ColorF(1.00f, 0.82f, 0.40f, 1.0f);
    }
    return lightTheme ? D2D1::ColorF(0.10f, 0.54f, 0.18f, 1.0f)
                      : D2D1::ColorF(0.49f, 0.91f, 0.53f, 1.0f);
}

std::vector<StatsColumn> BuildActiveColumns(ModSettings const& settings,
                                            LiveSystemMetrics const& m,
                                            bool lightTheme) {
    std::vector<StatsColumn> cols;
    if (!settings.enableTaskbarSystemStats) return cols;

    D2D1_COLOR_F normalValColor = PickLoadValueColor(0, lightTheme);
    D2D1_COLOR_F subValColor = lightTheme ? D2D1::ColorF(0.24f, 0.26f, 0.30f, 0.95f)
                                          : D2D1::ColorF(0.84f, 0.87f, 0.90f, 0.95f);

    D2D1_COLOR_F cpuLblColor  = lightTheme ? D2D1::ColorF(0.05f, 0.42f, 0.78f, 1.0f)
                                           : D2D1::ColorF(0.49f, 0.80f, 1.00f, 1.0f);
    D2D1_COLOR_F gpuLblColor  = lightTheme ? D2D1::ColorF(0.08f, 0.54f, 0.34f, 1.0f)
                                           : D2D1::ColorF(0.51f, 0.90f, 0.72f, 1.0f);
    D2D1_COLOR_F ramLblColor  = lightTheme ? D2D1::ColorF(0.68f, 0.40f, 0.00f, 1.0f)
                                           : D2D1::ColorF(1.00f, 0.84f, 0.50f, 1.0f);
    D2D1_COLOR_F dnLblColor   = lightTheme ? D2D1::ColorF(0.12f, 0.55f, 0.18f, 1.0f)
                                           : D2D1::ColorF(0.49f, 0.91f, 0.53f, 1.0f);
    D2D1_COLOR_F upLblColor   = lightTheme ? D2D1::ColorF(0.08f, 0.44f, 0.78f, 1.0f)
                                           : D2D1::ColorF(0.47f, 0.75f, 1.00f, 1.0f);
    D2D1_COLOR_F pingLblColor = lightTheme ? D2D1::ColorF(0.38f, 0.22f, 0.70f, 1.0f)
                                           : D2D1::ColorF(0.76f, 0.68f, 1.00f, 1.0f);

    struct ScalarItem {
        std::wstring label;
        std::wstring value;
        D2D1_COLOR_F labelColor;
        D2D1_COLOR_F valueColor;
        bool isRam = false;
    };

    std::vector<ScalarItem> scalars;
    WCHAR buf[32]{};
    if (settings.showCpuStats) {
        _snwprintf_s(buf, _TRUNCATE, L"%d%%", std::clamp(m.cpuPercent, 0, 100));
        scalars.push_back({ L"CPU", buf, cpuLblColor, PickLoadValueColor(m.cpuPercent, lightTheme), false });
    }
    if (settings.showGpuStats) {
        _snwprintf_s(buf, _TRUNCATE, L"%d%%", std::clamp(m.gpuPercent, 0, 100));
        scalars.push_back({ L"GPU", buf, gpuLblColor, PickLoadValueColor(m.gpuPercent, lightTheme), false });
    }
    if (settings.showRamStats) {
        _snwprintf_s(buf, _TRUNCATE, L"%d%%", std::clamp(m.ramPercent, 0, 100));
        scalars.push_back({ L"RAM", buf, ramLblColor, PickLoadValueColor(m.ramPercent, lightTheme), true });
    }

    WCHAR ramGbBuf[32]{};
    _snwprintf_s(ramGbBuf, _TRUNCATE, L"%.1f/%.0fGB", m.ramUsedGb, std::max(1.0, m.ramTotalGb));

    if (scalars.size() == 3) {
        cols.push_back({
            scalars[0].label, scalars[0].value, scalars[0].labelColor, scalars[0].valueColor,
            scalars[1].label, scalars[1].value, scalars[1].labelColor, scalars[1].valueColor,
            false, false, false, false, 58.0f
        });
        cols.push_back({
            scalars[2].label, scalars[2].value, scalars[2].labelColor, scalars[2].valueColor,
            L"", ramGbBuf, subValColor, subValColor,
            false, false, true, false, 68.0f
        });
    } else if (scalars.size() == 2) {
        if (scalars[0].isRam || scalars[1].isRam) {
            const auto& nonRam = scalars[0].isRam ? scalars[1] : scalars[0];
            const auto& ram = scalars[0].isRam ? scalars[0] : scalars[1];
            cols.push_back({
                nonRam.label, nonRam.value, nonRam.labelColor, nonRam.valueColor,
                L"", L"", normalValColor, normalValColor,
                true, false, false, false, 58.0f
            });
            cols.push_back({
                ram.label, ram.value, ram.labelColor, ram.valueColor,
                L"", ramGbBuf, subValColor, subValColor,
                false, false, true, false, 68.0f
            });
        } else {
            cols.push_back({
                scalars[0].label, scalars[0].value, scalars[0].labelColor, scalars[0].valueColor,
                scalars[1].label, scalars[1].value, scalars[1].labelColor, scalars[1].valueColor,
                false, false, false, false, 58.0f
            });
        }
    } else if (scalars.size() == 1) {
        if (scalars[0].isRam) {
            cols.push_back({
                scalars[0].label, scalars[0].value, scalars[0].labelColor, scalars[0].valueColor,
                L"", ramGbBuf, subValColor, subValColor,
                false, false, true, false, 68.0f
            });
        } else {
            cols.push_back({
                scalars[0].label, scalars[0].value, scalars[0].labelColor, scalars[0].valueColor,
                L"", L"", normalValColor, normalValColor,
                true, false, false, false, 58.0f
            });
        }
    }

    if (settings.showNetStats) {
        cols.push_back({
            L"↓", FormatNetSpeedCompact(m.netDownBytesPerSec), dnLblColor, normalValColor,
            L"↑", FormatNetSpeedCompact(m.netUpBytesPerSec),   upLblColor, normalValColor,
            false, false, false, true, 66.0f
        });
    }

    if (settings.showPingStats) {
        D2D1_COLOR_F pingValColor = PickPingValueColor(m.pingMs, lightTheme);
        cols.push_back({
            L"", L"PING", pingLblColor, pingLblColor,
            L"", FormatPingMsCompact(m.pingMs), pingValColor, pingValColor,
            false, true, true, false, 48.0f
        });
    }

    return cols;
}

bool SampleNetworkOctetsFromIfTable2(GetIfTable2_t pGetIfTable2,
                                     FreeMibTable_t pFreeMibTable,
                                     uint64_t& outInOctets,
                                     uint64_t& outOutOctets,
                                     uint32_t& outAdapterSig,
                                     bool* outHasWifi = nullptr,
                                     bool* outHasEthernet = nullptr,
                                     bool* outHasConnected = nullptr) {
    outInOctets = 0;
    outOutOctets = 0;
    outAdapterSig = 0;
    if (outHasWifi) *outHasWifi = false;
    if (outHasEthernet) *outHasEthernet = false;
    if (outHasConnected) *outHasConnected = false;
    if (!pGetIfTable2 || !pFreeMibTable) return false;

    PVOID rawTable = nullptr;
    if (pGetIfTable2(&rawTable) != 0 || !rawTable) return false;

    const auto* base = static_cast<const uint8_t*>(rawTable);
    ULONG numEntries = 0;
    memcpy(&numEntries, base, sizeof(numEntries));

    if (outHasWifi || outHasEthernet || outHasConnected) {
        bool hwWifi = false, hwEth = false, hwConn = false;
        for (ULONG i = 0; i < numEntries; i++) {
            const uint8_t* row = base + kMibIfTable2TableOffset + static_cast<size_t>(i) * kMibIfRow2Size;
            ULONG type = 0, operStatus = 0, mediaConn = 0;
            uint8_t flags = row[kMibIfRow2FlagsOffset];
            memcpy(&type, row + kMibIfRow2TypeOffset, sizeof(type));
            memcpy(&operStatus, row + kMibIfRow2OperStatusOffset, sizeof(operStatus));
            if (type == 24) continue;
            if ((flags & 0x01) == 0) continue; // HardwareInterface
            if (flags & 0x02) continue;        // Exclude FilterInterface
            if ((flags & 0x04) == 0) continue; // ConnectorPresent
            if (flags & 0x10) continue;        // Exclude NotMediaConnected
            memcpy(&mediaConn, row + kMibIfRow2MediaConnOffset, sizeof(mediaConn));
            if (mediaConn != 1) continue;      // MediaConnectStateConnected
            if (operStatus == 1) {             // IfOperStatusUp
                hwConn = true;
                if (type == 71) hwWifi = true;
                else if (type == 6) hwEth = true;
            }
        }
        if (outHasWifi) *outHasWifi = hwWifi;
        if (outHasEthernet) *outHasEthernet = hwEth;
        if (outHasConnected) *outHasConnected = hwConn;
    }

    auto scanRows = [&](bool requireHardware) {
        uint64_t sumIn = 0, sumOut = 0;
        uint32_t sig = 2166136261u;
        int matched = 0;
        for (ULONG i = 0; i < numEntries; i++) {
            const uint8_t* row = base + kMibIfTable2TableOffset + static_cast<size_t>(i) * kMibIfRow2Size;
            ULONG type = 0, operStatus = 0, mediaConn = 0;
            uint8_t flags = row[kMibIfRow2FlagsOffset];
            memcpy(&type, row + kMibIfRow2TypeOffset, sizeof(type));
            memcpy(&operStatus, row + kMibIfRow2OperStatusOffset, sizeof(operStatus));
            memcpy(&mediaConn, row + kMibIfRow2MediaConnOffset, sizeof(mediaConn));

            if (type == 24) continue;       // IF_TYPE_SOFTWARE_LOOPBACK
            if (operStatus != 1) continue;  // IfOperStatusUp
            if (flags & 0x02) continue;     // FilterInterface (WFP / QoS / NDIS filters)

            if (requireHardware) {
                if (!(flags & 0x01)) continue; // HardwareInterface
                if (mediaConn != 1) continue;  // MediaConnectStateConnected
            } else {
                if (type == 131) continue;     // IF_TYPE_TUNNEL
            }

            uint64_t inOct = 0, outOct = 0;
            memcpy(&inOct, row + kMibIfRow2InOctetsOffset, sizeof(inOct));
            memcpy(&outOct, row + kMibIfRow2OutOctetsOffset, sizeof(outOct));
            sumIn += inOct;
            sumOut += outOct;
            sig = (sig ^ (i + 1u)) * 16777619u;
            matched++;
        }
        if (matched > 0) {
            outInOctets = sumIn;
            outOutOctets = sumOut;
            outAdapterSig = sig;
            return true;
        }
        return false;
    };

    bool ok = scanRows(true);
    if (!ok) {
        ok = scanRows(false);
    }

    pFreeMibTable(rawTable);
    return ok;
}

bool ProbeSingleIcmpMs(IcmpSendEcho_t pIcmpSendEcho, HANDLE hIcmp, DWORD ipNetOrder, int& outMs) {
    if (!pIcmpSendEcho || !hIcmp || hIcmp == INVALID_HANDLE_VALUE) return false;
    char sendData[16] = "VnLunarPing1234";
    BYTE replyBuf[kIcmpReplySize + 64]{};

    LARGE_INTEGER freq{}, t0{}, t1{};
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&t0);
    DWORD ret = pIcmpSendEcho(hIcmp, ipNetOrder, sendData, sizeof(sendData),
                              nullptr, replyBuf, sizeof(replyBuf), 1000);
    QueryPerformanceCounter(&t1);
    if (ret == 0) return false;

    ULONG status = 1, rtt = 0;
    memcpy(&status, replyBuf + kIcmpReplyStatusOffset, sizeof(status));
    memcpy(&rtt, replyBuf + kIcmpReplyRttOffset, sizeof(rtt));
    if (status != 0) return false;

    if (rtt > 0) {
        outMs = static_cast<int>(rtt);
    } else if (freq.QuadPart > 0) {
        double qpcMs = static_cast<double>(t1.QuadPart - t0.QuadPart) * 1000.0 / static_cast<double>(freq.QuadPart);
        outMs = std::max(1, static_cast<int>(qpcMs + 0.5));
    } else {
        outMs = 1;
    }
    return true;
}

bool IsPublicIpv4Address(DWORD ip) {
    BYTE a = static_cast<BYTE>(ip & 0xFF);
    BYTE b = static_cast<BYTE>((ip >> 8) & 0xFF);
    if (a == 0 || a == 10 || a == 127) return false;
    if (a == 169 && b == 254) return false;
    if (a == 172 && b >= 16 && b <= 31) return false;
    if (a == 192 && b == 168) return false;
    if (a == 100 && b >= 64 && b <= 127) return false;
    if (a >= 224) return false;
    return true;
}

std::vector<DWORD> DetectActiveSystemPublicDnsServers(HMODULE hIphlp) {
    std::vector<DWORD> result;
    if (!hIphlp) return result;

    using GetBestInterface_t = DWORD(WINAPI*)(DWORD dwDestAddr, PDWORD pdwBestIfIndex);
    using GetAdaptersAddresses_t = ULONG(WINAPI*)(ULONG Family, ULONG Flags, PVOID Reserved, PVOID AdapterAddresses, PULONG SizePointer);
    auto pGetBestInterface = reinterpret_cast<GetBestInterface_t>(GetProcAddress(hIphlp, "GetBestInterface"));
    auto pGetAdaptersAddresses = reinterpret_cast<GetAdaptersAddresses_t>(GetProcAddress(hIphlp, "GetAdaptersAddresses"));
    if (!pGetAdaptersAddresses) return result;

    DWORD bestIf = 0;
    if (pGetBestInterface) {
        DWORD probeDst = (1u) | (1u << 8) | (1u << 16) | (1u << 24);
        if (pGetBestInterface(probeDst, &bestIf) != 0) {
            bestIf = 0;
        }
    }

    constexpr ULONG kAfInet = 2;
    constexpr ULONG kFlags = 0x06; // GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST
    ULONG bufLen = 16384;
    std::vector<BYTE> buf(bufLen);
    ULONG rc = pGetAdaptersAddresses(kAfInet, kFlags, nullptr, buf.data(), &bufLen);
    if (rc == ERROR_BUFFER_OVERFLOW && bufLen > 0 && bufLen <= 1024 * 1024) {
        buf.resize(bufLen);
        rc = pGetAdaptersAddresses(kAfInet, kFlags, nullptr, buf.data(), &bufLen);
    }
    if (rc != NO_ERROR) return result;

    // Exact x64 ABI offsets of IP_ADAPTER_ADDRESSES / IP_ADAPTER_DNS_SERVER_ADDRESS / sockaddr_in
    const BYTE* adapter = buf.data();
    while (adapter) {
        DWORD ifIndex = 0;
        const BYTE* nextAdapter = nullptr;
        const BYTE* dnsNode = nullptr;
        INT operStatus = 0;
        memcpy(&ifIndex, adapter + 4, sizeof(ifIndex));
        memcpy(&nextAdapter, adapter + 8, sizeof(nextAdapter));
        memcpy(&dnsNode, adapter + 48, sizeof(dnsNode));
        memcpy(&operStatus, adapter + 104, sizeof(operStatus));

        if (operStatus == 1 && (bestIf == 0 || ifIndex == bestIf)) {
            while (dnsNode) {
                const BYTE* nextDns = nullptr;
                const BYTE* sockAddr = nullptr;
                memcpy(&nextDns, dnsNode + 8, sizeof(nextDns));
                memcpy(&sockAddr, dnsNode + 16, sizeof(sockAddr));
                if (sockAddr) {
                    USHORT family = 0;
                    DWORD ip = 0;
                    memcpy(&family, sockAddr + 0, sizeof(family));
                    memcpy(&ip, sockAddr + 4, sizeof(ip));
                    if (family == kAfInet && IsPublicIpv4Address(ip)) {
                        if (std::find(result.begin(), result.end(), ip) == result.end()) {
                            result.push_back(ip);
                        }
                    }
                }
                dnsNode = nextDns;
            }
            if (bestIf != 0) break;
        }
        adapter = nextAdapter;
    }
    return result;
}

void FormatPingTargetLabel(DWORD ip, WCHAR* outBuf, size_t outCap) {
    if (!outBuf || outCap == 0) return;
    auto makeIp = [](DWORD a, DWORD b, DWORD c, DWORD d) -> DWORD {
        return (a) | (b << 8) | (c << 16) | (d << 24);
    };
    if (ip == 0) {
        wcsncpy_s(outBuf, outCap, L"DNS", _TRUNCATE);
    } else if (ip == makeIp(1, 1, 1, 1)) {
        wcsncpy_s(outBuf, outCap, L"Cloudflare 1.1.1.1", _TRUNCATE);
    } else if (ip == makeIp(1, 0, 0, 1)) {
        wcsncpy_s(outBuf, outCap, L"Cloudflare 1.0.0.1", _TRUNCATE);
    } else if (ip == makeIp(8, 8, 8, 8)) {
        wcsncpy_s(outBuf, outCap, L"Google 8.8.8.8", _TRUNCATE);
    } else if (ip == makeIp(8, 8, 4, 4)) {
        wcsncpy_s(outBuf, outCap, L"Google 8.8.4.4", _TRUNCATE);
    } else if (ip == makeIp(9, 9, 9, 9)) {
        wcsncpy_s(outBuf, outCap, L"Quad9 9.9.9.9", _TRUNCATE);
    } else if (ip == makeIp(149, 112, 112, 112)) {
        wcsncpy_s(outBuf, outCap, L"Quad9 149.112.112.112", _TRUNCATE);
    } else if (ip == makeIp(208, 67, 222, 222)) {
        wcsncpy_s(outBuf, outCap, L"OpenDNS 208.67.222.222", _TRUNCATE);
    } else if (ip == makeIp(208, 67, 220, 220)) {
        wcsncpy_s(outBuf, outCap, L"OpenDNS 208.67.220.220", _TRUNCATE);
    } else if (ip == makeIp(94, 140, 14, 14)) {
        wcsncpy_s(outBuf, outCap, L"AdGuard 94.140.14.14", _TRUNCATE);
    } else if (ip == makeIp(94, 140, 15, 15)) {
        wcsncpy_s(outBuf, outCap, L"AdGuard 94.140.15.15", _TRUNCATE);
    } else {
        _snwprintf_s(outBuf, outCap, _TRUNCATE, L"%u.%u.%u.%u",
                     static_cast<unsigned>(ip & 0xFF),
                     static_cast<unsigned>((ip >> 8) & 0xFF),
                     static_cast<unsigned>((ip >> 16) & 0xFF),
                     static_cast<unsigned>((ip >> 24) & 0xFF));
    }
}

void RunPingScannerLoop() {
    HMODULE hIphlp = LoadLibraryExW(L"iphlpapi.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (!hIphlp) return;

    auto pIcmpCreateFile = reinterpret_cast<IcmpCreateFile_t>(GetProcAddress(hIphlp, "IcmpCreateFile"));
    auto pIcmpSendEcho = reinterpret_cast<IcmpSendEcho_t>(GetProcAddress(hIphlp, "IcmpSendEcho"));
    auto pIcmpCloseHandle = reinterpret_cast<IcmpCloseHandle_t>(GetProcAddress(hIphlp, "IcmpCloseHandle"));

    if (!pIcmpCreateFile || !pIcmpSendEcho || !pIcmpCloseHandle) {
        FreeLibrary(hIphlp);
        return;
    }

    HANDLE hIcmp = pIcmpCreateFile();
    if (!hIcmp || hIcmp == INVALID_HANDLE_VALUE) {
        FreeLibrary(hIphlp);
        return;
    }

    // Stable fallback targets if Windows adapter uses DHCP/private router DNS (192.168.x.x)
    const DWORD kFallbackTargets[3] = {
        (1u) | (1u << 8) | (1u << 16) | (1u << 24),
        (8u) | (8u << 8) | (8u << 16) | (8u << 24),
        (208u) | (67u << 8) | (222u << 16) | (222u << 24),
    };

    std::vector<DWORD> targets;
    DWORD activeTargetIp = 0;
    ULONGLONG lastDnsCheckTick = 0;

    while (!g_shuttingDown) {
        ModSettings s = GetSettings();
        if ((s.enableTaskbarSystemStats || s.enableSecondaryMonitorStats) && s.showPingStats) {
            ULONGLONG now = GetTickCount64();
            if (targets.empty() || activeTargetIp == 0 || (now - lastDnsCheckTick >= 10000ULL)) {
                lastDnsCheckTick = now;
                targets = DetectActiveSystemPublicDnsServers(hIphlp);
                for (DWORD fb : kFallbackTargets) {
                    if (std::find(targets.begin(), targets.end(), fb) == targets.end()) {
                        targets.push_back(fb);
                    }
                }
                // Always prefer the user's primary configured DNS server (targets[0]) without random flipping
                if (!targets.empty()) {
                    activeTargetIp = targets[0];
                }
            }

            int measuredMs = -1;
            if (activeTargetIp != 0 && ProbeSingleIcmpMs(pIcmpSendEcho, hIcmp, activeTargetIp, measuredMs)) {
                g_activePingTargetIp.store(activeTargetIp);
            } else {
                // Only failover to secondary DNS / fallback if primary actually fails
                bool recovered = false;
                for (DWORD ip : targets) {
                    if (g_shuttingDown) break;
                    if (ip == activeTargetIp) continue;
                    int ms = -1;
                    if (ProbeSingleIcmpMs(pIcmpSendEcho, hIcmp, ip, ms)) {
                        activeTargetIp = ip;
                        measuredMs = ms;
                        g_activePingTargetIp.store(activeTargetIp);
                        recovered = true;
                        break;
                    }
                }
                if (!recovered) {
                    activeTargetIp = 0;
                    measuredMs = -1;
                    g_activePingTargetIp.store(0);
                }
            }

            if (g_livePingMs.exchange(measuredMs) != measuredMs) {
                if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            }
        }

        HANDLE stopEv = g_sysMonitorStopEvent;
        if (!stopEv) break;
        if (WaitForSingleObject(stopEv, 2500) == WAIT_OBJECT_0) break;
    }

    pIcmpCloseHandle(hIcmp);
    FreeLibrary(hIphlp);
}

bool IsWindowCloakedByDwm(HWND hWnd) {
    using DwmGetWindowAttribute_t = HRESULT(WINAPI*)(HWND, DWORD, PVOID, DWORD);
    static auto pDwmGetWindowAttribute = []() -> DwmGetWindowAttribute_t {
        HMODULE hDwm = LoadLibraryExW(L"dwmapi.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
        return hDwm ? reinterpret_cast<DwmGetWindowAttribute_t>(GetProcAddress(hDwm, "DwmGetWindowAttribute")) : nullptr;
    }();
    if (!pDwmGetWindowAttribute || !hWnd) return false;
    DWORD cloaked = 0;
    if (SUCCEEDED(pDwmGetWindowAttribute(hWnd, 14 /* DWMWA_CLOAKED */, &cloaked, sizeof(cloaked)))) {
        return cloaked != 0;
    }
    return false;
}

std::atomic<HWND> g_cachedPrimaryTrayHwnd{nullptr};

bool IsTrueFullscreenAppActiveUncached(HWND hTrayWnd, RECT const& rcMonitor) {
    HWND hFg = GetForegroundWindow();
    if (!hFg || hFg == hTrayWnd || hFg == GetDesktopWindow() || hFg == GetShellWindow()) {
        return false;
    }

    // 1. Process check: Any Windows Shell, system flyout, or explorer process is NEVER a fullscreen game
    DWORD fgPid = 0;
    GetWindowThreadProcessId(hFg, &fgPid);
    if (fgPid == 0 || fgPid == GetCurrentProcessId()) {
        return false;
    }

    HANDLE hProc = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, fgPid);
    if (hProc) {
        WCHAR procPath[MAX_PATH]{};
        DWORD procPathLen = ARRAYSIZE(procPath);
        if (QueryFullProcessImageNameW(hProc, 0, procPath, &procPathLen)) {
            PCWSTR exeName = wcsrchr(procPath, L'\\');
            exeName = exeName ? (exeName + 1) : procPath;
            if (_wcsicmp(exeName, L"explorer.exe") == 0 ||
                _wcsicmp(exeName, L"StartMenuExperienceHost.exe") == 0 ||
                _wcsicmp(exeName, L"SearchHost.exe") == 0 ||
                _wcsicmp(exeName, L"SearchApp.exe") == 0 ||
                _wcsicmp(exeName, L"SearchUI.exe") == 0 ||
                _wcsicmp(exeName, L"Cortana.exe") == 0 ||
                _wcsicmp(exeName, L"ShellExperienceHost.exe") == 0 ||
                _wcsicmp(exeName, L"TextInputHost.exe") == 0 ||
                _wcsicmp(exeName, L"SystemSettings.exe") == 0 ||
                _wcsicmp(exeName, L"ApplicationFrameHost.exe") == 0 ||
                _wcsicmp(exeName, L"ScreenClippingHost.exe") == 0 ||
                _wcsicmp(exeName, L"SnippingTool.exe") == 0 ||
                _wcsicmp(exeName, L"Widgets.exe") == 0 ||
                _wcsicmp(exeName, L"LockApp.exe") == 0 ||
                _wcsicmp(exeName, L"taskmgr.exe") == 0 ||
                _wcsicmp(exeName, L"WindhawkUI.exe") == 0) {
                CloseHandle(hProc);
                return false;
            }
        }
        CloseHandle(hProc);
    }

    // 2. Class check for Shell / Modern UI / XAML backdrop & popups (both hFg and root ancestor)
    auto isShellOrPopupClass = [](HWND hWnd) -> bool {
        if (!hWnd) return false;
        WCHAR cls[128]{};
        if (GetClassNameW(hWnd, cls, ARRAYSIZE(cls)) <= 0) return false;
        if (_wcsicmp(cls, L"Progman") == 0 ||
            _wcsicmp(cls, L"WorkerW") == 0 ||
            _wcsicmp(cls, L"Shell_TrayWnd") == 0 ||
            _wcsicmp(cls, L"Shell_SecondaryTrayWnd") == 0 ||
            _wcsicmp(cls, L"Windows.UI.Core.CoreWindow") == 0 ||
            _wcsicmp(cls, L"ControlCenterWindow") == 0 ||
            _wcsicmp(cls, L"XamlExplorerHostIslandWindow") == 0 ||
            _wcsicmp(cls, L"Xaml_WindowedPopupClass") == 0 ||
            _wcsicmp(cls, L"TopLevelWindowForOverflowXamlIsland") == 0 ||
            _wcsicmp(cls, L"PopupHost") == 0 ||
            _wcsicmp(cls, L"NativeHWNDHost") == 0 ||
            wcsstr(cls, L"Xaml") != nullptr ||
            wcsstr(cls, L"StartMenu") != nullptr ||
            wcsstr(cls, L"Start") != nullptr ||
            wcsstr(cls, L"Shell_") != nullptr ||
            wcsstr(cls, L"CoreWindow") != nullptr ||
            wcsstr(cls, L"Popup") != nullptr ||
            wcsstr(cls, L"Flyout") != nullptr ||
            wcsstr(cls, L"HwndWrapper") != nullptr) {
            return true;
        }
        return false;
    };

    if (isShellOrPopupClass(hFg)) return false;
    HWND hRoot = GetAncestor(hFg, GA_ROOT);
    if (hRoot && hRoot != hFg && isShellOrPopupClass(hRoot)) return false;

    // 3. Taskbar overlap check: If hFg does not physically cover the taskbar rect,
    // then the taskbar remains visible on screen and the stats widget must NOT be hidden!
    RECT rcTray{};
    if (GetWindowRect(hTrayWnd, &rcTray)) {
        RECT rcFg{};
        if (GetWindowRect(hFg, &rcFg)) {
            // Taskbar at bottom: if hFg ends at or above taskbar top, it doesn't cover taskbar
            if (rcTray.top > rcMonitor.top && rcFg.bottom <= rcTray.top + 2) {
                return false;
            }
            // Taskbar at top: if hFg starts at or below taskbar bottom
            if (rcTray.top == rcMonitor.top && rcFg.top >= rcTray.bottom - 2) {
                return false;
            }
            // Taskbar at left: if hFg starts at or to the right of taskbar right
            if (rcTray.left == rcMonitor.left && rcFg.left >= rcTray.right - 2) {
                return false;
            }
            // Taskbar at right: if hFg ends at or to the left of taskbar left
            if (rcTray.left > rcMonitor.left && rcFg.right <= rcTray.left + 2) {
                return false;
            }
        }
    }

    // 4. Verify foreground window actually resides on THIS monitor before fullscreen checks
    //    (prevents a fullscreen game on Monitor 1 from hiding Monitor 2's taskbar widgets)
    HMONITOR monTray = MonitorFromWindow(hTrayWnd, MONITOR_DEFAULTTONEAREST);
    HMONITOR monFg = MonitorFromWindow(hFg, MONITOR_DEFAULTTONULL);
    if (!monFg || monFg != monTray) return false;

    // 5. Direct3D Fullscreen check (exclusive mode on this monitor)
    QUERY_USER_NOTIFICATION_STATE quns = QUNS_ACCEPTS_NOTIFICATIONS;
    if (SUCCEEDED(SHQueryUserNotificationState(&quns))) {
        if (quns == QUNS_RUNNING_D3D_FULL_SCREEN) {
            return true;
        }
    }

    // 6. Normal maximized windows (with caption or resizable border) cover 100% of rcMonitor when
    // Taskbar Auto-Hide is enabled; NEVER treat them as fullscreen games!
    LONG_PTR style = GetWindowLongPtrW(hFg, GWL_STYLE);
    if ((style & WS_CAPTION) == WS_CAPTION || (style & WS_THICKFRAME) != 0) {
        return false;
    }

    RECT rcFg{};
    if (!GetWindowRect(hFg, &rcFg)) return false;
    if (rcFg.left <= rcMonitor.left && rcFg.top <= rcMonitor.top &&
        rcFg.right >= rcMonitor.right && rcFg.bottom >= rcMonitor.bottom) {
        for (HWND hCur = hFg; hCur != nullptr; hCur = GetWindow(hCur, GW_HWNDNEXT)) {
            if (hCur == hTrayWnd) return true;
        }
    }
    return false;
}

bool IsTrueFullscreenAppActive(HWND hTrayWnd, RECT const& rcMonitor) {
    struct FsCacheEntry {
        HWND hTray = nullptr;
        HWND hFg = nullptr;
        ULONGLONG tick = 0;
        bool result = false;
    };
    static thread_local std::vector<FsCacheEntry> s_cache;

    HWND hFg = GetForegroundWindow();
    ULONGLONG now = GetTickCount64();
    for (auto& e : s_cache) {
        if (e.hTray == hTrayWnd) {
            if (e.hFg == hFg && (now - e.tick) < 250) {
                return e.result;
            }
            e.hFg = hFg;
            e.tick = now;
            e.result = IsTrueFullscreenAppActiveUncached(hTrayWnd, rcMonitor);
            return e.result;
        }
    }
    bool res = IsTrueFullscreenAppActiveUncached(hTrayWnd, rcMonitor);
    if (s_cache.size() >= 8) s_cache.clear();
    s_cache.push_back({ hTrayWnd, hFg, now, res });
    return res;
}

bool IsTrayCoveringWidget(HWND hTrayWnd, HWND hWidget) {
    if (!hTrayWnd || !hWidget) return false;
    HWND hCur = GetWindow(hTrayWnd, GW_HWNDNEXT);
    for (int i = 0; i < 48 && hCur != nullptr; i++, hCur = GetWindow(hCur, GW_HWNDNEXT)) {
        if (hCur == hWidget) return true;
    }
    return false;
}

void CALLBACK TrayWinEventProc(HWINEVENTHOOK, DWORD, HWND hwnd, LONG idObject, LONG, DWORD, DWORD) {
    if (g_shuttingDown) return;
    if (idObject == OBJID_WINDOW && hwnd && hwnd == g_cachedPrimaryTrayHwnd.load()) {
        if (g_sysMonitorWakeEvent) {
            SetEvent(g_sysMonitorWakeEvent);
        }
    }
}

LRESULT CALLBACK StatsWidgetWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_MOUSEACTIVATE:
            return MA_NOACTIVATE;

        case WM_LBUTTONDOWN: {
            SetCapture(hWnd);
            g_isDraggingWidget = true;
            g_draggedHwnd = hWnd;
            GetCursorPos(&g_dragStartCursor);
            if (hWnd == g_statsWidgetHwnd.load()) {
                g_dragStartOffsetX = g_userOffsetX.load();
            } else {
                g_dragStartOffsetX = g_secUserOffsetX.load();
            }
            return 0;
        }

        case WM_MOUSEMOVE: {
            if (g_isDraggingWidget && (wParam & MK_LBUTTON)) {
                POINT pt{};
                GetCursorPos(&pt);
                int deltaX = pt.x - g_dragStartCursor.x;
                if (g_draggedHwnd == g_statsWidgetHwnd.load()) {
                    int baseX = g_cachedBaseDefaultX.load();
                    int minX = g_cachedMinAllowedX.load();
                    int maxX = g_cachedMaxAllowedX.load();
                    int newOffset = g_dragStartOffsetX + deltaX;
                    if (maxX >= minX && baseX > 0) {
                        newOffset = std::clamp(newOffset, minX - baseX, maxX - baseX);
                    } else {
                        newOffset = std::clamp(newOffset, -8000, 8000);
                    }
                    if (newOffset != g_userOffsetX.exchange(newOffset)) {
                        if (maxX >= minX && baseX > 0) {
                            RECT rcWidget{};
                            GetWindowRect(hWnd, &rcWidget);
                            SetWindowPos(hWnd, nullptr, baseX + newOffset, rcWidget.top, 0, 0,
                                         SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
                        }
                        if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                    }
                } else {
                    int baseX = g_cachedBaseDefaultSecX.load();
                    int minX = g_cachedMinAllowedSecX.load();
                    int maxX = g_cachedMaxAllowedSecX.load();
                    int newOffset = g_dragStartOffsetX + deltaX;
                    if (maxX >= minX) {
                        newOffset = std::clamp(newOffset, minX - baseX, maxX - baseX);
                    } else {
                        newOffset = std::clamp(newOffset, -8000, 8000);
                    }
                    if (newOffset != g_secUserOffsetX.exchange(newOffset)) {
                        RECT rcWidget{};
                        GetWindowRect(hWnd, &rcWidget);
                        SetWindowPos(hWnd, nullptr, baseX + newOffset, rcWidget.top, 0, 0,
                                     SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
                        if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                    }
                }
            }
            return 0;
        }

        case WM_LBUTTONUP: {
            if (g_isDraggingWidget) {
                ReleaseCapture();
                g_isDraggingWidget = false;
                if (g_draggedHwnd == g_statsWidgetHwnd.load()) {
                    SavePersistedOffsetX(g_userOffsetX.load());
                } else {
                    SavePersistedSecOffsetX(g_secUserOffsetX.load());
                }
                g_draggedHwnd = nullptr;
            }
            return 0;
        }

        case WM_CAPTURECHANGED: {
            if (g_isDraggingWidget) {
                g_isDraggingWidget = false;
                if (g_draggedHwnd == g_statsWidgetHwnd.load()) {
                    SavePersistedOffsetX(g_userOffsetX.load());
                } else if (g_draggedHwnd) {
                    SavePersistedSecOffsetX(g_secUserOffsetX.load());
                }
                g_draggedHwnd = nullptr;
            }
            return 0;
        }

        case WM_LBUTTONDBLCLK: {
            ShellExecuteW(nullptr, L"open", L"taskmgr.exe", nullptr, nullptr, SW_SHOWNORMAL);
            return 0;
        }

        case WM_RBUTTONUP: {
            ModSettings s = GetSettings();
            bool vi = UseVietnameseLabels(s);
            HMENU hMenu = CreatePopupMenu();
            if (hMenu) {
                AppendMenuW(hMenu, MF_STRING | (s.showCpuStats ? MF_CHECKED : MF_UNCHECKED), 101,
                            vi ? L"Hiển thị % CPU" : L"Show CPU %");
                AppendMenuW(hMenu, MF_STRING | (s.showGpuStats ? MF_CHECKED : MF_UNCHECKED), 102,
                            vi ? L"Hiển thị % GPU" : L"Show GPU %");
                AppendMenuW(hMenu, MF_STRING | (s.showRamStats ? MF_CHECKED : MF_UNCHECKED), 103,
                            vi ? L"Hiển thị RAM" : L"Show RAM");
                AppendMenuW(hMenu, MF_STRING | (s.showNetStats ? MF_CHECKED : MF_UNCHECKED), 104,
                            vi ? L"Hiển thị tốc độ Mạng (↓/↑)" : L"Show Network Speed (↓/↑)");
                WCHAR pingMenuText[80]{};
                WCHAR ipStr[40]{};
                FormatPingTargetLabel(g_activePingTargetIp.load(), ipStr, ARRAYSIZE(ipStr));
                _snwprintf_s(pingMenuText, _TRUNCATE, vi ? L"Hiển thị Ping mạng (%s)" : L"Show Network Ping (%s)", ipStr);
                AppendMenuW(hMenu, MF_STRING | (s.showPingStats ? MF_CHECKED : MF_UNCHECKED), 108, pingMenuText);
                AppendMenuW(hMenu, MF_SEPARATOR, 0, nullptr);
                AppendMenuW(hMenu, MF_STRING, 105,
                            vi ? L"↺ Đặt lại vị trí mặc định" : L"↺ Reset Default Position");
                AppendMenuW(hMenu, MF_STRING, 106,
                            vi ? L"🖥 Mở Task Manager (Nhấp đúp)" : L"🖥 Open Task Manager (Double-click)");
                AppendMenuW(hMenu, MF_SEPARATOR, 0, nullptr);
                AppendMenuW(hMenu, MF_STRING, 107,
                            vi ? L"✕ Ẩn khung thông số hệ thống" : L"✕ Hide System Monitor");

                POINT pt{};
                GetCursorPos(&pt);
                g_isContextMenuOpen = true;
                SetForegroundWindow(hWnd);
                UINT cmd = TrackPopupMenu(hMenu, TPM_RETURNCMD | TPM_RIGHTBUTTON | TPM_NONOTIFY,
                                          pt.x, pt.y, 0, hWnd, nullptr);
                PostMessageW(hWnd, WM_NULL, 0, 0);
                DestroyMenu(hMenu);
                g_isContextMenuOpen = false;

                if (cmd >= 101 && cmd <= 108) {
                    if (cmd == 105) {
                        if (hWnd == g_statsWidgetHwnd.load()) {
                            g_userOffsetX = 0;
                            SavePersistedOffsetX(0);
                        } else {
                            g_secUserOffsetX = 0;
                            SavePersistedSecOffsetX(0);
                        }
                    } else if (cmd == 106) {
                        ShellExecuteW(nullptr, L"open", L"taskmgr.exe", nullptr, nullptr, SW_SHOWNORMAL);
                    } else {
                        std::lock_guard<std::mutex> lock(g_settingsMutex);
                        if (cmd == 101) {
                            g_settings.showCpuStats = !g_settings.showCpuStats;
                            PersistToggleToStandaloneRegistry(L"showCpuStats", g_settings.showCpuStats);
                        } else if (cmd == 102) {
                            g_settings.showGpuStats = !g_settings.showGpuStats;
                            PersistToggleToStandaloneRegistry(L"showGpuStats", g_settings.showGpuStats);
                        } else if (cmd == 103) {
                            g_settings.showRamStats = !g_settings.showRamStats;
                            PersistToggleToStandaloneRegistry(L"showRamStats", g_settings.showRamStats);
                        } else if (cmd == 104) {
                            g_settings.showNetStats = !g_settings.showNetStats;
                            PersistToggleToStandaloneRegistry(L"showNetStats", g_settings.showNetStats);
                        } else if (cmd == 108) {
                            g_settings.showPingStats = !g_settings.showPingStats;
                            PersistToggleToStandaloneRegistry(L"showPingStats", g_settings.showPingStats);
                        } else if (cmd == 107) {
                            g_settings.enableTaskbarSystemStats = false;
                            PersistToggleToStandaloneRegistry(L"enableTaskbarSystemStats", false);
                        }
                    }
                    if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                }
            }
            return 0;
        }
    }
    return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

constexpr PCWSTR kSecondaryTrayWidgetClassName = L"VnLunarSecondaryTaskbarTrayWnd";

std::atomic<float> g_liveMasterVolume{0.5f};
std::atomic<bool> g_liveMasterMuted{false};
std::atomic<ULONGLONG> g_volumeOsdExpiryTick{0};
std::atomic<bool> g_hasActiveWifi{false};
std::atomic<bool> g_hasActiveEthernet{false};
std::atomic<bool> g_hasActiveNetwork{false};

class AudioVolumeNotificationCallback final : public IAudioEndpointVolumeCallback {
    std::atomic<LONG> m_refCount{1};
public:
    ULONG STDMETHODCALLTYPE AddRef() override {
        return static_cast<ULONG>(++m_refCount);
    }
    ULONG STDMETHODCALLTYPE Release() override {
        LONG r = --m_refCount;
        if (r == 0) delete this;
        return static_cast<ULONG>(r);
    }
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppv) override {
        if (riid == __uuidof(IUnknown) || riid == __uuidof(IAudioEndpointVolumeCallback)) {
            *ppv = static_cast<IAudioEndpointVolumeCallback*>(this);
            AddRef();
            return S_OK;
        }
        *ppv = nullptr;
        return E_NOINTERFACE;
    }
    HRESULT STDMETHODCALLTYPE OnNotify(PAUDIO_VOLUME_NOTIFICATION_DATA pNotify) override {
        if (pNotify) {
            g_liveMasterVolume.store(pNotify->fMasterVolume);
            g_liveMasterMuted.store(pNotify->bMuted != FALSE);
            if (g_sysMonitorWakeEvent) {
                SetEvent(g_sysMonitorWakeEvent);
            }
        }
        return S_OK;
    }
};

IAudioEndpointVolume* g_audioEndpointVolume = nullptr;
AudioVolumeNotificationCallback* g_audioCallback = nullptr;

std::atomic<bool> g_audioDefaultDeviceChanged{false};

class AudioDeviceNotificationClient final : public IMMNotificationClient {
    LONG m_refCount = 1;
public:
    ULONG STDMETHODCALLTYPE AddRef() override { return InterlockedIncrement(&m_refCount); }
    ULONG STDMETHODCALLTYPE Release() override {
        ULONG r = InterlockedDecrement(&m_refCount);
        if (r == 0) delete this;
        return r;
    }
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, VOID** ppv) override {
        if (riid == __uuidof(IUnknown) || riid == __uuidof(IMMNotificationClient)) {
            AddRef();
            *ppv = static_cast<IMMNotificationClient*>(this);
            return S_OK;
        }
        *ppv = nullptr;
        return E_NOINTERFACE;
    }
    HRESULT STDMETHODCALLTYPE OnDeviceStateChanged(LPCWSTR, DWORD) override {
        g_audioDefaultDeviceChanged.store(true);
        if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE OnDeviceAdded(LPCWSTR) override {
        g_audioDefaultDeviceChanged.store(true);
        if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE OnDeviceRemoved(LPCWSTR) override {
        g_audioDefaultDeviceChanged.store(true);
        if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE OnDefaultDeviceChanged(EDataFlow flow, ERole role, LPCWSTR) override {
        if (flow == eRender && role == eConsole) {
            g_audioDefaultDeviceChanged.store(true);
            if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
        }
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE OnPropertyValueChanged(LPCWSTR, const PROPERTYKEY) override {
        return S_OK;
    }
};

IMMDeviceEnumerator* g_audioDeviceEnum = nullptr;
AudioDeviceNotificationClient* g_audioDevClient = nullptr;

void RebindAudioEndpointVolume() {
    if (g_audioEndpointVolume) {
        if (g_audioCallback) {
            g_audioEndpointVolume->UnregisterControlChangeNotify(g_audioCallback);
            g_audioCallback->Release();
            g_audioCallback = nullptr;
        }
        g_audioEndpointVolume->Release();
        g_audioEndpointVolume = nullptr;
    }
    if (!g_audioDeviceEnum) return;

    IMMDevice* pDev = nullptr;
    if (SUCCEEDED(g_audioDeviceEnum->GetDefaultAudioEndpoint(eRender, eConsole, &pDev)) && pDev) {
        IAudioEndpointVolume* pVol = nullptr;
        if (SUCCEEDED(pDev->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, nullptr, (void**)&pVol)) && pVol) {
            float cur = 0.0f;
            BOOL muted = FALSE;
            pVol->GetMasterVolumeLevelScalar(&cur);
            pVol->GetMute(&muted);
            g_liveMasterVolume.store(cur);
            g_liveMasterMuted.store(muted != FALSE);

            g_audioCallback = new AudioVolumeNotificationCallback();
            pVol->RegisterControlChangeNotify(g_audioCallback);
            g_audioEndpointVolume = pVol;
        }
        pDev->Release();
    }
}

void InitAudioEndpoint() {
    if (!g_audioDeviceEnum) {
        if (SUCCEEDED(CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_INPROC_SERVER,
                                       __uuidof(IMMDeviceEnumerator), (void**)&g_audioDeviceEnum)) && g_audioDeviceEnum) {
            g_audioDevClient = new AudioDeviceNotificationClient();
            g_audioDeviceEnum->RegisterEndpointNotificationCallback(g_audioDevClient);
        }
    }
    if (!g_audioEndpointVolume) {
        RebindAudioEndpointVolume();
    }
}

void UninitAudioEndpoint() {
    if (g_audioEndpointVolume) {
        if (g_audioCallback) {
            g_audioEndpointVolume->UnregisterControlChangeNotify(g_audioCallback);
            g_audioCallback->Release();
            g_audioCallback = nullptr;
        }
        g_audioEndpointVolume->Release();
        g_audioEndpointVolume = nullptr;
    }
    if (g_audioDeviceEnum) {
        if (g_audioDevClient) {
            g_audioDeviceEnum->UnregisterEndpointNotificationCallback(g_audioDevClient);
            g_audioDevClient->Release();
            g_audioDevClient = nullptr;
        }
        g_audioDeviceEnum->Release();
        g_audioDeviceEnum = nullptr;
    }
}

void AdjustMasterVolume(float delta) {
    if (!g_audioEndpointVolume) InitAudioEndpoint();
    if (g_audioEndpointVolume) {
        float cur = 0.0f;
        if (SUCCEEDED(g_audioEndpointVolume->GetMasterVolumeLevelScalar(&cur))) {
            float next = std::clamp(cur + delta, 0.0f, 1.0f);
            g_audioEndpointVolume->SetMasterVolumeLevelScalar(next, nullptr);
            if (next > 0.001f && g_liveMasterMuted.load()) {
                g_audioEndpointVolume->SetMute(FALSE, nullptr);
                g_liveMasterMuted.store(false);
            }
            g_liveMasterVolume.store(next);
        }
    }
}

void SetMasterVolumeScalar(float scalar) {
    if (!g_audioEndpointVolume) InitAudioEndpoint();
    if (g_audioEndpointVolume) {
        float next = std::clamp(scalar, 0.0f, 1.0f);
        g_audioEndpointVolume->SetMasterVolumeLevelScalar(next, nullptr);
        if (next > 0.001f && g_liveMasterMuted.load()) {
            g_audioEndpointVolume->SetMute(FALSE, nullptr);
            g_liveMasterMuted.store(false);
        }
        g_liveMasterVolume.store(next);
    }
}

void ToggleMasterMute() {
    if (!g_audioEndpointVolume) InitAudioEndpoint();
    if (g_audioEndpointVolume) {
        BOOL curMuted = FALSE;
        if (SUCCEEDED(g_audioEndpointVolume->GetMute(&curMuted))) {
            BOOL nextMuted = !curMuted;
            g_audioEndpointVolume->SetMute(nextMuted, nullptr);
            g_liveMasterMuted.store(nextMuted != FALSE);
        }
    }
}

// Inline DEVPKEY_Device_FriendlyName & undocumented Windows IPolicyConfig for switching default speaker/headset
static constexpr PROPERTYKEY kPkeyDeviceFriendlyName = {
    { 0xa45c254e, 0xdf1c, 0x4efd, { 0x80, 0x20, 0x67, 0xd1, 0x46, 0xa8, 0x50, 0xe0 } }, 14
};
static constexpr GUID kClsidPolicyConfigClient =
    { 0x870af99c, 0x171d, 0x4f9e, { 0xaf, 0x0d, 0xe6, 0x3d, 0xf4, 0x0c, 0x2b, 0xc9 } };
static constexpr GUID kIidIPolicyConfig =
    { 0xf8679f50, 0x850a, 0x41cf, { 0x9c, 0x72, 0x43, 0x0f, 0x29, 0x02, 0x90, 0xc8 } };

struct IPolicyConfig : public IUnknown {
    virtual HRESULT STDMETHODCALLTYPE GetMixFormat(PCWSTR, void**) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetDeviceFormat(PCWSTR, INT, void**) = 0;
    virtual HRESULT STDMETHODCALLTYPE ResetDeviceFormat(PCWSTR) = 0;
    virtual HRESULT STDMETHODCALLTYPE SetDeviceFormat(PCWSTR, void*, void*) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetProcessingPeriod(PCWSTR, INT, void*, void*) = 0;
    virtual HRESULT STDMETHODCALLTYPE SetProcessingPeriod(PCWSTR, void*) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetShareMode(PCWSTR, void*) = 0;
    virtual HRESULT STDMETHODCALLTYPE SetShareMode(PCWSTR, void*) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(PCWSTR, const PROPERTYKEY&, PROPVARIANT*) = 0;
    virtual HRESULT STDMETHODCALLTYPE SetPropertyValue(PCWSTR, const PROPERTYKEY&, PROPVARIANT*) = 0;
    virtual HRESULT STDMETHODCALLTYPE SetDefaultEndpoint(PCWSTR wszDeviceId, ERole role) = 0;
    virtual HRESULT STDMETHODCALLTYPE SetEndpointVisibility(PCWSTR, INT) = 0;
};

const IID kIidAudioMeterInformation = {
    0xC02216F6, 0x8C67, 0x4B5B, { 0x9D, 0x00, 0xD0, 0x08, 0xE7, 0x3E, 0x00, 0x64 }
};

struct IVnAudioMeterInformation : public IUnknown {
    virtual HRESULT STDMETHODCALLTYPE GetPeakValue(float* pfPeak) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetMeteringChannelCount(UINT* pnChannelCount) = 0;
    virtual HRESULT STDMETHODCALLTYPE GetChannelsPeakValues(UINT32 u32ChannelCount, float* afPeakValues) = 0;
    virtual HRESULT STDMETHODCALLTYPE QueryHardwareSupport(DWORD* pdwHardwareSupportMask) = 0;
};

float QueryAudioDevicePeakValue(const std::wstring& deviceId) {
    if (deviceId.empty() || g_liveMasterMuted.load()) return 0.0f;
    IMMDeviceEnumerator* pEnum = g_audioDeviceEnum;
    bool ownedEnum = false;
    if (!pEnum) {
        if (FAILED(CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_INPROC_SERVER,
                                    __uuidof(IMMDeviceEnumerator), (void**)&pEnum)) || !pEnum) {
            return 0.0f;
        }
        ownedEnum = true;
    }
    float peak = 0.0f;
    IMMDevice* pDev = nullptr;
    if (SUCCEEDED(pEnum->GetDevice(deviceId.c_str(), &pDev)) && pDev) {
        IVnAudioMeterInformation* pMeter = nullptr;
        if (SUCCEEDED(pDev->Activate(kIidAudioMeterInformation, CLSCTX_ALL, nullptr, (void**)&pMeter)) && pMeter) {
            float v = 0.0f;
            if (SUCCEEDED(pMeter->GetPeakValue(&v))) {
                peak = v;
            }
            pMeter->Release();
        }
        pDev->Release();
    }
    if (ownedEnum) pEnum->Release();
    return peak;
}

struct AudioOutputDeviceItem {
    std::wstring id;
    std::wstring name;
    std::wstring fxPreset;
    bool isDefault = false;
    bool isFxVirtual = false;
    bool isFxTarget = false;
    int fxSessionState = 0; // 0=none, 1=inactive, 2=active
};

bool ContainsCaseInsensitive(const std::wstring& hay, const std::wstring& needle) {
    if (needle.empty() || hay.size() < needle.size()) return false;
    for (size_t i = 0; i + needle.size() <= hay.size(); ++i) {
        bool ok = true;
        for (size_t j = 0; j < needle.size(); ++j) {
            if (towlower(hay[i + j]) != towlower(needle[j])) {
                ok = false;
                break;
            }
        }
        if (ok) return true;
    }
    return false;
}

void FindRunningFxSoundProcess(DWORD& outPid, std::wstring& outExePath) {
    outPid = 0;
    outExePath.clear();
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnap == INVALID_HANDLE_VALUE) return;
    PROCESSENTRY32W pe{};
    pe.dwSize = sizeof(pe);
    if (Process32FirstW(hSnap, &pe)) {
        do {
            if (_wcsicmp(pe.szExeFile, L"FxSound.exe") == 0) {
                outPid = pe.th32ProcessID;
                HANDLE hProc = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pe.th32ProcessID);
                if (hProc) {
                    WCHAR buf[MAX_PATH]{};
                    DWORD sz = ARRAYSIZE(buf);
                    if (QueryFullProcessImageNameW(hProc, 0, buf, &sz)) {
                        outExePath = buf;
                    }
                    CloseHandle(hProc);
                }
                break;
            }
        } while (Process32NextW(hSnap, &pe));
    }
    CloseHandle(hSnap);
}

int GetProcessAudioSessionState(IMMDevice* pDev, DWORD targetPid) {
    if (!pDev || targetPid == 0) return 0;
    IAudioSessionManager2* pMgr = nullptr;
    if (FAILED(pDev->Activate(__uuidof(IAudioSessionManager2), CLSCTX_ALL, nullptr, (void**)&pMgr)) || !pMgr) {
        return 0;
    }
    int bestState = 0; // 0=none, 1=inactive, 2=active
    IAudioSessionEnumerator* pEnum = nullptr;
    if (SUCCEEDED(pMgr->GetSessionEnumerator(&pEnum)) && pEnum) {
        int count = 0;
        if (SUCCEEDED(pEnum->GetCount(&count))) {
            for (int i = 0; i < count; ++i) {
                IAudioSessionControl* pCtrl = nullptr;
                if (SUCCEEDED(pEnum->GetSession(i, &pCtrl)) && pCtrl) {
                    IAudioSessionControl2* pCtrl2 = nullptr;
                    if (SUCCEEDED(pCtrl->QueryInterface(__uuidof(IAudioSessionControl2), (void**)&pCtrl2)) && pCtrl2) {
                        DWORD pid = 0;
                        AudioSessionState state = AudioSessionStateExpired;
                        if (SUCCEEDED(pCtrl2->GetProcessId(&pid)) && pid == targetPid &&
                            SUCCEEDED(pCtrl2->GetState(&state))) {
                            if (state == AudioSessionStateActive) {
                                bestState = 2;
                            } else if (state == AudioSessionStateInactive && bestState < 1) {
                                bestState = 1;
                            }
                        }
                        pCtrl2->Release();
                    }
                    pCtrl->Release();
                    if (bestState == 2) break;
                }
            }
        }
        pEnum->Release();
    }
    pMgr->Release();
    return bestState;
}

std::wstring UnescapeBasicXmlEntities(std::wstring s) {
    auto rep = [&](PCWSTR from, PCWSTR to) {
        size_t flen = wcslen(from);
        size_t tlen = wcslen(to);
        size_t pos = 0;
        while ((pos = s.find(from, pos)) != std::wstring::npos) {
            s.replace(pos, flen, to, tlen);
            pos += tlen;
        }
    };
    rep(L"&quot;", L"\"");
    rep(L"&apos;", L"'");
    rep(L"&lt;", L"<");
    rep(L"&gt;", L">");
    rep(L"&amp;", L"&");
    rep(L"&#13;", L"\r");
    rep(L"&#10;", L"\n");
    return s;
}

std::wstring ExtractXmlAttrVal(const std::wstring& xml, const std::wstring& keyName) {
    std::wstring marker = L"name=\"" + keyName + L"\"";
    size_t pos = xml.find(marker);
    if (pos == std::wstring::npos) return L"";
    size_t valPos = xml.find(L"val=\"", pos);
    if (valPos == std::wstring::npos) return L"";
    valPos += 5;
    size_t endPos = xml.find(L'\"', valPos);
    if (endPos == std::wstring::npos) return L"";
    return UnescapeBasicXmlEntities(xml.substr(valPos, endPos - valPos));
}

struct FxSoundDevicePresetEntry {
    std::wstring deviceId;
    std::wstring deviceName;
    std::wstring preset;
};

std::wstring ExtractJsonStringField(const std::wstring& obj, const std::wstring& key) {
    std::wstring marker = L"\"" + key + L"\"";
    size_t pos = obj.find(marker);
    if (pos == std::wstring::npos) return L"";
    pos += marker.size();
    size_t colon = obj.find(L':', pos);
    if (colon == std::wstring::npos) return L"";
    size_t q1 = obj.find(L'\"', colon + 1);
    if (q1 == std::wstring::npos) return L"";
    std::wstring out;
    for (size_t i = q1 + 1; i < obj.size(); ++i) {
        wchar_t ch = obj[i];
        if (ch == L'\\' && i + 1 < obj.size()) {
            wchar_t nxt = obj[++i];
            if (nxt == L'\"' || nxt == L'\\' || nxt == L'/') out.push_back(nxt);
            else if (nxt == L'n') out.push_back(L'\n');
            else if (nxt == L'r') out.push_back(L'\r');
            else if (nxt == L't') out.push_back(L'\t');
            else out.push_back(nxt);
        } else if (ch == L'\"') {
            break;
        } else {
            out.push_back(ch);
        }
    }
    return out;
}

void ParseFxSoundDeviceConfigs(const std::wstring& json, std::vector<FxSoundDevicePresetEntry>& outPresets) {
    outPresets.clear();
    size_t pos = 0;
    while (pos < json.size()) {
        size_t open = json.find(L'{', pos);
        if (open == std::wstring::npos) break;
        bool inStr = false;
        int depth = 0;
        size_t close = std::wstring::npos;
        for (size_t i = open; i < json.size(); ++i) {
            wchar_t ch = json[i];
            if (inStr) {
                if (ch == L'\\' && i + 1 < json.size()) {
                    ++i;
                } else if (ch == L'\"') {
                    inStr = false;
                }
            } else {
                if (ch == L'\"') {
                    inStr = true;
                } else if (ch == L'{') {
                    ++depth;
                } else if (ch == L'}') {
                    if (--depth == 0) {
                        close = i;
                        break;
                    }
                }
            }
        }
        if (close == std::wstring::npos) break;
        std::wstring block = json.substr(open, close - open + 1);
        FxSoundDevicePresetEntry entry{};
        entry.deviceId = ExtractJsonStringField(block, L"device_id");
        entry.deviceName = ExtractJsonStringField(block, L"device_name");
        entry.preset = ExtractJsonStringField(block, L"preset");
        if (!entry.preset.empty() && (!entry.deviceId.empty() || !entry.deviceName.empty())) {
            outPresets.push_back(std::move(entry));
        }
        pos = close + 1;
    }
}

void ReadFxSoundSettings(std::wstring& outDeviceId,
                         std::wstring& outDeviceName,
                         bool& outPowerOn,
                         std::vector<FxSoundDevicePresetEntry>& outPresets) {
    outDeviceId.clear();
    outDeviceName.clear();
    outPowerOn = true;
    outPresets.clear();
    WCHAR path[MAX_PATH]{};
    if (ExpandEnvironmentStringsW(L"%APPDATA%\\FxSound\\FxSound.settings", path, ARRAYSIZE(path)) == 0) return;

    HANDLE hFile = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                               nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (hFile == INVALID_HANDLE_VALUE) return;

    LARGE_INTEGER fsz{};
    if (GetFileSizeEx(hFile, &fsz) && fsz.QuadPart > 0 && fsz.QuadPart < 256 * 1024) {
        std::string raw(static_cast<size_t>(fsz.QuadPart), '\0');
        DWORD rd = 0;
        if (ReadFile(hFile, raw.data(), static_cast<DWORD>(raw.size()), &rd, nullptr) && rd > 0) {
            int wlen = MultiByteToWideChar(CP_UTF8, 0, raw.data(), static_cast<int>(rd), nullptr, 0);
            if (wlen > 0) {
                std::wstring xml(static_cast<size_t>(wlen), L'\0');
                MultiByteToWideChar(CP_UTF8, 0, raw.data(), static_cast<int>(rd), xml.data(), wlen);
                outDeviceId = ExtractXmlAttrVal(xml, L"output_device_id");
                outDeviceName = ExtractXmlAttrVal(xml, L"output_device_name");
                std::wstring pwr = ExtractXmlAttrVal(xml, L"power");
                if (pwr == L"0") outPowerOn = false;
                std::wstring devConfigs = ExtractXmlAttrVal(xml, L"device_configs");
                if (!devConfigs.empty()) {
                    ParseFxSoundDeviceConfigs(devConfigs, outPresets);
                }
            }
        }
    }
    CloseHandle(hFile);
}

bool SwitchFxSoundOutputDevice(const std::wstring& fxExePath,
                               const std::wstring& deviceName,
                               const std::wstring& presetName) {
    if (fxExePath.empty() || deviceName.empty()) return false;
    auto stripQuotes = [](std::wstring s) {
        s.erase(std::remove(s.begin(), s.end(), L'\"'), s.end());
        return s;
    };
    std::wstring cleanDev = stripQuotes(deviceName);
    std::wstring cleanPreset = stripQuotes(presetName);
    std::wstring cmdLine = L"\"" + fxExePath + L"\" --output=\"" + cleanDev + L"\"";
    if (!cleanPreset.empty() && _wcsicmp(cleanPreset.c_str(), L"None") != 0) {
        cmdLine += L" --preset=\"" + cleanPreset + L"\"";
    }
    cmdLine += L" --run_minimized";
    STARTUPINFOW si{};
    si.cb = sizeof(si);
    si.dwFlags = STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;
    PROCESS_INFORMATION pi{};
    if (!CreateProcessW(fxExePath.c_str(), cmdLine.data(), nullptr, nullptr, FALSE,
                        CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi)) {
        return false;
    }
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    return true;
}

void EnumerateAudioOutputDevices(std::vector<AudioOutputDeviceItem>& outDevices,
                                 bool& outFxSoundManaging,
                                 std::wstring& outFxExePath) {
    outDevices.clear();
    outFxSoundManaging = false;
    DWORD fxPid = 0;
    FindRunningFxSoundProcess(fxPid, outFxExePath);

    IMMDeviceEnumerator* pEnum = nullptr;
    if (FAILED(CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_INPROC_SERVER,
                                __uuidof(IMMDeviceEnumerator), (void**)&pEnum)) || !pEnum) {
        return;
    }

    std::wstring defaultId;
    IMMDevice* pDef = nullptr;
    if (SUCCEEDED(pEnum->GetDefaultAudioEndpoint(eRender, eConsole, &pDef)) && pDef) {
        LPWSTR pId = nullptr;
        if (SUCCEEDED(pDef->GetId(&pId)) && pId) {
            defaultId = pId;
            CoTaskMemFree(pId);
        }
        pDef->Release();
    }

    IMMDeviceCollection* pColl = nullptr;
    if (SUCCEEDED(pEnum->EnumAudioEndpoints(eRender, DEVICE_STATE_ACTIVE, &pColl)) && pColl) {
        UINT count = 0;
        pColl->GetCount(&count);
        for (UINT i = 0; i < count; ++i) {
            IMMDevice* pDev = nullptr;
            if (SUCCEEDED(pColl->Item(i, &pDev)) && pDev) {
                AudioOutputDeviceItem item{};
                LPWSTR pId = nullptr;
                if (SUCCEEDED(pDev->GetId(&pId)) && pId) {
                    item.id = pId;
                    CoTaskMemFree(pId);
                }
                item.isDefault = (!defaultId.empty() && item.id == defaultId);
                IPropertyStore* pProps = nullptr;
                if (SUCCEEDED(pDev->OpenPropertyStore(STGM_READ, &pProps)) && pProps) {
                    PROPVARIANT varName;
                    PropVariantInit(&varName);
                    if (SUCCEEDED(pProps->GetValue(kPkeyDeviceFriendlyName, &varName)) &&
                        varName.vt == VT_LPWSTR && varName.pwszVal) {
                        item.name = varName.pwszVal;
                    }
                    PropVariantClear(&varName);
                    pProps->Release();
                }
                if (item.name.empty()) item.name = L"Audio Output";
                item.isFxVirtual = ContainsCaseInsensitive(item.name, L"fxsound");
                if (item.isDefault && item.isFxVirtual && !outFxExePath.empty()) {
                    outFxSoundManaging = true;
                }
                if (!item.isFxVirtual && fxPid != 0) {
                    item.fxSessionState = GetProcessAudioSessionState(pDev, fxPid);
                }
                outDevices.push_back(std::move(item));
                pDev->Release();
            }
        }
        pColl->Release();
    }
    pEnum->Release();

    if (outFxSoundManaging) {
        std::wstring fxOutId, fxOutName;
        bool fxPowerOn = true;
        std::vector<FxSoundDevicePresetEntry> fxPresets;
        ReadFxSoundSettings(fxOutId, fxOutName, fxPowerOn, fxPresets);

        // Bind per-device configured FxSound presets (match ID first, then name)
        for (auto& d : outDevices) {
            if (d.isFxVirtual) continue;
            for (const auto& cfg : fxPresets) {
                if (!cfg.deviceId.empty() && _wcsicmp(d.id.c_str(), cfg.deviceId.c_str()) == 0) {
                    d.fxPreset = cfg.preset;
                    break;
                }
            }
            if (d.fxPreset.empty()) {
                for (const auto& cfg : fxPresets) {
                    if (!cfg.deviceName.empty() && _wcsicmp(d.name.c_str(), cfg.deviceName.c_str()) == 0) {
                        d.fxPreset = cfg.preset;
                        break;
                    }
                }
            }
        }

        // Priority 1 (0ms live): physical endpoint with an Active WASAPI render session owned by FxSound.exe
        bool foundTarget = false;
        for (auto& d : outDevices) {
            if (!d.isFxVirtual && d.fxSessionState == 2) {
                d.isFxTarget = true;
                foundTarget = true;
                break;
            }
        }

        // Priority 2 (0ms idle): if audio is paused and exactly one physical endpoint holds FxSound's Inactive session
        if (!foundTarget && fxPowerOn) {
            int inactiveIdx = -1;
            int inactiveCount = 0;
            for (int i = 0; i < static_cast<int>(outDevices.size()); ++i) {
                if (!outDevices[i].isFxVirtual && outDevices[i].fxSessionState == 1) {
                    inactiveIdx = i;
                    ++inactiveCount;
                }
            }
            if (inactiveCount == 1 && inactiveIdx >= 0) {
                outDevices[inactiveIdx].isFxTarget = true;
                foundTarget = true;
            }
        }

        // Priority 3 (fallback): use FxSound.settings
        if (!foundTarget) {
            if (!fxPowerOn) {
                outFxSoundManaging = false;
            } else {
                for (auto& d : outDevices) {
                    if (!d.isFxVirtual) {
                        if ((!fxOutId.empty() && _wcsicmp(d.id.c_str(), fxOutId.c_str()) == 0) ||
                            (!fxOutName.empty() && _wcsicmp(d.name.c_str(), fxOutName.c_str()) == 0)) {
                            d.isFxTarget = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    // Keep stable order: FxSound virtual device (if default/managing) at top, then alphabetical physical speakers
    std::stable_sort(outDevices.begin(), outDevices.end(),
                     [&](const AudioOutputDeviceItem& a, const AudioOutputDeviceItem& b) {
                         if (outFxSoundManaging) {
                             if (a.isFxVirtual != b.isFxVirtual) return a.isFxVirtual;
                         }
                         return _wcsicmp(a.name.c_str(), b.name.c_str()) < 0;
                     });
}

bool SetDefaultAudioOutputDevice(const std::wstring& deviceId) {
    if (deviceId.empty()) return false;
    IPolicyConfig* pPolicy = nullptr;
    HRESULT hr = CoCreateInstance(kClsidPolicyConfigClient, nullptr, CLSCTX_ALL,
                                  kIidIPolicyConfig, reinterpret_cast<void**>(&pPolicy));
    if (FAILED(hr) || !pPolicy) return false;

    pPolicy->SetDefaultEndpoint(deviceId.c_str(), eConsole);
    pPolicy->SetDefaultEndpoint(deviceId.c_str(), eMultimedia);
    pPolicy->Release();

    RebindAudioEndpointVolume();
    return true;
}

// Dynamic wlanapi.dll bindings (no link dependency on wlanapi.lib)
struct WifiNetworkItem {
    std::wstring ssid;
    std::wstring profileName;
    ULONG signalQuality = 0;
    bool isConnected = false;
    bool hasProfile = false;
    bool isSecured = false;
    GUID ifaceGuid{};
};

struct WlanApiFuncs {
    HMODULE hMod = nullptr;
    using WlanOpenHandle_t = DWORD(WINAPI*)(DWORD, PVOID, PDWORD, PHANDLE);
    using WlanCloseHandle_t = DWORD(WINAPI*)(HANDLE, PVOID);
    using WlanEnumInterfaces_t = DWORD(WINAPI*)(HANDLE, PVOID, PWLAN_INTERFACE_INFO_LIST*);
    using WlanGetAvailableNetworkList_t = DWORD(WINAPI*)(HANDLE, const GUID*, DWORD, PVOID, PWLAN_AVAILABLE_NETWORK_LIST*);
    using WlanScan_t = DWORD(WINAPI*)(HANDLE, const GUID*, const PDOT11_SSID, const PWLAN_RAW_DATA, PVOID);
    using WlanConnect_t = DWORD(WINAPI*)(HANDLE, const GUID*, const PWLAN_CONNECTION_PARAMETERS, PVOID);
    using WlanDisconnect_t = DWORD(WINAPI*)(HANDLE, const GUID*, PVOID);
    using WlanFreeMemory_t = VOID(WINAPI*)(PVOID);

    WlanOpenHandle_t OpenHandle = nullptr;
    WlanCloseHandle_t CloseHandle = nullptr;
    WlanEnumInterfaces_t EnumInterfaces = nullptr;
    WlanGetAvailableNetworkList_t GetAvailableNetworkList = nullptr;
    WlanScan_t Scan = nullptr;
    WlanConnect_t Connect = nullptr;
    WlanDisconnect_t Disconnect = nullptr;
    WlanFreeMemory_t FreeMemory = nullptr;

    bool EnsureLoaded() {
        if (OpenHandle) return true;
        if (!hMod) {
            hMod = LoadLibraryExW(L"wlanapi.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
        }
        if (!hMod) return false;
        OpenHandle = reinterpret_cast<WlanOpenHandle_t>(GetProcAddress(hMod, "WlanOpenHandle"));
        CloseHandle = reinterpret_cast<WlanCloseHandle_t>(GetProcAddress(hMod, "WlanCloseHandle"));
        EnumInterfaces = reinterpret_cast<WlanEnumInterfaces_t>(GetProcAddress(hMod, "WlanEnumInterfaces"));
        GetAvailableNetworkList = reinterpret_cast<WlanGetAvailableNetworkList_t>(GetProcAddress(hMod, "WlanGetAvailableNetworkList"));
        Scan = reinterpret_cast<WlanScan_t>(GetProcAddress(hMod, "WlanScan"));
        Connect = reinterpret_cast<WlanConnect_t>(GetProcAddress(hMod, "WlanConnect"));
        Disconnect = reinterpret_cast<WlanDisconnect_t>(GetProcAddress(hMod, "WlanDisconnect"));
        FreeMemory = reinterpret_cast<WlanFreeMemory_t>(GetProcAddress(hMod, "WlanFreeMemory"));
        return OpenHandle && CloseHandle && EnumInterfaces && GetAvailableNetworkList && FreeMemory;
    }

    void Unload() {
        if (hMod) {
            FreeLibrary(hMod);
            hMod = nullptr;
        }
        OpenHandle = nullptr;
        CloseHandle = nullptr;
        EnumInterfaces = nullptr;
        GetAvailableNetworkList = nullptr;
        Scan = nullptr;
        Connect = nullptr;
        Disconnect = nullptr;
        FreeMemory = nullptr;
    }
};

WlanApiFuncs g_wlanApi;

std::wstring SsidBytesToWstring(const DOT11_SSID& s) {
    if (s.uSSIDLength == 0) return L"";
    int len = static_cast<int>(std::min<ULONG>(s.uSSIDLength, DOT11_SSID_MAX_LENGTH));
    int wlen = MultiByteToWideChar(CP_UTF8, 0, reinterpret_cast<const char*>(s.ucSSID), len, nullptr, 0);
    if (wlen <= 0) return L"";
    std::wstring out(static_cast<size_t>(wlen), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, reinterpret_cast<const char*>(s.ucSSID), len, out.data(), wlen);
    return out;
}

void QueryWifiNetworks(bool& outHasAdapter, std::vector<WifiNetworkItem>& outNetworks, bool triggerScan) {
    outHasAdapter = false;
    outNetworks.clear();
    if (!g_wlanApi.EnsureLoaded()) return;

    DWORD negVer = 0;
    HANDLE hClient = nullptr;
    if (g_wlanApi.OpenHandle(2, nullptr, &negVer, &hClient) != ERROR_SUCCESS || !hClient) return;

    PWLAN_INTERFACE_INFO_LIST pIfList = nullptr;
    if (g_wlanApi.EnumInterfaces(hClient, nullptr, &pIfList) == ERROR_SUCCESS && pIfList) {
        outHasAdapter = (pIfList->dwNumberOfItems > 0);
        std::unordered_map<std::wstring, WifiNetworkItem> dedup;
        for (DWORD i = 0; i < pIfList->dwNumberOfItems; ++i) {
            const GUID& guid = pIfList->InterfaceInfo[i].InterfaceGuid;
            if (triggerScan && g_wlanApi.Scan) {
                g_wlanApi.Scan(hClient, &guid, nullptr, nullptr, nullptr);
            }
            PWLAN_AVAILABLE_NETWORK_LIST pNetList = nullptr;
            if (g_wlanApi.GetAvailableNetworkList(hClient, &guid, 0, nullptr, &pNetList) == ERROR_SUCCESS && pNetList) {
                for (DWORD j = 0; j < pNetList->dwNumberOfItems; ++j) {
                    const WLAN_AVAILABLE_NETWORK& n = pNetList->Network[j];
                    std::wstring ssid = SsidBytesToWstring(n.dot11Ssid);
                    if (ssid.empty()) continue;

                    WifiNetworkItem item{};
                    item.ssid = ssid;
                    item.profileName = n.strProfileName;
                    item.signalQuality = n.wlanSignalQuality;
                    item.isConnected = (n.dwFlags & WLAN_AVAILABLE_NETWORK_CONNECTED) != 0;
                    item.hasProfile = (n.dwFlags & WLAN_AVAILABLE_NETWORK_HAS_PROFILE) != 0 || !item.profileName.empty();
                    item.isSecured = (n.bSecurityEnabled != FALSE);
                    item.ifaceGuid = guid;

                    auto it = dedup.find(ssid);
                    if (it == dedup.end()) {
                        dedup.emplace(ssid, std::move(item));
                    } else {
                        auto& cur = it->second;
                        if (item.isConnected && !cur.isConnected) {
                            cur = std::move(item);
                        } else if (item.isConnected == cur.isConnected) {
                            if (item.hasProfile && !cur.hasProfile) {
                                cur.hasProfile = true;
                                if (!item.profileName.empty()) cur.profileName = item.profileName;
                            }
                            if (item.signalQuality > cur.signalQuality) {
                                cur.signalQuality = item.signalQuality;
                            }
                        }
                    }
                }
                g_wlanApi.FreeMemory(pNetList);
            }
        }
        g_wlanApi.FreeMemory(pIfList);

        outNetworks.reserve(dedup.size());
        for (auto& kv : dedup) {
            outNetworks.push_back(std::move(kv.second));
        }
        std::sort(outNetworks.begin(), outNetworks.end(),
                  [](const WifiNetworkItem& a, const WifiNetworkItem& b) {
                      if (a.isConnected != b.isConnected) return a.isConnected;
                      if (a.hasProfile != b.hasProfile) return a.hasProfile;
                      if (a.signalQuality != b.signalQuality) return a.signalQuality > b.signalQuality;
                      return a.ssid < b.ssid;
                  });
    }
    g_wlanApi.CloseHandle(hClient, nullptr);
}

bool ConnectOrDisconnectWifiItem(const WifiNetworkItem& item) {
    if (!g_wlanApi.EnsureLoaded()) return false;
    DWORD negVer = 0;
    HANDLE hClient = nullptr;
    if (g_wlanApi.OpenHandle(2, nullptr, &negVer, &hClient) != ERROR_SUCCESS || !hClient) return false;

    bool ok = false;
    if (item.isConnected) {
        if (g_wlanApi.Disconnect) {
            ok = (g_wlanApi.Disconnect(hClient, &item.ifaceGuid, nullptr) == ERROR_SUCCESS);
        }
    } else if (item.hasProfile && !item.profileName.empty() && g_wlanApi.Connect) {
        WLAN_CONNECTION_PARAMETERS params{};
        params.wlanConnectionMode = wlan_connection_mode_profile;
        params.strProfile = item.profileName.c_str();
        params.pDot11Ssid = nullptr;
        params.pDesiredBssidList = nullptr;
        params.dot11BssType = dot11_BSS_type_any;
        params.dwFlags = 0;
        ok = (g_wlanApi.Connect(hClient, &item.ifaceGuid, &params, nullptr) == ERROR_SUCCESS);
    }
    g_wlanApi.CloseHandle(hClient, nullptr);
    return ok;
}

bool DetectNetworkState(GetIfTable2_t pGetIfTable2, FreeMibTable_t pFreeMibTable,
                        bool& outWifi, bool& outEthernet, bool& outConnected) {
    outWifi = false;
    outEthernet = false;
    outConnected = false;
    if (!pGetIfTable2 || !pFreeMibTable) return false;

    PVOID rawTable = nullptr;
    if (pGetIfTable2(&rawTable) != 0 || !rawTable) return false;

    const auto* base = static_cast<const uint8_t*>(rawTable);
    ULONG numEntries = 0;
    memcpy(&numEntries, base, sizeof(numEntries));

    for (ULONG i = 0; i < numEntries; i++) {
        const uint8_t* row = base + kMibIfTable2TableOffset + static_cast<size_t>(i) * kMibIfRow2Size;
        ULONG type = 0, operStatus = 0;
        uint8_t flags = row[kMibIfRow2FlagsOffset];
        memcpy(&type, row + kMibIfRow2TypeOffset, sizeof(type));
        memcpy(&operStatus, row + kMibIfRow2OperStatusOffset, sizeof(operStatus));

        if (type == 24) continue;       // IF_TYPE_SOFTWARE_LOOPBACK
        if ((flags & 0x01) == 0) continue; // Require HardwareInterface (excludes Hyper-V vEthernet, vSwitch, WSL, VPN)
        if (flags & 0x02) continue;        // Exclude FilterInterface
        if ((flags & 0x04) == 0) continue; // Require physical ConnectorPresent
        if (flags & 0x10) continue;        // Exclude NotMediaConnected
        ULONG mediaConn = 0;
        memcpy(&mediaConn, row + kMibIfRow2MediaConnOffset, sizeof(mediaConn));
        if (mediaConn != 1) continue;      // Require MediaConnectStateConnected
        if (operStatus == 1) {             // IfOperStatusUp
            outConnected = true;
            if (type == 71) {              // IF_TYPE_IEEE80211 (Physical Wi-Fi)
                outWifi = true;
            } else if (type == 6) {        // IF_TYPE_ETHERNET_CSMACD (Physical Wired Ethernet)
                outEthernet = true;
            }
        }
    }
    pFreeMibTable(rawTable);
    return true;
}

struct LayeredPopupSurface {
    HDC hdcMem = nullptr;
    HBITMAP hBmp = nullptr;
    HGDIOBJ oldBmp = nullptr;
    ID2D1DCRenderTarget* dcTarget = nullptr;
    ID2D1SolidColorBrush* cachedBrush = nullptr;
    int pxW = 0;
    int pxH = 0;
    float dpi = 0.0f;
    int baseX = 0;
    int baseY = 0;
    bool animActive = false;
    ULONGLONG animStartTick = 0;
    float animStartOffsetY = 0.0f;

    void Release() {
        if (cachedBrush) { cachedBrush->Release(); cachedBrush = nullptr; }
        if (dcTarget) { dcTarget->Release(); dcTarget = nullptr; }
        if (hdcMem) {
            if (oldBmp) { SelectObject(hdcMem, oldBmp); oldBmp = nullptr; }
            if (hBmp) { DeleteObject(hBmp); hBmp = nullptr; }
            DeleteDC(hdcMem);
            hdcMem = nullptr;
        }
        pxW = pxH = 0;
        dpi = 0.0f;
        animActive = false;
    }

    bool Ensure(ID2D1Factory* factory, int w, int h, float newDpi) {
        if (!factory || w <= 0 || h <= 0) return false;
        if (!dcTarget || std::abs(newDpi - dpi) > 0.5f) {
            if (cachedBrush) { cachedBrush->Release(); cachedBrush = nullptr; }
            if (dcTarget) { dcTarget->Release(); dcTarget = nullptr; }
            D2D1_RENDER_TARGET_PROPERTIES rtProps = D2D1::RenderTargetProperties(
                D2D1_RENDER_TARGET_TYPE_DEFAULT,
                D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_PREMULTIPLIED),
                newDpi, newDpi);
            if (FAILED(factory->CreateDCRenderTarget(&rtProps, &dcTarget)) || !dcTarget) return false;
            dcTarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 1.0f), &cachedBrush);
            dpi = newDpi;
        }
        if (!hdcMem || !hBmp || w != pxW || h != pxH) {
            if (hdcMem) {
                if (oldBmp) { SelectObject(hdcMem, oldBmp); oldBmp = nullptr; }
                if (hBmp) { DeleteObject(hBmp); hBmp = nullptr; }
                DeleteDC(hdcMem);
                hdcMem = nullptr;
            }
            BITMAPINFO bmi{};
            bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
            bmi.bmiHeader.biWidth = w;
            bmi.bmiHeader.biHeight = -h;
            bmi.bmiHeader.biPlanes = 1;
            bmi.bmiHeader.biBitCount = 32;
            bmi.bmiHeader.biCompression = BI_RGB;
            void* bits = nullptr;
            HDC hdcScreen = GetDC(nullptr);
            hdcMem = CreateCompatibleDC(hdcScreen);
            hBmp = CreateDIBSection(hdcMem, &bmi, DIB_RGB_COLORS, &bits, nullptr, 0);
            ReleaseDC(nullptr, hdcScreen);
            if (!hdcMem || !hBmp) {
                Release();
                return false;
            }
            oldBmp = SelectObject(hdcMem, hBmp);
            pxW = w;
            pxH = h;
        }
        return true;
    }

    void Present(HWND hWnd, int posX, int posY, BYTE alpha) const {
        if (!hWnd || !IsWindow(hWnd) || !hdcMem || pxW <= 0 || pxH <= 0) return;
        HDC hdcScreen = GetDC(nullptr);
        POINT ptDst{ posX, posY };
        POINT ptSrc{ 0, 0 };
        SIZE szWnd{ pxW, pxH };
        BLENDFUNCTION blend{};
        blend.BlendOp = AC_SRC_OVER;
        blend.SourceConstantAlpha = alpha;
        blend.AlphaFormat = AC_SRC_ALPHA;
        UpdateLayeredWindow(hWnd, hdcScreen, &ptDst, &szWnd, hdcMem, &ptSrc, 0, &blend, ULW_ALPHA);
        ReleaseDC(nullptr, hdcScreen);
    }

    bool TickAnimation(HWND hWnd, ULONGLONG nowTick) {
        if (!animActive) return false;
        if (!hWnd || !IsWindow(hWnd) || !IsWindowVisible(hWnd)) {
            animActive = false;
            return false;
        }
        constexpr float kAnimDurationMs = 155.0f;
        float elapsed = static_cast<float>(nowTick >= animStartTick ? (nowTick - animStartTick) : 0);
        float t = std::clamp(elapsed / kAnimDurationMs, 0.0f, 1.0f);
        float inv = 1.0f - t;
        float ease = 1.0f - inv * inv * inv; // Cubic ease-out
        int curY = baseY + static_cast<int>(std::round(animStartOffsetY * (1.0f - ease)));
        BYTE alpha = static_cast<BYTE>(std::clamp(static_cast<int>(std::round(ease * 255.0f)), 24, 255));
        Present(hWnd, baseX, curY, alpha);
        if (t >= 1.0f) {
            animActive = false;
            return false;
        }
        return true;
    }
};

enum class TrayHoverZone { None, Wifi, Audio };

struct SecondaryTrayInstance {
    HWND hSecondaryTray = nullptr;  // Shell_SecondaryTrayWnd
    HWND hTrayWidget = nullptr;     // Independent Wi-Fi + Audio tray cluster
    HWND hStatsWidget = nullptr;    // Optional system stats (CPU GPU RAM Net Ping)
    LayeredPopupSurface traySurface{};
    LayeredPopupSurface statsSurface{};
    TrayHoverZone hoverZone = TrayHoverZone::None;
    TrayHoverZone lastHoverZone = TrayHoverZone::None;
    float wifiHoverAlpha = 0.0f;
    float audioHoverAlpha = 0.0f;
    float volOsdAlpha = 0.0f;
    bool lastShowVolOsd = false;
    float animTrayX = 0.0f;
    bool hasAnimTrayX = false;
    float animStatsX = 0.0f;
    bool hasAnimStatsX = false;
    int lastTrayX = -99999, lastTrayY = -99999;
    int lastTrayW = 0, lastTrayH = 0;
    int lastStatsX = -99999, lastStatsY = -99999;
    int lastStatsW = 0, lastStatsH = 0;
    uint64_t lastStatsMetricsGen = 0;
    bool lastStatsLightTheme = false;
    float lastStatsDpi = 0.0f;
    bool lastLightTheme = false;
    float lastDpi = 0.0f;
    int lastVolumePercent = -1;
    bool lastMuted = false;
    bool lastHasWifi = false;
    bool lastHasEthernet = false;
    bool lastWifiPopupOpen = false;
    bool lastAudioPopupOpen = false;
    ULONGLONG lastTrayZTick = 0;
    ULONGLONG lastStatsZTick = 0;
};

////////////////////////////////////////////////////////////////////////////////
// Independent Fluent UI Popups for Secondary Monitor (Wi-Fi & Audio)
// Completely self-contained on the clicked secondary monitor (zero impact on primary monitor)

constexpr PCWSTR kSecAudioPopupClassName = L"VnLunarSecondaryAudioPopupWnd";
constexpr PCWSTR kSecWifiPopupClassName = L"VnLunarSecondaryWifiPopupWnd";

ID2D1Factory* g_secPopupD2dFactory = nullptr;
IDWriteTextFormat* g_secPopupFmtTitle = nullptr;
IDWriteTextFormat* g_secPopupFmtBody = nullptr;
IDWriteTextFormat* g_secPopupFmtSmall = nullptr;
IDWriteTextFormat* g_secPopupFmtIcon = nullptr;
IDWriteTextFormat* g_secPopupFmtCenter = nullptr;
IDWriteTextFormat* g_secPopupFmtRight = nullptr;

HWND g_secAudioPopupHwnd = nullptr;
HWND g_secWifiPopupHwnd = nullptr;
ULONGLONG g_lastPopupDeactivateTick = 0;
int g_lastDeactivatedPopupKind = 0; // 1 = Wifi, 2 = Audio
HWND g_lastDeactivatedAnchor = nullptr;

struct TaskbarPopupPalette {
    D2D1_COLOR_F bg{};
    D2D1_COLOR_F border{};
    D2D1_COLOR_F card{};
    D2D1_COLOR_F hover{};
    D2D1_COLOR_F text{};
    D2D1_COLOR_F sub{};
    D2D1_COLOR_F accent{};
    D2D1_COLOR_F trackBg{};
    D2D1_COLOR_F ok{};
    D2D1_COLOR_F mute{};
    bool isLight = false;
};

struct AudioPopupState {
    HWND anchorWidget = nullptr;
    HWND anchorTaskbar = nullptr;
    RECT lockedWidgetRect{};
    RECT lockedTaskbarRect{};
    RECT lockedMonitorRect{};
    float dpi = 96.0f;
    bool lightTheme = false;
    TaskbarPopupPalette palette{};
    bool draggingSlider = false;
    int hoverId = 0; // 1=settings, 2=mute, 3=slider, 4=mixer, 5=soundSettings, 100+i=device row
    int scrollOffset = 0;
    bool fxSoundManaging = false;
    std::wstring fxExePath;
    std::wstring fxPendingTargetId;
    ULONGLONG fxPendingUntilTick = 0;
    float audioPlayingAlpha = 0.0f; // 0.0f = "Đã chọn" (Selected), 1.0f = "Đang phát" (Playing)
    ULONGLONG lastAudioPeakTick = 0;
    bool audioIsPlayingNow = false;
    int liveSyncTickCount = 0;
    std::vector<AudioOutputDeviceItem> devices;
    // Cached layout rects in DIPs
    float dipW = 320.0f;
    float dipH = 220.0f;
    D2D1_RECT_F rcHeaderSettings{};
    D2D1_RECT_F rcMuteBtn{};
    D2D1_RECT_F rcSliderHit{};
    D2D1_RECT_F rcSliderTrack{};
    D2D1_RECT_F rcFooterLeft{};
    D2D1_RECT_F rcFooterRight{};
    float devicesTopDip = 132.0f;
    float deviceRowHDip = 36.0f;
    int maxVisibleDevices = 5;
};

struct WifiPopupState {
    HWND anchorWidget = nullptr;
    HWND anchorTaskbar = nullptr;
    RECT lockedWidgetRect{};
    RECT lockedTaskbarRect{};
    RECT lockedMonitorRect{};
    float dpi = 96.0f;
    bool lightTheme = false;
    TaskbarPopupPalette palette{};
    bool hasAdapter = false;
    bool hasEthernet = false;
    int hoverId = 0; // 1=refresh, 2=settings, 3=netSettings, 4=wifiSettings, 100+i=wifi row
    int scrollOffset = 0;
    std::wstring statusNotice;
    ULONGLONG statusNoticeExpireTick = 0;
    std::vector<WifiNetworkItem> networks;
    // Cached layout rects in DIPs
    float dipW = 320.0f;
    float dipH = 260.0f;
    D2D1_RECT_F rcRefreshBtn{};
    D2D1_RECT_F rcSettingsBtn{};
    D2D1_RECT_F rcFooterLeft{};
    D2D1_RECT_F rcFooterRight{};
    float listTopDip = 52.0f;
    float rowHDip = 46.0f;
    int maxVisibleRows = 6;
};

AudioPopupState g_audioPopupState;
WifiPopupState g_wifiPopupState;

bool IsLightTaskbarThemeForPopup() {
    HKEY hKey = nullptr;
    DWORD val = 0;
    if (RegOpenKeyExW(HKEY_CURRENT_USER,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
                      0, KEY_READ, &hKey) == ERROR_SUCCESS) {
        DWORD sz = sizeof(val), type = 0;
        if (RegQueryValueExW(hKey, L"SystemUsesLightTheme", nullptr, &type,
                             reinterpret_cast<LPBYTE>(&val), &sz) != ERROR_SUCCESS || type != REG_DWORD) {
            val = 0;
        }
        RegCloseKey(hKey);
    }
    return val != 0;
}

TaskbarPopupPalette ResolveTaskbarPopupPalette(HWND anchorWidget, HWND anchorTaskbar) {
    // 1. Read Windows Personalize & AccentPalette
    bool sysLight = IsLightTaskbarThemeForPopup();
    bool colorPrevalence = false;
    {
        HKEY hKey = nullptr;
        if (RegOpenKeyExW(HKEY_CURRENT_USER,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
                          0, KEY_READ, &hKey) == ERROR_SUCCESS) {
            DWORD val = 0, sz = sizeof(val), type = 0;
            if (RegQueryValueExW(hKey, L"ColorPrevalence", nullptr, &type,
                                 reinterpret_cast<LPBYTE>(&val), &sz) == ERROR_SUCCESS && type == REG_DWORD) {
                colorPrevalence = (val != 0);
            }
            RegCloseKey(hKey);
        }
    }

    bool hasPalette = false;
    uint8_t pal[32]{}; // 8 shades x 4 bytes (R, G, B, A): 0=Light3, 1=Light2, 2=Light1, 3=Base, 4=Dark1, 5=Dark2, 6=Dark3
    {
        HKEY hKey = nullptr;
        if (RegOpenKeyExW(HKEY_CURRENT_USER,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Accent",
                          0, KEY_READ, &hKey) == ERROR_SUCCESS) {
            DWORD sz = sizeof(pal), type = 0;
            if (RegQueryValueExW(hKey, L"AccentPalette", nullptr, &type, pal, &sz) == ERROR_SUCCESS &&
                type == REG_BINARY && sz >= 28) {
                hasPalette = true;
            }
            RegCloseKey(hKey);
        }
    }

    // 2. Live-sample actual taskbar pixel color from Shell_SecondaryTrayWnd (handles Accent, Mica, Light/Dark, custom stylers)
    bool sampledOk = false;
    float bgR = sysLight ? 0.95f : 0.13f;
    float bgG = sysLight ? 0.95f : 0.13f;
    float bgB = sysLight ? 0.96f : 0.14f;

    if (colorPrevalence && hasPalette) {
        // Shade 5 (AccentDark2) is Windows' exact taskbar accent surface fallback
        bgR = pal[5 * 4 + 0] / 255.0f;
        bgG = pal[5 * 4 + 1] / 255.0f;
        bgB = pal[5 * 4 + 2] / 255.0f;
    }

    RECT rcTb{}, rcW{};
    bool hasTb = (anchorTaskbar && IsWindow(anchorTaskbar) && GetWindowRect(anchorTaskbar, &rcTb));
    bool hasW = (anchorWidget && IsWindow(anchorWidget) && GetWindowRect(anchorWidget, &rcW));
    if (hasTb && (rcTb.right - rcTb.left) > 40 && (rcTb.bottom - rcTb.top) > 16) {
        HDC hdcScreen = GetDC(nullptr);
        if (hdcScreen) {
            std::vector<int> rs, gs, bs;
            int yTop = rcTb.top + 2;
            int yBot = rcTb.bottom - 3;
            int xProbe1 = hasW ? (rcW.left - 5) : (rcTb.right - 20);
            int xProbe2 = hasW ? (rcW.left - 14) : (rcTb.right - 36);
            int xProbe3 = rcTb.right - 3;

            POINT pts[5] = {
                { std::clamp(xProbe1, static_cast<int>(rcTb.left + 2), static_cast<int>(rcTb.right - 2)), yTop },
                { std::clamp(xProbe1, static_cast<int>(rcTb.left + 2), static_cast<int>(rcTb.right - 2)), yBot },
                { std::clamp(xProbe2, static_cast<int>(rcTb.left + 2), static_cast<int>(rcTb.right - 2)), yTop },
                { std::clamp(xProbe2, static_cast<int>(rcTb.left + 2), static_cast<int>(rcTb.right - 2)), yBot },
                { std::clamp(xProbe3, static_cast<int>(rcTb.left + 2), static_cast<int>(rcTb.right - 2)), yBot }
            };
            for (const auto& pt : pts) {
                COLORREF c = GetPixel(hdcScreen, pt.x, pt.y);
                if (c != CLR_INVALID) {
                    rs.push_back(GetRValue(c));
                    gs.push_back(GetGValue(c));
                    bs.push_back(GetBValue(c));
                }
            }
            ReleaseDC(nullptr, hdcScreen);

            if (rs.size() >= 3) {
                std::sort(rs.begin(), rs.end());
                std::sort(gs.begin(), gs.end());
                std::sort(bs.begin(), bs.end());
                size_t mid = rs.size() / 2;
                int mr = rs[mid], mg = gs[mid], mb = bs[mid];
                // Accept sampled color unless it's an obvious pure-black capture failure on a light/colored taskbar
                bool suspectBlack = (mr == 0 && mg == 0 && mb == 0) && (sysLight || colorPrevalence);
                if (!suspectBlack) {
                    bgR = mr / 255.0f;
                    bgG = mg / 255.0f;
                    bgB = mb / 255.0f;
                    sampledOk = true;
                }
            }
        }
    }
    (void)sampledOk;

    float bgLuma = 0.299f * bgR + 0.587f * bgG + 0.114f * bgB;
    bool isLight = (bgLuma > 0.56f);

    // 3. Resolve harmonizing Accent color with guaranteed contrast against taskbar background
    float acR = isLight ? 0.00f : 0.38f;
    float acG = isLight ? 0.40f : 0.80f;
    float acB = isLight ? 0.75f : 1.00f;
    if (hasPalette) {
        int shadeIdx = isLight ? 4 : 1; // Dark1 on light surface, Light2 on dark/colored surface
        acR = pal[shadeIdx * 4 + 0] / 255.0f;
        acG = pal[shadeIdx * 4 + 1] / 255.0f;
        acB = pal[shadeIdx * 4 + 2] / 255.0f;
    }
    float acLuma = 0.299f * acR + 0.587f * acG + 0.114f * acB;
    if (!isLight && (acLuma - bgLuma) < 0.32f) {
        // Boost accent brightness so sliders & links pop crisply on dark/colored taskbar backgrounds
        acR = std::min(1.0f, acR * 0.55f + 0.45f);
        acG = std::min(1.0f, acG * 0.55f + 0.45f);
        acB = std::min(1.0f, acB * 0.55f + 0.45f);
    } else if (isLight && (bgLuma - acLuma) < 0.28f) {
        acR *= 0.62f;
        acG *= 0.62f;
        acB *= 0.62f;
    }

    TaskbarPopupPalette p{};
    p.isLight = isLight;
    p.bg = D2D1::ColorF(bgR, bgG, bgB, 0.97f);
    p.border = isLight ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.15f) : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.15f);
    p.card = isLight ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.055f) : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.075f);
    p.hover = isLight ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.095f) : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.125f);
    p.text = isLight ? D2D1::ColorF(0.07f, 0.07f, 0.08f, 0.96f) : D2D1::ColorF(0.97f, 0.97f, 0.98f, 0.97f);
    p.sub = isLight ? D2D1::ColorF(0.28f, 0.28f, 0.31f, 0.86f) : D2D1::ColorF(0.88f, 0.88f, 0.90f, 0.76f);
    p.accent = D2D1::ColorF(acR, acG, acB, 1.0f);
    p.trackBg = isLight ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.20f) : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.24f);
    p.ok = isLight ? D2D1::ColorF(0.06f, 0.54f, 0.24f, 1.0f) : D2D1::ColorF(0.45f, 0.90f, 0.56f, 1.0f);
    p.mute = isLight ? D2D1::ColorF(0.82f, 0.18f, 0.18f, 0.95f) : D2D1::ColorF(1.00f, 0.48f, 0.48f, 0.96f);
    return p;
}

bool PtInD2DRect(float x, float y, const D2D1_RECT_F& r) {
    return x >= r.left && x <= r.right && y >= r.top && y <= r.bottom;
}

void CaptureLockedPopupAnchor(HWND anchorWidget, HWND anchorTaskbar,
                              RECT& outWidget, RECT& outTaskbar, RECT& outMonitor) {
    outWidget = {};
    outTaskbar = {};
    outMonitor = {};
    if (anchorWidget && IsWindow(anchorWidget)) GetWindowRect(anchorWidget, &outWidget);
    if (anchorTaskbar && IsWindow(anchorTaskbar)) {
        GetWindowRect(anchorTaskbar, &outTaskbar);
    } else {
        outTaskbar = outWidget;
    }
    HMONITOR hMon = MonitorFromWindow(
        (anchorWidget && IsWindow(anchorWidget)) ? anchorWidget : anchorTaskbar,
        MONITOR_DEFAULTTONEAREST);
    MONITORINFO mi{};
    mi.cbSize = sizeof(mi);
    if (hMon && GetMonitorInfoW(hMon, &mi)) {
        outMonitor = mi.rcMonitor;
    } else {
        outMonitor = outTaskbar;
    }
}

void ComputeSecondaryPopupScreenPos(const RECT& rcWidget, const RECT& rcTaskbar, const RECT& rcMonitor,
                                    float dpi, int pxW, int pxH, int& outX, int& outY) {
    float scale = dpi / 96.0f;
    int margin = static_cast<int>(10.0f * scale);
    bool horizTb = (rcTaskbar.right - rcTaskbar.left) >= (rcTaskbar.bottom - rcTaskbar.top);

    int desiredX = rcMonitor.right - pxW - margin;
    int desiredY = rcTaskbar.top - pxH - margin;

    if (horizTb) {
        if (rcTaskbar.top >= (rcMonitor.top + rcMonitor.bottom) / 2) {
            desiredY = rcTaskbar.top - pxH - margin;
        } else {
            desiredY = rcTaskbar.bottom + margin;
        }
    } else {
        desiredY = rcWidget.bottom - pxH;
        if (rcTaskbar.left >= (rcMonitor.left + rcMonitor.right) / 2) {
            desiredX = rcTaskbar.left - pxW - margin;
        } else {
            desiredX = rcTaskbar.right + margin;
        }
    }

    int minX = rcMonitor.left + 4;
    int maxX = std::max<int>(minX, static_cast<int>(rcMonitor.right) - pxW - 4);
    int minY = rcMonitor.top + 4;
    int maxY = std::max<int>(minY, static_cast<int>(rcMonitor.bottom) - pxH - 4);

    outX = std::clamp(desiredX, minX, maxX);
    outY = std::clamp(desiredY, minY, maxY);
}

LayeredPopupSurface g_audioPopupSurface;
LayeredPopupSurface g_wifiPopupSurface;

void RenderAudioPopup(bool presentNow = true) {
    if (!g_secAudioPopupHwnd || !IsWindow(g_secAudioPopupHwnd) || !g_secPopupD2dFactory) return;

    auto& st = g_audioPopupState;
    ModSettings s = GetSettings();
    bool vi = UseVietnameseLabels(s);

    int visibleCount = static_cast<int>(std::min<size_t>(st.devices.size(), static_cast<size_t>(st.maxVisibleDevices)));
    int maxScroll = std::max(0, static_cast<int>(st.devices.size()) - st.maxVisibleDevices);
    st.scrollOffset = std::clamp(st.scrollOffset, 0, maxScroll);

    st.dipW = 326.0f;
    float volCardTop = 44.0f;
    float volCardH = 56.0f;
    float secLabelTop = volCardTop + volCardH + 10.0f;
    st.devicesTopDip = secLabelTop + 22.0f;
    st.deviceRowHDip = 36.0f;
    float devicesH = visibleCount > 0 ? (visibleCount * st.deviceRowHDip + 4.0f) : 34.0f;
    float footerTop = st.devicesTopDip + devicesH + 8.0f;
    float footerH = 40.0f;
    st.dipH = footerTop + footerH;

    st.rcHeaderSettings = D2D1::RectF(st.dipW - 38.0f, 8.0f, st.dipW - 10.0f, 36.0f);
    st.rcMuteBtn = D2D1::RectF(18.0f, volCardTop + 10.0f, 54.0f, volCardTop + 46.0f);
    st.rcSliderTrack = D2D1::RectF(62.0f, volCardTop + 26.0f, st.dipW - 60.0f, volCardTop + 30.0f);
    st.rcSliderHit = D2D1::RectF(56.0f, volCardTop + 10.0f, st.dipW - 54.0f, volCardTop + 46.0f);
    st.rcFooterLeft = D2D1::RectF(10.0f, footerTop + 5.0f, st.dipW * 0.54f, footerTop + footerH - 6.0f);
    st.rcFooterRight = D2D1::RectF(st.dipW * 0.56f, footerTop + 5.0f, st.dipW - 10.0f, footerTop + footerH - 6.0f);

    float scale = st.dpi / 96.0f;
    int pxW = std::max(100, static_cast<int>(std::ceil(st.dipW * scale)));
    int pxH = std::max(100, static_cast<int>(std::ceil(st.dipH * scale)));

    int posX = 0, posY = 0;
    ComputeSecondaryPopupScreenPos(st.lockedWidgetRect, st.lockedTaskbarRect, st.lockedMonitorRect, st.dpi, pxW, pxH, posX, posY);
    g_audioPopupSurface.baseX = posX;
    g_audioPopupSurface.baseY = posY;

    if (!g_audioPopupSurface.Ensure(g_secPopupD2dFactory, pxW, pxH, st.dpi)) return;
    ID2D1DCRenderTarget* dcTarget = g_audioPopupSurface.dcTarget;
    {
        RECT rcBind{0, 0, pxW, pxH};
        if (SUCCEEDED(dcTarget->BindDC(g_audioPopupSurface.hdcMem, &rcBind))) {
            dcTarget->BeginDraw();
            dcTarget->Clear(D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.0f));

            ID2D1SolidColorBrush* brush = nullptr;
            if (SUCCEEDED(dcTarget->CreateSolidColorBrush(D2D1::ColorF(1, 1, 1, 1), &brush)) && brush) {
                const auto& pal = st.palette;
                bool lt = pal.isLight;
                D2D1_COLOR_F bgCol = pal.bg;
                D2D1_COLOR_F borderCol = pal.border;
                D2D1_COLOR_F cardCol = pal.card;
                D2D1_COLOR_F hoverCol = pal.hover;
                D2D1_COLOR_F textCol = pal.text;
                D2D1_COLOR_F subCol = pal.sub;
                D2D1_COLOR_F accentCol = pal.accent;
                D2D1_COLOR_F trackBgCol = pal.trackBg;
                D2D1_COLOR_F muteCol = pal.mute;

                // Card background & border
                D2D1_ROUNDED_RECT bgRR = D2D1::RoundedRect(D2D1::RectF(0.5f, 0.5f, st.dipW - 0.5f, st.dipH - 0.5f), 10.0f, 10.0f);
                brush->SetColor(bgCol);
                dcTarget->FillRoundedRectangle(bgRR, brush);
                brush->SetColor(borderCol);
                dcTarget->DrawRoundedRectangle(bgRR, brush, 1.0f);

                // Header title
                const wchar_t* title = vi ? L"Âm thanh" : L"Sound";
                brush->SetColor(textCol);
                dcTarget->DrawText(title, static_cast<UINT32>(wcslen(title)), g_secPopupFmtTitle,
                                   D2D1::RectF(14.0f, 10.0f, st.dipW - 44.0f, 34.0f), brush);

                // Header settings gear button
                if (st.hoverId == 1) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcHeaderSettings, 6.0f, 6.0f), brush);
                }
                WCHAR gearGlyph[2] = { 0xE713, 0 };
                brush->SetColor(subCol);
                dcTarget->DrawText(gearGlyph, 1, g_secPopupFmtIcon, st.rcHeaderSettings, brush);

                // Volume inner card
                D2D1_ROUNDED_RECT volCardRR = D2D1::RoundedRect(
                    D2D1::RectF(10.0f, volCardTop, st.dipW - 10.0f, volCardTop + volCardH), 8.0f, 8.0f);
                brush->SetColor(cardCol);
                dcTarget->FillRoundedRectangle(volCardRR, brush);

                // Mute button
                if (st.hoverId == 2) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcMuteBtn, 6.0f, 6.0f), brush);
                }
                float vol = std::clamp(g_liveMasterVolume.load(), 0.0f, 1.0f);
                bool muted = g_liveMasterMuted.load();
                WCHAR volGlyph[2]{};
                if (muted || vol <= 0.001f) volGlyph[0] = 0xE74F;
                else if (vol < 0.33f) volGlyph[0] = 0xE993;
                else if (vol < 0.66f) volGlyph[0] = 0xE994;
                else volGlyph[0] = 0xE995;
                brush->SetColor(muted ? muteCol : textCol);
                dcTarget->DrawText(volGlyph, 1, g_secPopupFmtIcon, st.rcMuteBtn, brush);

                // Volume slider track
                brush->SetColor(trackBgCol);
                dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcSliderTrack, 2.0f, 2.0f), brush);

                float trackW = st.rcSliderTrack.right - st.rcSliderTrack.left;
                float effectiveVol = muted ? 0.0f : vol;
                float fillRight = st.rcSliderTrack.left + trackW * effectiveVol;
                if (fillRight > st.rcSliderTrack.left + 1.0f) {
                    D2D1_RECT_F fillR = st.rcSliderTrack;
                    fillR.right = fillRight;
                    brush->SetColor(accentCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(fillR, 2.0f, 2.0f), brush);
                }

                // Slider thumb
                float thumbCx = fillRight;
                float thumbCy = (st.rcSliderTrack.top + st.rcSliderTrack.bottom) * 0.5f;
                float outerR = (st.draggingSlider || st.hoverId == 3) ? 9.0f : 8.0f;
                float innerR = (st.draggingSlider || st.hoverId == 3) ? 5.2f : 4.2f;
                brush->SetColor(lt ? D2D1::ColorF(1.0f, 1.0f, 1.0f, 1.0f) : D2D1::ColorF(0.26f, 0.26f, 0.28f, 1.0f));
                dcTarget->FillEllipse(D2D1::Ellipse(D2D1::Point2F(thumbCx, thumbCy), outerR, outerR), brush);
                brush->SetColor(borderCol);
                dcTarget->DrawEllipse(D2D1::Ellipse(D2D1::Point2F(thumbCx, thumbCy), outerR, outerR), brush, 1.0f);
                brush->SetColor(muted ? subCol : accentCol);
                dcTarget->FillEllipse(D2D1::Ellipse(D2D1::Point2F(thumbCx, thumbCy), innerR, innerR), brush);

                // Volume % readout
                int volPct = muted ? 0 : std::clamp(static_cast<int>(vol * 100.0f + 0.5f), 0, 100);
                WCHAR pctBuf[16]{};
                _snwprintf_s(pctBuf, _TRUNCATE, L"%d%%", volPct);
                brush->SetColor(muted ? muteCol : textCol);
                dcTarget->DrawText(pctBuf, static_cast<UINT32>(wcslen(pctBuf)), g_secPopupFmtRight,
                                   D2D1::RectF(st.dipW - 54.0f, volCardTop + 16.0f, st.dipW - 16.0f, volCardTop + 40.0f), brush);

                // Output devices section label
                const wchar_t* devHdr = vi ? L"Thiết bị đầu ra" : L"Output device";
                brush->SetColor(subCol);
                dcTarget->DrawText(devHdr, static_cast<UINT32>(wcslen(devHdr)), g_secPopupFmtSmall,
                                   D2D1::RectF(14.0f, secLabelTop, st.dipW - 14.0f, secLabelTop + 18.0f), brush);

                if (st.devices.empty()) {
                    const wchar_t* noDev = vi ? L"Không tìm thấy thiết bị âm thanh" : L"No audio output devices found";
                    brush->SetColor(subCol);
                    dcTarget->DrawText(noDev, static_cast<UINT32>(wcslen(noDev)), g_secPopupFmtBody,
                                       D2D1::RectF(14.0f, st.devicesTopDip + 4.0f, st.dipW - 14.0f, st.devicesTopDip + 28.0f), brush);
                } else {
                    for (int i = 0; i < visibleCount; ++i) {
                        int idx = st.scrollOffset + i;
                        if (idx >= static_cast<int>(st.devices.size())) break;
                        const auto& dev = st.devices[idx];
                        float y0 = st.devicesTopDip + i * st.deviceRowHDip;
                        D2D1_RECT_F rowR = D2D1::RectF(10.0f, y0 + 2.0f, st.dipW - 10.0f, y0 + st.deviceRowHDip - 2.0f);

                        bool highlightActive = dev.isDefault || dev.isFxTarget;
                        if (st.hoverId == 100 + idx) {
                            brush->SetColor(hoverCol);
                            dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rowR, 6.0f, 6.0f), brush);
                        } else if (highlightActive) {
                            brush->SetColor(cardCol);
                            dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rowR, 6.0f, 6.0f), brush);
                        }

                        bool isPlaybackOutput = st.fxSoundManaging ? dev.isFxTarget : dev.isDefault;
                        bool isFxPrimaryBadge = st.fxSoundManaging && dev.isDefault;
                        float playT = std::clamp(st.audioPlayingAlpha, 0.0f, 1.0f);
                        auto lerpCol = [](D2D1_COLOR_F a, D2D1_COLOR_F b, float t) -> D2D1_COLOR_F {
                            return D2D1::ColorF(a.r + (b.r - a.r) * t,
                                                a.g + (b.g - a.g) * t,
                                                a.b + (b.b - a.b) * t,
                                                a.a + (b.a - a.a) * t);
                        };
                        D2D1_COLOR_F activeOutputCol = lerpCol(accentCol, pal.ok, playT);

                        if (isFxPrimaryBadge) {
                            brush->SetColor(accentCol);
                            dcTarget->FillRoundedRectangle(
                                D2D1::RoundedRect(D2D1::RectF(14.0f, y0 + 9.0f, 17.5f, y0 + st.deviceRowHDip - 9.0f), 1.5f, 1.5f),
                                brush);
                        } else if (isPlaybackOutput) {
                            brush->SetColor(activeOutputCol);
                            dcTarget->FillRoundedRectangle(
                                D2D1::RoundedRect(D2D1::RectF(14.0f, y0 + 9.5f, 17.5f, y0 + st.deviceRowHDip - 9.5f), 1.5f, 1.5f),
                                brush);
                        }

                        WCHAR spkGlyph[2] = { 0xE7F5, 0 };
                        brush->SetColor(isFxPrimaryBadge ? accentCol : (isPlaybackOutput ? activeOutputCol : subCol));
                        dcTarget->DrawText(spkGlyph, 1, g_secPopupFmtIcon,
                                           D2D1::RectF(22.0f, y0 + 4.0f, 44.0f, y0 + st.deviceRowHDip - 4.0f), brush);

                        bool showBadge = isFxPrimaryBadge || isPlaybackOutput;
                        float nameRightX = showBadge ? (st.dipW - 88.0f) : (st.dipW - 18.0f);
                        brush->SetColor(highlightActive ? textCol : subCol);
                        dcTarget->DrawText(dev.name.c_str(), static_cast<UINT32>(dev.name.size()), g_secPopupFmtBody,
                                           D2D1::RectF(48.0f, y0 + 8.0f, nameRightX, y0 + st.deviceRowHDip - 6.0f),
                                           brush, D2D1_DRAW_TEXT_OPTIONS_CLIP);

                        if (isFxPrimaryBadge) {
                            const wchar_t* badgeTxt = vi ? L"Chính" : L"Main";
                            brush->SetColor(accentCol);
                            dcTarget->DrawText(badgeTxt, static_cast<UINT32>(wcslen(badgeTxt)), g_secPopupFmtRight,
                                               D2D1::RectF(st.dipW - 82.0f, y0 + 9.0f, st.dipW - 16.0f, y0 + st.deviceRowHDip - 7.0f),
                                               brush);
                        } else if (isPlaybackOutput) {
                            D2D1_RECT_F badgeR = D2D1::RectF(st.dipW - 84.0f, y0 + 9.0f, st.dipW - 16.0f, y0 + st.deviceRowHDip - 7.0f);
                            if (playT < 0.99f) {
                                const wchar_t* selTxt = vi ? L"Đã chọn" : L"Selected";
                                D2D1_COLOR_F c = accentCol;
                                c.a *= (1.0f - playT);
                                brush->SetColor(c);
                                dcTarget->DrawText(selTxt, static_cast<UINT32>(wcslen(selTxt)), g_secPopupFmtRight, badgeR, brush);
                            }
                            if (playT > 0.01f) {
                                const wchar_t* playTxt = vi ? L"Đang phát" : L"Playing";
                                D2D1_COLOR_F c = pal.ok;
                                c.a *= playT;
                                brush->SetColor(c);
                                dcTarget->DrawText(playTxt, static_cast<UINT32>(wcslen(playTxt)), g_secPopupFmtRight, badgeR, brush);
                            }
                        }
                    }
                }

                // Footer divider
                brush->SetColor(borderCol);
                dcTarget->DrawLine(D2D1::Point2F(10.0f, footerTop), D2D1::Point2F(st.dipW - 10.0f, footerTop), brush, 1.0f);

                // Footer left: Volume Mixer
                if (st.hoverId == 4) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcFooterLeft, 6.0f, 6.0f), brush);
                }
                const wchar_t* mixerLbl = vi ? L"Bộ trộn âm lượng" : L"Volume Mixer";
                brush->SetColor(subCol);
                dcTarget->DrawText(mixerLbl, static_cast<UINT32>(wcslen(mixerLbl)), g_secPopupFmtCenter, st.rcFooterLeft, brush);

                // Footer right: Sound Settings
                if (st.hoverId == 5) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcFooterRight, 6.0f, 6.0f), brush);
                }
                const wchar_t* sndLbl = vi ? L"Cài đặt âm thanh" : L"Sound Settings";
                brush->SetColor(accentCol);
                dcTarget->DrawText(sndLbl, static_cast<UINT32>(wcslen(sndLbl)), g_secPopupFmtCenter, st.rcFooterRight, brush);

                brush->Release();
            }
            dcTarget->EndDraw();

            if (presentNow && !g_audioPopupSurface.animActive) {
                g_audioPopupSurface.Present(g_secAudioPopupHwnd, posX, posY, 255);
            }
        }
    }
}

void RenderWifiPopup(bool presentNow = true) {
    if (!g_secWifiPopupHwnd || !IsWindow(g_secWifiPopupHwnd) || !g_secPopupD2dFactory) return;

    auto& st = g_wifiPopupState;
    ModSettings s = GetSettings();
    bool vi = UseVietnameseLabels(s);

    int visibleCount = static_cast<int>(std::min<size_t>(st.networks.size(), static_cast<size_t>(st.maxVisibleRows)));
    int maxScroll = std::max(0, static_cast<int>(st.networks.size()) - st.maxVisibleRows);
    st.scrollOffset = std::clamp(st.scrollOffset, 0, maxScroll);

    st.dipW = 330.0f;
    float headerH = 42.0f;
    float curY = headerH + 2.0f;

    bool showNotice = !st.statusNotice.empty() && GetTickCount64() < st.statusNoticeExpireTick;
    float ethBannerH = st.hasEthernet ? 34.0f : 0.0f;
    float noticeH = showNotice ? 26.0f : 0.0f;
    st.listTopDip = curY + ethBannerH + (st.hasEthernet ? 6.0f : 0.0f) + noticeH;
    st.rowHDip = 46.0f;
    float listH = visibleCount > 0 ? (visibleCount * st.rowHDip + 4.0f) : 44.0f;
    float footerTop = st.listTopDip + listH + 6.0f;
    float footerH = 40.0f;
    st.dipH = footerTop + footerH;

    st.rcRefreshBtn = D2D1::RectF(st.dipW - 70.0f, 8.0f, st.dipW - 42.0f, 36.0f);
    st.rcSettingsBtn = D2D1::RectF(st.dipW - 38.0f, 8.0f, st.dipW - 10.0f, 36.0f);
    st.rcFooterLeft = D2D1::RectF(10.0f, footerTop + 5.0f, st.dipW * 0.50f - 2.0f, footerTop + footerH - 6.0f);
    st.rcFooterRight = D2D1::RectF(st.dipW * 0.50f + 2.0f, footerTop + 5.0f, st.dipW - 10.0f, footerTop + footerH - 6.0f);

    float scale = st.dpi / 96.0f;
    int pxW = std::max(100, static_cast<int>(std::ceil(st.dipW * scale)));
    int pxH = std::max(100, static_cast<int>(std::ceil(st.dipH * scale)));

    int posX = 0, posY = 0;
    ComputeSecondaryPopupScreenPos(st.lockedWidgetRect, st.lockedTaskbarRect, st.lockedMonitorRect, st.dpi, pxW, pxH, posX, posY);
    g_wifiPopupSurface.baseX = posX;
    g_wifiPopupSurface.baseY = posY;

    if (!g_wifiPopupSurface.Ensure(g_secPopupD2dFactory, pxW, pxH, st.dpi)) return;
    ID2D1DCRenderTarget* dcTarget = g_wifiPopupSurface.dcTarget;
    {
        RECT rcBind{0, 0, pxW, pxH};
        if (SUCCEEDED(dcTarget->BindDC(g_wifiPopupSurface.hdcMem, &rcBind))) {
            dcTarget->BeginDraw();
            dcTarget->Clear(D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.0f));

            ID2D1SolidColorBrush* brush = nullptr;
            if (SUCCEEDED(dcTarget->CreateSolidColorBrush(D2D1::ColorF(1, 1, 1, 1), &brush)) && brush) {
                const auto& pal = st.palette;
                bool lt = pal.isLight;
                D2D1_COLOR_F bgCol = pal.bg;
                D2D1_COLOR_F borderCol = pal.border;
                D2D1_COLOR_F cardCol = pal.card;
                D2D1_COLOR_F hoverCol = pal.hover;
                D2D1_COLOR_F textCol = pal.text;
                D2D1_COLOR_F subCol = pal.sub;
                D2D1_COLOR_F accentCol = pal.accent;
                D2D1_COLOR_F okCol = pal.ok;

                // Card background & border
                D2D1_ROUNDED_RECT bgRR = D2D1::RoundedRect(D2D1::RectF(0.5f, 0.5f, st.dipW - 0.5f, st.dipH - 0.5f), 10.0f, 10.0f);
                brush->SetColor(bgCol);
                dcTarget->FillRoundedRectangle(bgRR, brush);
                brush->SetColor(borderCol);
                dcTarget->DrawRoundedRectangle(bgRR, brush, 1.0f);

                // Header title
                const wchar_t* title = vi ? L"Wi-Fi & Mạng" : L"Wi-Fi & Network";
                brush->SetColor(textCol);
                dcTarget->DrawText(title, static_cast<UINT32>(wcslen(title)), g_secPopupFmtTitle,
                                   D2D1::RectF(14.0f, 10.0f, st.dipW - 76.0f, 34.0f), brush);

                // Header Refresh button
                if (st.hoverId == 1) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcRefreshBtn, 6.0f, 6.0f), brush);
                }
                WCHAR refGlyph[2] = { 0xE72C, 0 };
                brush->SetColor(subCol);
                dcTarget->DrawText(refGlyph, 1, g_secPopupFmtIcon, st.rcRefreshBtn, brush);

                // Header Settings button
                if (st.hoverId == 2) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcSettingsBtn, 6.0f, 6.0f), brush);
                }
                WCHAR gearGlyph[2] = { 0xE713, 0 };
                brush->SetColor(subCol);
                dcTarget->DrawText(gearGlyph, 1, g_secPopupFmtIcon, st.rcSettingsBtn, brush);

                float yCursor = headerH + 2.0f;

                // Ethernet status banner if connected
                if (st.hasEthernet) {
                    D2D1_RECT_F ethR = D2D1::RectF(10.0f, yCursor, st.dipW - 10.0f, yCursor + ethBannerH);
                    brush->SetColor(cardCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(ethR, 7.0f, 7.0f), brush);
                    WCHAR ethGlyph[2] = { 0xE839, 0 };
                    brush->SetColor(okCol);
                    dcTarget->DrawText(ethGlyph, 1, g_secPopupFmtIcon,
                                       D2D1::RectF(18.0f, yCursor + 4.0f, 42.0f, yCursor + ethBannerH - 4.0f), brush);
                    const wchar_t* ethTxt = vi ? L"Ethernet — Đã kết nối" : L"Ethernet — Connected";
                    brush->SetColor(textCol);
                    dcTarget->DrawText(ethTxt, static_cast<UINT32>(wcslen(ethTxt)), g_secPopupFmtBody,
                                       D2D1::RectF(48.0f, yCursor + 8.0f, st.dipW - 16.0f, yCursor + ethBannerH - 6.0f), brush);
                    yCursor += ethBannerH + 6.0f;
                }

                // Inline status notice (e.g. Scanning / Connecting...)
                if (showNotice) {
                    brush->SetColor(accentCol);
                    dcTarget->DrawText(st.statusNotice.c_str(), static_cast<UINT32>(st.statusNotice.size()), g_secPopupFmtSmall,
                                       D2D1::RectF(14.0f, yCursor + 3.0f, st.dipW - 14.0f, yCursor + noticeH), brush);
                }

                // Wi-Fi networks list
                if (!st.hasAdapter) {
                    const wchar_t* noAd = vi ? L"Không tìm thấy bộ thu Wi-Fi" : L"No Wi-Fi adapter detected";
                    brush->SetColor(subCol);
                    dcTarget->DrawText(noAd, static_cast<UINT32>(wcslen(noAd)), g_secPopupFmtBody,
                                       D2D1::RectF(14.0f, st.listTopDip + 10.0f, st.dipW - 14.0f, st.listTopDip + 36.0f), brush);
                } else if (st.networks.empty()) {
                    const wchar_t* noNet = vi ? L"Chưa tìm thấy mạng Wi-Fi khả dụng" : L"No Wi-Fi networks found";
                    brush->SetColor(subCol);
                    dcTarget->DrawText(noNet, static_cast<UINT32>(wcslen(noNet)), g_secPopupFmtBody,
                                       D2D1::RectF(14.0f, st.listTopDip + 10.0f, st.dipW - 14.0f, st.listTopDip + 36.0f), brush);
                } else {
                    for (int i = 0; i < visibleCount; ++i) {
                        int idx = st.scrollOffset + i;
                        if (idx >= static_cast<int>(st.networks.size())) break;
                        const auto& net = st.networks[idx];
                        float y0 = st.listTopDip + i * st.rowHDip;
                        D2D1_RECT_F rowR = D2D1::RectF(10.0f, y0 + 2.0f, st.dipW - 10.0f, y0 + st.rowHDip - 2.0f);

                        bool hovered = (st.hoverId == 100 + idx);
                        if (hovered) {
                            brush->SetColor(hoverCol);
                            dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rowR, 7.0f, 7.0f), brush);
                        } else if (net.isConnected) {
                            brush->SetColor(cardCol);
                            dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rowR, 7.0f, 7.0f), brush);
                        }

                        if (net.isConnected) {
                            brush->SetColor(accentCol);
                            dcTarget->FillRoundedRectangle(
                                D2D1::RoundedRect(D2D1::RectF(14.0f, y0 + 10.0f, 17.5f, y0 + st.rowHDip - 10.0f), 1.5f, 1.5f),
                                brush);
                        }

                        // Signal strength glyph (4 levels)
                        WCHAR wfGlyph[2]{};
                        if (net.signalQuality >= 75) wfGlyph[0] = 0xE701;      // Full
                        else if (net.signalQuality >= 50) wfGlyph[0] = 0xE874; // 3 bars
                        else if (net.signalQuality >= 25) wfGlyph[0] = 0xE873; // 2 bars
                        else wfGlyph[0] = 0xE872;                              // 1 bar

                        brush->SetColor(net.isConnected ? accentCol : textCol);
                        dcTarget->DrawText(wfGlyph, 1, g_secPopupFmtIcon,
                                           D2D1::RectF(22.0f, y0 + 8.0f, 44.0f, y0 + st.rowHDip - 8.0f), brush);

                        // SSID
                        float rightColX = (hovered || net.isConnected) ? (st.dipW - 92.0f) : (st.dipW - 48.0f);
                        brush->SetColor(textCol);
                        dcTarget->DrawText(net.ssid.c_str(), static_cast<UINT32>(net.ssid.size()), g_secPopupFmtBody,
                                           D2D1::RectF(48.0f, y0 + 6.0f, rightColX, y0 + 24.0f),
                                           brush, D2D1_DRAW_TEXT_OPTIONS_CLIP);

                        // Subtitle (status + security)
                        WCHAR subBuf[96]{};
                        if (net.isConnected) {
                            _snwprintf_s(subBuf, _TRUNCATE, vi ? L"Đã kết nối • %lu%%" : L"Connected • %lu%%", net.signalQuality);
                        } else if (net.hasProfile) {
                            _snwprintf_s(subBuf, _TRUNCATE, vi ? L"Đã lưu • %lu%%" : L"Saved • %lu%%", net.signalQuality);
                        } else if (net.isSecured) {
                            _snwprintf_s(subBuf, _TRUNCATE, vi ? L"Bảo mật • %lu%%" : L"Secured • %lu%%", net.signalQuality);
                        } else {
                            _snwprintf_s(subBuf, _TRUNCATE, vi ? L"Mở • %lu%%" : L"Open • %lu%%", net.signalQuality);
                        }
                        brush->SetColor(net.isConnected ? accentCol : subCol);
                        dcTarget->DrawText(subBuf, static_cast<UINT32>(wcslen(subBuf)), g_secPopupFmtSmall,
                                           D2D1::RectF(48.0f, y0 + 25.0f, rightColX, y0 + 41.0f),
                                           brush, D2D1_DRAW_TEXT_OPTIONS_CLIP);

                        // Right action pill on hover or connected
                        if (hovered || net.isConnected) {
                            D2D1_RECT_F actR = D2D1::RectF(st.dipW - 88.0f, y0 + 11.0f, st.dipW - 16.0f, y0 + st.rowHDip - 11.0f);
                            brush->SetColor(hovered ? (net.isConnected ? hoverCol : accentCol) : cardCol);
                            dcTarget->FillRoundedRectangle(D2D1::RoundedRect(actR, 5.0f, 5.0f), brush);
                            const wchar_t* actTxt = net.isConnected
                                                        ? (vi ? L"Ngắt" : L"Disconnect")
                                                        : (net.hasProfile ? (vi ? L"Kết nối" : L"Connect")
                                                                          : (vi ? L"Cài đặt" : L"Settings"));
                            bool darkTextOnAccent = hovered && !net.isConnected && !lt;
                            brush->SetColor(darkTextOnAccent ? D2D1::ColorF(0.05f, 0.05f, 0.07f, 1.0f)
                                                             : (hovered && !net.isConnected && lt ? D2D1::ColorF(1.0f, 1.0f, 1.0f, 1.0f)
                                                                                                  : textCol));
                            dcTarget->DrawText(actTxt, static_cast<UINT32>(wcslen(actTxt)), g_secPopupFmtCenter, actR, brush);
                        }
                    }
                }

                // Footer divider
                brush->SetColor(borderCol);
                dcTarget->DrawLine(D2D1::Point2F(10.0f, footerTop), D2D1::Point2F(st.dipW - 10.0f, footerTop), brush, 1.0f);

                // Footer left: Network & Internet
                if (st.hoverId == 3) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcFooterLeft, 6.0f, 6.0f), brush);
                }
                const wchar_t* netLbl = vi ? L"Mạng & Internet" : L"Network Settings";
                brush->SetColor(subCol);
                dcTarget->DrawText(netLbl, static_cast<UINT32>(wcslen(netLbl)), g_secPopupFmtCenter, st.rcFooterLeft, brush);

                // Footer right: Wi-Fi Settings
                if (st.hoverId == 4) {
                    brush->SetColor(hoverCol);
                    dcTarget->FillRoundedRectangle(D2D1::RoundedRect(st.rcFooterRight, 6.0f, 6.0f), brush);
                }
                const wchar_t* wfLbl = vi ? L"Cài đặt Wi-Fi" : L"Wi-Fi Settings";
                brush->SetColor(accentCol);
                dcTarget->DrawText(wfLbl, static_cast<UINT32>(wcslen(wfLbl)), g_secPopupFmtCenter, st.rcFooterRight, brush);

                brush->Release();
            }
            dcTarget->EndDraw();

            if (presentNow && !g_wifiPopupSurface.animActive) {
                g_wifiPopupSurface.Present(g_secWifiPopupHwnd, posX, posY, 255);
            }
        }
    }
}

constexpr UINT_PTR kTimerRefreshAudioPopup = 101;
constexpr UINT_PTR kTimerRefreshWifiPopup = 102;
constexpr UINT_PTR kTimerClearWifiNotice = 103;
constexpr UINT_PTR kTimerLiveSyncAudioPopup = 104;

void StopAudioPopupTimers(HWND hWnd) {
    if (!hWnd || !IsWindow(hWnd)) return;
    KillTimer(hWnd, kTimerRefreshAudioPopup);
    KillTimer(hWnd, kTimerLiveSyncAudioPopup);
}

void UpdateAudioPopupPlayingState(AudioPopupState& st, bool snapAlpha) {
    std::wstring activeId;
    for (const auto& d : st.devices) {
        if (st.fxSoundManaging) {
            if (d.isFxTarget) { activeId = d.id; break; }
        } else {
            if (d.isDefault) { activeId = d.id; break; }
        }
    }
    float peak = QueryAudioDevicePeakValue(activeId);
    ULONGLONG now = GetTickCount64();
    if (peak > 0.0005f) {
        st.lastAudioPeakTick = now;
        st.audioIsPlayingNow = true;
    } else if (snapAlpha || st.lastAudioPeakTick == 0 || (now - st.lastAudioPeakTick) >= 650) {
        st.audioIsPlayingNow = false;
    }
    if (snapAlpha) {
        st.audioPlayingAlpha = st.audioIsPlayingNow ? 1.0f : 0.0f;
    }
}

bool ApplyPendingFxTarget(AudioPopupState& st) {
    if (st.fxPendingTargetId.empty()) return false;
    bool confirmed = false;
    for (const auto& d : st.devices) {
        if (d.id == st.fxPendingTargetId && d.isFxTarget) {
            confirmed = true;
            break;
        }
    }
    if (confirmed || GetTickCount64() >= st.fxPendingUntilTick) {
        st.fxPendingTargetId.clear();
        st.fxPendingUntilTick = 0;
        return false;
    }
    for (auto& d : st.devices) {
        d.isFxTarget = (d.id == st.fxPendingTargetId);
    }
    return true;
}

bool AudioDeviceStatesDiffer(bool prevFxManaging,
                             const std::vector<AudioOutputDeviceItem>& prev,
                             bool curFxManaging,
                             const std::vector<AudioOutputDeviceItem>& cur) {
    if (prevFxManaging != curFxManaging || prev.size() != cur.size()) return true;
    for (size_t i = 0; i < cur.size(); ++i) {
        if (prev[i].id != cur[i].id ||
            prev[i].isDefault != cur[i].isDefault ||
            prev[i].isFxTarget != cur[i].isFxTarget ||
            prev[i].name != cur[i].name) {
            return true;
        }
    }
    return false;
}

void CloseAllSecondaryPopups() {
    g_audioPopupSurface.animActive = false;
    g_wifiPopupSurface.animActive = false;
    if (g_secAudioPopupHwnd && IsWindow(g_secAudioPopupHwnd)) {
        StopAudioPopupTimers(g_secAudioPopupHwnd);
        if (IsWindowVisible(g_secAudioPopupHwnd)) ShowWindow(g_secAudioPopupHwnd, SW_HIDE);
    }
    if (g_secWifiPopupHwnd && IsWindow(g_secWifiPopupHwnd)) {
        KillTimer(g_secWifiPopupHwnd, kTimerRefreshWifiPopup);
        KillTimer(g_secWifiPopupHwnd, kTimerClearWifiNotice);
        if (IsWindowVisible(g_secWifiPopupHwnd)) ShowWindow(g_secWifiPopupHwnd, SW_HIDE);
    }
}

void OpenOrToggleSecondaryAudioPopup(HWND hClickedWidget, HWND hSecTaskbar) {
    if (!g_secAudioPopupHwnd || !IsWindow(g_secAudioPopupHwnd)) return;

    // Anti-bounce if clicking the same tray icon right after WA_INACTIVE closed it
    if (g_lastDeactivatedPopupKind == 2 && g_lastDeactivatedAnchor == hClickedWidget &&
        (GetTickCount64() - g_lastPopupDeactivateTick) < 220) {
        g_lastDeactivatedPopupKind = 0;
        g_lastDeactivatedAnchor = nullptr;
        return;
    }

    if (IsWindowVisible(g_secAudioPopupHwnd) && g_audioPopupState.anchorWidget == hClickedWidget) {
        g_audioPopupSurface.animActive = false;
        StopAudioPopupTimers(g_secAudioPopupHwnd);
        ShowWindow(g_secAudioPopupHwnd, SW_HIDE);
        return;
    }

    if (g_secWifiPopupHwnd && IsWindowVisible(g_secWifiPopupHwnd)) {
        g_wifiPopupSurface.animActive = false;
        KillTimer(g_secWifiPopupHwnd, kTimerRefreshWifiPopup);
        KillTimer(g_secWifiPopupHwnd, kTimerClearWifiNotice);
        ShowWindow(g_secWifiPopupHwnd, SW_HIDE);
    }

    // Refresh audio endpoint & devices
    InitAudioEndpoint();
    RebindAudioEndpointVolume();
    g_audioPopupState.anchorWidget = hClickedWidget;
    g_audioPopupState.anchorTaskbar = hSecTaskbar;
    CaptureLockedPopupAnchor(hClickedWidget, hSecTaskbar,
                             g_audioPopupState.lockedWidgetRect,
                             g_audioPopupState.lockedTaskbarRect,
                             g_audioPopupState.lockedMonitorRect);
    g_audioPopupState.dpi = static_cast<float>(GetWindowDpiSafe(hClickedWidget));
    g_audioPopupState.palette = ResolveTaskbarPopupPalette(hClickedWidget, hSecTaskbar);
    g_audioPopupState.lightTheme = g_audioPopupState.palette.isLight;
    g_audioPopupState.hoverId = 0;
    g_audioPopupState.draggingSlider = false;
    g_audioPopupState.scrollOffset = 0;
    g_audioPopupState.fxPendingTargetId.clear();
    g_audioPopupState.fxPendingUntilTick = 0;
    g_audioPopupState.lastAudioPeakTick = 0;
    g_audioPopupState.liveSyncTickCount = 0;
    EnumerateAudioOutputDevices(g_audioPopupState.devices, g_audioPopupState.fxSoundManaging, g_audioPopupState.fxExePath);
    UpdateAudioPopupPlayingState(g_audioPopupState, true);

    RenderAudioPopup(false);
    float slideDip = 14.0f * (g_audioPopupState.dpi / 96.0f);
    bool topTb = (g_audioPopupState.lockedTaskbarRect.top <
                  (g_audioPopupState.lockedMonitorRect.top + g_audioPopupState.lockedMonitorRect.bottom) / 2);
    g_audioPopupSurface.animStartOffsetY = topTb ? -slideDip : slideDip;
    g_audioPopupSurface.animStartTick = GetTickCount64();
    g_audioPopupSurface.animActive = true;
    g_audioPopupSurface.Present(g_secAudioPopupHwnd, g_audioPopupSurface.baseX,
                                g_audioPopupSurface.baseY + static_cast<int>(std::round(g_audioPopupSurface.animStartOffsetY)), 24);
    ShowWindow(g_secAudioPopupHwnd, SW_SHOW);
    SetForegroundWindow(g_secAudioPopupHwnd);
    SetTimer(g_secAudioPopupHwnd, kTimerLiveSyncAudioPopup, 180, nullptr);
    if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
}

void OpenOrToggleSecondaryWifiPopup(HWND hClickedWidget, HWND hSecTaskbar) {
    if (!g_secWifiPopupHwnd || !IsWindow(g_secWifiPopupHwnd)) return;

    if (g_lastDeactivatedPopupKind == 1 && g_lastDeactivatedAnchor == hClickedWidget &&
        (GetTickCount64() - g_lastPopupDeactivateTick) < 220) {
        g_lastDeactivatedPopupKind = 0;
        g_lastDeactivatedAnchor = nullptr;
        return;
    }

    if (IsWindowVisible(g_secWifiPopupHwnd) && g_wifiPopupState.anchorWidget == hClickedWidget) {
        g_wifiPopupSurface.animActive = false;
        KillTimer(g_secWifiPopupHwnd, kTimerRefreshWifiPopup);
        KillTimer(g_secWifiPopupHwnd, kTimerClearWifiNotice);
        ShowWindow(g_secWifiPopupHwnd, SW_HIDE);
        return;
    }

    if (g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd)) {
        g_audioPopupSurface.animActive = false;
        StopAudioPopupTimers(g_secAudioPopupHwnd);
        ShowWindow(g_secAudioPopupHwnd, SW_HIDE);
    }

    g_wifiPopupState.anchorWidget = hClickedWidget;
    g_wifiPopupState.anchorTaskbar = hSecTaskbar;
    CaptureLockedPopupAnchor(hClickedWidget, hSecTaskbar,
                             g_wifiPopupState.lockedWidgetRect,
                             g_wifiPopupState.lockedTaskbarRect,
                             g_wifiPopupState.lockedMonitorRect);
    g_wifiPopupState.dpi = static_cast<float>(GetWindowDpiSafe(hClickedWidget));
    g_wifiPopupState.palette = ResolveTaskbarPopupPalette(hClickedWidget, hSecTaskbar);
    g_wifiPopupState.lightTheme = g_wifiPopupState.palette.isLight;
    g_wifiPopupState.hasEthernet = g_hasActiveEthernet.load();
    g_wifiPopupState.hoverId = 0;
    g_wifiPopupState.scrollOffset = 0;
    g_wifiPopupState.statusNotice.clear();
    QueryWifiNetworks(g_wifiPopupState.hasAdapter, g_wifiPopupState.networks, false);

    RenderWifiPopup(false);
    float slideDip = 14.0f * (g_wifiPopupState.dpi / 96.0f);
    bool topTb = (g_wifiPopupState.lockedTaskbarRect.top <
                  (g_wifiPopupState.lockedMonitorRect.top + g_wifiPopupState.lockedMonitorRect.bottom) / 2);
    g_wifiPopupSurface.animStartOffsetY = topTb ? -slideDip : slideDip;
    g_wifiPopupSurface.animStartTick = GetTickCount64();
    g_wifiPopupSurface.animActive = true;
    g_wifiPopupSurface.Present(g_secWifiPopupHwnd, g_wifiPopupSurface.baseX,
                               g_wifiPopupSurface.baseY + static_cast<int>(std::round(g_wifiPopupSurface.animStartOffsetY)), 24);
    ShowWindow(g_secWifiPopupHwnd, SW_SHOW);
    SetForegroundWindow(g_secWifiPopupHwnd);
    if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
}

constexpr UINT kMsgRefreshWifiPopup = WM_APP + 77;
constexpr UINT kMsgRefreshAudioPopup = WM_APP + 78;

LRESULT CALLBACK SecondaryAudioPopupWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    auto& st = g_audioPopupState;
    auto hitTest = [&](float xDip, float yDip) -> int {
        if (PtInD2DRect(xDip, yDip, st.rcHeaderSettings)) return 1;
        if (PtInD2DRect(xDip, yDip, st.rcMuteBtn)) return 2;
        if (PtInD2DRect(xDip, yDip, st.rcSliderHit)) return 3;
        if (PtInD2DRect(xDip, yDip, st.rcFooterLeft)) return 4;
        if (PtInD2DRect(xDip, yDip, st.rcFooterRight)) return 5;
        int visibleCount = static_cast<int>(std::min<size_t>(st.devices.size(), static_cast<size_t>(st.maxVisibleDevices)));
        for (int i = 0; i < visibleCount; ++i) {
            int idx = st.scrollOffset + i;
            if (idx >= static_cast<int>(st.devices.size())) break;
            float y0 = st.devicesTopDip + i * st.deviceRowHDip;
            D2D1_RECT_F rowR = D2D1::RectF(10.0f, y0 + 2.0f, st.dipW - 10.0f, y0 + st.deviceRowHDip - 2.0f);
            if (PtInD2DRect(xDip, yDip, rowR)) return 100 + idx;
        }
        return 0;
    };

    auto applySliderAtDipX = [&](float xDip) {
        float w = st.rcSliderTrack.right - st.rcSliderTrack.left;
        if (w <= 1.0f) return;
        float ratio = std::clamp((xDip - st.rcSliderTrack.left) / w, 0.0f, 1.0f);
        SetMasterVolumeScalar(ratio);
        RenderAudioPopup();
        if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
    };

    switch (uMsg) {
        case WM_ACTIVATE:
            if (LOWORD(wParam) == WA_INACTIVE) {
                g_audioPopupSurface.animActive = false;
                StopAudioPopupTimers(hWnd);
                if (st.draggingSlider) {
                    ReleaseCapture();
                    st.draggingSlider = false;
                }
                g_lastPopupDeactivateTick = GetTickCount64();
                g_lastDeactivatedPopupKind = 2;
                g_lastDeactivatedAnchor = st.anchorWidget;
                ShowWindow(hWnd, SW_HIDE);
            }
            return 0;

        case WM_CAPTURECHANGED:
            if (st.draggingSlider) {
                st.draggingSlider = false;
                RenderAudioPopup();
            }
            return 0;

        case WM_KEYDOWN:
            if (wParam == VK_ESCAPE) {
                g_audioPopupSurface.animActive = false;
                StopAudioPopupTimers(hWnd);
                ShowWindow(hWnd, SW_HIDE);
                return 0;
            }
            break;

        case WM_TIMER:
            if (wParam == kTimerRefreshAudioPopup) {
                KillTimer(hWnd, kTimerRefreshAudioPopup);
                if (IsWindowVisible(hWnd)) {
                    auto prevDevices = st.devices;
                    bool prevFx = st.fxSoundManaging;
                    RebindAudioEndpointVolume();
                    EnumerateAudioOutputDevices(st.devices, st.fxSoundManaging, st.fxExePath);
                    bool stillPending = ApplyPendingFxTarget(st);
                    UpdateAudioPopupPlayingState(st, false);
                    if (stillPending) {
                        SetTimer(hWnd, kTimerRefreshAudioPopup, 150, nullptr);
                    }
                    if (AudioDeviceStatesDiffer(prevFx, prevDevices, st.fxSoundManaging, st.devices)) {
                        RenderAudioPopup();
                    }
                    SetTimer(hWnd, kTimerLiveSyncAudioPopup, 180, nullptr);
                    if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                }
                return 0;
            } else if (wParam == kTimerLiveSyncAudioPopup) {
                if (!IsWindowVisible(hWnd)) {
                    KillTimer(hWnd, kTimerLiveSyncAudioPopup);
                    return 0;
                }
                bool prevPlaying = st.audioIsPlayingNow;
                UpdateAudioPopupPlayingState(st, false);
                bool needWake = (prevPlaying != st.audioIsPlayingNow) ||
                                (std::abs((st.audioIsPlayingNow ? 1.0f : 0.0f) - st.audioPlayingAlpha) > 0.01f);
                if (st.fxSoundManaging && !st.draggingSlider && (++st.liveSyncTickCount >= 3)) {
                    st.liveSyncTickCount = 0;
                    auto prevDevices = st.devices;
                    bool prevFx = st.fxSoundManaging;
                    EnumerateAudioOutputDevices(st.devices, st.fxSoundManaging, st.fxExePath);
                    ApplyPendingFxTarget(st);
                    if (AudioDeviceStatesDiffer(prevFx, prevDevices, st.fxSoundManaging, st.devices)) {
                        UpdateAudioPopupPlayingState(st, false);
                        RenderAudioPopup();
                        needWake = true;
                    }
                }
                if (needWake && g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                return 0;
            }
            break;

        case kMsgRefreshAudioPopup:
            if (IsWindowVisible(hWnd)) {
                RebindAudioEndpointVolume();
                EnumerateAudioOutputDevices(st.devices, st.fxSoundManaging, st.fxExePath);
                ApplyPendingFxTarget(st);
                UpdateAudioPopupPlayingState(st, false);
                RenderAudioPopup();
                SetTimer(hWnd, kTimerLiveSyncAudioPopup, 180, nullptr);
                if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            }
            return 0;

        case WM_SETCURSOR:
            if (LOWORD(lParam) == HTCLIENT) {
                SetCursor(LoadCursorW(nullptr, st.hoverId != 0 ? MAKEINTRESOURCEW(32649) : IDC_ARROW));
                return TRUE;
            }
            break;

        case WM_MOUSEMOVE: {
            float scale = st.dpi / 96.0f;
            float xDip = static_cast<float>(static_cast<short>(LOWORD(lParam))) / scale;
            float yDip = static_cast<float>(static_cast<short>(HIWORD(lParam))) / scale;
            if (st.draggingSlider && (wParam & MK_LBUTTON)) {
                applySliderAtDipX(xDip);
                return 0;
            }
            int newHover = hitTest(xDip, yDip);
            if (newHover != st.hoverId) {
                st.hoverId = newHover;
                RenderAudioPopup();
            }
            TRACKMOUSEEVENT tme{ sizeof(tme), TME_LEAVE, hWnd, 0 };
            TrackMouseEvent(&tme);
            return 0;
        }

        case WM_MOUSELEAVE:
            if (!st.draggingSlider && st.hoverId != 0) {
                st.hoverId = 0;
                RenderAudioPopup();
            }
            return 0;

        case WM_LBUTTONDOWN: {
            float scale = st.dpi / 96.0f;
            float xDip = static_cast<float>(static_cast<short>(LOWORD(lParam))) / scale;
            float yDip = static_cast<float>(static_cast<short>(HIWORD(lParam))) / scale;
            int id = hitTest(xDip, yDip);
            if (id == 1 || id == 5) {
                StopAudioPopupTimers(hWnd);
                ShowWindow(hWnd, SW_HIDE);
                ShellExecuteW(nullptr, L"open", L"ms-settings:sound", nullptr, nullptr, SW_SHOWNORMAL);
            } else if (id == 4) {
                StopAudioPopupTimers(hWnd);
                ShowWindow(hWnd, SW_HIDE);
                ShellExecuteW(nullptr, L"open", L"sndvol.exe", nullptr, nullptr, SW_SHOWNORMAL);
            } else if (id == 2) {
                ToggleMasterMute();
                UpdateAudioPopupPlayingState(st, false);
                RenderAudioPopup();
                if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            } else if (id == 3) {
                st.draggingSlider = true;
                SetCapture(hWnd);
                applySliderAtDipX(xDip);
            } else if (id >= 100) {
                int idx = id - 100;
                if (idx >= 0 && idx < static_cast<int>(st.devices.size())) {
                    const auto& clickedDev = st.devices[idx];
                    if (st.fxSoundManaging && !clickedDev.isFxVirtual && !st.fxExePath.empty()) {
                        // FxSound manages physical speakers: switch FxSound's physical speaker + configured per-device preset
                        SwitchFxSoundOutputDevice(st.fxExePath, clickedDev.name, clickedDev.fxPreset);
                        st.fxPendingTargetId = clickedDev.id;
                        st.fxPendingUntilTick = GetTickCount64() + 1800;
                        for (auto& d : st.devices) d.isFxTarget = false;
                        st.devices[idx].isFxTarget = true;
                        RenderAudioPopup();
                        SetTimer(hWnd, kTimerRefreshAudioPopup, 150, nullptr);
                    } else {
                        st.fxPendingTargetId.clear();
                        st.fxPendingUntilTick = 0;
                        SetDefaultAudioOutputDevice(clickedDev.id);
                        EnumerateAudioOutputDevices(st.devices, st.fxSoundManaging, st.fxExePath);
                        UpdateAudioPopupPlayingState(st, false);
                        RenderAudioPopup();
                        SetTimer(hWnd, kTimerLiveSyncAudioPopup, 180, nullptr);
                        if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                    }
                }
            }
            return 0;
        }

        case WM_LBUTTONUP:
            if (st.draggingSlider) {
                ReleaseCapture();
                st.draggingSlider = false;
                RenderAudioPopup();
            }
            return 0;

        case WM_MOUSEWHEEL: {
            short delta = GET_WHEEL_DELTA_WPARAM(wParam);
            POINT pt{};
            GetCursorPos(&pt);
            ScreenToClient(hWnd, &pt);
            float scale = st.dpi / 96.0f;
            float yDip = static_cast<float>(pt.y) / scale;
            if (yDip >= st.devicesTopDip && static_cast<int>(st.devices.size()) > st.maxVisibleDevices) {
                int maxScroll = static_cast<int>(st.devices.size()) - st.maxVisibleDevices;
                st.scrollOffset = std::clamp(st.scrollOffset + (delta > 0 ? -1 : 1), 0, maxScroll);
                RenderAudioPopup();
            } else {
                AdjustMasterVolume(delta > 0 ? 0.02f : -0.02f);
                RenderAudioPopup();
                if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            }
            return 0;
        }
    }
    return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

LRESULT CALLBACK SecondaryWifiPopupWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    auto& st = g_wifiPopupState;
    auto hitTest = [&](float xDip, float yDip) -> int {
        if (PtInD2DRect(xDip, yDip, st.rcRefreshBtn)) return 1;
        if (PtInD2DRect(xDip, yDip, st.rcSettingsBtn)) return 2;
        if (PtInD2DRect(xDip, yDip, st.rcFooterLeft)) return 3;
        if (PtInD2DRect(xDip, yDip, st.rcFooterRight)) return 4;
        int visibleCount = static_cast<int>(std::min<size_t>(st.networks.size(), static_cast<size_t>(st.maxVisibleRows)));
        for (int i = 0; i < visibleCount; ++i) {
            int idx = st.scrollOffset + i;
            if (idx >= static_cast<int>(st.networks.size())) break;
            float y0 = st.listTopDip + i * st.rowHDip;
            D2D1_RECT_F rowR = D2D1::RectF(10.0f, y0 + 2.0f, st.dipW - 10.0f, y0 + st.rowHDip - 2.0f);
            if (PtInD2DRect(xDip, yDip, rowR)) return 100 + idx;
        }
        return 0;
    };

    auto scheduleWifiRefresh = [&](DWORD delayMs) {
        SetTimer(hWnd, kTimerRefreshWifiPopup, delayMs, nullptr);
        SetTimer(hWnd, kTimerClearWifiNotice, delayMs + 900, nullptr);
    };

    switch (uMsg) {
        case WM_ACTIVATE:
            if (LOWORD(wParam) == WA_INACTIVE) {
                g_wifiPopupSurface.animActive = false;
                KillTimer(hWnd, kTimerRefreshWifiPopup);
                KillTimer(hWnd, kTimerClearWifiNotice);
                g_lastPopupDeactivateTick = GetTickCount64();
                g_lastDeactivatedPopupKind = 1;
                g_lastDeactivatedAnchor = st.anchorWidget;
                ShowWindow(hWnd, SW_HIDE);
            }
            return 0;

        case WM_KEYDOWN:
            if (wParam == VK_ESCAPE) {
                g_wifiPopupSurface.animActive = false;
                KillTimer(hWnd, kTimerRefreshWifiPopup);
                KillTimer(hWnd, kTimerClearWifiNotice);
                ShowWindow(hWnd, SW_HIDE);
                return 0;
            }
            break;

        case WM_TIMER:
            if (wParam == kTimerRefreshWifiPopup) {
                KillTimer(hWnd, kTimerRefreshWifiPopup);
                if (IsWindowVisible(hWnd)) {
                    st.hasEthernet = g_hasActiveEthernet.load();
                    st.statusNotice.clear();
                    st.statusNoticeExpireTick = 0;
                    QueryWifiNetworks(st.hasAdapter, st.networks, false);
                    RenderWifiPopup();
                    if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                }
                return 0;
            } else if (wParam == kTimerClearWifiNotice) {
                KillTimer(hWnd, kTimerClearWifiNotice);
                if (!st.statusNotice.empty()) {
                    st.statusNotice.clear();
                    st.statusNoticeExpireTick = 0;
                    if (IsWindowVisible(hWnd)) RenderWifiPopup();
                }
                return 0;
            }
            break;

        case kMsgRefreshWifiPopup:
            if (IsWindowVisible(hWnd)) {
                st.hasEthernet = g_hasActiveEthernet.load();
                st.statusNotice.clear();
                st.statusNoticeExpireTick = 0;
                QueryWifiNetworks(st.hasAdapter, st.networks, false);
                RenderWifiPopup();
                if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            }
            return 0;

        case WM_SETCURSOR:
            if (LOWORD(lParam) == HTCLIENT) {
                SetCursor(LoadCursorW(nullptr, st.hoverId != 0 ? MAKEINTRESOURCEW(32649) : IDC_ARROW));
                return TRUE;
            }
            break;

        case WM_MOUSEMOVE: {
            float scale = st.dpi / 96.0f;
            float xDip = static_cast<float>(static_cast<short>(LOWORD(lParam))) / scale;
            float yDip = static_cast<float>(static_cast<short>(HIWORD(lParam))) / scale;
            int newHover = hitTest(xDip, yDip);
            if (newHover != st.hoverId) {
                st.hoverId = newHover;
                RenderWifiPopup();
            }
            TRACKMOUSEEVENT tme{ sizeof(tme), TME_LEAVE, hWnd, 0 };
            TrackMouseEvent(&tme);
            return 0;
        }

        case WM_MOUSELEAVE:
            if (st.hoverId != 0) {
                st.hoverId = 0;
                RenderWifiPopup();
            }
            return 0;

        case WM_LBUTTONDOWN: {
            ModSettings s = GetSettings();
            bool vi = UseVietnameseLabels(s);
            float scale = st.dpi / 96.0f;
            float xDip = static_cast<float>(static_cast<short>(LOWORD(lParam))) / scale;
            float yDip = static_cast<float>(static_cast<short>(HIWORD(lParam))) / scale;
            int id = hitTest(xDip, yDip);
            if (id == 1) {
                st.statusNotice = vi ? L"Đang quét lại mạng Wi-Fi..." : L"Scanning Wi-Fi networks...";
                st.statusNoticeExpireTick = GetTickCount64() + 1800;
                QueryWifiNetworks(st.hasAdapter, st.networks, true);
                RenderWifiPopup();
                scheduleWifiRefresh(1100);
            } else if (id == 2 || id == 4) {
                ShowWindow(hWnd, SW_HIDE);
                ShellExecuteW(nullptr, L"open", L"ms-settings:network-wifi", nullptr, nullptr, SW_SHOWNORMAL);
            } else if (id == 3) {
                ShowWindow(hWnd, SW_HIDE);
                ShellExecuteW(nullptr, L"open", L"ms-settings:network", nullptr, nullptr, SW_SHOWNORMAL);
            } else if (id >= 100) {
                int idx = id - 100;
                if (idx >= 0 && idx < static_cast<int>(st.networks.size())) {
                    WifiNetworkItem net = st.networks[idx];
                    if (net.isConnected) {
                        st.statusNotice = (vi ? L"Đang ngắt kết nối " : L"Disconnecting ") + net.ssid + L"...";
                        st.statusNoticeExpireTick = GetTickCount64() + 2000;
                        ConnectOrDisconnectWifiItem(net);
                        RenderWifiPopup();
                        scheduleWifiRefresh(700);
                    } else if (net.hasProfile && !net.profileName.empty()) {
                        st.statusNotice = (vi ? L"Đang kết nối " : L"Connecting to ") + net.ssid + L"...";
                        st.statusNoticeExpireTick = GetTickCount64() + 2500;
                        ConnectOrDisconnectWifiItem(net);
                        RenderWifiPopup();
                        scheduleWifiRefresh(1400);
                    } else {
                        // New network without saved profile -> open native Wi-Fi settings for password entry
                        ShowWindow(hWnd, SW_HIDE);
                        ShellExecuteW(nullptr, L"open", L"ms-settings:network-wifi", nullptr, nullptr, SW_SHOWNORMAL);
                    }
                }
            }
            return 0;
        }

        case WM_MOUSEWHEEL: {
            short delta = GET_WHEEL_DELTA_WPARAM(wParam);
            if (static_cast<int>(st.networks.size()) > st.maxVisibleRows) {
                int maxScroll = static_cast<int>(st.networks.size()) - st.maxVisibleRows;
                st.scrollOffset = std::clamp(st.scrollOffset + (delta > 0 ? -1 : 1), 0, maxScroll);
                RenderWifiPopup();
            }
            return 0;
        }
    }
    return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

LRESULT CALLBACK SecondaryTrayWidgetWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    auto* inst = reinterpret_cast<SecondaryTrayInstance*>(GetWindowLongPtrW(hWnd, GWLP_USERDATA));
    switch (uMsg) {
        case WM_MOUSEACTIVATE:
            return MA_NOACTIVATE;

        case WM_SETCURSOR: {
            if (LOWORD(lParam) == HTCLIENT) {
                SetCursor(LoadCursorW(nullptr, MAKEINTRESOURCEW(32649))); // IDC_HAND
                return TRUE;
            }
            break;
        }

        case WM_MOUSEMOVE: {
            int x = static_cast<int>(static_cast<short>(LOWORD(lParam)));
            RECT rc{};
            GetClientRect(hWnd, &rc);
            int w = rc.right - rc.left;

            float dpi = static_cast<float>(GetWindowDpiSafe(hWnd));
            float scale = dpi / 96.0f;
            int xSplit = static_cast<int>(32.0f * scale);

            TrayHoverZone newZone = TrayHoverZone::None;
            if (x >= 0 && x < xSplit) {
                newZone = TrayHoverZone::Wifi;
            } else if (x >= xSplit && x < w) {
                newZone = TrayHoverZone::Audio;
            }

            if (inst && inst->hoverZone != newZone) {
                if (inst->hoverZone == TrayHoverZone::Audio && newZone != TrayHoverZone::Audio) {
                    g_volumeOsdExpiryTick.store(0);
                }
                inst->hoverZone = newZone;
                if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            }

            TRACKMOUSEEVENT tme{ sizeof(tme), TME_LEAVE, hWnd, 0 };
            TrackMouseEvent(&tme);
            return 0;
        }

        case WM_MOUSELEAVE: {
            bool needWake = false;
            if (g_volumeOsdExpiryTick.exchange(0) != 0) {
                needWake = true;
            }
            if (inst && inst->hoverZone != TrayHoverZone::None) {
                inst->hoverZone = TrayHoverZone::None;
                needWake = true;
            }
            if (needWake && g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            return 0;
        }

        case WM_LBUTTONDOWN: {
            int x = static_cast<int>(static_cast<short>(LOWORD(lParam)));
            float dpi = static_cast<float>(GetWindowDpiSafe(hWnd));
            float scale = dpi / 96.0f;
            int xSplit = static_cast<int>(32.0f * scale);
            HWND hSecTaskbar = inst ? inst->hSecondaryTray : nullptr;

            if (x >= 0 && x < xSplit) {
                // 1. Independent Wi-Fi / Network flyout right on secondary monitor
                OpenOrToggleSecondaryWifiPopup(hWnd, hSecTaskbar);
            } else {
                // 2. Independent Audio / Volume flyout right on secondary monitor
                OpenOrToggleSecondaryAudioPopup(hWnd, hSecTaskbar);
            }
            return 0;
        }

        case WM_MOUSEWHEEL: {
            if (inst && inst->hoverZone == TrayHoverZone::Wifi) {
                return 0;
            }
            short delta = GET_WHEEL_DELTA_WPARAM(wParam);
            float step = (delta > 0 ? 0.02f : -0.02f);
            AdjustMasterVolume(step);
            g_volumeOsdExpiryTick.store(GetTickCount64() + 1200);
            if (g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd)) {
                RenderAudioPopup();
            }
            if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
            return 0;
        }

        case WM_RBUTTONUP: {
            int x = static_cast<int>(static_cast<short>(LOWORD(lParam)));
            float dpi = static_cast<float>(GetWindowDpiSafe(hWnd));
            float scale = dpi / 96.0f;
            int xSplit = static_cast<int>(32.0f * scale);
            bool onWifi = (x >= 0 && x < xSplit);

            ModSettings s = GetSettings();
            bool vi = UseVietnameseLabels(s);
            HMENU hMenu = CreatePopupMenu();
            if (hMenu) {
                if (onWifi) {
                    AppendMenuW(hMenu, MF_STRING, 203, vi ? L"🌐 Cài đặt Mạng & Internet" : L"🌐 Network & Internet Settings");
                    AppendMenuW(hMenu, MF_STRING, 204, vi ? L"📶 Cài đặt Wi-Fi" : L"📶 Wi-Fi Settings");
                } else {
                    bool muted = g_liveMasterMuted.load();
                    AppendMenuW(hMenu, MF_STRING, 200,
                                muted ? (vi ? L"🔊 Bật tiếng (Unmute)" : L"🔊 Unmute")
                                      : (vi ? L"🔇 Tắt tiếng (Mute)" : L"🔇 Mute"));
                    AppendMenuW(hMenu, MF_SEPARATOR, 0, nullptr);
                    AppendMenuW(hMenu, MF_STRING, 201, vi ? L"🔊 Cài đặt âm thanh (Sound)" : L"🔊 Sound Settings");
                    AppendMenuW(hMenu, MF_STRING, 202, vi ? L"🎚 Bộ trộn âm lượng (Volume Mixer)" : L"🎚 Volume Mixer");
                }

                POINT pt{};
                GetCursorPos(&pt);
                SetForegroundWindow(hWnd);
                int cmd = TrackPopupMenu(hMenu, TPM_RETURNCMD | TPM_NONOTIFY, pt.x, pt.y, 0, hWnd, nullptr);
                DestroyMenu(hMenu);

                if (cmd == 200) {
                    ToggleMasterMute();
                    if (g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd)) RenderAudioPopup();
                    if (g_sysMonitorWakeEvent) SetEvent(g_sysMonitorWakeEvent);
                } else if (cmd == 201) ShellExecuteW(nullptr, L"open", L"ms-settings:sound", nullptr, nullptr, SW_SHOWNORMAL);
                else if (cmd == 202) ShellExecuteW(nullptr, L"open", L"sndvol.exe", nullptr, nullptr, SW_SHOWNORMAL);
                else if (cmd == 203) ShellExecuteW(nullptr, L"open", L"ms-settings:network", nullptr, nullptr, SW_SHOWNORMAL);
                else if (cmd == 204) ShellExecuteW(nullptr, L"open", L"ms-settings:network-wifi", nullptr, nullptr, SW_SHOWNORMAL);
            }
            return 0;
        }
    }
    return DefWindowProcW(hWnd, uMsg, wParam, lParam);
}

void RenderStatsBitmapToLayeredWindow(
    HWND hWnd,
    LayeredPopupSurface& surface,
    const std::vector<StatsColumn>& cols,
    ID2D1Factory* d2dFactory,
    IDWriteTextFormat* fmtLabel,
    IDWriteTextFormat* fmtValue,
    IDWriteTextFormat* fmtCenter,
    int pxW, int pxH, float dipW, float dipH,
    float dpi, bool lightTheme,
    float padX, float colGap,
    int targetX, int targetY) {
    if (!hWnd || !d2dFactory || !fmtLabel || !fmtValue || !fmtCenter || cols.empty()) return;
    if (!surface.Ensure(d2dFactory, pxW, pxH, dpi)) return;

    ID2D1DCRenderTarget* dcTarget = surface.dcTarget;
    ID2D1SolidColorBrush* brush = surface.cachedBrush;
    if (!dcTarget || !brush) return;

    RECT rcBind{0, 0, pxW, pxH};
    if (SUCCEEDED(dcTarget->BindDC(surface.hdcMem, &rcBind))) {
        dcTarget->BeginDraw();
        dcTarget->Clear(D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.0f));

        D2D1_ROUNDED_RECT pill = D2D1::RoundedRect(
            D2D1::RectF(0.5f, 0.5f, dipW - 0.5f, dipH - 0.5f), 5.5f, 5.5f);
        brush->SetColor(lightTheme ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.06f)
                                   : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.08f));
        dcTarget->FillRoundedRectangle(pill, brush);

        brush->SetColor(lightTheme ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.16f)
                                   : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.16f));
        dcTarget->DrawRoundedRectangle(pill, brush, 1.0f);

        float curX = padX;
        float row1Top = 1.5f, row1Bot = dipH * 0.5f;
        float row2Top = dipH * 0.5f, row2Bot = dipH - 1.5f;

        for (size_t i = 0; i < cols.size(); i++) {
            const auto& c = cols[i];
            if (c.singleRow) {
                D2D1_RECT_F rMid = D2D1::RectF(curX, 1.5f, curX + c.widthDip, dipH - 1.5f);
                if (!c.topLabel.empty()) {
                    brush->SetColor(c.topLabelColor);
                    dcTarget->DrawText(c.topLabel.c_str(), static_cast<UINT32>(c.topLabel.size()), fmtLabel, rMid, brush);
                }
                if (!c.topValue.empty()) {
                    brush->SetColor(c.topValueColor);
                    dcTarget->DrawText(c.topValue.c_str(), static_cast<UINT32>(c.topValue.size()),
                                       c.topCentered ? fmtCenter : fmtValue, rMid, brush);
                }
            } else {
                if (c.valueLeading) {
                    float lblW = 10.0f;
                    D2D1_RECT_F rLblTop = D2D1::RectF(curX, row1Top, curX + lblW, row1Bot);
                    D2D1_RECT_F rValTop = D2D1::RectF(curX + lblW + 2.0f, row1Top, curX + c.widthDip, row1Bot);
                    D2D1_RECT_F rLblBot = D2D1::RectF(curX, row2Top, curX + lblW, row2Bot);
                    D2D1_RECT_F rValBot = D2D1::RectF(curX + lblW + 2.0f, row2Top, curX + c.widthDip, row2Bot);

                    if (!c.topLabel.empty()) {
                        brush->SetColor(c.topLabelColor);
                        dcTarget->DrawText(c.topLabel.c_str(), static_cast<UINT32>(c.topLabel.size()), fmtLabel, rLblTop, brush);
                    }
                    if (!c.topValue.empty()) {
                        brush->SetColor(c.topValueColor);
                        dcTarget->DrawText(c.topValue.c_str(), static_cast<UINT32>(c.topValue.size()), fmtLabel, rValTop, brush);
                    }
                    if (!c.botLabel.empty()) {
                        brush->SetColor(c.botLabelColor);
                        dcTarget->DrawText(c.botLabel.c_str(), static_cast<UINT32>(c.botLabel.size()), fmtLabel, rLblBot, brush);
                    }
                    if (!c.botValue.empty()) {
                        brush->SetColor(c.botValueColor);
                        dcTarget->DrawText(c.botValue.c_str(), static_cast<UINT32>(c.botValue.size()), fmtLabel, rValBot, brush);
                    }
                } else {
                    D2D1_RECT_F rTop = D2D1::RectF(curX, row1Top, curX + c.widthDip, row1Bot);
                    D2D1_RECT_F rBot = D2D1::RectF(curX, row2Top, curX + c.widthDip, row2Bot);

                    if (!c.topLabel.empty()) {
                        brush->SetColor(c.topLabelColor);
                        dcTarget->DrawText(c.topLabel.c_str(), static_cast<UINT32>(c.topLabel.size()), fmtLabel, rTop, brush);
                    }
                    if (!c.topValue.empty()) {
                        brush->SetColor(c.topValueColor);
                        dcTarget->DrawText(c.topValue.c_str(), static_cast<UINT32>(c.topValue.size()),
                                           c.topCentered ? fmtCenter : fmtValue, rTop, brush);
                    }
                    if (!c.botLabel.empty()) {
                        brush->SetColor(c.botLabelColor);
                        dcTarget->DrawText(c.botLabel.c_str(), static_cast<UINT32>(c.botLabel.size()), fmtLabel, rBot, brush);
                    }
                    if (!c.botValue.empty()) {
                        brush->SetColor(c.botValueColor);
                        dcTarget->DrawText(c.botValue.c_str(), static_cast<UINT32>(c.botValue.size()),
                                           c.topCentered ? fmtCenter : fmtValue, rBot, brush);
                    }
                }
            }

            curX += c.widthDip;
            if (i + 1 < cols.size()) {
                float divX = std::floor(curX + colGap * 0.5f) + 0.5f;
                brush->SetColor(lightTheme ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.14f)
                                           : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.15f));
                dcTarget->DrawLine(D2D1::Point2F(divX, 5.5f), D2D1::Point2F(divX, dipH - 5.5f), brush, 1.0f);
                curX += colGap;
            }
        }
        dcTarget->EndDraw();
        surface.Present(hWnd, targetX, targetY, 255);
    }
}

void RenderSecondaryTrayBitmap(HWND hWidget,
                              SecondaryTrayInstance& inst,
                              ID2D1Factory* d2dFactory,
                              IDWriteTextFormat* fmtGlyph,
                              IDWriteTextFormat* fmtOsd,
                              int pxW, int pxH, float dipW, float dipH,
                              float dpi, bool lightTheme,
                              bool hasWifi, bool hasEthernet, bool hasNetwork,
                              float masterVol, bool isMuted, bool showVolumeOsd,
                              int targetX, int targetY) {
    if (!hWidget || !d2dFactory || !fmtGlyph || !fmtOsd) return;
    if (!inst.traySurface.Ensure(d2dFactory, pxW, pxH, dpi)) return;

    ID2D1DCRenderTarget* dcTarget = inst.traySurface.dcTarget;
    ID2D1SolidColorBrush* brush = inst.traySurface.cachedBrush;
    if (!dcTarget || !brush) return;

    RECT rcBind{0, 0, pxW, pxH};
    if (SUCCEEDED(dcTarget->BindDC(inst.traySurface.hdcMem, &rcBind))) {
        dcTarget->BeginDraw();
        dcTarget->Clear(D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.0f));

        D2D1_COLOR_F hoverColor = lightTheme ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.07f)
                                             : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.09f);
        D2D1_COLOR_F activeColor = lightTheme ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.11f)
                                              : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.13f);
        D2D1_COLOR_F normalColor = lightTheme ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.88f)
                                              : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.92f);
        D2D1_COLOR_F dimColor = lightTheme ? D2D1::ColorF(0.0f, 0.0f, 0.0f, 0.45f)
                                           : D2D1::ColorF(1.0f, 1.0f, 1.0f, 0.55f);

        float topY = 2.0f;
        float botY = dipH - 2.0f;

        bool wifiOpen = (g_secWifiPopupHwnd && IsWindowVisible(g_secWifiPopupHwnd) &&
                         g_wifiPopupState.anchorWidget == hWidget);
        bool audioOpen = (g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd) &&
                          g_audioPopupState.anchorWidget == hWidget);

        // Button 1: Independent Wi-Fi / Network (x: 2.0f to 31.0f) with smooth Fluent hover fade
        D2D1_RECT_F rWifi = D2D1::RectF(2.0f, topY, 31.0f, botY);
        brush->SetColor(D2D1::ColorF(0.0f, 0.0f, 0.0f, 1.5f / 255.0f));
        dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rWifi, 5.0f, 5.0f), brush);
        float wfAlpha = wifiOpen ? 1.0f : inst.wifiHoverAlpha;
        if (wfAlpha > 0.01f) {
            D2D1_COLOR_F c = wifiOpen ? activeColor : hoverColor;
            c.a *= wfAlpha;
            brush->SetColor(c);
            dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rWifi, 5.0f, 5.0f), brush);
        }
        WCHAR glyphWifi[2]{};
        if (hasWifi) {
            glyphWifi[0] = 0xE701; // Wifi
            brush->SetColor(normalColor);
        } else if (hasEthernet) {
            glyphWifi[0] = 0xE839; // Ethernet
            brush->SetColor(normalColor);
        } else {
            glyphWifi[0] = 0xEB55; // Offline
            brush->SetColor(dimColor);
        }
        dcTarget->DrawText(glyphWifi, 1, fmtGlyph, rWifi, brush);

        // Button 2: Independent Audio / Speaker (x: 33.0f to 62.0f) with smooth Fluent hover fade
        D2D1_RECT_F rVol = D2D1::RectF(33.0f, topY, 62.0f, botY);
        brush->SetColor(D2D1::ColorF(0.0f, 0.0f, 0.0f, 1.5f / 255.0f));
        dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rVol, 5.0f, 5.0f), brush);
        float auAlpha = audioOpen ? 1.0f : inst.audioHoverAlpha;
        if (auAlpha > 0.01f) {
            D2D1_COLOR_F c = audioOpen ? activeColor : hoverColor;
            c.a *= auAlpha;
            brush->SetColor(c);
            dcTarget->FillRoundedRectangle(D2D1::RoundedRect(rVol, 5.0f, 5.0f), brush);
        }
        float osdA = std::clamp(inst.volOsdAlpha, 0.0f, 1.0f);
        if (osdA < 0.99f) {
            WCHAR glyphVol[2]{};
            D2D1_COLOR_F glyphCol = normalColor;
            if (isMuted || masterVol <= 0.001f) {
                glyphVol[0] = 0xE74F; // Mute
                glyphCol = dimColor;
            } else if (masterVol < 0.33f) {
                glyphVol[0] = 0xE993; // Volume 1
            } else if (masterVol < 0.66f) {
                glyphVol[0] = 0xE994; // Volume 2
            } else {
                glyphVol[0] = 0xE995; // Volume 3
            }
            glyphCol.a *= (1.0f - osdA);
            brush->SetColor(glyphCol);
            dcTarget->DrawText(glyphVol, 1, fmtGlyph, rVol, brush);
        }
        if (osdA > 0.01f) {
            int volPct = isMuted ? 0 : std::clamp(static_cast<int>(masterVol * 100.0f + 0.5f), 0, 100);
            WCHAR volStr[16]{};
            _snwprintf_s(volStr, _TRUNCATE, L"%d%%", volPct);
            D2D1_COLOR_F osdCol = (isMuted || volPct == 0) ? dimColor : normalColor;
            osdCol.a *= osdA;
            brush->SetColor(osdCol);
            D2D1_RECT_F rOsd = D2D1::RectF(rVol.left - 1.5f, rVol.top, rVol.right + 1.5f, rVol.bottom);
            dcTarget->DrawText(volStr, static_cast<UINT32>(wcslen(volStr)), fmtOsd, rOsd, brush);
        }

        dcTarget->EndDraw();
        inst.traySurface.Present(hWidget, targetX, targetY, 255);
    }
}

static constexpr GUID kClsidCUIAutomation =
    { 0xff48dba4, 0x60ef, 0x4201, { 0xaa, 0x87, 0x54, 0x10, 0x3e, 0xef, 0x59, 0x4e } };
static constexpr GUID kIidIUIAutomation =
    { 0x30cbe57d, 0xd9d0, 0x452a, { 0xab, 0x13, 0x7a, 0xc5, 0xac, 0x48, 0x25, 0xee } };

std::mutex g_secClockMarginMutex;
std::unordered_map<HWND, int> g_secClockMargins;
std::vector<HWND> g_activeSecTraysForUia;
std::thread g_secClockUiaThread;

int MeasureSecondaryClockMarginWithUia(IUIAutomation* pUia, IUIAutomationCacheRequest* pCacheReq, HWND hSec) {
    if (!pUia || !hSec || !IsWindow(hSec) || !IsWindowVisible(hSec)) return 0;
    // Win10 fast-skip: if native Win32 ClockButton exists, main loop reads it in 0.001ms without UIA
    HWND hNativeClock = FindWindowExW(hSec, nullptr, L"ClockButton", nullptr);
    if (hNativeClock && IsWindowVisible(hNativeClock)) return 0;

    RECT rcSec{};
    if (!GetWindowRect(hSec, &rcSec)) return 0;
    int tbW = rcSec.right - rcSec.left;
    int tbH = rcSec.bottom - rcSec.top;
    if (tbW < 200 || tbH < 20) return 0;

    float scale = static_cast<float>(GetWindowDpiSafe(hSec)) / 96.0f;

    IUIAutomationElement* pRoot = nullptr;
    if (FAILED(pUia->ElementFromHandle(hSec, &pRoot)) || !pRoot) return 0;

    VARIANT varBtn{};
    varBtn.vt = VT_I4;
    varBtn.lVal = UIA_ButtonControlTypeId;
    IUIAutomationCondition* pCond = nullptr;
    int measuredMargin = 0;

    if (SUCCEEDED(pUia->CreatePropertyCondition(UIA_ControlTypePropertyId, varBtn, &pCond)) && pCond) {
        IUIAutomationElementArray* pArr = nullptr;
        HRESULT hrFind = pCacheReq
                             ? pRoot->FindAllBuildCache(TreeScope_Descendants, pCond, pCacheReq, &pArr)
                             : pRoot->FindAll(TreeScope_Descendants, pCond, &pArr);
        if (SUCCEEDED(hrFind) && pArr) {
            int count = 0;
            pArr->get_Length(&count);

            int rightZoneLimit = rcSec.right - static_cast<int>(260.0f * scale);
            int minRightEdgeAttach = rcSec.right - static_cast<int>(38.0f * scale);
            int minBtnW = static_cast<int>(36.0f * scale);
            int maxBtnW = static_cast<int>(250.0f * scale);
            int minBtnH = static_cast<int>(18.0f * scale);

            int bestLeft = rcSec.right;
            bool foundPrimaryClockBtn = false;

            struct BtnRect { int l, r; };
            std::vector<BtnRect> rightBtns;

            for (int i = 0; i < count; ++i) {
                IUIAutomationElement* pEl = nullptr;
                if (SUCCEEDED(pArr->GetElement(i, &pEl)) && pEl) {
                    RECT rcEl{};
                    HRESULT hrRect = pCacheReq ? pEl->get_CachedBoundingRectangle(&rcEl)
                                               : pEl->get_CurrentBoundingRectangle(&rcEl);
                    if (SUCCEEDED(hrRect)) {
                        int w = rcEl.right - rcEl.left;
                        int h = rcEl.bottom - rcEl.top;
                        if (w >= static_cast<int>(16.0f * scale) && w <= maxBtnW &&
                            h >= minBtnH && h <= tbH + 6 &&
                            rcEl.left >= rightZoneLimit && rcEl.right <= rcSec.right + 4 &&
                            rcEl.top >= rcSec.top - 4 && rcEl.bottom <= rcSec.bottom + 4) {
                            rightBtns.push_back({ static_cast<int>(rcEl.left), static_cast<int>(rcEl.right) });
                            if (w >= minBtnW && rcEl.right >= minRightEdgeAttach) {
                                bestLeft = std::min(bestLeft, static_cast<int>(rcEl.left));
                                foundPrimaryClockBtn = true;
                            }
                        }
                    }
                    pEl->Release();
                }
            }

            if (foundPrimaryClockBtn) {
                bool extended = true;
                while (extended) {
                    extended = false;
                    for (const auto& b : rightBtns) {
                        if (b.l < bestLeft &&
                            b.r >= bestLeft - static_cast<int>(10.0f * scale) &&
                            b.r <= bestLeft + static_cast<int>(6.0f * scale) &&
                            b.l >= rcSec.right - static_cast<int>(240.0f * scale)) {
                            bestLeft = b.l;
                            extended = true;
                        }
                    }
                }
                measuredMargin = (static_cast<int>(rcSec.right) - bestLeft) + static_cast<int>(4.0f * scale);
                measuredMargin = std::clamp(measuredMargin,
                                            static_cast<int>(64.0f * scale),
                                            static_cast<int>(240.0f * scale));
            }
            pArr->Release();
        }
        pCond->Release();
    }
    pRoot->Release();
    return measuredMargin;
}

void RunSecondaryClockUiaLoop() {
    HRESULT hrCo = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
    IUIAutomation* pUia = nullptr;
    CoCreateInstance(kClsidCUIAutomation, nullptr, CLSCTX_INPROC_SERVER,
                     kIidIUIAutomation, reinterpret_cast<void**>(&pUia));

    IUIAutomationCacheRequest* pCacheReq = nullptr;
    if (pUia && SUCCEEDED(pUia->CreateCacheRequest(&pCacheReq)) && pCacheReq) {
        pCacheReq->AddProperty(UIA_BoundingRectanglePropertyId);
    }

    while (!g_shuttingDown) {
        ModSettings s = GetSettings();
        if (pUia && (s.enableSecondaryMonitorTray || s.enableSecondaryMonitorStats)) {
            std::vector<HWND> targets;
            {
                std::lock_guard<std::mutex> lock(g_secClockMarginMutex);
                targets = g_activeSecTraysForUia;
            }
            bool anyChanged = false;
            for (HWND hSec : targets) {
                if (g_shuttingDown) break;
                int m = MeasureSecondaryClockMarginWithUia(pUia, pCacheReq, hSec);
                if (m > 0) {
                    std::lock_guard<std::mutex> lock(g_secClockMarginMutex);
                    auto it = g_secClockMargins.find(hSec);
                    if (it == g_secClockMargins.end() || it->second != m) {
                        g_secClockMargins[hSec] = m;
                        anyChanged = true;
                    }
                }
            }
            if (anyChanged && g_sysMonitorWakeEvent) {
                SetEvent(g_sysMonitorWakeEvent);
            }
        }
        if (g_sysMonitorStopEvent) {
            if (WaitForSingleObject(g_sysMonitorStopEvent, 1200) == WAIT_OBJECT_0) break;
        } else {
            Sleep(1200);
        }
    }

    if (pCacheReq) pCacheReq->Release();
    if (pUia) pUia->Release();
    if (SUCCEEDED(hrCo)) CoUninitialize();
}

void RunTaskbarSystemMonitorLoop() {
    HRESULT hrCoInit = CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);
    g_userOffsetX = LoadPersistedOffsetX();
    g_secUserOffsetX = LoadPersistedSecOffsetX();

    HMODULE hPdh = LoadLibraryExW(L"pdh.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    PdhOpenQueryW_t pPdhOpenQueryW = nullptr;
    PdhAddEnglishCounterW_t pPdhAddEnglishCounterW = nullptr;
    PdhCollectQueryData_t pPdhCollectQueryData = nullptr;
    PdhGetFormattedCounterArrayW_t pPdhGetFormattedCounterArrayW = nullptr;
    PdhCloseQuery_t pPdhCloseQuery = nullptr;

    if (hPdh) {
        pPdhOpenQueryW = reinterpret_cast<PdhOpenQueryW_t>(GetProcAddress(hPdh, "PdhOpenQueryW"));
        pPdhAddEnglishCounterW = reinterpret_cast<PdhAddEnglishCounterW_t>(GetProcAddress(hPdh, "PdhAddEnglishCounterW"));
        pPdhCollectQueryData = reinterpret_cast<PdhCollectQueryData_t>(GetProcAddress(hPdh, "PdhCollectQueryData"));
        pPdhGetFormattedCounterArrayW = reinterpret_cast<PdhGetFormattedCounterArrayW_t>(GetProcAddress(hPdh, "PdhGetFormattedCounterArrayW"));
        pPdhCloseQuery = reinterpret_cast<PdhCloseQuery_t>(GetProcAddress(hPdh, "PdhCloseQuery"));
    }

    HMODULE hIphlp = LoadLibraryExW(L"iphlpapi.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    GetIfTable2_t pGetIfTable2 = hIphlp ? reinterpret_cast<GetIfTable2_t>(GetProcAddress(hIphlp, "GetIfTable2")) : nullptr;
    FreeMibTable_t pFreeMibTable = hIphlp ? reinterpret_cast<FreeMibTable_t>(GetProcAddress(hIphlp, "FreeMibTable")) : nullptr;

    PDH_HQUERY_T hQuery = nullptr;
    PDH_HCOUNTER_T hGpuCounter = nullptr;
    if (pPdhOpenQueryW && pPdhAddEnglishCounterW && pPdhCollectQueryData) {
        if (pPdhOpenQueryW(nullptr, 0, &hQuery) == 0 && hQuery) {
            pPdhAddEnglishCounterW(hQuery, L"\\GPU Engine(*)\\Utilization Percentage", 0, &hGpuCounter);
            pPdhCollectQueryData(hQuery);
        }
    }

    ID2D1Factory* d2dFactory = nullptr;
    IDWriteFactory* dwriteFactory = nullptr;
    D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &d2dFactory);
    DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED, __uuidof(IDWriteFactory),
                        reinterpret_cast<IUnknown**>(&dwriteFactory));

    IDWriteTextFormat* fmtLabel = nullptr;
    IDWriteTextFormat* fmtValue = nullptr;
    IDWriteTextFormat* fmtCenter = nullptr;
    if (dwriteFactory) {
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        11.0f, L"vi-VN", &fmtLabel);
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        11.0f, L"vi-VN", &fmtValue);
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        10.5f, L"vi-VN", &fmtCenter);
        if (fmtLabel) {
            fmtLabel->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
            fmtLabel->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            fmtLabel->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
        if (fmtValue) {
            fmtValue->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_TRAILING);
            fmtValue->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            fmtValue->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
        if (fmtCenter) {
            fmtCenter->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
            fmtCenter->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            fmtCenter->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
    }

    IDWriteTextFormat* fmtTrayGlyph = nullptr;
    IDWriteTextFormat* fmtTrayText = nullptr;
    IDWriteTextFormat* fmtTrayOsd = nullptr;
    if (dwriteFactory) {
        if (FAILED(dwriteFactory->CreateTextFormat(L"Segoe Fluent Icons", nullptr, DWRITE_FONT_WEIGHT_NORMAL,
                                                  DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                                  13.5f, L"en-US", &fmtTrayGlyph)) || !fmtTrayGlyph) {
            dwriteFactory->CreateTextFormat(L"Segoe MDL2 Assets", nullptr, DWRITE_FONT_WEIGHT_NORMAL,
                                            DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                            13.5f, L"en-US", &fmtTrayGlyph);
        }
        if (fmtTrayGlyph) {
            fmtTrayGlyph->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
            fmtTrayGlyph->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            fmtTrayGlyph->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }

        if (FAILED(dwriteFactory->CreateTextFormat(L"Segoe UI Variable Text", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                                  DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                                  11.5f, L"en-US", &fmtTrayText)) || !fmtTrayText) {
            dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                            DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                            11.5f, L"en-US", &fmtTrayText);
        }
        if (fmtTrayText) {
            fmtTrayText->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
            fmtTrayText->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            fmtTrayText->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }

        if (FAILED(dwriteFactory->CreateTextFormat(L"Segoe UI Variable Text", nullptr, DWRITE_FONT_WEIGHT_BOLD,
                                                  DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                                  10.5f, L"en-US", &fmtTrayOsd)) || !fmtTrayOsd) {
            dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_BOLD,
                                            DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                            10.5f, L"en-US", &fmtTrayOsd);
        }
        if (fmtTrayOsd) {
            fmtTrayOsd->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
            fmtTrayOsd->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            fmtTrayOsd->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
    }

    InitAudioEndpoint();

    HINSTANCE hInst = GetModuleHandleW(nullptr);
    WNDCLASSEXW wc{};
    wc.cbSize = sizeof(wc);
    wc.style = CS_DBLCLKS;
    wc.lpfnWndProc = StatsWidgetWndProc;
    wc.hInstance = hInst;
    wc.hCursor = LoadCursorW(nullptr, IDC_SIZEWE);
    wc.lpszClassName = kStatsWidgetClassName;
    RegisterClassExW(&wc);

    WNDCLASSEXW wcSecTray{};
    wcSecTray.cbSize = sizeof(wcSecTray);
    wcSecTray.style = CS_DBLCLKS;
    wcSecTray.lpfnWndProc = SecondaryTrayWidgetWndProc;
    wcSecTray.hInstance = hInst;
    wcSecTray.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32649));
    wcSecTray.lpszClassName = kSecondaryTrayWidgetClassName;
    RegisterClassExW(&wcSecTray);

    g_secPopupD2dFactory = d2dFactory;
    if (dwriteFactory) {
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        13.5f, L"vi-VN", &g_secPopupFmtTitle);
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_NORMAL,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        12.0f, L"vi-VN", &g_secPopupFmtBody);
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_NORMAL,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        10.5f, L"vi-VN", &g_secPopupFmtSmall);
        dwriteFactory->CreateTextFormat(L"Segoe MDL2 Assets", nullptr, DWRITE_FONT_WEIGHT_NORMAL,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        14.5f, L"", &g_secPopupFmtIcon);
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        11.0f, L"vi-VN", &g_secPopupFmtCenter);
        dwriteFactory->CreateTextFormat(L"Segoe UI", nullptr, DWRITE_FONT_WEIGHT_SEMI_BOLD,
                                        DWRITE_FONT_STYLE_NORMAL, DWRITE_FONT_STRETCH_NORMAL,
                                        12.0f, L"vi-VN", &g_secPopupFmtRight);
        if (g_secPopupFmtTitle) {
            g_secPopupFmtTitle->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
            g_secPopupFmtTitle->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            g_secPopupFmtTitle->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
        if (g_secPopupFmtBody) {
            g_secPopupFmtBody->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
            g_secPopupFmtBody->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            g_secPopupFmtBody->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
            IDWriteInlineObject* ellipsis = nullptr;
            if (SUCCEEDED(dwriteFactory->CreateEllipsisTrimmingSign(g_secPopupFmtBody, &ellipsis)) && ellipsis) {
                DWRITE_TRIMMING trim{ DWRITE_TRIMMING_GRANULARITY_CHARACTER, 0, 0 };
                g_secPopupFmtBody->SetTrimming(&trim, ellipsis);
                ellipsis->Release();
            }
        }
        if (g_secPopupFmtSmall) {
            g_secPopupFmtSmall->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_LEADING);
            g_secPopupFmtSmall->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            g_secPopupFmtSmall->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
        if (g_secPopupFmtIcon) {
            g_secPopupFmtIcon->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
            g_secPopupFmtIcon->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            g_secPopupFmtIcon->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
        if (g_secPopupFmtCenter) {
            g_secPopupFmtCenter->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
            g_secPopupFmtCenter->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            g_secPopupFmtCenter->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
        if (g_secPopupFmtRight) {
            g_secPopupFmtRight->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_TRAILING);
            g_secPopupFmtRight->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);
            g_secPopupFmtRight->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
        }
    }

    WNDCLASSEXW wcAudioPop{};
    wcAudioPop.cbSize = sizeof(wcAudioPop);
    wcAudioPop.lpfnWndProc = SecondaryAudioPopupWndProc;
    wcAudioPop.hInstance = hInst;
    wcAudioPop.hCursor = LoadCursorW(nullptr, IDC_ARROW);
    wcAudioPop.lpszClassName = kSecAudioPopupClassName;
    RegisterClassExW(&wcAudioPop);

    WNDCLASSEXW wcWifiPop{};
    wcWifiPop.cbSize = sizeof(wcWifiPop);
    wcWifiPop.lpfnWndProc = SecondaryWifiPopupWndProc;
    wcWifiPop.hInstance = hInst;
    wcWifiPop.hCursor = LoadCursorW(nullptr, IDC_ARROW);
    wcWifiPop.lpszClassName = kSecWifiPopupClassName;
    RegisterClassExW(&wcWifiPop);

    using CreateWindowInBand_t = HWND(WINAPI*)(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName,
                                               DWORD dwStyle, int X, int Y, int nWidth, int nHeight,
                                               HWND hWndParent, HMENU hMenu, HINSTANCE hInstance,
                                               PVOID lpParam, DWORD dwBand);
    auto pCreateWindowInBand = reinterpret_cast<CreateWindowInBand_t>(
        GetProcAddress(GetModuleHandleW(L"user32.dll"), "CreateWindowInBand"));

    HWND hWidget = nullptr;
    if (pCreateWindowInBand) {
        hWidget = pCreateWindowInBand(
            WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST,
            kStatsWidgetClassName,
            L"",
            WS_POPUP,
            0, 0, 0, 0,
            nullptr, nullptr, hInst, nullptr, 16 /* ZBID_SYSTEM_TOOLS */);
    }
    if (!hWidget) {
        hWidget = CreateWindowExW(
            WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST,
            kStatsWidgetClassName,
            L"",
            WS_POPUP,
            0, 0, 0, 0,
            nullptr, nullptr, hInst, nullptr);
    }
    g_statsWidgetHwnd.store(hWidget);

    auto createPopupWindow = [&](PCWSTR className) -> HWND {
        HWND hw = nullptr;
        if (pCreateWindowInBand) {
            hw = pCreateWindowInBand(
                WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_TOPMOST,
                className, L"", WS_POPUP, 0, 0, 0, 0,
                nullptr, nullptr, hInst, nullptr, 16 /* ZBID_SYSTEM_TOOLS */);
        }
        if (!hw) {
            hw = CreateWindowExW(
                WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_TOPMOST,
                className, L"", WS_POPUP, 0, 0, 0, 0,
                nullptr, nullptr, hInst, nullptr);
        }
        return hw;
    };
    g_secAudioPopupHwnd = createPopupWindow(kSecAudioPopupClassName);
    g_secWifiPopupHwnd = createPopupWindow(kSecWifiPopupClassName);

    auto createSecondaryTrayWidget = [&](SecondaryTrayInstance* pInst) -> HWND {
        HWND hw = nullptr;
        if (pCreateWindowInBand) {
            hw = pCreateWindowInBand(
                WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST,
                kSecondaryTrayWidgetClassName,
                L"",
                WS_POPUP,
                0, 0, 0, 0,
                nullptr, nullptr, hInst, nullptr, 16 /* ZBID_SYSTEM_TOOLS */);
        }
        if (!hw) {
            hw = CreateWindowExW(
                WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST,
                kSecondaryTrayWidgetClassName,
                L"",
                WS_POPUP,
                0, 0, 0, 0,
                nullptr, nullptr, hInst, nullptr);
        }
        if (hw) {
            SetWindowLongPtrW(hw, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(pInst));
        }
        return hw;
    };

    auto createSecondaryStatsWidget = [&]() -> HWND {
        HWND hw = nullptr;
        if (pCreateWindowInBand) {
            hw = pCreateWindowInBand(
                WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST,
                kStatsWidgetClassName,
                L"",
                WS_POPUP,
                0, 0, 0, 0,
                nullptr, nullptr, hInst, nullptr, 16 /* ZBID_SYSTEM_TOOLS */);
        }
        if (!hw) {
            hw = CreateWindowExW(
                WS_EX_LAYERED | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE | WS_EX_TOPMOST,
                kStatsWidgetClassName,
                L"",
                WS_POPUP,
                0, 0, 0, 0,
                nullptr, nullptr, hInst, nullptr);
        }
        return hw;
    };

    std::vector<std::unique_ptr<SecondaryTrayInstance>> secondaryInstances;

    HWINEVENTHOOK hTrayEventHook = nullptr;
    DWORD hookedTrayTid = 0;
    auto ensureTrayWinEventHook = [&](HWND hTrayWnd) {
        if (!hTrayWnd) return;
        DWORD pid = 0;
        DWORD tid = GetWindowThreadProcessId(hTrayWnd, &pid);
        if (tid != 0 && tid != hookedTrayTid) {
            if (hTrayEventHook) {
                UnhookWinEvent(hTrayEventHook);
                hTrayEventHook = nullptr;
            }
            hTrayEventHook = SetWinEventHook(
                EVENT_OBJECT_CREATE, EVENT_OBJECT_LOCATIONCHANGE,
                nullptr, TrayWinEventProc, pid, tid, WINEVENT_OUTOFCONTEXT);
            hookedTrayTid = tid;
        }
    };

    uint64_t prevIdle = 0, prevKernel = 0, prevUser = 0;
    FILETIME ftIdle{}, ftKernel{}, ftUser{};
    if (GetSystemTimes(&ftIdle, &ftKernel, &ftUser)) {
        prevIdle = FileTimeToU64(ftIdle);
        prevKernel = FileTimeToU64(ftKernel);
        prevUser = FileTimeToU64(ftUser);
    }

    uint64_t prevNetIn = 0, prevNetOut = 0;
    uint32_t prevAdapterSig = 0;
    ULONGLONG prevNetTick = 0;
    if (SampleNetworkOctetsFromIfTable2(pGetIfTable2, pFreeMibTable, prevNetIn, prevNetOut, prevAdapterSig)) {
        prevNetTick = GetTickCount64();
    }

    LiveSystemMetrics metrics{};
    ULONGLONG lastSampleTick = 0;
    ULONGLONG lastNetDetectTick = 0;
    ULONGLONG lastThemeCheckTick = 0;
    bool cachedLightTheme = IsLightSystemThemeFallback();
    uint64_t metricsGen = 1;
    uint64_t lastPrimaryMetricsGen = 0;
    uint32_t lastMetricsColsMask = 0xFFFFFFFFu;
    uint64_t lastBuiltColsGen = 0;
    bool lastBuiltColsLightTheme = false;
    std::vector<StatsColumn> cachedCols;
    float cachedDipW = 32.0f;
    LayeredPopupSurface primaryStatsSurface{};
    int lastRenderedPxW = 0, lastRenderedPxH = 0;
    int lastPlacedX = -99999, lastPlacedY = -99999;
    float animPrimaryStatsX = 0.0f;
    bool hasAnimPrimaryStatsX = false;
    bool lastRenderedLightTheme = false;
    float lastRenderedDpi = 0.0f;

    auto sampleMetricsNow = [&](ModSettings const& s) {
        ULONGLONG now = GetTickCount64();
        if (now - lastSampleTick < 950) return;
        lastSampleTick = now;

        bool pdhCollected = false;
        if (hQuery && pPdhCollectQueryData && s.showGpuStats) {
            pdhCollected = (pPdhCollectQueryData(hQuery) == 0);
        }

        if (s.showCpuStats) {
            FILETIME curI{}, curK{}, curU{};
            if (GetSystemTimes(&curI, &curK, &curU)) {
                uint64_t iDiff = FileTimeToU64(curI) - prevIdle;
                uint64_t kDiff = FileTimeToU64(curK) - prevKernel;
                uint64_t uDiff = FileTimeToU64(curU) - prevUser;
                prevIdle = FileTimeToU64(curI);
                prevKernel = FileTimeToU64(curK);
                prevUser = FileTimeToU64(curU);
                uint64_t totalSys = kDiff + uDiff;
                if (totalSys > 0 && totalSys >= iDiff) {
                    uint64_t busy = totalSys - iDiff;
                    metrics.cpuPercent = std::clamp(
                        static_cast<int>((busy * 100ULL + totalSys / 2) / totalSys), 0, 100);
                }
            }
        }

        if (s.showRamStats) {
            MEMORYSTATUSEX mem{};
            mem.dwLength = sizeof(mem);
            if (GlobalMemoryStatusEx(&mem)) {
                metrics.ramPercent = std::clamp(static_cast<int>(mem.dwMemoryLoad), 0, 100);
                constexpr double kBytesPerGb = 1024.0 * 1024.0 * 1024.0;
                metrics.ramTotalGb = static_cast<double>(mem.ullTotalPhys) / kBytesPerGb;
                metrics.ramUsedGb = static_cast<double>(mem.ullTotalPhys - mem.ullAvailPhys) / kBytesPerGb;
            }
        }

        if (s.showGpuStats && pdhCollected && hGpuCounter && pPdhGetFormattedCounterArrayW) {
            DWORD bufSize = 0, itemCount = 0;
            if (pPdhGetFormattedCounterArrayW(hGpuCounter, kPdhFmtDouble, &bufSize, &itemCount, nullptr) == kPdhMoreData && bufSize > 0) {
                std::vector<BYTE> buf(bufSize);
                auto* items = reinterpret_cast<PdhFmtCounterValueItemW*>(buf.data());
                if (pPdhGetFormattedCounterArrayW(hGpuCounter, kPdhFmtDouble, &bufSize, &itemCount, items) == 0) {
                    std::unordered_map<DWORD, double> procGpu;
                    for (DWORD i = 0; i < itemCount; i++) {
                        if ((items[i].FmtValue.CStatus == 0 || items[i].FmtValue.CStatus == 1) &&
                            items[i].FmtValue.doubleValue > 0.0001 && items[i].szName) {
                            PCWSTR p = items[i].szName;
                            if (wcsncmp(p, L"pid_", 4) == 0) {
                                p += 4;
                                DWORD pid = 0;
                                while (*p >= L'0' && *p <= L'9') {
                                    pid = pid * 10 + (*p - L'0');
                                    p++;
                                }
                                procGpu[pid] += items[i].FmtValue.doubleValue;
                            }
                        }
                    }
                    double totalGpu = 0.0;
                    for (const auto& kv : procGpu) {
                        totalGpu += std::min(100.0, kv.second);
                    }
                    metrics.gpuPercent = std::clamp(static_cast<int>(totalGpu + 0.5), 0, 100);
                }
            }
        }

        if (s.showNetStats) {
            uint64_t curIn = 0, curOut = 0;
            uint32_t curSig = 0;
            bool hwWifi = false, hwEth = false, hwConn = false;
            bool sampleLinkState = s.enableSecondaryMonitorTray;
            if (SampleNetworkOctetsFromIfTable2(pGetIfTable2, pFreeMibTable, curIn, curOut, curSig,
                                                sampleLinkState ? &hwWifi : nullptr,
                                                sampleLinkState ? &hwEth : nullptr,
                                                sampleLinkState ? &hwConn : nullptr)) {
                ULONGLONG netNow = GetTickCount64();
                if (sampleLinkState) {
                    g_hasActiveWifi.store(hwWifi);
                    g_hasActiveEthernet.store(hwEth);
                    g_hasActiveNetwork.store(hwConn);
                    lastNetDetectTick = netNow;
                }
                if (prevNetTick != 0 && netNow > prevNetTick && curSig == prevAdapterSig &&
                    curIn >= prevNetIn && curOut >= prevNetOut) {
                    double elapsedSec = static_cast<double>(netNow - prevNetTick) / 1000.0;
                    if (elapsedSec > 0.05) {
                        metrics.netDownBytesPerSec = static_cast<double>(curIn - prevNetIn) / elapsedSec;
                        metrics.netUpBytesPerSec = static_cast<double>(curOut - prevNetOut) / elapsedSec;
                    }
                } else {
                    metrics.netDownBytesPerSec = 0.0;
                    metrics.netUpBytesPerSec = 0.0;
                }
                prevNetIn = curIn;
                prevNetOut = curOut;
                prevAdapterSig = curSig;
                prevNetTick = netNow;
            } else {
                if (sampleLinkState) {
                    g_hasActiveWifi.store(hwWifi);
                    g_hasActiveEthernet.store(hwEth);
                    g_hasActiveNetwork.store(hwConn);
                    lastNetDetectTick = GetTickCount64();
                }
                metrics.netDownBytesPerSec = 0.0;
                metrics.netUpBytesPerSec = 0.0;
                prevNetTick = 0;
            }
        }

        metrics.pingMs = g_livePingMs.load();
        ++metricsGen;
    };

    bool anySecondaryAnimating = false;
    auto updateWidgetPresentation = [&](const ModSettings& settings, bool forceRedraw) {
        anySecondaryAnimating = false;
        if (!d2dFactory || !fmtLabel || !fmtValue || !fmtCenter) return;

        if (metrics.pingMs != g_livePingMs.load()) {
            metrics.pingMs = g_livePingMs.load();
            ++metricsGen;
        }
        uint32_t curColsMask = (settings.showCpuStats ? 1u : 0u) |
                               (settings.showGpuStats ? 2u : 0u) |
                               (settings.showRamStats ? 4u : 0u) |
                               (settings.showNetStats ? 8u : 0u) |
                               (settings.showPingStats ? 16u : 0u);
        if (curColsMask != lastMetricsColsMask) {
            lastMetricsColsMask = curColsMask;
            ++metricsGen;
        }

        ULONGLONG nowPresTick = GetTickCount64();
        if (forceRedraw || lastThemeCheckTick == 0 || (nowPresTick - lastThemeCheckTick >= 2500ULL)) {
            cachedLightTheme = IsLightSystemThemeFallback();
            lastThemeCheckTick = nowPresTick;
        }
        bool lightTheme = cachedLightTheme;

        float padX = 8.0f;
        float colGap = 11.0f;
        if (forceRedraw || lastBuiltColsGen != metricsGen || lastBuiltColsLightTheme != lightTheme) {
            cachedCols = BuildActiveColumns(settings, metrics, lightTheme);
            cachedDipW = padX * 2.0f;
            for (size_t i = 0; i < cachedCols.size(); i++) {
                cachedDipW += cachedCols[i].widthDip;
                if (i + 1 < cachedCols.size()) cachedDipW += colGap;
            }
            lastBuiltColsGen = metricsGen;
            lastBuiltColsLightTheme = lightTheme;
        }
        const auto& cols = cachedCols;
        float dipW = cachedDipW;
        float dipH = 36.0f;

        // =========================================================================
        // 1. Primary Taskbar Stats Presentation (hWidget)
        // =========================================================================
        bool primaryStatsShown = false;
        if (hWidget && settings.enableTaskbarSystemStats && !cols.empty()) {
            HWND hTrayWnd = FindWindowW(L"Shell_TrayWnd", nullptr);
            if (hTrayWnd && IsWindowVisible(hTrayWnd) && !IsWindowCloakedByDwm(hTrayWnd)) {
                g_cachedPrimaryTrayHwnd.store(hTrayWnd);
                ensureTrayWinEventHook(hTrayWnd);
                RECT rcTray{};
                if (GetWindowRect(hTrayWnd, &rcTray) &&
                    (rcTray.right - rcTray.left) >= 200 &&
                    (rcTray.bottom - rcTray.top) >= 24) {

                    float dpi = static_cast<float>(GetWindowDpiSafe(hTrayWnd));
                    float scale = dpi / 96.0f;

                    int pxW = std::max(32, static_cast<int>(std::ceil(dipW * scale)));
                    int pxH = std::max(24, static_cast<int>(std::ceil(dipH * scale)));
                    int trayH = rcTray.bottom - rcTray.top;
                    if (pxH > trayH - 4) {
                        pxH = std::max(22, trayH - 4);
                        dipH = static_cast<float>(pxH) / scale;
                    }

                    // Auto-Hide Taskbar & Fullscreen visibility check
                    bool primaryAllowed = true;
                    HMONITOR hMon = MonitorFromWindow(hTrayWnd, MONITOR_DEFAULTTONEAREST);
                    if (hMon) {
                        MONITORINFO mi{};
                        mi.cbSize = sizeof(mi);
                        if (GetMonitorInfoW(hMon, &mi)) {
                            RECT rcVis{};
                            bool hasIntersect = IntersectRect(&rcVis, &rcTray, &mi.rcMonitor) != FALSE;
                            int visibleH = hasIntersect ? (rcVis.bottom - rcVis.top) : 0;
                            int visibleW = hasIntersect ? (rcVis.right - rcVis.left) : 0;
                            int minVisH = std::max(14, pxH / 2);
                            if (!hasIntersect || visibleH < minVisH || visibleW < 100) {
                                primaryAllowed = false;
                            } else if (IsTrueFullscreenAppActive(hTrayWnd, mi.rcMonitor)) {
                                primaryAllowed = false;
                            }
                        }
                    }

                    if (primaryAllowed || g_isDraggingWidget || g_isContextMenuOpen) {
                        // Win10: TrayNotifyWnd.left is the exact left boundary of the system tray (^ chevron)
                        int trayLeftX = rcTray.right - static_cast<int>(210.0f * scale);
                        HWND hNotifyWnd = FindWindowExW(hTrayWnd, nullptr, L"TrayNotifyWnd", nullptr);
                        if (hNotifyWnd) {
                            RECT rcNotify{};
                            if (GetWindowRect(hNotifyWnd, &rcNotify) &&
                                rcNotify.left > rcTray.left + 100 &&
                                rcNotify.left < rcTray.right - 40) {
                                trayLeftX = rcNotify.left;
                            }
                        }
                        int baseDefaultX = trayLeftX - pxW - static_cast<int>(8.0f * scale);
                        int minAllowedX = rcTray.left + static_cast<int>(4.0f * scale);
                        int maxAllowedX = std::max(minAllowedX, trayLeftX - pxW - 2);
                        g_cachedBaseDefaultX.store(baseDefaultX);
                        g_cachedMinAllowedX.store(minAllowedX);
                        g_cachedMaxAllowedX.store(maxAllowedX);

                        int desiredPrimaryX = std::clamp(baseDefaultX + g_userOffsetX.load(), minAllowedX, maxAllowedX);
                        bool draggingPrimaryStats = g_isDraggingWidget.load() && (g_draggedHwnd.load() == hWidget);
                        if (draggingPrimaryStats || !hasAnimPrimaryStatsX || std::abs(desiredPrimaryX - animPrimaryStatsX) > 180.0f) {
                            animPrimaryStatsX = static_cast<float>(desiredPrimaryX);
                            hasAnimPrimaryStatsX = true;
                        } else if (std::abs(desiredPrimaryX - animPrimaryStatsX) > 0.5f) {
                            animPrimaryStatsX += (static_cast<float>(desiredPrimaryX) - animPrimaryStatsX) * 0.28f;
                            if (std::abs(desiredPrimaryX - animPrimaryStatsX) <= 0.6f) {
                                animPrimaryStatsX = static_cast<float>(desiredPrimaryX);
                            } else {
                                anySecondaryAnimating = true;
                            }
                        } else {
                            animPrimaryStatsX = static_cast<float>(desiredPrimaryX);
                        }
                        int targetX = static_cast<int>(std::round(animPrimaryStatsX));
                        int targetY = rcTray.top + (trayH - pxH) / 2;

                        bool needBitmapRedraw = forceRedraw || (metricsGen != lastPrimaryMetricsGen) ||
                                                (pxW != lastRenderedPxW) || (pxH != lastRenderedPxH) ||
                                                (lightTheme != lastRenderedLightTheme) ||
                                                (std::abs(dpi - lastRenderedDpi) > 0.5f);

                        bool wasVisible = IsWindowVisible(hWidget) != FALSE;
                        bool posChanged = (targetX != lastPlacedX) || (targetY != lastPlacedY);
                        bool zOrderBehindTray = !wasVisible || IsTrayCoveringWidget(hTrayWnd, hWidget);

                        if (needBitmapRedraw) {
                            RenderStatsBitmapToLayeredWindow(
                                hWidget, primaryStatsSurface, cols, d2dFactory, fmtLabel, fmtValue, fmtCenter,
                                pxW, pxH, dipW, dipH, dpi, lightTheme, padX, colGap, targetX, targetY);
                            lastRenderedPxW = pxW;
                            lastRenderedPxH = pxH;
                            lastRenderedLightTheme = lightTheme;
                            lastRenderedDpi = dpi;
                            lastPlacedX = targetX;
                            lastPlacedY = targetY;
                            lastPrimaryMetricsGen = metricsGen;
                        }

                        if (!wasVisible) {
                            ShowWindow(hWidget, SW_SHOWNOACTIVATE);
                            SetWindowPos(hWidget, HWND_TOPMOST, targetX, targetY, pxW, pxH,
                                         SWP_NOACTIVATE | SWP_NOSENDCHANGING);
                            lastPlacedX = targetX;
                            lastPlacedY = targetY;
                        } else if (!draggingPrimaryStats && (posChanged || zOrderBehindTray || forceRedraw)) {
                            SetWindowPos(hWidget, HWND_TOPMOST, targetX, targetY, pxW, pxH,
                                         SWP_NOACTIVATE | SWP_NOSENDCHANGING);
                            lastPlacedX = targetX;
                            lastPlacedY = targetY;
                        }
                        primaryStatsShown = true;
                    }
                }
            }
        }

        if (!primaryStatsShown) {
            if (!g_isDraggingWidget && !g_isContextMenuOpen && hWidget && IsWindowVisible(hWidget)) {
                ShowWindow(hWidget, SW_HIDE);
            }
        }

        // =========================================================================
        // 2. Secondary Monitors Presentation (Multi-Tray & Secondary Stats)
        // =========================================================================
        std::vector<HWND> currentSecTrays;
        HWND hFindSec = nullptr;
        while ((hFindSec = FindWindowExW(nullptr, hFindSec, L"Shell_SecondaryTrayWnd", nullptr)) != nullptr) {
            currentSecTrays.push_back(hFindSec);
        }

        // Reconcile removed secondary monitors
        for (auto it = secondaryInstances.begin(); it != secondaryInstances.end(); ) {
            bool stillPresent = false;
            for (HWND h : currentSecTrays) {
                if (h == (*it)->hSecondaryTray && IsWindow(h)) {
                    stillPresent = true;
                    break;
                }
            }
            if (!stillPresent) {
                if ((*it)->hTrayWidget &&
                    (g_audioPopupState.anchorWidget == (*it)->hTrayWidget ||
                     g_wifiPopupState.anchorWidget == (*it)->hTrayWidget)) {
                    CloseAllSecondaryPopups();
                }
                {
                    std::lock_guard<std::mutex> lock(g_secClockMarginMutex);
                    g_secClockMargins.erase((*it)->hSecondaryTray);
                }
                (*it)->traySurface.Release();
                (*it)->statsSurface.Release();
                if ((*it)->hTrayWidget && IsWindow((*it)->hTrayWidget)) DestroyWindow((*it)->hTrayWidget);
                if ((*it)->hStatsWidget && IsWindow((*it)->hStatsWidget)) DestroyWindow((*it)->hStatsWidget);
                it = secondaryInstances.erase(it);
            } else {
                ++it;
            }
        }

        // Add new secondary monitors
        for (HWND hSec : currentSecTrays) {
            bool found = false;
            for (const auto& entry : secondaryInstances) {
                if (entry->hSecondaryTray == hSec) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                auto newInst = std::make_unique<SecondaryTrayInstance>();
                newInst->hSecondaryTray = hSec;
                secondaryInstances.push_back(std::move(newInst));
            }
        }

        bool curWifi = g_hasActiveWifi.load();
        bool curEth = g_hasActiveEthernet.load();
        bool curNet = g_hasActiveNetwork.load();
        float curMasterVol = g_liveMasterVolume.load();
        bool curMuted = g_liveMasterMuted.load();
        int curVolPct = std::clamp(static_cast<int>(curMasterVol * 100.0f + 0.5f), 0, 100);
        bool showVolOsd = (GetTickCount64() < g_volumeOsdExpiryTick.load());

        {
            std::lock_guard<std::mutex> lock(g_secClockMarginMutex);
            g_activeSecTraysForUia.clear();
            for (const auto& instPtr : secondaryInstances) {
                if (instPtr && instPtr->hSecondaryTray) g_activeSecTraysForUia.push_back(instPtr->hSecondaryTray);
            }
        }
        for (auto& instPtr : secondaryInstances) {
            SecondaryTrayInstance& inst = *instPtr;
            HWND hSec = inst.hSecondaryTray;
            if (!hSec || !IsWindow(hSec)) continue;

            // Visibility and Auto-Hide check for this secondary monitor
            RECT rcSec{};
            if (!GetWindowRect(hSec, &rcSec) ||
                (rcSec.right - rcSec.left) < 100 ||
                (rcSec.bottom - rcSec.top) < 20) {
                if (inst.hTrayWidget && IsWindowVisible(inst.hTrayWidget)) ShowWindow(inst.hTrayWidget, SW_HIDE);
                if (inst.hStatsWidget && IsWindowVisible(inst.hStatsWidget)) ShowWindow(inst.hStatsWidget, SW_HIDE);
                continue;
            }

            int secTrayH = rcSec.bottom - rcSec.top;
            float secDpi = static_cast<float>(GetWindowDpiSafe(hSec));
            if (secDpi < 24.0f) secDpi = 96.0f;
            float secScale = secDpi / 96.0f;

            HMONITOR hSecMon = MonitorFromWindow(hSec, MONITOR_DEFAULTTONEAREST);
            if (hSecMon) {
                MONITORINFO mi{};
                mi.cbSize = sizeof(mi);
                if (GetMonitorInfoW(hSecMon, &mi)) {
                    RECT rcVis{};
                    bool hasIntersect = IntersectRect(&rcVis, &rcSec, &mi.rcMonitor) != FALSE;
                    int visibleH = hasIntersect ? (rcVis.bottom - rcVis.top) : 0;
                    int visibleW = hasIntersect ? (rcVis.right - rcVis.left) : 0;
                    if (!hasIntersect || visibleH < 14 || visibleW < 100) {
                        if (inst.hTrayWidget && IsWindowVisible(inst.hTrayWidget)) ShowWindow(inst.hTrayWidget, SW_HIDE);
                        if (inst.hStatsWidget && IsWindowVisible(inst.hStatsWidget)) ShowWindow(inst.hStatsWidget, SW_HIDE);
                        continue;
                    }
                    if (IsTrueFullscreenAppActive(hSec, mi.rcMonitor)) {
                        if (inst.hTrayWidget && IsWindowVisible(inst.hTrayWidget)) ShowWindow(inst.hTrayWidget, SW_HIDE);
                        if (inst.hStatsWidget && IsWindowVisible(inst.hStatsWidget)) ShowWindow(inst.hStatsWidget, SW_HIDE);
                        continue;
                    }
                }
            }

            // Secondary clock + notification bell dynamic margin (auto-adapts when DND / notification bell appears or hides):
            int clockMargin = static_cast<int>(6.0f * secScale);
            HWND hClock = FindWindowExW(hSec, nullptr, L"ClockButton", nullptr);
            if (hClock && IsWindowVisible(hClock)) {
                RECT rcClock{};
                GetWindowRect(hClock, &rcClock);
                clockMargin = rcSec.right - rcClock.left + static_cast<int>(4.0f * secScale);
            } else {
                int uiaMargin = 0;
                {
                    std::lock_guard<std::mutex> lock(g_secClockMarginMutex);
                    auto it = g_secClockMargins.find(hSec);
                    if (it != g_secClockMargins.end() && it->second > 0) {
                        uiaMargin = it->second;
                    }
                }
                if (uiaMargin > 0) {
                    clockMargin = uiaMargin;
                } else {
                    clockMargin = static_cast<int>((settings.enableTaskbarClock ? 112.0f : 72.0f) * secScale);
                }
            }

            // 1. Secondary Tray Presentation
            int secTrayPxW = 0;
            int targetTrayX = rcSec.right - clockMargin;
            if (!settings.enableSecondaryMonitorTray) {
                if (inst.hTrayWidget && IsWindowVisible(inst.hTrayWidget)) ShowWindow(inst.hTrayWidget, SW_HIDE);
            } else {
                if (!inst.hTrayWidget) {
                    inst.hTrayWidget = createSecondaryTrayWidget(&inst);
                }

                float secDipW = 64.0f;
                float secDipH = 36.0f;
                secTrayPxW = std::max(32, static_cast<int>(std::ceil(secDipW * secScale)));
                int secTrayPxH = std::max(22, std::min(secTrayH - 4, static_cast<int>(std::ceil(secDipH * secScale))));

                int desiredTrayX = rcSec.right - clockMargin - secTrayPxW;
                if (!inst.hasAnimTrayX || std::abs(desiredTrayX - inst.animTrayX) > 180.0f) {
                    inst.animTrayX = static_cast<float>(desiredTrayX);
                    inst.hasAnimTrayX = true;
                } else if (std::abs(desiredTrayX - inst.animTrayX) > 0.5f) {
                    inst.animTrayX += (static_cast<float>(desiredTrayX) - inst.animTrayX) * 0.28f;
                    if (std::abs(desiredTrayX - inst.animTrayX) <= 0.6f) {
                        inst.animTrayX = static_cast<float>(desiredTrayX);
                    } else {
                        anySecondaryAnimating = true;
                    }
                } else {
                    inst.animTrayX = static_cast<float>(desiredTrayX);
                }
                targetTrayX = static_cast<int>(std::round(inst.animTrayX));
                int targetTrayY = rcSec.top + (secTrayH - secTrayPxH) / 2;

                // Smooth Fluent hover pill fade
                bool wifiPopVis = (g_secWifiPopupHwnd && IsWindowVisible(g_secWifiPopupHwnd) && g_wifiPopupState.anchorWidget == inst.hTrayWidget);
                bool audioPopVis = (g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd) && g_audioPopupState.anchorWidget == inst.hTrayWidget);
                float targetWfA = (inst.hoverZone == TrayHoverZone::Wifi || wifiPopVis) ? 1.0f : 0.0f;
                float targetAuA = (inst.hoverZone == TrayHoverZone::Audio || audioPopVis) ? 1.0f : 0.0f;
                bool hoverAnimChanged = false;
                if (std::abs(targetWfA - inst.wifiHoverAlpha) > 0.015f) {
                    inst.wifiHoverAlpha += (targetWfA - inst.wifiHoverAlpha) * 0.32f;
                    if (std::abs(targetWfA - inst.wifiHoverAlpha) <= 0.02f) inst.wifiHoverAlpha = targetWfA;
                    else anySecondaryAnimating = true;
                    hoverAnimChanged = true;
                }
                if (std::abs(targetAuA - inst.audioHoverAlpha) > 0.015f) {
                    inst.audioHoverAlpha += (targetAuA - inst.audioHoverAlpha) * 0.32f;
                    if (std::abs(targetAuA - inst.audioHoverAlpha) <= 0.02f) inst.audioHoverAlpha = targetAuA;
                    else anySecondaryAnimating = true;
                    hoverAnimChanged = true;
                }

                float targetOsdA = showVolOsd ? 1.0f : 0.0f;
                bool osdAnimChanged = false;
                if (std::abs(targetOsdA - inst.volOsdAlpha) > 0.015f) {
                    inst.volOsdAlpha += (targetOsdA - inst.volOsdAlpha) * 0.25f;
                    if (std::abs(targetOsdA - inst.volOsdAlpha) <= 0.02f) inst.volOsdAlpha = targetOsdA;
                    else anySecondaryAnimating = true;
                    osdAnimChanged = true;
                }

                bool volChanged = (curVolPct != inst.lastVolumePercent) || (curMuted != inst.lastMuted);
                bool trayBitmapDirty = forceRedraw ||
                                       (secTrayPxW != inst.lastTrayW) || (secTrayPxH != inst.lastTrayH) ||
                                       (lightTheme != inst.lastLightTheme) ||
                                       (std::abs(secDpi - inst.lastDpi) > 0.5f) ||
                                       volChanged ||
                                       (curWifi != inst.lastHasWifi) ||
                                       (curEth != inst.lastHasEthernet) ||
                                       (inst.hoverZone != inst.lastHoverZone) ||
                                       (wifiPopVis != inst.lastWifiPopupOpen) ||
                                       (audioPopVis != inst.lastAudioPopupOpen) ||
                                       hoverAnimChanged ||
                                       osdAnimChanged ||
                                       (showVolOsd != inst.lastShowVolOsd);
                bool trayPosChanged = (targetTrayX != inst.lastTrayX) || (targetTrayY != inst.lastTrayY);

                bool trayWasVis = IsWindowVisible(inst.hTrayWidget) != FALSE;
                inst.lastTrayX = targetTrayX;
                inst.lastTrayY = targetTrayY;
                inst.lastTrayW = secTrayPxW;
                inst.lastTrayH = secTrayPxH;
                inst.lastLightTheme = lightTheme;
                inst.lastDpi = secDpi;
                inst.lastVolumePercent = curVolPct;
                inst.lastMuted = curMuted;
                inst.lastHasWifi = curWifi;
                inst.lastHasEthernet = curEth;
                inst.lastHoverZone = inst.hoverZone;
                inst.lastWifiPopupOpen = wifiPopVis;
                inst.lastAudioPopupOpen = audioPopVis;
                inst.lastShowVolOsd = showVolOsd;

                if (trayBitmapDirty) {
                    RenderSecondaryTrayBitmap(
                        inst.hTrayWidget, inst, d2dFactory,
                        fmtTrayGlyph, fmtTrayOsd,
                        secTrayPxW, secTrayPxH, secDipW, secDipH,
                        secDpi, lightTheme,
                        curWifi, curEth, curNet,
                        curMasterVol, curMuted, showVolOsd,
                        targetTrayX, targetTrayY);
                }
                if (g_audioDefaultDeviceChanged.exchange(false)) {
                    RebindAudioEndpointVolume();
                    if (g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd) && !g_audioPopupState.draggingSlider) {
                        EnumerateAudioOutputDevices(g_audioPopupState.devices, g_audioPopupState.fxSoundManaging, g_audioPopupState.fxExePath);
                        ApplyPendingFxTarget(g_audioPopupState);
                        UpdateAudioPopupPlayingState(g_audioPopupState, false);
                        RenderAudioPopup();
                        SetTimer(g_secAudioPopupHwnd, kTimerLiveSyncAudioPopup, 180, nullptr);
                    }
                } else if (volChanged && g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd) && !g_audioPopupState.draggingSlider) {
                    RenderAudioPopup();
                }

                if (!trayWasVis) {
                    ShowWindow(inst.hTrayWidget, SW_SHOWNOACTIVATE);
                }
                ULONGLONG nowTrayTick = GetTickCount64();
                bool needTrayZ = (!trayWasVis) || (nowTrayTick - inst.lastTrayZTick >= 500);
                if (trayPosChanged && !trayBitmapDirty) {
                    SetWindowPos(inst.hTrayWidget, HWND_TOPMOST, targetTrayX, targetTrayY, 0, 0,
                                 SWP_NOSIZE | SWP_NOACTIVATE | (needTrayZ ? 0 : SWP_NOZORDER));
                    if (needTrayZ) inst.lastTrayZTick = nowTrayTick;
                } else if (needTrayZ) {
                    SetWindowPos(inst.hTrayWidget, HWND_TOPMOST, targetTrayX, targetTrayY, 0, 0,
                                 SWP_NOSIZE | SWP_NOACTIVATE | SWP_NOMOVE);
                    inst.lastTrayZTick = nowTrayTick;
                }
            }

            // 2. Secondary Stats Presentation (Fully Decoupled)
            if (!settings.enableSecondaryMonitorStats || cols.empty()) {
                if (inst.hStatsWidget && IsWindowVisible(inst.hStatsWidget)) ShowWindow(inst.hStatsWidget, SW_HIDE);
            } else {
                if (!inst.hStatsWidget) {
                    inst.hStatsWidget = createSecondaryStatsWidget();
                }

                int secStatsPxW = std::max(32, static_cast<int>(std::ceil(dipW * secScale)));
                int secStatsPxH = std::max(22, std::min(secTrayH - 4, static_cast<int>(std::ceil(dipH * secScale))));

                int rightAnchor = settings.enableSecondaryMonitorTray ? targetTrayX : (rcSec.right - clockMargin);
                int baseDefaultSecX = rightAnchor - secStatsPxW - static_cast<int>(8.0f * secScale);
                int minAllowedSecX = rcSec.left + static_cast<int>(4.0f * secScale);
                int maxAllowedSecX = std::max(minAllowedSecX, rightAnchor - secStatsPxW - 2);
                g_cachedBaseDefaultSecX.store(baseDefaultSecX);
                g_cachedMinAllowedSecX.store(minAllowedSecX);
                g_cachedMaxAllowedSecX.store(maxAllowedSecX);

                int desiredStatsX = std::clamp(baseDefaultSecX + g_secUserOffsetX.load(), minAllowedSecX, maxAllowedSecX);
                bool draggingThisStats = g_isDraggingWidget.load() && (g_draggedHwnd.load() == inst.hStatsWidget);
                if (draggingThisStats || !inst.hasAnimStatsX || std::abs(desiredStatsX - inst.animStatsX) > 180.0f) {
                    inst.animStatsX = static_cast<float>(desiredStatsX);
                    inst.hasAnimStatsX = true;
                } else if (std::abs(desiredStatsX - inst.animStatsX) > 0.5f) {
                    inst.animStatsX += (static_cast<float>(desiredStatsX) - inst.animStatsX) * 0.28f;
                    if (std::abs(desiredStatsX - inst.animStatsX) <= 0.6f) {
                        inst.animStatsX = static_cast<float>(desiredStatsX);
                    } else {
                        anySecondaryAnimating = true;
                    }
                } else {
                    inst.animStatsX = static_cast<float>(desiredStatsX);
                }
                int targetStatsX = static_cast<int>(std::round(inst.animStatsX));
                int targetStatsY = rcSec.top + (secTrayH - secStatsPxH) / 2;

                bool statsBitmapDirty = forceRedraw || (metricsGen != inst.lastStatsMetricsGen) ||
                                        (secStatsPxW != inst.lastStatsW) || (secStatsPxH != inst.lastStatsH) ||
                                        (lightTheme != inst.lastStatsLightTheme) ||
                                        (std::abs(secDpi - inst.lastStatsDpi) > 0.5f);
                bool statsPosChanged = (targetStatsX != inst.lastStatsX) || (targetStatsY != inst.lastStatsY);
                bool statsWasVis = IsWindowVisible(inst.hStatsWidget) != FALSE;

                inst.lastStatsX = targetStatsX;
                inst.lastStatsY = targetStatsY;
                inst.lastStatsW = secStatsPxW;
                inst.lastStatsH = secStatsPxH;

                if (statsBitmapDirty) {
                    RenderStatsBitmapToLayeredWindow(
                        inst.hStatsWidget, inst.statsSurface, cols, d2dFactory,
                        fmtLabel, fmtValue, fmtCenter,
                        secStatsPxW, secStatsPxH, dipW, dipH,
                        secDpi, lightTheme, padX, colGap,
                        targetStatsX, targetStatsY);
                    inst.lastStatsMetricsGen = metricsGen;
                    inst.lastStatsLightTheme = lightTheme;
                    inst.lastStatsDpi = secDpi;
                }

                if (!statsWasVis) {
                    ShowWindow(inst.hStatsWidget, SW_SHOWNOACTIVATE);
                }
                ULONGLONG nowStatsTick = GetTickCount64();
                bool needStatsZ = (!statsWasVis) || (nowStatsTick - inst.lastStatsZTick >= 500);
                if (statsPosChanged && !statsBitmapDirty && !draggingThisStats) {
                    SetWindowPos(inst.hStatsWidget, HWND_TOPMOST, targetStatsX, targetStatsY, 0, 0,
                                 SWP_NOSIZE | SWP_NOACTIVATE | (needStatsZ ? 0 : SWP_NOZORDER));
                    if (needStatsZ) inst.lastStatsZTick = nowStatsTick;
                } else if (needStatsZ && !draggingThisStats) {
                    SetWindowPos(inst.hStatsWidget, HWND_TOPMOST, targetStatsX, targetStatsY, 0, 0,
                                 SWP_NOSIZE | SWP_NOACTIVATE | SWP_NOMOVE);
                    inst.lastStatsZTick = nowStatsTick;
                }
            }
        }
    };

    {
        ModSettings initS = GetSettings();
        sampleMetricsNow(initS);
        updateWidgetPresentation(initS, true);
    }

    HANDLE waitHandles[2] = { g_sysMonitorStopEvent, g_sysMonitorWakeEvent };
    while (!g_shuttingDown) {
        // Adaptive frame pacing: 8ms (~120fps) during popup slide/fade, hover fade, OSD cross-fade, or tray glide;
        // 250ms ultra-low-CPU sleep when idle (woken immediately at 0ms on any mouse/tray/audio event).
        bool audioPlayFadeBusy = g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd) &&
                                 std::abs((g_audioPopupState.audioIsPlayingNow ? 1.0f : 0.0f) - g_audioPopupState.audioPlayingAlpha) > 0.01f;
        bool popupAnimBusy = g_audioPopupSurface.animActive || g_wifiPopupSurface.animActive || audioPlayFadeBusy;
        DWORD waitMs = (anySecondaryAnimating || popupAnimBusy) ? 8 : 250;
        DWORD waitRes = MsgWaitForMultipleObjects(2, waitHandles, FALSE, waitMs, QS_ALLINPUT);
        if (g_shuttingDown || waitRes == WAIT_OBJECT_0) {
            break;
        }

        MSG msg{};
        while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT) break;
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }
        if (g_shuttingDown) break;

        ULONGLONG nowLoopTick = GetTickCount64();
        g_audioPopupSurface.TickAnimation(g_secAudioPopupHwnd, nowLoopTick);
        g_wifiPopupSurface.TickAnimation(g_secWifiPopupHwnd, nowLoopTick);
        if (g_secAudioPopupHwnd && IsWindowVisible(g_secAudioPopupHwnd) && !g_audioPopupSurface.animActive) {
            float targetPlayA = g_audioPopupState.audioIsPlayingNow ? 1.0f : 0.0f;
            if (std::abs(targetPlayA - g_audioPopupState.audioPlayingAlpha) > 0.01f) {
                g_audioPopupState.audioPlayingAlpha += (targetPlayA - g_audioPopupState.audioPlayingAlpha) * 0.22f;
                if (std::abs(targetPlayA - g_audioPopupState.audioPlayingAlpha) <= 0.015f) {
                    g_audioPopupState.audioPlayingAlpha = targetPlayA;
                }
                RenderAudioPopup();
            }
        }

        ModSettings s = GetSettings();
        if (s.enableTaskbarSystemStats || s.enableSecondaryMonitorStats) {
            sampleMetricsNow(s);
        }
        if (s.enableSecondaryMonitorTray && pGetIfTable2 && pFreeMibTable &&
            (lastNetDetectTick == 0 || (nowLoopTick - lastNetDetectTick >= 2000))) {
            lastNetDetectTick = nowLoopTick;
            bool w = false, e = false, c = false;
            DetectNetworkState(pGetIfTable2, pFreeMibTable, w, e, c);
            g_hasActiveWifi.store(w);
            g_hasActiveEthernet.store(e);
            g_hasActiveNetwork.store(c);
        }
        updateWidgetPresentation(s, false);
    }

    if (hTrayEventHook) {
        UnhookWinEvent(hTrayEventHook);
    }
    g_cachedPrimaryTrayHwnd.store(nullptr);
    g_statsWidgetHwnd.store(nullptr);
    primaryStatsSurface.Release();
    if (hWidget && IsWindow(hWidget)) {
        DestroyWindow(hWidget);
    }
    UnregisterClassW(kStatsWidgetClassName, hInst);

    CloseAllSecondaryPopups();
    g_audioPopupSurface.Release();
    g_wifiPopupSurface.Release();
    if (g_secAudioPopupHwnd && IsWindow(g_secAudioPopupHwnd)) DestroyWindow(g_secAudioPopupHwnd);
    g_secAudioPopupHwnd = nullptr;
    if (g_secWifiPopupHwnd && IsWindow(g_secWifiPopupHwnd)) DestroyWindow(g_secWifiPopupHwnd);
    g_secWifiPopupHwnd = nullptr;
    UnregisterClassW(kSecAudioPopupClassName, hInst);
    UnregisterClassW(kSecWifiPopupClassName, hInst);

    if (g_secPopupFmtTitle) { g_secPopupFmtTitle->Release(); g_secPopupFmtTitle = nullptr; }
    if (g_secPopupFmtBody) { g_secPopupFmtBody->Release(); g_secPopupFmtBody = nullptr; }
    if (g_secPopupFmtSmall) { g_secPopupFmtSmall->Release(); g_secPopupFmtSmall = nullptr; }
    if (g_secPopupFmtIcon) { g_secPopupFmtIcon->Release(); g_secPopupFmtIcon = nullptr; }
    if (g_secPopupFmtCenter) { g_secPopupFmtCenter->Release(); g_secPopupFmtCenter = nullptr; }
    if (g_secPopupFmtRight) { g_secPopupFmtRight->Release(); g_secPopupFmtRight = nullptr; }
    g_secPopupD2dFactory = nullptr;

    UninitAudioEndpoint();
    for (auto& entry : secondaryInstances) {
        entry->traySurface.Release();
        entry->statsSurface.Release();
        if (entry->hTrayWidget && IsWindow(entry->hTrayWidget)) DestroyWindow(entry->hTrayWidget);
        if (entry->hStatsWidget && IsWindow(entry->hStatsWidget)) DestroyWindow(entry->hStatsWidget);
    }
    secondaryInstances.clear();
    UnregisterClassW(kSecondaryTrayWidgetClassName, hInst);

    if (fmtTrayGlyph) fmtTrayGlyph->Release();
    if (fmtTrayText) fmtTrayText->Release();
    if (fmtTrayOsd) fmtTrayOsd->Release();

    if (fmtLabel) fmtLabel->Release();
    if (fmtValue) fmtValue->Release();
    if (fmtCenter) fmtCenter->Release();
    if (dwriteFactory) dwriteFactory->Release();
    if (d2dFactory) d2dFactory->Release();
    if (hQuery && pPdhCloseQuery) pPdhCloseQuery(hQuery);
    g_wlanApi.Unload();
    if (hPdh) FreeLibrary(hPdh);
    if (hIphlp) FreeLibrary(hIphlp);
    if (SUCCEEDED(hrCoInit)) CoUninitialize();
}


void StartTaskbarSystemMonitor() {
    if (g_shuttingDown || g_target != Target::Explorer) return;
    if (g_sysMonitorRunning.exchange(true)) return;

    std::lock_guard<std::mutex> lock(g_sysMonitorMutex);
    if (!g_sysMonitorStopEvent) {
        g_sysMonitorStopEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    } else {
        ResetEvent(g_sysMonitorStopEvent);
    }
    if (!g_sysMonitorWakeEvent) {
        g_sysMonitorWakeEvent = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    }
    if (g_sysMonitorThread.joinable()) {
        g_sysMonitorThread.join();
    }
    if (g_pingScannerThread.joinable()) {
        g_pingScannerThread.join();
    }
    if (g_secClockUiaThread.joinable()) {
        g_secClockUiaThread.join();
    }
    g_sysMonitorThread = std::thread(RunTaskbarSystemMonitorLoop);
    g_pingScannerThread = std::thread(RunPingScannerLoop);
    g_secClockUiaThread = std::thread(RunSecondaryClockUiaLoop);
}

void NotifyTaskbarSystemMonitorSettingsChanged() {
    if (g_sysMonitorWakeEvent) {
        SetEvent(g_sysMonitorWakeEvent);
    }
}

void StopTaskbarSystemMonitor() {
    if (g_sysMonitorStopEvent) {
        SetEvent(g_sysMonitorStopEvent);
    }
    if (HWND hw = g_statsWidgetHwnd.load()) {
        PostMessageW(hw, WM_CANCELMODE, 0, 0);
        PostMessageW(hw, WM_NULL, 0, 0);
    }
    std::thread worker, pingWorker, uiaWorker;
    {
        std::lock_guard<std::mutex> lock(g_sysMonitorMutex);
        worker = std::move(g_sysMonitorThread);
        pingWorker = std::move(g_pingScannerThread);
        uiaWorker = std::move(g_secClockUiaThread);
    }
    if (worker.joinable()) {
        worker.join();
    }
    if (pingWorker.joinable()) {
        pingWorker.join();
    }
    if (uiaWorker.joinable()) {
        uiaWorker.join();
    }
    {
        std::lock_guard<std::mutex> lock(g_sysMonitorMutex);
        if (g_sysMonitorStopEvent) {
            CloseHandle(g_sysMonitorStopEvent);
            g_sysMonitorStopEvent = nullptr;
        }
        if (g_sysMonitorWakeEvent) {
            CloseHandle(g_sysMonitorWakeEvent);
            g_sysMonitorWakeEvent = nullptr;
        }
    }
    g_sysMonitorRunning = false;
}

} // namespace SysMonitor

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
                        if (!g_shuttingDown) {
                            param->proc(param->procParam);
                        }
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
    return _wcsicmp(className, L"Windows.UI.Core.CoreWindow") == 0;
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
                }
            } else {
                return FALSE;
            }
            break;
    }

    LoadSettings();

    if (g_target == Target::Explorer) {
        HookWin10ExplorerClockSymbols();

        HMODULE kernelBaseModule = GetModuleHandleW(L"kernelbase.dll");
        if (!kernelBaseModule) {
            Wh_Log(L"Failed to get kernelbase.dll handle");
            return FALSE;
        }
        InstallHook(kernelBaseModule, "GetTimeFormatEx", GetTimeFormatEx_Hook, &GetTimeFormatEx_Original);
        InstallHook(kernelBaseModule, "GetDateFormatEx", GetDateFormatEx_Hook, &GetDateFormatEx_Original);

        EnsureIcsCacheLoadedInMemory();
        TriggerGoogleCalendarSyncIfNeeded(true);
        StartPeriodicGoogleCalendarSyncLoop();
        SysMonitor::StartTaskbarSystemMonitor();
        return TRUE;
    }

    RunFromWindowThreadViaPostMessageMsg();
    HMODULE user32Module = LoadLibraryExW(L"user32.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    InstallHook(user32Module, "CreateWindowInBand", CreateWindowInBand_Hook, &CreateWindowInBand_Original);
    InstallHook(user32Module, "CreateWindowInBandEx", CreateWindowInBandEx_Hook, &CreateWindowInBandEx_Original);
    InstallHook(user32Module, "ShowWindow", ShowWindow_Hook, &ShowWindow_Original);

    EnsureIcsCacheLoadedInMemory();
    TriggerGoogleCalendarSyncIfNeeded(true);
    StartPeriodicGoogleCalendarSyncLoop();
    return TRUE;
}

void Wh_ModAfterInit() {
    if (g_target == Target::Explorer) {
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
    StopGoogleCalendarSyncThreads();
    if (g_target == Target::Explorer) {
        SysMonitor::StopTaskbarSystemMonitor();
        RemoveAllWin10TrayClockSubclasses();
        ReleaseD2DAndDWriteResources();
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
        SysMonitor::NotifyTaskbarSystemMonitorSettingsChanged();
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