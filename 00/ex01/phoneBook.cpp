#include "phoneBook.hpp"


Contact::Contact()
{
    
}
Contact::~Contact()
{

}
PhoneBook::PhoneBook()
{
    
}
PhoneBook::~PhoneBook()
{

}
void    PhoneBook::display_all(void)
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|  index   |first Name| last Name| nick Name|" << std::endl;
    int i = 0;
    while(i < nbrContacts)
    {
        std::cout << "---------------------------------------------" << std::endl;
        this->contact[i].display();
        i++;
    }
    std::cout << "---------------------------------------------" << std::endl;
}

void    printWithDots(std::string str)
{
    if (str.length() > 10)
        std::cout << std::setw(9) << str.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << str << "|";
}

void    Contact::display(void)
{
    std::cout << "|" << std::setw(10) << this->id << "|";
    printWithDots(this->firstName);
    printWithDots(this->lastName);
    printWithDots(this->nickName);
    std::cout << std::endl;
}

void    Contact::displayDetails()
{
    std::cout <<  "first Name   : " << this->firstName << std::endl;
    std::cout <<  "last Name    : " << this->lastName << std::endl;
    std::cout <<  "nick Name    : " << this->nickName << std::endl;
    std::cout <<  "phone Number : " << this->phoneNum << std::endl;
    std::cout <<  "dark Secret  : " << this->darkSecret << std::endl;
}

void    Contact::setId(int id)
{
    this->id = id;
}

void    PhoneBook::add(void)
{
    static int i ;
    this->contact[i % 8].init();
    this->contact[i % 8].setId(i % 8);
    nbrContacts++;
    if (nbrContacts > 8)
        nbrContacts = 8;
    i++;
}

bool isStringAlpha(std::string str) {

    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}   

int get_index(int nbrContacts)
{
    std::string buffer = "";
    do
    {
        std::cout << "> please enter an index : ";
        if (std::getline(std::cin,buffer).eof())
            exit(1);
        if (!isStringAlpha(buffer) ||  atoi(buffer.c_str()) > nbrContacts - 1 || buffer.length() == 0)
            std::cout << "> Invalid index\n";
    } while (!isStringAlpha(buffer) ||  atoi(buffer.c_str()) > nbrContacts - 1 || buffer.length() == 0);
    return atoi(buffer.c_str());
}

void    PhoneBook::search(void)
{
    display_all();
    if (this->nbrContacts)
    {
        int index;
        index = get_index(this->nbrContacts);
        this->contact[index].displayDetails();
    }
}

std::string get_input(std::string str)
{
    std::string input;
    do
    {
        if (!str.compare("enter your phone Number : "))
        {
            do
            {
                std::cout << str;
                if (std::getline(std::cin,input).eof())
                    exit(1);
                if (!isStringAlpha(input))
                    std::cout << "please enter digits !!\n";
            } while (!isStringAlpha(input));
        }
        else if (str.compare("enter your dark Secret  : "))
        {
            do
            {
                std::cout << str;
                if (std::getline(std::cin,input).eof())
                    exit(1);
                if (isStringAlpha(input))
                    std::cout << "please enter caracters !!\n";
            } while (isStringAlpha(input));
        }
        else
        {
            std::cout << str;
            if (std::getline(std::cin,input).eof())
                exit(1);
        }
        if (!input.length())
            std::cout << "Wrong Index, try again !\n";
    } while(input.length() == 0);
    return input;
}

void    Contact::init(void)
{
    this->firstName = get_input("enter your first Name   : ");
    this->lastName = get_input("enter your last Name    : ");
    this->nickName = get_input("enter your nick Name    : ");
    this->phoneNum = get_input("enter your phone Number : ");
    this->darkSecret = get_input("enter your dark Secret  : ");
}

void    welcome(void)
{
    std::cout << "Welcome to the Phone Book : " << std::endl;
    std::cout << "The program only accepts ADD, SEARCH and EXIT" << std::endl;
    std::cout << " • ADD    : save a new contact" << std::endl;
    std::cout << " • SEARCH : display a specific contact" << std::endl; 
    std::cout << " • EXIT   : quit the program" << std::endl;
}

int main(void)
{
    PhoneBook phone;
    phone.nbrContacts = 0;
    std::string input;
    welcome();
    while(1)
    {
        std::cout << "> ";
        if (std::getline(std::cin,input).eof())
            exit(1);
        if(!input.compare("ADD"))
            phone.add();
        else if(!input.compare("SEARCH"))
            phone.search();
        else if(!input.compare("EXIT"))
            return 0;
        else
            std::cout << "command not fount :(" << std::endl; 
    }
    return 0;
}