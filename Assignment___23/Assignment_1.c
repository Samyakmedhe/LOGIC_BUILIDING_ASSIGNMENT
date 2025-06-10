#include <stdio.h>
#include <ctype.h>

void DisplayASCII()
{
    int i;

    printf("Dec\tHex\tOct\tChar\n");
    printf("----\t----\t----\t----\n");

    for (i = 0; i <= 127; i++)
    {
        printf("%3d\t%02X\t%03o\t", i, i, i);

        if (isprint(i))
            printf("%c\n", i);
        else
            printf(".\n");
    }

}
int main() {
    DisplayASCII();

    return 0;
}