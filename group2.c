#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct arrayOfSameNames{
    char common[5];
    short int count;
};

 int getThesame(struct arrayOfSameNames *names_arr, char *common, int arr_size){
    for( int i = 0; i < arr_size; i++){
        if(!strcmp(names_arr[i].common, common)){
            names_arr[i].count++;
            return 1;
        }
    }
    return 0;
}

char* findThesameInfile(FILE *file, char *common){
    char buffer[100];
    char* found = "";
    while(fgets(buffer, sizeof(buffer)-1, file)){
        if(!strncmp(common, buffer, 4)){
            printf("%s", buffer);
        }
    }

    return found;
}

void main(){
    int n;
    char name[100];
 char filename[100];
 printf("Enter the name of the file: ");
 scanf("%s", filename);
if(isdigit(filename[0])){
    printf("ERROR! the name fileis not valid must be a string");
    exit(-1);
}
 
    printf("How many names do you want to enter? ");
    scanf("%d", &n);
    struct arrayOfSameNames arr[n];
     int sizeof_arr = 0;
    FILE *ptr = fopen(filename, "w");

    for(int i = 0; i < n; i++){
        printf("enter the %d name\n",i+1);
        scanf(" %[^\n]", name);
        fprintf(ptr,"%s\n", name);
        char fourChars[5];
        strncpy(fourChars, name, 4);
        if(getThesame(arr, fourChars, sizeof_arr) == 0){
            strncpy(arr[sizeof_arr].common, name, 4);
            arr[sizeof_arr].count = 1;
            sizeof_arr++;
        }
    }
    fclose(ptr);
    
    for(int i = 0; i < sizeof_arr; i++){
        if(arr[i].count > 1){
            printf("\n\n%s: %d\n==================\n", arr[i].common, arr[i].count);
             ptr= fopen(filename, "r");
            findThesameInfile(ptr, arr[i].common);
            fclose(ptr);
        }
    }
    printf("\nthats what we found in the file, thank you!!!!\n\n");
    
}