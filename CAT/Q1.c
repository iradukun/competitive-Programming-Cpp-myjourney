 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
#include<math.h>

struct person{
    char name[20];
    char age[15];
    char address[20];
    char gender[10];
    float time;
    float principal;
    float rate;
    float emi;

    };

    int main(){

        char name[20];
    char age[15];
    char address[20];
    char gender[10];
    float r;
    float t;
    float P;
    float T;
    float EMI;
    float TLP;
    float R;

    struct person p1;
    printf("enter name    :     ");
    scanf("%[^\n]s",name);
    printf("'nEntered name:  ");
    puts(name);
    strcpy(p1.name, name);
    printf("\nEnter address    :");
    scanf("%[^\n]s",address);
    printf("\nEntered address :");
    puts(address);
    strcpy(p1.address, address);
    printf("\nEnter Dob in the format of dd/mm/yyyy    :");
    scanf("%[^\n]s",age);
    printf("\nentered date");
    puts(age);
    strcpy(p1.age, age);
    printf("\nEnter gender:");
    scanf("%[^\n]s",gender);

    printf("\n Entered gender:");
    puts(gender);
    strcpy(p1.gender,gender);
    printf("\nEnter principal amount  in RWF  :");
    scanf("%f", &P);
    printf("\nEnterd principla amount  :%.2f ",P);
    p1.principal=P;
    printf("\nEnter rate of interest in percentage  :");
    scanf("%f", &r);
    printf("\nenterd interst rate percent  :%.1f",r);
    p1.rate=r;
    printf("\nEnter payment time in years  :");
    scanf("%f", &t);
    printf("\nthe entered time   : %.1f",t);
    p1.time=t;
    p1.rate= p1.rate/(12*100);
    p1.time=p1.time*12;
    p1.emi=(p1.principal*pow(1+p1.rate,p1.time)/ (pow(1+ p1.rate,p1.time) -1));
    
    R=p1.rate;
    EMI=p1.emi;
    TLP=p1.emi*p1.time;
    T=p1.time*12;
    printf("\n\n\nBorrower basic information\n==============\n");

    printf("\nName: %s",p1.name);
    printf("\nAddress: %s",p1.address);
    printf("\ndate of birth: %s",p1.age);
    printf("\nGender: %s",p1.gender);
    printf("\n'n\nPayment information\n================\n\n");
    printf("Monthly EMI IS RWF  %.3f",EMI);
    printf("\nTotal amount to be paid in %.1f months is RWF   %.3f",T,TLP);



        return 0;
    }