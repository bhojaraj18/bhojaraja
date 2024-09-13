#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("umesh.txt","w");
  fputc("B",fp);
  fputs("umesh",fp);
  fclose(fp);
  return 0;
}