#include "user.h"

// Constructor
User::User(const std::string& username, const std::string& password) : username(username), password(password) {}

// Getters
std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}

// Setters
void User::setUsername(const std::string& username) {
    this->username = username;
}

void User::setPassword(const std::string& password) {
    this->password = password;
}
