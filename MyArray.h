#pragma once

class Array
{
private:
    int mLength;
	int* mSpace;

public:
    Array(int length);
    Array(const Array& obj);
    int length();
    void setData(int index, int value);
    int getData(int index);
    ~Array();
};