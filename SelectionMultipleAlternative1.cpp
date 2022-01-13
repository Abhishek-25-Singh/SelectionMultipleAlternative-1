// SelectionMuuuultipleAlternative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

	/*
	* Accept total sales  of a salesman and calculate the commission to be paid


	* Commission of 10% of the the total sales is paid if the
	total sales >= RS 10'00'000

	* comission is 5 % total sales  is paid if the
	total sales >= Rs 5'00'000 and < RS 10'00'000

	* comission is 3 % total sales  is paid if the
	total sales >= Rs 2'50'000 and < RS 5'00'000

	*Commission of 1% of the total sales is paid if the
	total sales  < Rs 2'50'000'

	*/

#include <iostream>
#include <iomanip>
#include <chrono>


int main()
{
	constexpr int SALES_TARGET_SLAB1{ 10'00'000 };
	constexpr int SALES_TARGET_SLAB2{ 5'00'000 };
	constexpr int SALES_TARGET_SLAB3{ 2'50'000 };
	constexpr int MIN_SALES{ 0 };
	constexpr double COMMISSION_RATE_SLAB1{ 0.10 };
	constexpr double COMMISSION_RATE_SLAB2{ 0.05 };
	constexpr double COMMISSION_RATE_SLAB3{ 0.03 };
	constexpr double COMMISSION_RATE_SLAB4{ 0.01 };

	double commission{};
	int total_sales{};
	std::cout << " please enter total sales in Rs: ";
	std::cin >> total_sales;
//	if (total_sales < MIN_SALES) {
//		std::cerr << "The sales figure cannot be less than zero ! \n ";
//	}
//	else {
//		if (total_sales >= SALES_TARGET_SLAB1) {
//			commission = total_sales * COMMISSION_RATE_SLAB1;
//		}
//		else if (total_sales >= SALES_TARGET_SLAB2 and total_sales < SALES_TARGET_SLAB1) {
//			commission = total_sales * COMMISSION_RATE_SLAB2;
//		}
//		else if (total_sales >= SALES_TARGET_SLAB3 and total_sales < SALES_TARGET_SLAB2) {
//			commission = total_sales * COMMISSION_RATE_SLAB3;
//		}
//		else if (total_sales <= MIN_SALES and total_sales >= SALES_TARGET_SLAB3) {
//			commission = total_sales * COMMISSION_RATE_SLAB4;
//		}
//		std::cout << "The Commission payable is Rs : "
//			<< std::setprecision(2) << std::fixed
//			<< commission << std::endl;
//
//	}
//	
//	return 0;
//}


	if (total_sales < MIN_SALES) {
		std::cerr << "The sales figure cannot be less than zero ! \n ";
	}
	else {
		if (total_sales >= SALES_TARGET_SLAB1) {
			commission = total_sales * COMMISSION_RATE_SLAB1;
		}
		else if (total_sales >= SALES_TARGET_SLAB2 ) {
			commission = total_sales * COMMISSION_RATE_SLAB2;
		}
		else if (total_sales >= SALES_TARGET_SLAB3 ) {
			commission = total_sales * COMMISSION_RATE_SLAB3;
		}
		else  {
			commission = total_sales * COMMISSION_RATE_SLAB4;
		}
		std::cout << "The Commission payable is Rs : "
			<< std::setprecision(2) << std::fixed
			<< commission << std::endl;

	}

	return 0;
}