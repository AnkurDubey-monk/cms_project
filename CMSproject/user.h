#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    std::string username;
    std::string password;

public:
    // Constructor
    User(const std::string& username, const std::string& password);

    // Getters
    std::string getUsername() const;
    std::string getPassword() const;

    // Setters
    void setUsername(const std::string& username);
    void setPassword(const std::string& password);
};

#endif // USER_H
