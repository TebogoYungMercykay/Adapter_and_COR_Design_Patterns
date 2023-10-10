#include "NonceRequestHandler.h"
#include <cstdlib>
#include <ctime>
#include <sstream>

void NonceRequestHandler::handle_request(const std::string& request) {
    if (request == "1") {
        this->nonce = this->generate_nonce();
        std::cout << "Generated nonce: " << this->nonce << std::endl;
    } else if (this->next_handler != NULL) {
        this->next_handler->handle_request(request);
    }
}

bool NonceRequestHandler::validate_nonce(const std::string& input_nonce) const {
    return input_nonce == this->nonce;
}

const std::string& NonceRequestHandler::get_nonce() const {
    return this->nonce;
}

std::string NonceRequestHandler::to_string(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

std::string NonceRequestHandler::generate_nonce() {
    srand(time(NULL));
    int random_value = rand() % 100000;
    return to_string(random_value);
}
