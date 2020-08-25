int bitRotate(int n, int m, bool d) {
    int l = log2(n) + 1;
    
    while (m > l) {
        n = bitRotate(n, l, d);
        m -= l;
    }
    if (d)
        return ((n >> m) | (n & ~(0xFFFFFFFF << m)) << (l - m));
    
    return ((n << m & (0xFFFFFFFF << l)) >> l) | ((n << m) ^ ((n << m) & (0xFFFFFFFF << l)));
}
