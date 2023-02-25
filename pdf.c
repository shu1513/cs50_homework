#include <stdio.h>
#include<cs50.h>

int main (int argc, string argv[])
{
    FILE *filelocation = fopen(argv[1], "r");
    if (filelocation == NULL)
    {
        printf("no such file found\n");
        return 1;
    }
}