#pragma once
#include "AuthenticationHandler.h"
#include "RequestProcessingHandler.h"

class SignInNonceValidationHandler : public AuthenticationHandler {
    public:
        SignInNonceValidationHandler(RequestProcessingHandler* nonce_handler);
        void handle_request(const std::string& request);

    private:
        RequestProcessingHandler* nonce_handler;
};
