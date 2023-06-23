# include <stdio.h>
void printstring(char arr[]);//yahan pe size ki jarurat hi nhi hia kyunki jahan bhi '\0'(null character ayega wahi pe end ho jayeg a ye)

int main(){
    char firstname[]="Astha ";
    char lastname[]="Lakshya sharma ";
     printstring(firstname);
     
      printstring(lastname);
return 0;
}

void printstring(char arr[])
{
    for (int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
}