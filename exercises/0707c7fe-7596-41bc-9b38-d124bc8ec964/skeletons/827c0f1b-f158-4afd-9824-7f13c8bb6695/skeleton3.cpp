for (auto i = min; i <= max; ++i) {
	for (auto j = 0; j < count[i - min]; ++j) {
    	*begin++ = i;
    }
}