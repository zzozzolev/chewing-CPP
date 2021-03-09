#include "my_string.hpp"
#include <algorithm>

void MyString::appendStr(char *str) {   
    char *newStr = new char[getStrLen() + strlen(str) + 1];
    for (int i = 0; i < getStrLen(); ++i) {
        newStr[i] = m_str[i];
    }

    for (int i = 0; i < strlen(str); ++i) {
        newStr[getStrLen() + i] = m_str[i];
    }
    
    m_strLen = getStrLen() + strlen(str);
    delete[] m_str;
    m_str = newStr;
}

bool MyString::isEqual(char *str) {
    if (getStrLen() != strlen(str))
        return false;
    
    for (int i = 0; i < getStrLen(); ++i) {
        if (m_str[i] != str[i])
            return false;
    }

    return true;
}

bool MyString::isGreater(char *str) {    
    int minLen = std::min(getStrLen(), (int)(strlen(str)));
    
    for (int i = 0; i < minLen; ++i) {
        if (m_str[i] > str[i])
            return true;
    }

    return false;
}
