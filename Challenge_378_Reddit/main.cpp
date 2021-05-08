#include "warm_up.h"
#include <iostream>

warm_up wu;

// https://www.reddit.com/r/dailyprogrammer/comments/bqy1cf/20190520_challenge_378_easy_the_havelhakimi/

void print_vector(std::vector<int> input) {
	for (std::vector<int>::iterator i = input.begin(); i != input.end(); i++) {
		std::cout << *i << " ";
	}
	std::cout << std::endl;
}

bool hh_alg(std::vector<int> input) {

	std::vector<int> removed = wu.elim_zero(input);

	if (removed.size() == 0) {
		return true;
	}

	std::vector<int> sorted = wu.desc_sort(removed);

	int N = sorted[0];

	std::vector<int> truncated(sorted.begin() + 1, sorted.end());

	if (wu.length_chk(N, truncated)) {
		return false;
	}

	std::vector<int> new_input = wu.front_elim(N, truncated);

	return hh_alg(new_input);

}

int main(int argc, char* argv[]) {


	std::vector<int> test{ 3, 1, 2, 3, 1, 0 };
	print_vector(test);

	std::cout << hh_alg(test) << std::endl;



	//std::vector<int> no_zeroes = wu.elim_zero(test);
	//print_vector(no_zeroes);

	////
	//std::vector<int> sorted = wu.desc_sort(no_zeroes);
	//print_vector(sorted);
	////

	////
	//bool check = wu.length_chk(10, sorted);
	//std::cout << check << std::endl;
	////

	////
	//std::vector<int> decreased = wu.front_elim(5, sorted);
	//print_vector(decreased);
	////



}

