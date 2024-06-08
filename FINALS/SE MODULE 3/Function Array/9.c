/*WAP to show difference between Structure and Union*/
#include <stdio.h>
#define p printf
#define s scanf
struct Structure
{
    int x;
    char y;
};
union Union
{
    int x;
    char y;
};
int main()
{
    struct Structure s;
    union Union u;
    p("\nSize of the Structure = %lu bytes",sizeof(s));
    p("\nSize of the Union = %lu bytes",sizeof(u));
    s.x = 10;
    s.y = 'A';
    p("\nStructure Members = x = %d,y = %c",s.x,s.y);
    u.x = 10;
    p("\nUnion Member x = %d",u.x);
    u.y = 'A';
    p("\nUnion Member y = %c",u.y);
    p("\nUnion Members = x = %d,y = %c",u.x,u.y);
    return 0;
}