int main() {
    int __builtin_putchar(int c), __builtin_puts(const char*);
    const double p[2] = {4.861994245760871e+111, 5.5031675019937e-311};
    static long long i, t;
    for (; i < sizeof(p)/sizeof(p[0]) && __builtin_memcpy(&t, &p[i++], 8);) while (__builtin_putchar(t), t >>= 8);
}
