// Settings
#define CARDPUTER
#define SDCARD

// Info
#define SATURN_VERSION "v1.0.0"

// Style
#define MAIN_COLOR CYAN
#define BG_COLOR BLACK
#define DISPLAY_CENTER_X DISPLAY.width() / 2  // Center of the screen
#define SMALL_TEXT 1
#define MEDIUM_TEXT 2
#define LARGE_TEXT 4
#define SPACING_MENU_ITEMS 33  // Spacing between menu items
#define HEIGHT_MENU_ITEMS 4  // Height of the menu items

// Interactions
#define SOUND

// Languages
//#define LANGUAGE_EN_US
#define LANGUAGE_PT_BR

// Aliases
#define DISPLAY M5Cardputer.Display
#define BACKLIGHT 38
#define MINBRIGHT 165

// IR Settings
#define IR_SEND_PIN 44
#define IR_REPEAT 3
#define ACTIVE_LOW_IR

// Battery Settings
#define VBAT_PIN 10

// SD Card Settings
#define SD_CLK_PIN 40
#define SD_MISO_PIN 39
#define SD_MOSI_PIN 14
#define SD_CS_PIN 12

// DEAUTH Vars
uint8_t channel;
String apMac = String("");
bool target_deauth_flg = false;
bool target_deauth = false;
int deauth_tick = 0;
bool clone_flg = false;

//BLUETOOTH Vars
int advtime = 0;
int ajDelay = 1000;
bool sourApple = false;
bool swiftPair = false;
bool androidPair = false;
bool maelstrom = false;

int cursor = 0;
int wifict = 0;
bool rstOverride = false;
bool isSwitching = true;
int currentProc = 1;
bool portalActive = false;
const byte PortalTickTimer = 1000;
int brightness = 100;
bool activeQR = false;
wifi_ap_record_t ap_record;
String apSsidName = String("");