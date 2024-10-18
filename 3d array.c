//Arrays in c
#include<stdio.h>
int main(){

int k,m,r;
int marks[2][2][3]={{{89,65,70},{32,54,76}},{{89,65,70},{32,54,76}}};
for(k=0;k<2;k++){
for(m=0;m<2;m++){
for(r=0;r<3;r++){
printf("marks[%d][%d][%d]=%d\n",k,m,r,marks[k][m][r]);
}
}
}
return 0;
}
