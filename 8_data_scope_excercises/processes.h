#ifndef PROCESSES_H
#define PROCESSES_H

struct Process{

int process_id;
char process_name[30];
};

extern struct Process processes[5];
extern int processescount; 

int createnewprocess(char name[30]);
void stopprocess(int uniquie_id);

#endif