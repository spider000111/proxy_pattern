#pragma once
#include <iostream>
#include "IBookParser.h"

class BookParser :public IBookParser
{
public:
	BookParser() {
		printf("expensive operation in constructor\n");
	}
	int get_num_pages() {
		return 4;
	}
	int get_num_lines() {
		return 40;
	}
};

