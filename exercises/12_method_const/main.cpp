#include "../exercise.h"

// READ: 有 cv 限定符的成员函数 <https://zh.cppreference.com/w/cpp/language/member_functions>

struct Fibonacci {
    int numbers[11];
    // TODO: 修改方法签名和实现，使测试通过
    int get(int i) const { // 添加 const 限定符
        return numbers[i]; // 这表示 get 方法不会修改 Fibonacci 对象的成员变量，因此可以在 constexpr 实例上调用
    }
};

int main(int argc, char **argv) {
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};//constexpr 对象是编译时常量，这意味着它们的值在编译时就确定了，并且在运行时不能被修改。
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}
