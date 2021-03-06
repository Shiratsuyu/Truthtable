#ifndef _TABLE_H
#define _TABLE_H

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

class Table
{
private:
	int variables,length;
	std::string putin,expression,value;
	std::vector<std::vector<bool>> var; 

public:
	Table();
	~Table();
	void get_variable_number();
	void get_truth();
	void exp_format();
	void ergodic();
	void print_table();
	void primary_disjunctive();
	void principal_conjunctive();
	
};

#endif