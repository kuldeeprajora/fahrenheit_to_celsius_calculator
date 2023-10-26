#include<stdio.h>
int main(){
float fer, cel ,i=0;
label :
i++;
//formula
/*
0 c = (f-32)*5/9


*/
printf("\n Enter the temp. in fahre.  ");
scanf("%f",&fer);
cel=(fer-32)*5/9;
printf("\n Temp in celsius = %f",cel);
if (i==3)
{
   return 0;
}

goto label;
    return 0;
}