#ifndef PERMISSION_H
#define PERMISSION_H

#include <string>

class Permission {
private:
    std::string action;

public:
    // Constructor
    Permission(const std::string& action);

    // Getter for action
    std::string getAction() const;

    // Overloading equality operator for comparing permissions
    bool operator==(const Permission& other) const;
};

#endif // PERMISSION_H
