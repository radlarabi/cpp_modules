#include <iostream>
#include <string>

class Weapon
{
public:
    Weapon();
    ~Weapon();
    std::string getType();
    void setType(std::string type);
private:
    std::string type;
};
