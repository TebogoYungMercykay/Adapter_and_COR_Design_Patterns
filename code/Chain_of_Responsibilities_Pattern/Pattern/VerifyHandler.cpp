#include "VerifyHandler.h"
#include <iostream>

VerifyHandler::VerifyHandler(NonceHandler* nonce_handler) {
    if (nonce_handler == NULL) {
        throw std::invalid_argument("NonceHandler cannot be null.");
    } else {
        this->nonce_handler = nonce_handler;
    }
}

void VerifyHandler::handle_request(const std::string& request) {
    if (request == "2") {
        std::string input_nonce;
        std::cout << "Enter the nonce for validation: ";
        std::cin >> input_nonce;

        if (this->nonce_handler->validate_nonce(input_nonce)) {
            std::cout << "Nonce validation successful." << std::endl;
        } else {
            std::cout << "Nonce validation failed." << std::endl;
        }
    } else if (this->next_handler) {
        this->next_handler->handle_request(request);
    }
}
