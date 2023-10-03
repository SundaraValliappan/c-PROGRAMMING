/* NEXT DATE */
#include <stdio.h>
int main()
{
int d, m, y;
printf("Enter the date, month and year respectively  ");
scanf("%d%d%d",&d,&m,&y);
if (d<=0 || m<=0 || y<=0 || m>12)
  printf("Enter valid input");
else if ((m==1 ||m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d>31)
  printf("Enter valid input");
else if ((m==4 || m==6 || m==9 || m==11) && d>30)
  printf("Enter valid input");
else if ((m==1 ||m==3 || m==5 || m==7 || m==8 || m==10 ) && d==31)
    printf("%d %d %d",1, m+1, y);
else if (m==12 && d==31)
    printf("%d %d %d",1, 1, y+1);
else if ((m==1 ||m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d<31)
    printf("%d %d %d",d+1, m, y);
else if ((m==4 || m==6 || m==9 || m==11) && d==30)
    printf("%d %d %d",1, m+1, y);
else if ((m==4 || m==6 || m==9 || m==11) && d<30)
    printf("%d %d %d",d+1, m, y);
else if (m==2)
  {
  	if (y%4==0 && (y%100 != 0 || y%400 == 0)) 
  	{
  		if (d>29)
  			printf("Enter valid input");
  		else if (d==29)
            printf("%d %d %d",1, m+1, y);
        else if (d<29)
            printf("%d %d %d",d+1, m, y);
	}
    else
    {	
  		if (d>28)
  			printf("Enter valid input");
  		else if (d==28)
            printf("%d %d %d",1, m+1, y);
        else if (d<28)
            printf("%d %d %d",d+1, m, y);	
	}
    
  }
return 0;
}
