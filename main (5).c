#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("umesh.txt","r");
  fgets(c,7,fp);
  printf("char is %s\n",c);
  //
  fclose(fp);
  return 0;
}