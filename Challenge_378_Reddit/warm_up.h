#pragma once
#include <vector>

class warm_up
{
public:
	std::vector<int> elim_zero(std::vector<int> input);

	std::vector<int> desc_sort(std::vector<int> input);

	static inline bool is_greater(int a, int b) { return a > b; };

	bool length_chk(int N, std::vector<int> input);

	std::vector<int> front_elim(int N, std::vector<int> input);

};

