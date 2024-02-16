#ifndef ROLE_H
#define ROLE_H

#include <string>
#include <vector>
#include "permission.h"

class Role {
private:
    std::string roleName;
    std::vector<Permission> permissions;

public:
    Role()=default;
    // Constructor
    Role(const std::string& roleName);

    // Getter for roleName
    std::string getRoleName() const;

    // Methods for managing permissions
    void addPermission(const Permission& permission);
    bool hasPermission(const Permission& permission) const;
};

#endif // ROLE_H
