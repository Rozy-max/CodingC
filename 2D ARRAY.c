//arrays in c
#include<stdio.h>
int main(){

int k,m;
int marks[3][2]={{{76,50},{87,15},{12,65}}};
for(k=0;k<3;k++){
for(m=0;m<2;m++){
printf("marks[%d][%d]=%d\n",k,m,marks[k][m]);
}
}
return 0;
}
