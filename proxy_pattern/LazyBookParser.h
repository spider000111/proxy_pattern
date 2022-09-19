#pragma once
#include "IBookParser.h"
#include "BookParser.h"

class LazyBookParser :
    public IBookParser
{
	BookParser* int_parse = nullptr;

	void create_obj() {
		if (int_parse == 0) {
			int_parse = new BookParser();
		}
	}
public:
	int get_num_pages() {
		create_obj();
		return int_parse->get_num_pages();
	}
	int get_num_lines() {
		create_obj();
		return int_parse->get_num_lines();
	}
};

