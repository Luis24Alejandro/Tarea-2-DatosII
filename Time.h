#ifndef TIME_H
#define TIME_H

#include <chrono>
#include <functional>

template <typename Func, typename... Args>
long long measureTime(Func func, Args&&... args) {
    auto start = std::chrono::high_resolution_clock::now();
    func(std::forward<Args>(args)...);
    auto end = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count(); // Tiempo en microsegundos
}

#endif // TIME_H
