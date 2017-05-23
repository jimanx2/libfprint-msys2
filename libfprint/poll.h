#ifndef TIMESPEC_TO_TIMEVAL
#define TIMESPEC_TO_TIMEVAL(tv, ts) { \
  (tv)->tv_sec = (long)(ts)->tv_sec; \
  (tv)->tv_usec = (long)(ts)->tv_nsec / 1000; \
}
#endif

#define timeradd(a, b, result) \
    do { \
        (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; \
        (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; \
        if ((result)->tv_usec >= 1000000L) { \
            ++(result)->tv_sec; \
            (result)->tv_usec -= 1000000L; \
        } \
    } while (0)

#define timersub(a, b, result) \
    do { \
        (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; \
        (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; \
        if ((result)->tv_usec < 0) { \
            --(result)->tv_sec; \
            (result)->tv_usec += 1000000L; \
        } \
    } while (0)