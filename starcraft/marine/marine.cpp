#include <iostream>

#include "marine.hpp"


int Marine::attack() {
    return m_damage;
}


void Marine::be_attacked(int damage) {
    if (!m_is_dead) {   
        m_hp -= damage;

        if (m_hp <= 0)
            m_is_dead = true;
    }
}


void Marine::move(int x, int y) {
    m_coord_x += x;
    m_coord_y += y;
}


void Marine::show_status() {
    if (m_is_dead) {
        std::cout << "dead" << std::endl;
    }

    else {
        if (m_name != NULL) {
            std::cout << "name: " << m_name << std::endl;
        }
        std::cout << "hp: " << m_hp << std::endl;
        std::cout << "coord_x: " << m_coord_x << std::endl;
        std::cout << "coord_y: " << m_coord_y << std::endl;
    }
}

