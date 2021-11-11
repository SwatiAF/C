//TIME IN MINUTES USING FUNCTIONS

#include <stdio.h>
void time(int,int);
int main() {
    int hour, minutes;
    printf("Enter the hour and minutes \n");
    scanf("%d %d", &hour, &minutes);
    time(hour,minutes);
    return 0;
}
void time(int hour, int minutes)
{ 
    int time_in_minutes;
    time_in_minutes=(hour*60)+minutes;
    printf("Time in minutes is");
    printf("%d",time_in_minutes);
}
