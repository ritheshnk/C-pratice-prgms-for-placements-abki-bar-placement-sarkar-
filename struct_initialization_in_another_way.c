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
    struct employe rithesh={100,"rithu",34.4};
    printf("%d\n",rithesh.code);
    printf("%s\n",rithesh.name);
    printf("%f\n",rithesh.salary);
    
    return 0;
}