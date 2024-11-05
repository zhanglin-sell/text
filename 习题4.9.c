#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int number,mm,dd,yy;
      float price;
      scanf("%d",&number);
      scanf("%f",&price);
      scanf("%d/%d/%d",&mm,&dd,&yy);
      printf("Enter item number:\n");
      printf("Enter unit price:\n");
      printf("Enter purchase date (mm/dd/yy):\n");
      printf("Item Unit Purchase\n");
      printf("%-9d$ %-9.2f%02d%02d%02d\n",number,price,mm,dd,yy);


	  /*********End**********/
       return 0;
	}
