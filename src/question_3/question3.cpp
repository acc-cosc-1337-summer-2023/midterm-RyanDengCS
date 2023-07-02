#include "question3.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int val)
{
    if (val <= 0) {
        return 0;
    } else if (val == 1 || val == 2) {
        return 1; //Fibonacci of 1st and 2nd positions is 1
    } else {
        int prev = 1; // Fibonacci of (n-1)
        int curr = 1; // Fibonacci of n

        for (int i = 3; i <= val; i++) {
            int next = prev + curr;
            prev = curr;
            curr = next;
        }

        return curr;
    }
}