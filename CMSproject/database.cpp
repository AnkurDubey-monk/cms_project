#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include "sqlite3.h" // Assuming sqlite3.h is in the same directory as database.cpp

#include <string>

class Database {
private:
    sqlite3* db; // SQLite database connection

public:
    Database() : db(nullptr) {}

    ~Database() {
        if (db) {
            sqlite3_close(db);
        }
    }

    // Method to open the SQLite database
    bool open(const std::string& filename);

    // Method to execute an SQL query
    bool executeQuery(const std::string& sql);

    // Method to close the SQLite database
    void close();
};

#endif // DATABASE_H
