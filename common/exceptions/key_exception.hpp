#pragma once
#include "../exception.hpp"

namespace nkg::exceptions {

    class key_exception : public ::nkg::exception {
    public:
        key_exception(std::string_view file, int line, std::string_view message) noexcept :
            ::nkg::exception(file, line, message) {}
    };

}
