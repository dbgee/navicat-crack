#pragma once
#include <unicorn/unicorn.h>

namespace nkg::resource_traits::unicorn {

    struct unicorn_alloc {
        using handle_t = void*;

        static constexpr handle_t invalid_value = nullptr;

        [[nodiscard]]
        static bool is_valid(const handle_t& handle) noexcept {
            return handle != invalid_value;
        }

        static void release(const handle_t& handle) {
            uc_free(handle);
        }
    };

}
