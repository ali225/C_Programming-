#include<stdio.h>
#include<string.h> //for strcpy function

struct student
{
    int id;
    char  * name ;
}record[2];


//struct student record[2] ;

int main()
{

    // 1st student's record
    struct student record[2] ;
    record[0].id=1;
    //strcpy(record[0].name, "Khaled");
    // 2nd student's record
    record[0].name = "Khaled" ;
    record[1].id=2;
    //strcpy(record[1].name, "Ayman");
    record[1].name = "Ayman" ;
    printf("%d %s\n%d %s", record[0].id, record[0].name ,record[1].id , record[1].name);

    return 0 ;
}
