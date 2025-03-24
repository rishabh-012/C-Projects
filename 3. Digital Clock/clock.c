#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

void fill_time(char*, int);
int input_format();
void fill_date(char*);
void clearscreen();

int main()
{
   char time[50], date[100];
   int format=input_format();
   while(1){
   fill_time(time, format);
   fill_date(date);
   clearscreen();
   printf("Current Time: %s\n", time);
   printf("Date: %s\n", date);
   sleep(1);
   }
   return 0;
}

void clearscreen() {
    #ifdef _WIN32
    system("clear");
    #else
    system("clear");
    #endif
}

int input_format() {
    int format;
    printf("\nChoose the time format:");
    printf("\n1. 24 Hours Format");
    printf("\n2. 12 Hours Format (Default)");
    printf("\nMake a choice (1/2):");
    scanf("%d", &format);
    return format;
}
void fill_date(char* buffer) {
    time_t raw_time ;
    struct tm *current_time ;
    
    time(&raw_time) ;
    current_time = localtime(&raw_time) ;
    strftime(buffer, 100 , "%A %B %d %Y", current_time);
}

void fill_time(char* buffer , int format){
    time_t raw_time ;
    struct tm *current_time ;
    
    time(&raw_time) ;
    current_time = localtime(&raw_time) ;
    if(format==1) {
    strftime(buffer, 50 , "%H:%M:%S", current_time);
    }
    else {
        strftime(buffer, 50 , "%I:%M:%S %p", current_time);
    }

}