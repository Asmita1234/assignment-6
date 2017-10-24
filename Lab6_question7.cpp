#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str1[10]="hello";
    char str2[10]=" ASMITA";
    char str3[10];
    strcpy(str3,str2);
    cout<<"srt3 becomes : "<<str3<<endl;
    strcat(str1,str2);
    cout<<"when using strcat(str1,str2) : "<<str1<<endl;
    cout<<"Using strlen(str1) : "<<strlen(str1);
    cout<<endl<<"Using strcmp(str3,str2) : "<<strcmp(str3,str2);
    cout<<endl<<"Using strchr(str1,'l') : "<<strchr(str1,'l');
    cout<<endl<<"Using strstr(str1,str2) : "<<strstr(str1,str2);

    return 0;
}
