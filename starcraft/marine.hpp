#include <iostream>
#include <string.h>


class Marine {
    public:
        Marine() {
            m_hp = 50;
            m_damage = 5;
            m_is_dead = false;
            m_coord_x = m_coord_y = 0;
            m_name = NULL;
        };

        Marine(int x, int y): Marine() {
            m_coord_x = x;
            m_coord_y = y;
        };

        Marine(int x, int y, const char* name): Marine(x, y) {
            m_name = new char[strlen(name) + 1];
            strcpy(m_name, name);
        };

        ~Marine() {
            std::cout << "Deconstructor" << std::endl;
            if (m_name != NULL) {
                delete[] m_name;
            }
        }

        int attack();
        void be_attacked(int damage);
        void move(int x, int y);

        void show_status();

    private:
        int m_hp;
        int m_coord_x, m_coord_y;
        int m_damage;
        bool m_is_dead;
        char* m_name;
};