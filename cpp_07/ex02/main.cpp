/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbagin <rbagin@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/11 14:31:46 by rbagin        #+#    #+#                 */
/*   Updated: 2026/05/13 16:58:28 by rbagin        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Array<int> nums(5);
	for (unsigned int i = 0; i < nums.size(); i++)
		nums[i] = i * 10;
	Array<int> copy(nums);
	copy[0] = 999;
	std::cout << "nums[0]=" << nums[0] << " copy[0]=" << copy[0] << std::endl;
	try { nums[100] = 0; }
	catch (std::exception& e) { std::cerr << e.what() << std::endl; }
	Array<int>& ref = nums;
	nums = ref;
	std::cout << "self-assign ok, nums[2]=" << nums[2] << std::endl;
	Array<std::string> words(2);
	words[0] = "hello";
	words[1] = "templates";
	std::cout << words[0] << " " << words[1] << std::endl;

	return 0;
}
