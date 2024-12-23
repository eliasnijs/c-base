// DEPENDENCY: "<stdio.h>"
// DEPENDENCY: "./types.h"

////////////////////////////////////////////////////////////////////////////////
//// NOTE(Elias): Debug Utilities

#if ENABLE_ASSERT
#define AssertBreak() (*( *)0 = 0)
#define Assert(c) Stmnt(\
			if (!(c)){\
                          fprintf(stderr, "[ASSERTION FAILED]: %s %d, ", __FILE__, __LINE__);\
                          fprintf(stderr, "`"#c"`\n");\
                          AssertBreak();\
			))
#else
#define Assert(c)
#endif

#if ENABLE_PRINT
#define print(format, ...)		printf(format "\n" ANSI_ESC_RESET_ALL,\
						##__VA_ARGS__);\
					fflush(stdout);
#define print_error(format, ...)	fprintf(stderr, ANSI_ESC_RGB_BG(120, 60, 60));\
					fprintf(stderr, format, ##__VA_ARGS__);\
					fprintf(stderr, ANSI_ESC_RGB_FG(150, 150, 150));\
					fprintf(stderr, " (%s %d)", __FILE__, __LINE__);\
					fprintf(stderr, ANSI_ESC_RESET_ALL);\
					fprintf(stderr, "\n");\
					fflush(stderr);
#define print_warning(format, ...)	fprintf(stderr, ANSI_ESC_RGB_BG(120, 120, 60));\
					fprintf(stderr, format, ##__VA_ARGS__);\
					fprintf(stderr, ANSI_ESC_RGB_FG(150, 150, 150));\
					fprintf(stderr, " (%s %d)", __FILE__, __LINE__);\
					fprintf(stderr, ANSI_ESC_RESET_ALL);\
					fprintf(stderr, "\n");\
					fflush(stderr);
#else
#define print(format, ...)
#define print_error(format, ...)
#define print_warning(format, ...)
#endif

#if ENABLE_DEBUGLOG
#define PrintInt64(a)		printf(#a" = %ld\n", (Int64)a)
#define PrintUint64(a)		printf(#a" = %lu\n", (Uint64)a)
#define PrintFloat64(a)		printf(#a" = %f\n", (Float64)a)
#define PrintChar(s)		printf(#s" = %c\n", (char)s)
#define PrintString(s)		printf(#s" = %s\n", (char *)s)
#define PrintBool(b)		printf(#b" = %s\n", (b)?"true":"false")
#define PrintPtr(p)		printf(#p" = %p\n", p)
#define PrintLine(p)		printf("──────────────────────────────"\
					"────────────────────────────\n")
#else
#define PrintInt64(a)
#define PrintUint64(a)
#define PrintFloat64(a)
#define PrintChar(s)
#define PrintString(s)
#define PrintBool(b)
#define PrintPtr(p)
#define PrintLine(p)
#endif
