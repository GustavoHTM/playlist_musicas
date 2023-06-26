#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char *a = "Bananan";
    char *b = "Banana";
    char *c = "Bananana";
    char *d = "coco";

    printf("%d\n", strcmp(a, a));
    printf("%d\n", strcmp(a, b));
    printf("%d\n", strcmp(a, c));
    printf("%d\n", strcmp(d, c));

    return 0;
}
