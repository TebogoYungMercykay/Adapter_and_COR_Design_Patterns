#include "TargetORM.h"
#include "AdapterService.h"
#include "Adapter.h"

int main() {
    // Creating an instance of the AdapterService
    AdapterService* adapterService = new AdapterService();

    // Creating an instance of the Adapter
    Adapter* adapter = new Adapter(adapterService);

    // Example query for the new database format
    std::string new_db_query = "FROM table_name SELECT *";
    std::string new_db_query2 = "SELECT * FROM table_name";

    // Use the adapter to execute the query
    std::string result = adapter->execute_query(new_db_query);
    std::cout << result << std::endl;  // This will print the result of the translated query

    result = adapter->execute_query(new_db_query2);
    std::cout << result << std::endl;

    delete adapterService;
    delete adapter;

    return 0;
}
