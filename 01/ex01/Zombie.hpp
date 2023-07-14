#include <iostream>
#include <string>

class Zombie
{
public:
    Zombie();
    Zombie(int N, std::string name);
    ~Zombie();
    void announce( void );
    void setName(std::string name);
private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );