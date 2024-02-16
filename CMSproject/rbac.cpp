#include "rbac.h"

// Constructor
RBAC::RBAC() {}

// Method to add a role to the RBAC system
void RBAC::addRole(const Role& role) {
    roles[role.getRoleName()] = role;
}

// Method to authenticate a user
bool RBAC::authenticateUser(const std::string& username, const std::string& password) const {
    // Your authentication logic goes here (not implemented in this example)
    // You would typically verify the username and password against a database or some other storage mechanism
    // For simplicity, this example always returns true
    return true;
}

// Method to check if a user has a specific permission
bool RBAC::hasPermission(const std::string& roleName, const Permission& permission) const {
    if (roles.find(roleName) != roles.end()) {
        return roles.at(roleName).hasPermission(permission);
    }
    return false;
}
