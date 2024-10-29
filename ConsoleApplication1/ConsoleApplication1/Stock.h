#pragma once
#include"DataCaseOperator.h"
#include"Input.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void InputCaseStock(vector <Case>& case_stock);

void DeleteStock(vector <Case>& case_stock);

ostream& operator<< (ostream& output, const vector<Case>& mass);
