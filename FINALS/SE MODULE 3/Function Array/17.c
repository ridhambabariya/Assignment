/*WAP to show difference between Structure and Union*/
#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf
struct Person
{
    char name[50];
    int age;
    float height;
};
union Data
{
    char name[50];
    int age;
    float height;
};
int main()
{
    struct Person pr;
    strcpy(pr.name,"John");
    pr.age = 30;
    pr.height = 5.9;
    union Data data;
    strcpy(data.name,"Alice");
    data.age = 25;
    data.height = 5.7;
    p("\nStructure - Person : ");
    p("\nName = %s",pr.name);
    p("\nAge = %d",pr.age);
    p("\nHeight = %.1f",pr.height);
    p("\nUnion - Data : ");
    strcpy(data.name,"Alice");
    p("\nName = %s",data.name);
    data.age = 25;
    p("\nAge = %d",data.age);
    data.height = 5.7;
    p("\nHeight = %.1f",data.height);
    p("\nSize of structure Person = %lu bytes",sizeof(pr));
    p("\nSize of union Data = %lu bytes",sizeof(data));
    return 0;
}