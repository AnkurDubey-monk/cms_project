#ifndef RBAC_H
#define RBAC_H

#include <unordered_map>
#include <string>
#include "role.h"

class RBAC {
private:
    std::unordered_map<std::string, Role> roles;

public:
    // Constructor
    RBAC();

    // Method to add a role to the RBAC system
    void addRole(const Role& role);

    // Method to authenticate a user
    bool authenticateUser(const std::string& username, const std::string& password) const;

    // Method to check if a user has a specific permission
    bool hasPermission(const std::string& roleName, const Permission& permission) const;
};

#endif // RBAC_H
