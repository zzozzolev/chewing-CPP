#include <iostream>
#include <string.h>


class MyString {
    public:
        MyString(char ch): m_strLen(1) {
            std::cout << "MyString(char ch)" << std::endl;
            m_str = new char[2];
            m_str[0] = ch;
        }

        MyString(char *str): m_strLen(strlen(str)) {
            std::cout << "MyString(char *str)" << std::endl;
            m_str = new char[strlen(str) + 1];
            strcpy(m_str, str);
        }

        char* getStr() { return m_str; };
        int getStrLen() { return m_strLen; }

        void appendStr(char *str);
        // 문자열 내 포함되어 있는 문자열?
        bool isEqual(char *str);
        bool isGreater(char *str);

        ~MyString() {
            delete[] m_str;
        }

    private:
        char *m_str;
        int m_strLen;
};
