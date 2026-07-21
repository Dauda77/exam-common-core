#include <unistd.h>

void  print_bits(unsigned char octet)
{
    int i = 7;

    while (i >= 0)
    {
        int bit = (octet >> i) & 1;
        char b_char = bit + '0';
        write(1, &b_char, 1);
        i--;
    }
}