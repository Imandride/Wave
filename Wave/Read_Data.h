#pragma once
#include"WavHead.h"



class Read_Data : public WavHead
{
	int wavdata = 0;
	int temp = 0;
	int FSDBP;
	int count = 0;
	int BitCount;
	int displayed = 0;

public:
	void getwavedata();
	Read_Data();
	~Read_Data();
};

