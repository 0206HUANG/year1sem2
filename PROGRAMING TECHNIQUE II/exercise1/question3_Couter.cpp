#include "Counter.h"
#include <iostream>
using namespace std;

Counter::Counter()
{
    count = 0;
    maxValue = 0;
}

void Counter::increment()
{
    if (count < maxValue)
    {
        count++;
    }
    else
    {
        cout << "Counter reached maximum value. No more increments allowed." << endl;
    }
}

void Counter::decrement()
{
    if (count > 0)
    {
        count--;
    }
    else
    {
        cout << "Counter reached minimum value. No more decrements allowed." << endl;
    }
}

void Counter::setCount(int value)
{
    if (value <= maxValue)
    {
        count = value;
    }
    else
    {
        cout << "Value exceeds the maximum allowed value for the counter." << endl;
    }
}

void Counter::setMaxVal(int value)
{
    maxValue = value;
}

int Counter::getCounter() const
{
    return count;
}

int Counter::getMaxValue() const
{
    return maxValue;
}
