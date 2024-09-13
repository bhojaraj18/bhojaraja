#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("umesh.txt","a");
  fputs("B",fp);
  fputs("Bhojraj",fp);
  fclose(fp);
  return 0;
}