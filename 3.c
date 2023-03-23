#include <stdio.h>
int main(){

int rows,i,j,space;
printf("enter the number of rows:");
scanf("%d",&rows);
for(i=rows;i>=1;--i){

for(space=0;space<rows-i;++space)
printf("	");
for(j=0;j<i-i;++j)
printf("	");
printf("/n");
}
}
