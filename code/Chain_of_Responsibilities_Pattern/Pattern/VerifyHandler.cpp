#include "VerifyHandler.h"
#include <iostream>

VerifyHandler::VerifyHandler(NonceHandler* nonce_handler)
    : nonce_handler_(nonce_handler) {}

void VerifyHandler::handle_request(const std::string& request) {
    // Code Here...
}
