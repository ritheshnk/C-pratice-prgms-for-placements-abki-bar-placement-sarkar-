#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employe{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employe e1;
    e1.code=89;
    strcpy(e1.name,"Rithesh");
    e1.salary=18000000.23645;
    printf("%d\n",e1.code);
    printf("%s\n",e1.name);
    printf("%f",e1.salary);

    struct employe e2;
    e2.code=90;
    strcpy(e2.name,"Narayan");
    e2.salary=19000000.00;
    printf("%d\n",e2.code);
    printf("%s\n",e2.name);
    printf("%f",e2.salary);
    return 0;

}