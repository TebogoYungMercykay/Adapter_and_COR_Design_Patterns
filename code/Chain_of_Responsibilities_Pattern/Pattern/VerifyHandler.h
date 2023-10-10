#pragma once
#include "Handler.h"
#include "NonceHandler.h"

class VerifyHandler : public Handler {
    public:
        VerifyHandler(NonceHandler* nonce_handler);
        void handle_request(const std::string& request);

    private:
        NonceHandler* nonce_handler_;
};
