auto min = *min_max.first;
auto max = *min_max.second;
std::vector<unsigned> count((max - min) + 1, 0u);
for (auto i = begin; i != end; ++i) {
	++count[*i - min];
}