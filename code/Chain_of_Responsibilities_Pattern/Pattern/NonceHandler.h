#pragma once
#include "Handler.h"

class NonceHandler : public Handler {
    public:
        void handle_request(const std::string& request);
        bool validate_nonce(const std::string& input_nonce) const;
        const std::string& get_nonce() const;

    private:
        std::string to_string(int value);
        std::string generate_nonce();
        std::string nonce_;
};
