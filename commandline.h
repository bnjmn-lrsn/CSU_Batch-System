/*
 * Peter Keres
 * Ben Larsen
 * sep 28 2019
 *
 * this is the header file for the commandline file
*/

#ifndef  COMMANDLINE_H
#define  COMMANDLINE_H

// runs a command
int cmd_run(int nargs, char **args, struct jobQ* jobQueue);

// quits the program
int cmd_quit(int nargs, char **args, struct jobQ* jobQueue);

// displays the menu
void showmenu(const char *name, const char *x[]);

// creates the help menu
int cmd_helpmenu(int n, char **a, struct jobQ* jobQueue);

// allows user to swtich the current policy
int cmd_schedule_policy(int narg, char** args, struct jobQ* jobQueue);

// display the list of current batch process in the system
int cmd_list(int narg, char** args, struct jobQ* jobQueue);

// runs automate peforemace evaluation of a job
int cmd_test(int narg, char** args, struct jobQ* jobQueue);

// this is the main method called to get a UI
int cmd_dispatch(char *cmd, struct jobQ* jobQueue);

#endif
