#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{
    puts("Ingroduzca un caracter. Para salir, escriba \'q\':");
    while (1)
    {
        if (toupper(getchar()) == 'Q')
        {
            abort();
        }
        
    }
    
    return 0;
}
