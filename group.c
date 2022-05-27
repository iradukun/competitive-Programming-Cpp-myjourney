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
    int counter = 1;
    i = 0;
    while (fgets(buffer, sizeof(buffer) - 1, instream) != NULL) {
        strcpy(names_arr[i], buffer);
        i++;
        int sz = strlen(buffer);
    }
    
    for (int j = 0;j < 4;j++) {
        for (int k = j + 1;k < 4;k++)
            if (!strncmp(names_arr[j], names_arr[k], 4)){
                printf("%s",names_arr[j]);
                counter++;
             break;
                 
            }else{
                printf("OOPS NO matching words!");
                exit(1);
            }
    }
     printf("\n\nCOUNTED %d",counter);

    fclose(instream);
}