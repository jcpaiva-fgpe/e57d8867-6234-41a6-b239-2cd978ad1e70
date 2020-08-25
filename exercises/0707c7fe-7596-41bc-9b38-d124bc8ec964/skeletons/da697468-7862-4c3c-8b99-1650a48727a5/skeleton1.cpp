auto min_max = std::minmax_element(begin, end);
if (min_max.first == min_max.second) {
	return;
}