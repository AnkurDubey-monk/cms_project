#include <iostream>
#include "user.h"
#include "role.h"
#include "permission.h"
#include "rbac.h"

int main() {
    // Create sample users
    User admin("admin", "admin123");
    User editor("editor", "editor123");
    User contributor("contributor", "contributor123");

    // Create sample roles
    Role adminRole("admin");
    Role editorRole("editor");
    Role contributorRole("contributor");

    // Assign permissions to roles
    Permission createContent("create_content");
    Permission editContent("edit_content");
    Permission publishContent("publish_content");

    adminRole.addPermission(createContent);
    adminRole.addPermission(editContent);
    adminRole.addPermission(publishContent);

    editorRole.addPermission(editContent);
    editorRole.addPermission(publishContent);

    contributorRole.addPermission(createContent);

    // Create RBAC system
    RBAC rbac;

    // Add roles to RBAC system
    rbac.addRole(adminRole);
    rbac.addRole(editorRole);
    rbac.addRole(contributorRole);

    // Authenticate users
    if (rbac.authenticateUser("admin", "admin123")) {
        std::cout << "Authentication successful for admin\n";
    } else {
        std::cout << "Authentication failed for admin\n";
    }

    if (rbac.authenticateUser("editor", "editor123")) {
        std::cout << "Authentication successful for editor\n";
    } else {
        std::cout << "Authentication failed for editor\n";
    }

    // Check permissions
    if (rbac.hasPermission("admin", createContent)) {
        std::cout << "Admin has permission to create content\n";
    } else {
        std::cout << "Admin does not have permission to create content\n";
    }

    if (rbac.hasPermission("editor", createContent)) {
        std::cout << "Editor has permission to create content\n";
    } else {
        std::cout << "Editor does not have permission to create content\n";
    }

    if (rbac.hasPermission("contributor", editContent)) {
        std::cout << "Contributor has permission to edit content\n";
    } else {
        std::cout << "Contributor does not have permission to edit content\n";
    }

    return 0;
}
