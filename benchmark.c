// DEPENDENCY: <time.h>
// DEPENDENCY: "./types.h"

// IMPLEMENTATION: "./benchmarkutils.cpp"

////////////////////////////////////////////////////////////////////////////////
//// NOTE(Elias): Timing

// NOTE(Elias): only valid if _POSIX_C_SOURCE is199309
internal uint64
nanos()
{
	  struct timespec t;
  	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &t);
  	return((uint64)t.tv_sec*10e9 + (uint64)t.tv_nsec);
}
