#include "NonceHandler.h"
#include <cstdlib>
#include <ctime>
#include <sstream>

void NonceHandler::handle_request(const std::string& request) {
    if (request == "1") {
        nonce = generate_nonce();
        std::cout << "Generated nonce: " << nonce << std::endl;
    } else if (next_handler) {
        next_handler->handle_request(request);
    }
}

bool NonceHandler::validate_nonce(const std::string& input_nonce) const {
    return input_nonce == nonce;
}

const std::string& NonceHandler::get_nonce() const {
    return nonce;
}

std::string NonceHandler::to_string(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

std::string NonceHandler::generate_nonce() {
    srand(time(NULL));
    int random_value = rand() % 100000;
    return to_string(random_value);
}
