#define BASE       "imgbase.bmp"
#define NEW        "imgnew.bmp"
#define NEW_DIFF   "imgnew_diff.bmp"

#define DEFAULT_TOLERANCE       11
#define DEFAULT_QUANTITY         1

#define DEBUG_opt   "debug"

#define MAX_WIDTH       400
#define MAX_HEIGHT      300
#define MAX_HEADER_size 200

#define NO_ERROR            0x0000
#define ERR_NOFILE          0x0001
#define ERR_NOT_WINBMP      0x0002
#define ERR_NOT_24bit       0x0003
#define ERR_TOO_WIDTH       0x0004
#define ERR_TOO_HEIGHT      0x0005
#define ERR_HEADER_TOO_BIG  0x0006
#define ERR_OPENFILE        0x0007

#define NO_DIFF             0x0000
#define DIFF_SIZE           0x0001
#define DIFF_BLUE           0x0002
#define DIFF_GREEN          0x0004
#define DIFF_RED            0x0008
#define DIFF_HIGH_QUANTITY  0x0010

#define DEF_ENABLED     1
#define DEF_DISABLED    0