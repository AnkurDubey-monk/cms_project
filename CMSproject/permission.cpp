#include "permission.h"

// Constructor
Permission::Permission(const std::string& action) : action(action) {}

// Getter for action
std::string Permission::getAction() const {
    return action;
}

// Overloading equality operator for comparing permissions
bool Permission::operator==(const Permission& other) const {
    return action == other.action;
}
