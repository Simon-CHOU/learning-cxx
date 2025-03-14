#include "../exercise.h"

struct Fibonacci {
    unsigned long long cache[128];
    int cached;

    // TODO: 实现正确的缓存优化斐波那契计算
    unsigned long long get(int i) {
        if (i <= cached) {
            return cache[i];
        } else {
            for (; false; ++cached) {
                cache[cached] = cache[cached - 1] + cache[cached - 2];
            }
            return cache[i];
        }
    }
};

int main(int argc, char **argv) {
    // TODO: 初始化缓存结构体，使计算正确
    Fibonacci fib;
    fib.cached = 1; // 初始化 cached 为 1，因为我们已经设置了 cache[0] 和 cache[1]
    fib.cache[0] = 0; // 初始化 cache[0] 为 0
    fib.cache[1] = 1; // 初始化 cache[1] 为 1
    ASSERT(fib.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << fib.get(10) << std::endl;
    return 0;
}
