/*
 * wjbr.h
 *
 * my c toolbox
 *
 */

#define true  1
#define false 0

#ifdef c89types
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned long      ulong;
typedef unsigned long long ulonglong;

typedef unsigned char      u8;
typedef signed   char      i8;

typedef unsigned short     u16;
typedef signed   short     i16;

typedef unsigned int       u32;
typedef signed   int       i32;

typedef unsigned long long u64;
typedef signed   long long i64;

typedef float    f32;
typedef double   f64;
#endif /* c89types */

#ifdef c99types
typedef uint8_t  u8;
typedef int8_t   i8;

typedef uint16_t u16;
typedef int16_t  i16;

typedef uint32_t u32;
typedef int32_t  i32;

typedef uint64_t u64;
typedef int64_t  i64;

typedef float    f32;
typedef double   f64;
#endif /* c99types */





#define ESC "\x1b"
#define BLACK_TEXT "30"
#define RED_TEXT "31"
#define YELLOW_TEXT "33"
#define CYAN_TEXT "36"
#define WHITE_TEXT "37"
#define BRIGHT_BLACK_TEXT   "90"
#define BRIGHT_RED_TEXT     "91"
#define BRIGHT_GREEN_TEXT   "92"
#define BRIGHT_YELLOW_TEXT  "93"
#define BRIGHT_BLUE_TEXT    "94"
#define BRIGHT_MAGENTA_TEXT "95"
#define BRIGHT_CYAN_TEXT    "96"
#define BRIGHT_WHITE_TEXT   "97"
#define RESET ESC "[0m"

#define CTEXT(c, s) ESC "[" c "m" s RESET

#define ere \
    do { \
        fprintf(stderr, \
                CTEXT(YELLOW_TEXT, "\n%s : %d : %s\n"), \
                __FILE__, __LINE__, __func__); \
    } while (0);

#define die(msg, ...) \
    do { \
        fprintf(stderr, \
                CTEXT(RED_TEXT, "\nerror: " msg "\n"), \
                ## __VA_ARGS__); \
        ere; \
        exit(1); \
    } while (0);

#define debug_var(s,v) \
    fprintf(stderr, #v ": %" s "\n", v)

