
#include <iostream>
#define _CRT_SECURE_NO_DEPRECATE
#include "MyString.h"
//构造与析构
MyString::MyString()
{
	m_len = 0;
	m_p = new char[m_len+1];
	strcpy(m_p,"");
};

MyString::MyString(const char *p)
{
	if(p == NULL)
	{
		m_len = 0;
		m_p = new char[m_len+1];
		strcpy(m_p,"");
	}
	else
	{
		m_len = (int)strlen(p);
		m_p = new char[m_len+1];
		strcpy(m_p,p);
	}
};

MyString::MyString(const MyString& obj)
{
	m_p = obj.m_p;
	m_p = new char[m_len+1];
	strcpy(m_p,obj.m_p);

};

MyString::~MyString()
{
	if(m_p != NULL)
	{
		m_len = 0;
		delete []m_p;
	}
};