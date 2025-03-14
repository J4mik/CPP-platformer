#include <iostream>

namespace debug {
    template <typename T>
    inline void println(const T message) {
        std::cout << message;
        std::cout << "\n";
    }
    template <typename T>
    inline void print(const T message) {
        std::cout << message;
    }
        inline void error(int type) {
        std::cout << "\nError!, exit code: " << type << std::endl;
    }
}