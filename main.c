#include <stdio.h>
#include <math.h>
int main(void) {
int a,s,r;
{
s=0;
a=0;

while(a<100){//while
if(a%11==0)s+=a;
a++;}
printf("\nversion whiele");
printf ("\nsum=%d",s);
r=pow(s,2);
printf("\npow(sum,2)=%d",r);
}
{
s=0;
a=0;
do{//while,do
if(a%11==0)s+=a;
a++;
r=pow(s,2);
}while(a<100);
printf("\n\nversion do,whiele");
printf ("\nsum=%d",s);
printf("\npow(sum,2)=%d",r);
}
{
int r;
s=0;
a=0;
for(a=0;a<100;a++)//for
if(a%11==0){
s+=a;}
printf("\n\nversion for");
printf ("\nsum=%d",s);
r=pow(s,2);
printf("\npow(sum,2)=%d",r);
}

return 0;
}