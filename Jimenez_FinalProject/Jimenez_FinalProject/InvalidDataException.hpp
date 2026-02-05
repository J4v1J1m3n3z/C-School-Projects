#ifndef INVALIDDATAEXCEPTION_HPP
#define INVALIDDATAEXCEPTION_HPP
#include <exception>
#include <iostream>
#include <string>

namespace exception // namespace exception
{
    class InvalidDataException : public std::exception // InvalidDataException class
    {
    private:
        std::string error; // string error

    public:
        InvalidDataException(const std::string& error); // InvalidDataException constructor
        const char* what() const noexcept override; // Override what() method from std::exception
    };
}
#endif // !INVALIDDATAEXCEPTION_HPP
