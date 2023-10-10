#pragma once
#include "AuthenticationHandler.h"

class TokenValidationHandler : public AuthenticationHandler {
    public:
        void handle_request(const std::string& request);

    private:
        std::string generate_random_token();
        std::string to_string(int value);
        bool validate_token(const std::string& user_token, const std::string& generated_token);
};
