#include<stdio.h>
// Body Mass Index Program.
int main(void)
{
  int Weight,Height;
  int BMI;
  printf("Enter Your Weight:");
  scanf("%d" ,&Weight);
  printf("Enter Your Height:");
  scanf("%d" ,&Height);
  BMI=Weight*703/(Height*Height);
  printf("Your Body Mass Index Is:%d\n",BMI);
}