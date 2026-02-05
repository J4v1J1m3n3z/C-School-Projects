#include "InvalidDataException.hpp"

namespace exception
{
    InvalidDataException::InvalidDataException(const std::string& error) : error(error) {}

    const char* InvalidDataException::what() const noexcept
    {
        return error.c_str();
    }
}
