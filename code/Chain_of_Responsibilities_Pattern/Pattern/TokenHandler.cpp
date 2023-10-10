#include "TokenHandler.h"
#include <cstdlib>
#include <ctime>
#include <sstream>

void TokenHandler::handle_request(const std::string& request) {
    if (request == "4") {
        std::string random_token = generate_random_token();
        std::cout << "Generated random token: " << random_token << std::endl;

        // Prompt the user to input a token for validation
        std::string user_token;
        std::cout << "Enter the token for validation: ";
        std::cin >> user_token;

        if (validate_token(user_token, random_token)) {
            std::cout << "Token validation successful." << std::endl;
        } else {
            std::cout << "Token validation failed." << std::endl;
        }
    } else if (next_handler) {
        next_handler->handle_request(request);
    }
}

std::string TokenHandler::generate_random_token() {
    srand(time(NULL));
    int random_value = rand() % 100000;
    return to_string(random_value);
}

std::string TokenHandler::to_string(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

bool TokenHandler::validate_token(const std::string& user_token, const std::string& generated_token) {
    return user_token == generated_token;
}