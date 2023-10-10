#pragma once
#include <string>
#include <iostream>

class AdapterService {
    public:
        std::string execute_sql_query(const std::string& query, const std::string& resultQuery);
};
