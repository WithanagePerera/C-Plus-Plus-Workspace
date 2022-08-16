#include <iostream>
#include <vector>
#include <string>
#include "login.cpp"

int main ()
{
    std::vector <login> accounts; 
    std::string username;
    std::string password;

    bool choice = true;
    std::string user_entry;

    while(choice)
    {
    std::cout <<"\nCreate new user account:\n";
    std::cout <<"Enter a username: ";

    std::cin >>username;

    std::cout <<"Enter a password: ";
    std::cin >>password;

    login account(username, password);
    accounts.push_back(account);

    std::cout <<"\nDo yo wish to continue? ";
    std::cin >>user_entry;

    if (user_entry.compare("yes") != 0)
        choice = false;
    }

    for (int i = 0; i < accounts.size(); i++)
    {
        std::cout <<"\nAccount " <<i+1 <<":\n";
        std::cout <<"Username: " <<accounts[i].get_username() <<"\n";
        std::cout <<"Password: " <<accounts[i].get_password() <<"\n";
    }
}