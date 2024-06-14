#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;

     if(ch>='a'&& ch<='z')
    {
        printf("%c",toupper(ch));
    }

    else if(ch>='A'&& ch<='Z')
    {

        printf("%c",tolower(ch));
    }




}

