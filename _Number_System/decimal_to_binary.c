#include<stdio.h>
#include<conio.h>
int main(){
int num,i=0;
int a [32];
scanf("%d",&num);

while(num>=1){
a[i]=num%2;
num=num/2;
i++;
}

for(int j=i-1;j>=0;j--){
 printf("%d",a[j]);
}
}
