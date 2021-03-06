# POSIX_System_Service_Performance
##### Basic Performance Testing of POSIX System Services under Linux distributions 

## Content of Tests:

1. **Message Queue**: 
*A process named "sender" sends messages to the named queue, other process named "receiver" receives messages through amount of number of messages specified by the header file "test_params.h". Computes and prints the duration of sending/receiving process and avarage time of them.*   

2. **FIFOs:**
*Two processes has the same named pipe, writer send unnecessary data consecutively , reader process reads all incoming datas in size of 1, 16, 64,  256 and 1024 bytes.*

3. **Pipes:**
*Just like FIFOs two processes, that one is child of another created by fork(), send/read data in size of 1, 16, 64,  256 and 1024 bytes mutually. Sending and receiving time are measured and avarage time is calculated.*

4. **Pthread:**
*Threads that amount of certain number specified in definition, are created. The time duration for each thread creation via pthread_create() and avarage time of these operations are measured and calculated.*

5. **Memory Allocation and Freeing:**
*A process allocates some memory amount of 1, 16, 64, 256 etc. increasingly and freeing it. All these two operation time measured and avarage time calculated.*

6. **Shared Memory:**
*A process allocates shared increasingly memory amount of 1, 16, 64,  256, 1024 and so forth,  through virtual file name. Allocation and de-allocation are measured and avarage time is calculated.*

7. **Task Switching Latency:**
*Warning: Underlying system is considered has only one core and has no any process exist in the system before testing, otherwise it won't give realistic result. In this test two processes, that have the same priority, relinquish the CPU mutually by calling sched_yield() function that causes task switching. This operation is measured certain number of times and average the time to get realistic measurement.*