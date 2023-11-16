# Design Patterns

This repository contains implementations of two commonly used design patterns: Chain of Responsibility and Adapter. Each design pattern is implemented in separate folders within the repository.

## Chain of Responsibility Pattern

The Chain of Responsibility pattern is a behavioral design pattern that allows you to pass requests along a chain of handlers. Each handler in the chain decides whether to process the request or pass it to the next handler. The goal is to decouple the sender of a request from its receivers and allow multiple objects to handle the request.

### Folder: code/Chain_of_Responsibilities_Pattern

Inside the `code/Chain_of_Responsibilities_Pattern` folder, you'll find the following components:

- `NonceRequestHandler.h/.cpp`: This handler is responsible for checking if a nonce is requested and, if so, generating and persisting it.

- `SignInNonceValidationHandler.h/.cpp`: This handler checks if a sign-in nonce validation is being attempted. If so, it verifies the nonce and responds with either a failure or a fresh token.

- `TokenValidationHandler.h/.cpp`: This handler checks if a token is valid. If it's not valid, it returns an error to the user.

- `RequestProcessingHandler.h/.cpp`: This handler assumes that the user has been authenticated and is authorized, so it processes the request and returns the result to the user.

### How to Use the Chain of Responsibility Pattern

To use the Chain of Responsibility pattern, you can create instances of these handlers and form the chain of responsibility in your code. The client initiates requests, and the handlers process them in a specific order.

## Adapter Pattern

The Adapter pattern is a structural design pattern that allows objects with incompatible interfaces to collaborate. It acts as a bridge between the client code and a service with an incompatible interface, making them work together seamlessly.

### Folder: code/Adapter_Pattern

Inside the `code/Adapter_Pattern` folder, you'll find the following components:

- `TargetORM.h/.cpp`: This is an interface that defines a method `execute_query`, which takes a query string as input and returns a string. Any class that implements this interface must provide an implementation for this method.

- `AdapterService.h/.cpp`: This is a class that simulates an ORM (Object-Relational Mapping) service. It has a method `execute_sql_query` that simulates the execution of SQL queries and returns results.

- `Adapter.h/.cpp`: This class acts as an adapter between the `TargetORM` interface and the `AdapterService` class. It implements the `TargetORM` interface and translates the query format from one form to another before passing it to the `AdapterService`.

### How to Use the Adapter Pattern

To use the Adapter pattern, you can create instances of the `Adapter` class, which allow your client code to work with the `AdapterService` class as if it were implementing the `TargetORM` interface. This pattern is useful for making incompatible interfaces collaborate seamlessly.

## Contributing

Feel free to contribute to this repository by providing improvements or additional examples of these design patterns. Fork the repository, make your changes, and submit a pull request.

---
---
<p align="center">The End, Thank You</p>

---
