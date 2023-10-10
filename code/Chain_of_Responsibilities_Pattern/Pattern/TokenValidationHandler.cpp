#include "TokenValidationHandler.h"
#include <cstdlib>
#include <ctime>
#include <sstream>

void TokenValidationHandler::handle_request(const std::string& request) {
    if (request == "4") {
        std::string random_token = generate_random_token();
        std::cout << "Generated random token: " << random_token << std::endl;

        // Prompt the user to input a token for validation
        std::string user_token;
        std::cout << "Enter the token for validation: ";
        std::cin >> user_token;

        if (this->validate_token(user_token, random_token)) {
            std::cout << "Token validation successful." << std::endl;
        } else {
            std::cout << "Token validation failed." << std::endl;
        }
    } else if (this->next_handler != NULL) {
        this->next_handler->handle_request(request);
    }
}

std::string TokenValidationHandler::generate_random_token() {
    srand(time(NULL));
    int random_value = rand() % 100000;
    return to_string(random_value);
}

std::string TokenValidationHandler::to_string(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

bool TokenValidationHandler::validate_token(const std::string& user_token, const std::string& generated_token) {
    return user_token == generated_token;
}
