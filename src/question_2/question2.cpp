#include "question2.h"

bool test_config()
{
    return true;
}

string decimal_to_hex(int dec)
{
    string str;
    int remainder;
    string hexDigits = "0123456789ABCDEF";

    do {
        remainder = dec % 16;
        str = hexDigits[remainder] + str;
        dec /= 16;

    } while(dec != 0);

    return str;
}
