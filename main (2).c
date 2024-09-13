#include<stdio.h>
struct book {
int num;
char name[1];
float price;
};
int main()
{
  struct book hp;
  hp.num=2024;
  hp.price=10.0;
  strcpy(hp.name,"u");
  printf("Book number : %d\n",hp.num);
  printf("Book name : %s\n",hp.name);
  printf("Book price : %f\n",hp.price);
}