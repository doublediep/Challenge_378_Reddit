#include "warm_up.h"
#include <algorithm>


std::vector<int> warm_up::elim_zero(std::vector<int> input) {
	std::vector<int> output;

	for (std::vector<int>::iterator i = input.begin(); i != input.end(); i++){
		if(*i != 0){
			output.push_back(*i);
		}
	}

	return output;
}



std::vector<int> warm_up::desc_sort(std::vector<int> input) {
	std::sort(input.begin(), input.end(), is_greater);
	return input;
}

bool warm_up::length_chk(int N, std::vector<int> input) {
	if (input.size() < N) {
		return true;
	}
	return false;
}

std::vector<int> warm_up::front_elim(int N, std::vector<int> input) {
	for (std::vector<int>::iterator i = input.begin(); i <= input.begin() + N - 1; i++) {
		*i = *i - 1;
	}
	return input;
}