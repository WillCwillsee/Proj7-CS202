#include "MyString.hpp"

MyString::MyString(){}

MyString::MyString(const char * str)
{
    m_size = strlen(str)+1;
    m_buffer = new char [m_size];
    strcpy(m_buffer, str);
    delete m_buffer;
}

MyString::MyString(const MyString & other)
{
    m_size = other.m_size;
    m_buffer = new char [m_size];
    strcpy(m_buffer, other.m_buffer);
    delete m_buffer;
}

MyString::~MyString(){}

size_t MyString::size() const
{
    return m_size;
}

size_t MyString::length() const
{
    int len = m_size - 1;
    return len;
}

const char * MyString::c_str() const
{
    char str [m_size];
    char * str_pt; char * str_pt2;
    str_pt = str;
    str_pt2 = str_pt;
    strcpy(str_pt, m_buffer);
    return str_pt2;
}

bool MyString::operator== (const MyString & other) const
{
    if(this != &other)
    {
        return 0;
    }
    else return 1;
}

MyString & MyString::operator= (const MyString & other){
    if (this != &other)
    {
        m_buffer = other.m_buffer;
        m_size = other.m_size;
    }
    return *this;
}

MyString MyString::operator+ (const MyString & other) const
{
    char * buffer = strcat(this->m_buffer, other.m_buffer);
    MyString newString(buffer);
    return newString;
}

char & MyString::operator[] (size_t index)
{
    return m_buffer[index];
}

const char & MyString::operator[] (size_t index) const
{
    return m_buffer[index];
}

ostream & operator<<(ostream& os, const MyString& myStr)
{
    for(int i = 0; i < myStr.m_size; i++){
        os << myStr.m_buffer[i];
    }
    os << endl;
    return os;
}


