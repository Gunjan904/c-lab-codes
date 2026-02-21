//this is a clock pr
#include <stdio.h>
#include <time.h>

void fill_time(char*, int);

int main(){
    char time[50];

    int format;
    printf("\n---------------------------------");
    printf("\nChoose the time format: ");
    printf("\n1. 24 hrs format");
    printf("\n2. 12 hrs format (default)");
    printf("\nMake a choice(1/2):");
    scanf("%d", &format);
   
   if(format == 1 || format == 2){
    fill_time(time, format);
    printf("Current time: %s\n", time);
    }else{
        printf("Inavalid choice");
    }

    return 0;
}

void fill_time(char* buffer, int format){
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
  if (format == 1){
    strftime(buffer, 50, "%H:%M:%S", current_time); // 24-hour format
} else {
    strftime(buffer, 50, "%I:%M:%S %p", current_time); // 12-hour format
}

}
