string washHands(int N, int nM){
    int seconds = 21 * N * nM * 30;
    int minutes = 0;
    for ( ; seconds >= 60; seconds -= 60)
        ++minutes;
    
    return std::to_string(minutes) + " minutes and " + std::to_string(seconds) + " seconds";
}
