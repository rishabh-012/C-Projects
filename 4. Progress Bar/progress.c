#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

const int BAR_LENGTH=50 ;
const int MAX_TASKS=5;

typedef struct progress
{
    int id;
    int progress;
    int step;
} Task;
 
void printbar(Task task);
void clrscreen();

int main() {
         Task tasks[MAX_TASKS];
         srand(time(NULL));
         for (int i=0; i < MAX_TASKS ; i++ ){
         tasks[i].id = i+1;
         tasks[i].progress = 0 ;
         tasks[i].step = rand() % 5 + 1;
        }
        int task_incomplete = 1;
        while(task_incomplete){
            task_incomplete=0;
            clrscreen();
         for (int i=0; i < MAX_TASKS ; i++ ){
            tasks[i].progress += tasks[i].step ;
            if(tasks[i].progress > 100){
                tasks[i].progress = 100 ;
            }
            else if (tasks[i].progress < 100){
                task_incomplete=1;
            }
            printbar(tasks[i]);
         }

            sleep(1);
        }
        printf("All Task Completed.!!!");
        return 0;
}
void printbar(Task task){
    int bars_to_show = (task.progress * BAR_LENGTH) / 100;
    printf("\nTask %d:[", task.id);
   for(int i=0; i<BAR_LENGTH; i++){
       if(i < bars_to_show){
           printf("=");
       }
       else{
           printf(" ");
       }
   }
    printf("] %d%%\n\n",task.progress); 
}
void clrscreen(){
    #ifdef _WIN32
    system("clear");
    #else
    system("clear");
    #endif
}