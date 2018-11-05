#pragma once

#include<iostream>
#include<list>
#include<string.h>
using namespace std;

class BookData
{
private:
	CString genre;
	CString title;
	CString author;
	CString publisher;
	bool borrow;
public:
	BookData();
	BookData(CString genre, CString title, CString author, CString Publisher, bool borrow);
	~BookData();
	void getBookData(CString genre, CString title, CString author, CString Publisher, bool borrow);
	bool compare(CString x1);
	void borrowBook();
	void receiveBook();
	CString getGenre() { return this->genre; }
	CString getTitle() { return this->title; }
	CString getAuthor() { return this->author; }
	CString getPublisher() { return this->publisher; }
	CString getBorrow();
};

