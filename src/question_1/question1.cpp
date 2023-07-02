#include "question1.h"

bool test_config()
{
    return true;
}

int get_hours(int seconds_since_1970)
{
    int result;
    result = (seconds_since_1970%(60*60*60)/(60*60)) % 24;
    return result;
}

int get_minutes(int seconds_since_1970)
{
    int result;
    result = seconds_since_1970%(60*60)/60;
    return result;
}

int get_seconds(int seconds_since_1970)
{
    int result;
    result = seconds_since_1970%60;
    return result;
}