int josephus(int n, int i){
    return (n == 1) ? 1 : ((josephus(n - 1, i) + (i - 1)) % n) + 1;
}
