string easterDate(int y)
{
    int g = y % 19 + 1;
    int s = (y - 1600) / 100 - (y - 1600) / 400;
    int l = (((y - 1400) / 100) * 8) / 25;
    int pu = ((3 - 11 * g + s - l) % 30 + 30) % 30;
    int p = pu - (pu == 29 || pu == 28 && g > 11);
    int d = (y + y / 4 - y / 100 + y / 400) % 7;
    int e = p + 1 + (39 - d - p) % 7;
    
    return e < 11 ? "March " + std::to_string(e + 21) : "April " + std::to_string(e - 10);
}
