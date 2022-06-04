#include<stdio.h>


enum day{Mon=1, Tue=2, Wed=3, Thu=4, Fri=5, Sat=6, Sun=7};
int main() {
enum day today = Sun;
if(today == Sun || today == Sat){
printf(“It is the weekend! Party time!”);
}else {
printf(“It is working day!”);
}
return 0;
}