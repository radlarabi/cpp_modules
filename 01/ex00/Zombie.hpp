#include <iostream>
#include <string>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    void announce( void );
    void setName(std::string name);
private:
    std::string name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );