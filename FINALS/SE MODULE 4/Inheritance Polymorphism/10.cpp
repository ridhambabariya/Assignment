/*Write a program to concatenate the two strings using Operator Overloading*/
#include <iostream>
#include <cstring>
using namespace std;
class StringConcat
{
private:
    char *str;
public:
    StringConcat(const char *s = "")
    {
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
    ~StringConcat()
    {
        delete[] str;
    }
    StringConcat operator+(const StringConcat &s)
    {
        char *temp = new char[strlen(str)+strlen(s.str)+1];
        strcpy(temp,str);
        strcat(temp,s.str);
        StringConcat result(temp);
        delete[] temp;
        return result;
    }
    void displayString()
    {
        cout<<"Concatenated String = "<<str<<endl;
    }
};
int main()
{
    StringConcat s1("Hello "),s2("World!");
    StringConcat result = s1+s2;
    result.displayString();
    return 0;
}