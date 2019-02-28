#pragma once
#include<vector>
#include<string>
#include<memory>
class strblob
{
public:
	typedef std::vector<std::string>::size_type size_type;
	//���캯��
	strblob();
	strblob(std::initializer_list<std::string> il);
	//
	size_type size()const {return data->size();}
	bool empty()const { return data->empty(); }
	//Ԫ�ط��ʲ���
	void push_back(const std::string &t) { data->push_back(t); }
	void pop_back();
	std::string& front();
	std::string& back();
	const std::string& front()const;
	const std::string& back()const;

	~strblob();

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type, const std::string &) const;
};

