#include "../exercise.h"

constexpr unsigned long long fibonacci(int i) {
    switch (i) {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return fibonacci(i - 1) + fibonacci(i - 2);
    }
}

int main(int argc, char **argv) {
    constexpr auto FIB20 = fibonacci(20);
    ASSERT(FIB20 == 6765, "fibonacci(20) should be 6765");
    std::cout << "fibonacci(20) = " << FIB20 << std::endl;

    // TODO: 观察错误信息，修改一处，使代码编译运行
    // PS: 编译运行，但是不一定能算出结果……
    constexpr auto ANS_N = 20;//90;  “正确的改法是吧递归深度改小””
    constexpr auto ANS = fibonacci(ANS_N);
    // auto ANS = fibonacci(ANS_N); // 去掉 constexpr 会避免编译期计算报错，但运行时会因为N太深，算不出来

    std::cout << "fibonacci(" << ANS_N << ") = " << ANS << std::endl;

    return 0;
}
