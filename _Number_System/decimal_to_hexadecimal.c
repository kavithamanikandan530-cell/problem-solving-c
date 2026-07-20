#include<stdio.h>
int main(){
int num,i=0,rem;
char a[32];
scanf("%d",&num);
while(num>0){
rem=num%16;
if(rem<10)
/*Convert the number into its character equivalent
 Example:
 rem = 5
'0' = ASCII 48
5 + '0' = ASCII 53 = '5'
Never use rem + ' ' (space), because it gives wrong characters*/
a[i]=rem+'0';
else
/*Convert it to A, B, C, D, E, or F
10 -> A,11 -> B,12 -> C,13 -> D,14 -> E,15 -> F
Example:rem = 14
(14 - 10) + 'A'
4 + 'A'
= 'E'*/
a[i]=(rem-10)+'A';
num=num/16;
i++;
}
for(int j=i-1;j>=0;j--){
//Do NOT use %d,otherwise ASCII values (like 65 for 'A') are printed
printf("%c",a[j]);
}
return 0;
}
