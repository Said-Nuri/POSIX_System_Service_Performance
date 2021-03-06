#ifndef _TESTPARAMS_H

/* name of the POSIX object referencing the queue */
#define PIPE_PATH    "/tmp/myfifo"

// Must be greater than the biggest value of  SIZE_OF_MSG array
#define MAX_BUF 2048

#define BILLION 1E9

const int NUM_OF_MSG[] = { 10, 100, 1000, 10000, 100000};
const int SIZE_OF_MSG[] = {1, 16, 64,  256, 1024};

#endif
