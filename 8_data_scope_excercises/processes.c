#include<stdio.h>
#include "processes.h"
#include "limits.h"
#include<string.h>

struct Process processes[5];
int processescount = 0; 

static int nextprocessid(){
  
  static int unique_ids = 0;

  if(unique_ids == INT_MAX){
    return 0;
  }
  unique_ids += 1;
  printf("%d", unique_ids); 
  return unique_ids;
}

int createnewprocess(char name[30]){

  int unique_id = nextprocessid();

  if(unique_id == 0 || processescount == 5){
    return 0; 
  }
  strcpy(processes[processescount].process_name, name);
  processes->process_id = unique_id;
  processescount += 1;
  return unique_id;
}

void stopprocess(int uniquie_id){

  int id_matched = 0, i = 0; 

  for(; i < 5; i++){
    if(uniquie_id == processes[processescount].process_id){
      id_matched = 1;
      break;
    }
  }
  if(id_matched){
    for(int j = i; j < 4; j++){
      processes[j].process_id = processes[j + 1].process_id;
      strcpy(processes[j].process_name, processes[j + 1].process_name);
    }
    processescount -= 1;
  }
}