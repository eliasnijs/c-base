typedef unsigned char	uint8;
typedef unsigned short	uint16;
typedef unsigned int	uint32;
typedef unsigned long	uint64;
typedef signed char	int8;
typedef signed short	int16;
typedef signed int	int32;
typedef signed long	int64;
typedef float		float32;
typedef double		float64;
typedef signed char	bool8;
typedef signed short	bool16;
typedef signed int	bool32;
typedef signed long	bool64;

#define internal	static
#define global_variable static
#define local_persist	static

#define true 1
#define false 0

enum Axis {
	AXIS_X,
	AXIS_Y,
	AXIS_Z,
	AXIS_W,
};

enum AxisDirection {
	AXIS_DIR_INC =  1,
	AXIS_DIR_DEC = -1,
};
