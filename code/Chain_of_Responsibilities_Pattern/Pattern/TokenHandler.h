#pragma once
#include "Handler.h"

class TokenHandler : public Handler {
    public:
        void handle_request(const std::string& request);

    private:
        std::string generate_random_token();
        std::string to_string(int value);
};
