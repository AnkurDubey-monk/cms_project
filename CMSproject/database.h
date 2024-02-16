#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>
#include <iostream>

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
    bool open(const std::string& filename) {
        int rc = sqlite3_open(filename.c_str(), &db);
        if (rc) {
            std::cerr << "Error opening SQLite database: " << sqlite3_errmsg(db) << std::endl;
            return false;
        }
        std::cout << "Opened database successfully" << std::endl;
        return true;
    }

    // Method to execute an SQL query
    bool executeQuery(const std::string& sql) {
        char* errorMessage = nullptr;
        int rc = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errorMessage);
        if (rc != SQLITE_OK) {
            std::cerr << "Error executing SQL query: " << errorMessage << std::endl;
            sqlite3_free(errorMessage);
            return false;
        }
        return true;
    }

    // Method to close the SQLite database
    void close() {
        if (db) {
            sqlite3_close(db);
            std::cout << "Closed database successfully" << std::endl;
            db = nullptr;
        }
    }
};

#endif // DATABASE_H
