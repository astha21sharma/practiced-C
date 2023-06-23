#include <stdio.h>

int main()
{
    int* ptr="hello astha";
    puts(ptr);
     ptr=" hello";//here we changed but pointer nhi hota aur array hota to nhi kar pate
       
     puts(ptr);
    return 0;
}