#include "role.h"

// Constructor
Role::Role(const std::string& roleName) : roleName(roleName) {}

// Getter for roleName
std::string Role::getRoleName() const {
    return roleName;
}

// Method to add a permission to the role
void Role::addPermission(const Permission& permission) {
    permissions.push_back(permission);
}

// Method to check if the role has a specific permission
bool Role::hasPermission(const Permission& permission) const {
    for (const auto& perm : permissions) {
        if (perm == permission) {
            return true;
        }
    }
    return false;
}
