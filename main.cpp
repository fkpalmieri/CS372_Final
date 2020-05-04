#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

template<typename T>
struct Property {
    T   m_value;
    Property(const T initialValue) { * this = initialValue; }
    operator T() { return m_value; }
    T operator = (T newValue) { return m_value = newValue; }
};
struct Creature {
    Property<int32_t>   m_strength{10};
    Property<int32_t>   m_agility{5};
};
int main() {
    Creature creature;
    creature.m_agility = 20;
    cout << creature.m_agility << endl;
    return EXIT_SUCCESS;
}