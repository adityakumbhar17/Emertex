//write the code for the replace the specific sequence with the specific  character
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    //traverse on thar string.
    int i=0 ,j=0;
    while(str[i]!='\0')
    {
        if(str[i]=='b'&&str[i+1]=='b'&& str[i+2]=='c')
        {
            str[j++]='$';
            i+=3;  //this step is for the skiping the  that position.
            
        }
        else if(str[i]=='b'&& str[i+1]=='b'&& str[i+2]=='e')
        {
            str[j++]='&';
            i+=3;
            
        }
        else if(str[i]=='b'&& str[i+1]=='b')
        {
            str[j++]='*';
            i+=2;
        }
        else
        {
            str[j++]=str[i++];
        }
    }
    str[j]='\0';
    puts(str);
}











