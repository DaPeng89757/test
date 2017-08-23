#include "MyArray.h"
Array::Array(int length):
mLength(length)
{
	mSpace = new int[mLength];
}
Array::~Array()
{  
	mLength = 0;
	delete []mSpace;
	//mSpace = Null;
}
Array::Array(const Array& obj)
{
	mLength = obj.mLength;
	mSpace = new int[mLength];
	for(int i = 0;i < mLength; ++i)
	{
		mSpace[i] = obj.mSpace[i];
	}

}
int Array::length()
{
	return mLength;
}
void Array::setData(int index, int value)
{
	for(int i = 0;i < mLength; ++i)
	{
		if(i == index)
		{
			mSpace[i] = value;
		}
	}
}
int Array::getData(int index)
{
	for(int i = 0;i < mLength; ++i)
	{
		if(i == index)
		{
			return mSpace[i];
		}
	}	
}
