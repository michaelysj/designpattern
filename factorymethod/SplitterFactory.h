#include "Splitter.h"
#include <iostream>

class BinarySplitter : public ISplitter {
public:
	void split() 
	{
		std::cout << "BinarySplitter.split" << std::endl;
	}
};

class TextSplitter : public ISplitter {
public:
	void split()
	{
		std::cout << "TextSplitter.split" << std::endl;
	}
};


class BinarySplitterFacotry : public SplitterFactory
{
public:
	virtual ISplitter* CreateSplitter() {
		return new BinarySplitter();
	}
};

class TextSplitterFacotry : public SplitterFactory
{
public:
	virtual ISplitter* CreateSplitter() {
		return new TextSplitter();
	}
};