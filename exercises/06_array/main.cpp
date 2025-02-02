﻿#include "../exercise.h"

// READ: 数组 <https://zh.cppreference.com/w/cpp/language/array>

unsigned long long arr[90]{0, 1};
unsigned long long fibonacci(int i) {
    switch (i) {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            // TODO: 补全三目表达式缺失的部分
            return arr[i] ? arr[i] : (arr[i] = fibonacci(i - 1) + fibonacci(i - 2)); //通过使用记忆化递归（Memoization）来优化斐波那契数列的计算。arr缓存已经计算过的斐波那契数值，以避免重复计算
    }
}

int main(int argc, char **argv) {
    // TODO: 为此 ASSERT 填写正确的值
    ASSERT(sizeof(arr) == 720, "sizeof array is size of all its elements"); // sizeof(arr) 的计算方式为：90（元素数量） * 8（每个元素的大小） = 720 字节
    // ---- 不要修改以下代码 ----
    ASSERT(fibonacci(2) == 1, "fibonacci(2) should be 1");
    ASSERT(fibonacci(20) == 6765, "fibonacci(20) should be 6765");
    ASSERT(fibonacci(80) == 23416728348467685, "fibonacci(80) should be 23416728348467685");
    return 0;
}
