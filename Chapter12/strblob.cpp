#include "strblob.h"
#include<memory>
#include<string>
#include<vector>
using namespace std;

//构造函数
strblob::strblob():data(make_shared<vector<string>>())
{
}
strblob::strblob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {
}
//检查工具
void strblob::check(size_type i, const string& msg) const {
	if (i >= data->size())
		throw out_of_range(msg);
}
//元素访问操作
string & strblob::front() {
	check(0, "front on empty strblob");
	return data->front();
}
string &strblob::back() {
	check(0, "back on empty strblob");
	return data->back();
}
const std::string& strblob::front()const {
	check(0, "front on empty strblob");
	return data->front();
}
const std::string& strblob::back()const {
	check(0, "back on empty strblob");
	return data->back();
}

void strblob::pop_back() {
	check(0, "pop_back on empty strblol");
	data->pop_back();
}

strblob::~strblob()
{
}
