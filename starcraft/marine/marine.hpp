#include <iostream>
#include <string.h>


const int DEFAULT_HP = 50;
const int DEFAULT_DAMAGE = 5;
const int DEFAULT_X = 0;
const int DEFAULT_Y = 0;


class Marine {
    public:
        Marine()
            : m_hp(DEFAULT_HP),
            m_damage(DEFAULT_DAMAGE),
            m_is_dead(false),
            m_coord_x(DEFAULT_X),
            m_coord_y(DEFAULT_Y),
            m_name(NULL) { };

        Marine(int x, int y)
            : m_hp(DEFAULT_HP),
            m_damage(DEFAULT_DAMAGE),
            m_is_dead(false),
            m_coord_x(x),
            m_coord_y(y),
            m_name(NULL) { };

        Marine(int x, int y, const char* name)
            : m_hp(DEFAULT_HP),
            m_damage(DEFAULT_DAMAGE),
            m_is_dead(false),
            m_coord_x(x),
            m_coord_y(y) {
            m_name = new char[strlen(name) + 1];
            strcpy(m_name, name);
        };

        Marine(const Marine &marine)
            : m_hp(DEFAULT_HP),
            m_damage(DEFAULT_DAMAGE),
            m_is_dead(false),
            m_coord_x(marine.m_coord_x),
            m_coord_y(marine.m_coord_y)
        {
            std::cout << "Copy Constructor" << std::endl;
            if (marine.m_name != NULL) {
                m_name = new char[strlen(marine.m_name) + 1];
                strcpy(m_name, marine.m_name);
            }        
        }

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
        int const m_damage;
        bool m_is_dead;
        char* m_name;
};