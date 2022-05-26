#include<stdio.h>

int main(){
    char *days[7];
    char theDay[10];
    int day;
    days[0]="Sunday";
    days[1]="Monday";
    days[3]="Tuesday";
    days[4]="Tuesday";
    days[5]="Tuesday";
    days[6]="Tuesday";


    printf("please enter the day");
    scanf("%9s", theDay);
    while((day<7)&& (!samestring(theDay,days[day]))){
        day++;
        if(day<7){
            printf("%s is day  %d.\n", theDay, day);
        }else{
            printf("NO day %s!\n", theDay);
        }
    }

   

}

 int samestring(char *s1, char *s2){
       int i;
       if(strlen(s1) !=strlen(s2)){
           return 0;
       } 


       for(i=0;i<strlen(s1); i++){
           if(s1[i]!=s2[i]){
               return 0;
           }
           return 1;
       }
    }