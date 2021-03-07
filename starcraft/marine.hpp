#include <iostream>

class Marine {
    public:
        Marine() {
            m_hp = 50;
            m_damage = 5;
            m_is_dead = false;
            m_coord_x = m_coord_y = 0;
        };

        Marine(int x, int y): Marine() {
            m_coord_x = x;
            m_coord_y = y;
        };

        int attack();
        void be_attacked(int damage);
        void move(int x, int y);

        void show_status();

    private:
        int m_hp;
        int m_coord_x, m_coord_y;
        int m_damage;
        bool m_is_dead;
};