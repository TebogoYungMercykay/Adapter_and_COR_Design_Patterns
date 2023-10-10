#pragma once
#include "AuthenticationHandler.h"
#include "NonceRequestHandler.h"

class SignInNonceValidationHandler : public AuthenticationHandler {
    public:
        SignInNonceValidationHandler(NonceRequestHandler* nonce_handler);
        void handle_request(const std::string& request);

    private:
        NonceRequestHandler* nonce_handler;
};
