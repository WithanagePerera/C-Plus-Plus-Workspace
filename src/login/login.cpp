#include <string>
#include <iostream>
#include "login.hpp"

login::login(std::string username, std::string password)
{
    this->username = username;
    this->password = password;
}

login::~login()
{
    //std::cout <<"Account has been removed.\n";
}

std::string login::get_username()
{
    return username;
}

void login::set_username(std::string new_username)
{
    username = new_username;
}

std::string login::get_password()
{
    return password;
} 

void login::set_password(std::string new_password)
{
    password = new_password;
}