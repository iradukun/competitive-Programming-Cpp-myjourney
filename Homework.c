#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main() {
    char buffer[100];
    char fileName[30];
    char names_arr[4][10];
    char name[100];
    char prevline[300] = "";
    FILE* fp;
    FILE* instream;
    int num, i;
    
    printf("Enter the name of the file: ");
    scanf("%s", fileName);
    fp = fopen(fileName, "w");
    if (fp == NULL) {
        printf("ERROR!");
        exit(1);
    }
    printf("Enter the number of names you want to write: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        printf("Enter name %d: ", i);
        scanf("%s", name);
        fprintf(fp, "%s\n", name);
    }
    fclose(fp);
    if ((instream = fopen(fileName, "r")) == NULL) {
        printf("Unable to open file %s\n", fileName);
        exit(-1);
    }
    printf("\nRESULT : \n");
    int counter;

    int k ;
    char *pos;
    counter=0;
    while (fgets(buffer, sizeof(buffer) - 1, instream) != NULL) {
        k=0;
                counter++;
        if(!strncmp(buffer,prevline,3)){
            if(counter%2!=0){
                counter=counter+1;
            }
            while((pos=strstr(buffer+i,prevline)) !=NULL){
                k=(pos-buffer)+1;
            }
            printf("%c%c%c%c%c:%d\n\n=========\n\n",buffer[0],buffer[1],buffer[2],buffer[3],buffer[4], counter);
            printf("%s \n%s",buffer,prevline);
        }
        strcpy(prevline,buffer);
    }
   

    fclose(instream);
}