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
    Contact(){};
    ~Contact(){};
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
    PhoneBook(){};
    ~PhoneBook(){};
    int nbrContacts;
    void add(void);
    void search(void);
    void display_all(void);
};










    // std::string getFirstName()
    // {
    //     return firstName;
    // }
    // std::string getLastName()
    // {
    //     return lastName;
    // }
    // std::string getNickName()
    // {
    //     return nickName;
    // }
    // std::string getDarkSecret()
    // {
    //     return darkSecret;
    // }
    // std::string getPhoneNum()
    // {
    //     return phoneNum;
    // }
    // std::string setFirstName(std::string name)
    // {
    //     firstName = name;
    // }
    // std::string setLastName(std::string name)
    // {
    //     return lastName;
    // }
    // std::string setNickName(std::string name)
    // {
    //     return nickName;
    // }
    // std::string setDarkSecret(std::string name)
    // {
    //     return darkSecret;
    // }
    // std::string setPhoneNum(std::string name)
    // {
    //     return phoneNum;
    // }