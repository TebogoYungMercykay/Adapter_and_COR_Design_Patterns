#include "VerifyHandler.h"
#include <iostream>

VerifyHandler::VerifyHandler(NonceHandler* nonce_handler)
    : nonce_handler_(nonce_handler) {}

void VerifyHandler::handle_request(const std::string& request) {
    if (request == "2") {
        std::string input_nonce;
        std::cout << "Enter the nonce for validation: ";
        std::cin >> input_nonce;

        if (nonce_handler_->validate_nonce(input_nonce)) {
            std::cout << "Nonce validation successful." << std::endl;
        } else {
            std::cout << "Nonce validation failed." << std::endl;
        }
    } else if (next_handler) {
        next_handler->handle_request(request);
    }
}
