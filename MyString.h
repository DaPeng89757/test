#pragma once

class MyString
{
	//friend ostream& operator<<(ostream &out, const MyString &s);
public: //���������
	MyString();
	MyString(const char *p);
	MyString(const MyString& obj);
	~MyString();

public: //����������
	//MyString& operator=(const char *p);
	//MyString& operator=(const MyString& obj);
	//char& operator[](int index) const;
	//bool operator==(const char* p) const;
	//bool operator!=(const char* p) const;
	//bool operator==(const MyString& s) const;
	//bool operator!=(const MyString& s) const;

public: //string to c
	//char *c_str();
	//const char* c_str() const;
	//int length()
	//{
	//	return m_len;
	//}

public:
	//int operator<(const char *p);
	//int operator>(const char *p);

	//int operator<(const MyString &s);
	//int operator>(const MyString &s);

	
private:
	int		m_len;
	char	*m_p;
};