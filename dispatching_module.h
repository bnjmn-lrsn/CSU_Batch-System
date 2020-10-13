/*
Peter Keres
sep 21 2019

header file for the dispatching module
the dispatching module will handle the execution of any batch file pulled form the queue
this will hold the 'execv' fucntion that will run the batch file given
*/

// this lets us get the variables that are global in the main.c file
extern pthread_mutex_t queMutex;
extern pthread_cond_t jobsInQue;
extern pthread_cond_t queNotFull;
extern struct jobQ* jobQueue;

// this will excute a job given
void job_exe(void * args[]);

// this will pull the next job from the queue, this method should be called with the thread
void nextJob();
