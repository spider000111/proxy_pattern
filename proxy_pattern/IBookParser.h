#pragma once
class IBookParser
{
public:
	virtual int get_num_pages()=0;
	virtual int get_num_lines()=0;
};

