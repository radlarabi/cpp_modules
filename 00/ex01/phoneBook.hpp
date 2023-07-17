#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNum;
    std::string darkSecret;
    int id;
public:
    Contact();
    ~Contact();
    void init(void);
    void setId(int id);
    void display(void);
    void displayDetails(void);
};

class PhoneBook
{
private:
    Contact contact[8];
public:
    PhoneBook();
    ~PhoneBook();
    int nbrContacts;
    void add(void);
    void search(void);
    void display_all(void);
};
