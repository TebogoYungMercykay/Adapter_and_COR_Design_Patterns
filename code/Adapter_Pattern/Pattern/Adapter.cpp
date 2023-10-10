#include "Adapter.h"

Adapter::Adapter(AdapterService* a) : adapterService(a) {}

std::string Adapter::execute_query(const std::string& query) {
    // Translate the query format
    std::string translated_query = translate_query(query);
    // Call the AdapterService method
    return adapterService->execute_sql_query(query, translated_query);
}

std::string Adapter::translate_query(const std::string& query) {
    // Query format change is simply swapping FROM and SELECT
    std::string translated_query = query;
    size_t from_pos = translated_query.find("FROM");
    size_t select_pos = translated_query.find("SELECT");
    // std::cout << from_pos << " q-p " << select_pos << std::endl;
    if (from_pos != std::string::npos && select_pos != std::string::npos) {
        if (from_pos > select_pos) {
            std::string select_part = translated_query.substr(0, from_pos);
            std::string from_part = translated_query.substr(from_pos);
            // std::cout << from_part << " <=> " << select_part << std::endl;
            translated_query = from_part + " " + select_part;

        } else {
            std::string from_part = translated_query.substr(0, select_pos);
            std::string select_part = translated_query.substr(select_pos);
            // std::cout << select_part << " <=> " << from_part << std::endl;
            translated_query = select_part + " " + from_part;
        }
    }
    return translated_query;
}
