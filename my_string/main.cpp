#include <iostream>

#include "my_string.hpp"

int main() {
    MyString s1('a');
    MyString s2("ab");
    MyString s3("cd");
    
    std::cout << "strLen: " << s1.getStrLen() << std::endl;
    
    std::cout << s2.getStr() << std::endl;
    s2.appendStr("12");
    std::cout << "appendStr: " << s2.getStr() << std::endl;

    std::cout << s3.getStr() << std::endl;
    std::cout << "isEqual: " << s3.isEqual("ab") << std::endl;
    std::cout << "isEqual: " << s3.isEqual("cde") << std::endl;
    std::cout << "isEqual: " << s3.isEqual("cd") << std::endl;
    
    std::cout << "isGreater: " << s3.isGreater("ab") << std::endl;
    std::cout << "isGreater: " << s3.isGreater("abc") << std::endl;
    std::cout << "isGreater: " << s3.isGreater("d") << std::endl;
    std::cout << "isGreater: " << s3.isGreater("cd") << std::endl;
    
    return 0;
}