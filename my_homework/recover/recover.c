#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 FILE *file = fopen(argv[1], "r");
 if (file == NUll)
 {
    printf("file not found")
 }
 
}