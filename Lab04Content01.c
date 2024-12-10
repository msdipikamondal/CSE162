#include <stdio.h>
#include <limits.h>

int main (void)

{

    int anInteger;
    unsigned aUnsignedInteger;
    short int aShortInteger;
    unsigned short int aUnsignedShortInteger;
    long int aLongInteger;
    unsigned long int aUnsignedLongInteger;
    long long int aLongLongInteger;
    unsigned long long aUnsignedLongLongInteger;

    printf("size of Integer: %llu bytes\n", sizeof (anInteger));
    printf("size of Unsigned Integer: %llu bytes\n", sizeof (aUnsignedInteger));
    printf("size of Short Integer: %llu bytes\n", sizeof (aShortInteger));
    printf("size of Unsigned Short Integer: %llu bytes\n", sizeof (aUnsignedShortInteger));
    printf("size of Long Integer: %llu\n", sizeof (aUnsignedLongInteger));
    printf("size of Long Long Integer: %llu bytes\n", sizeof (aLongLongInteger));
    printf("size of Unsigned Long Long Integer: %llu bytes\n", sizeof(aUnsignedLongLongInteger));

        return 0;
}
