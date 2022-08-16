#include <string>

class login
{
    private:
    std::string username;
    std::string password;

    public:
    login(std::string username, std::string password);

    ~login();

    std::string get_username();
    void set_username(std::string new_username);

    std::string get_password();
    void set_password(std:: string new_password);
};