# cms_project
CMSproject/
│
├── src/
│   ├── main.cpp               // Your existing main file
│   ├── user.cpp               // Your existing user implementation
│   ├── role.cpp               // Your existing role implementation
│   ├── permission.cpp         // Your existing permission implementation
│   ├── rbac.cpp               // Your existing RBAC implementation
│   └── database.cpp           // New file for SQLite database operations
│
├── include/
│   ├── user.h                 // Your existing user header
│   ├── role.h                 // Your existing role header
│   ├── permission.h           // Your existing permission header
│   ├── rbac.h                 // Your existing RBAC header
│   └── database.h             // New header for SQLite database operations
│
├── sqlite/
│   ├── sqlite3.c              // SQLite amalgamation source file
│   └── sqlite3.h              // SQLite header file
│
├── CMakeLists.txt             // Your project's CMake configuration file
└── ...
