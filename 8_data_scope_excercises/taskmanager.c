#include<stdio.h>
#include "processes.h"

int main(){

  char temp_name[30];
  int choosen_option, choosen_id, terminate = 0, i;

  while(1 && terminate == 0){

    printf("\n Option 1 - Create a Process");
    printf("\n Option 2 - Terminate a Process");
    printf("\n Option 3 - Print All Processes");
    printf("\n Option 4 - Terminate Program");
    printf("\n Choose an option: ");
    scanf("%d", &choosen_option);

    switch(choosen_option){
      case 1:{
        printf("\n Enter a name: ");
        scanf("%s", temp_name);
        if(createnewprocess(temp_name) == 0){
            printf("\n You have reached the maximum processed (5) allowed at a time.");
            printf("\n Terminate a process to continue.");
          }
      }break;
      case 2:{
        printf("\n Enter a process's id to terminate it: ");
        scanf("%d", &choosen_id);
        stopprocess(choosen_id);
      }break;
      case 3:{
        if(processescount != 0){
          printf("\n Active processes: ");
        }
        else{
          printf("\n No active processes.");
        }
          for(i = 0; i < processescount - 1; i++){
            printf("\n Name: %s, Id: %d is active.", processes[i].process_name, processes[i].process_id);
          }
      }break;
      case 4:{
        terminate = 1; break;
      }break;
      default:
        printf("\n Enter a valid option from 1 to 4");
    }
  }
}