#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
    int count;   
    int maxValue;

public:
    Counter();
    void increment();
    void decrement();
    void setCount(int value);  
    void setMaxVal(int value);  
    int getCounter() const;
    int getMaxValue() const;
};

#endif
