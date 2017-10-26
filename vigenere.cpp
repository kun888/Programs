#include<iostream>
using namespace std;
int main()
{
    char str[80],key[70];
    cin>>str;
    cin>>key;
    for(int i=0;str[i]!='\0';i++)
    {
        int f=str[i]-'a';
        int r=key[i]+(char)f;
        if(r>122)
        {
            r=r-'z'+'a'-1;
        }
        cout<<(char)r;
}
}
