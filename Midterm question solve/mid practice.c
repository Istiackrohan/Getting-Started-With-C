#include <stdio.h>
int main()
{
int day,i,prdnum,qnsold;
float val=0.0;
printf("Please enter Product number and Quantity sold for one day for all 5 products during 3 days:\n");
for(day=1;day<=3;day++){
for(i=1;i<=5;i++){
scanf("%d%d",&prdnum,&qnsold);
switch (prdnum) {
case 1:
val = val + qnsold*20.90;

break;
case 2:
val = val + qnsold*40.50;
break;
case 3:
val = val + qnsold*90.90;
break;
case 4:
val = val + qnsold*40.45;
break;
case 5:
val = val + qnsold*60.85;
}
}
}
printf("Total retail value= Tk%.2f",val);
return 0;
}
