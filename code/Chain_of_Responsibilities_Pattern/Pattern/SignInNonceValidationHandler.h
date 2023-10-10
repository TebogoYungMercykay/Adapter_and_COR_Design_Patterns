#pragma once
#include "Handler.h"
#include "NonceHandler.h"

class SignInNonceValidationHandler : public Handler {
    public:
        SignInNonceValidationHandler(NonceHandler* nonce_handler);
        void handle_request(const std::string& request);

    private:
        NonceHandler* nonce_handler;
};
