#include "NonceRequestHandler.h"
#include "SignInNonceValidationHandler.h"
#include "RequestProcessingHandler.h"
#include "TokenValidationHandler.h"

int main() {
    // Creating the handlers
    NonceRequestHandler* nonce_handler = new NonceRequestHandler();
    SignInNonceValidationHandler* verify_handler = new SignInNonceValidationHandler(nonce_handler);
    RequestProcessingHandler* process_handler = new RequestProcessingHandler();
    TokenValidationHandler* token_handler = new TokenValidationHandler();

    // Connecting the handlers in the chain
    nonce_handler->set_next(verify_handler);
    verify_handler->set_next(process_handler);
    process_handler->set_next(token_handler);

   // Usage example: Interactive flow with token generation and validation
   while (true) {

       // Menu options
       cout << "\nMenu Options:\n";
       cout << "1. Generate Nonce\n";
       cout << "2. Validate Nonce\n";
       cout << "3. Process Request\n";
       cout << "4. Generate and Validate Token\n";
       cout << "5. Quit\n";

       // User choice
       string choice;
       cout << "Enter the number of your choice: ";
       cin >> choice;

       // Quit option
       if (choice == "5") {
           break;
       }

       // Handle request
       nonce_handler->handle_request(choice);
   }

   // Clean up
   delete nonce_handler;
   delete verify_handler;
   delete process_handler;
   delete token_handler;

   return 0;
}
