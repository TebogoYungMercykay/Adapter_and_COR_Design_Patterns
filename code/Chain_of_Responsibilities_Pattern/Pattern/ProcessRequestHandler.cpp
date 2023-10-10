#include "ProcessRequestHandler.h"
#include <iostream>

void ProcessRequestHandler::handle_request(const std::string& request) {
    if (request == "3") {
        std::cout << "Processing the request." << std::endl;
        std::cout << "Request Successfully processed." << std::endl;
    } else if (next_handler) {
        next_handler->handle_request(request);
    }
}
