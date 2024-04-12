#include <stdio.h>
int main(){
int credit,salary;

printf("Enter your credit : ");
scanf("%d",&credit);
printf("Enter your salary : ");
scanf("%f",&salary);

  printf("\n");
  if(10>= credit && credit>8){
    printf("your bonuce is : %f",salary*20/100);
  }else if( 8>=credit && credit>6){
    printf("your bonuce is : %f",salary*15/100);
  }else if(6>=credit && credit>4){
    printf("your bonuce is : %f",salary*20/100);
  }else{
    printf("No bonuce");
  }
  return 0;
}
