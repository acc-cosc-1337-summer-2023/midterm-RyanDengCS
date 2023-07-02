//
bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    //Note: DONT NEED TO CHECK FOR INVALID, VALIDATE IN MAIN
    if(sold >= 1 && sold <= 5)
    {
        return sold;
    } else if (sold >= 6 && sold <= 10)
    {
        return sold * 5;
    } else if (sold >= 11 && sold <= 15)
    {
        return sold * 10;
    } else {
        return sold * 15;
    }
}