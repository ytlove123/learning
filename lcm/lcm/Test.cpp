#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//最大公约数
int greatest_same_divisor(int a, int b) {
    while (b > 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
//比较函数
int compare(int x, int y) {
    if (x > y)
        return x;
    else
        return y;
}

int main() {
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    //1.第一个互质直接乘
    if (greatest_same_divisor(m, n) == 1) {
        cout << "最小公倍数:" << m * n << endl;
    }
    else if ((m % n == 0) || (n % m == 0)) {
        cout << "最小公倍数:" << compare(m, n) << endl;
    }
    else {
        int ret = greatest_same_divisor(m, n);
        cout << "最小公倍数:" << (m / ret) * (n / ret) * ret << endl;
    }
    return 0;
}


//第一个互质直接乘
//第二个有倍数关系选最大
//第三个上面两个都没有   找到最大公约数,然后把这两个是都除以最大公约数,然后得到的a，b这俩值相乘再乘最大公约数就是最小公倍数
// 就是20 和 30 最大公约数10  然后除一下就拿到了2和3然后2 * 3 * 10,就是最小公约数