#pragma once
#include <string>

class TargetORM { // ORM
    public:
        virtual std::string execute_query(const std::string& query) = 0;
};
