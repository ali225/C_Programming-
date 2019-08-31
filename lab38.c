#include <stdio.h>

enum {
JAN=1,FEB=2,MAR=3,APR=4,MAY=5,JUNE=6,JULY=7,AUG=8,SEP=9,OCT=10,NOV=11,DEC=12
}month;


typedef enum{

False ,
True
}bool;

int main()
{
  //  enum months month;

    char month_name[13][10] = {" ","January","February","March","April","May","June","July","August","September","October","November","December"};

    for(month = JAN ; month <= DEC ; month++)
    {
        printf("%d %s\n",month,month_name[month]);
    }

    bool b1 = False ;
    printf("%d\n" , b1);
     b1 = True ;
    printf("%d\n" , b1);
    return 0;
}
