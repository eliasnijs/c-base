// DEPENDENCY: "<stdio.h>"

////////////////////////////////////////////////////////////////////////////////
//// NOTE(Elias): General

#define Stmnt(s)		do { s } while(0);
#define ArrayCount(a)		(sizeof(a)/sizeof(*(a)))
#define OffsetOf(t, e)  	((size_t)&(((t *)0)->e))
#define Min(a,b)		(((a)<(b))?(a):(b))
#define Max(a,b)        	(((a)>(b))?(a):(b))
#define Clamp(a,x,b)    	(((x)<(a))?(a):((b)<(x))?(b):(x))
#define ClampBot(a,b)   	(Max((a),(b)))
#define ClampTop(a,b)   	(Min((a),(b)))
#define Abs(a)          	(((a)<0)?(-(a)):(a))
#define free0(p)		Stmnt(free(p); p = 0;)

////////////////////////////////////////////////////////////////////////////////
//// NOTE(Elias): Constant

#if DEFINE_INT_MIN_MAX_CONSTANTS
#define UINT8_MAX		0xFF
#define UINT16_MAX		0xFFFF
#define UINT32_MAX		0xFFFFFFFF
#define UINT64_MAX		0xFFFFFFFFFFFFFFFF

#define INT8_MAX		0x7F
#define INT8_MIN		0x80
#define INT16_MAX		0x7FFF
#define INT16_MIN		0x8000
#define INT32_MAX		0x7FFFFFFF
#define INT32_MIN		0x80000000
#define INT64_MAX		0x7FFFFFFFFFFFFFFF
#define INT64_MIN		0x8000000000000000
#endif

#define FLOAT32_MAX		3.402823466e+38f
#define FLOAT64_MAX		1.7976931348623158e+308
#define FLOAT32_MIN		1.175494351e-38f
#define FLOAT64_MIN		2.2250738585072014e-308

#define PI32			3.14159265359f
#define PI64			3.14159265358979323846
#define E32			2.71828182846f
#define E64			2.71828182845904523536

////////////////////////////////////////////////////////////////////////////////
//// NOTE(Elias): Sizes

#define Kilobytes(v)		((v)*1024LL)
#define Megabytes(v)		(Kilobytes(v)*1024LL)
#define Gigabytes(v)		(Megabytes(v)*1024LL)
#define Terabytes(v)		(Gigabytes(v)*1024LL)

