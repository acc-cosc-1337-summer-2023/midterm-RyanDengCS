#include "question1.h"
#include <iostream>
int main()
{
    int seconds_since_1970;

    seconds_since_1970 = 1570846218;
    std::cout<<"Time: "<<get_hours(seconds_since_1970)<<" hours, "<<get_minutes(seconds_since_1970)<<" minutes, "<<get_seconds(seconds_since_1970)<<" seconds.\n";

    seconds_since_1970 = 1570875018;
    std::cout<<"Time: "<<get_hours(seconds_since_1970)<<" hours, "<<get_minutes(seconds_since_1970)<<" minutes, "<<get_seconds(seconds_since_1970)<<" seconds.";

    return 0;
}