#include <iostream>

#include "marine.hpp"


int main() {
    Marine marine1(2, 3);
    Marine marine2(3, 5, "special");
    Marine marine3 = marine1;
    Marine marine4 = marine2;
    
    marine1.show_status();
    marine2.show_status();
    marine3.show_status();
    marine4.show_status();
    
    std::cout << std::endl << "마린 1 이 마린 2 를 공격! " << std::endl;
    marine2.be_attacked(marine1.attack());
    marine2.show_status();
    
    return 0;
}