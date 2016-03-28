#include "stdafx.h"
#include "Read_Data.h"





void Read_Data::getwavedata()
{
	int FSDBP = getFDataSizeBPS();
	int BitCount = _getBC();

	while (count < FSDBP) 
	{
		fread(&wavdata, BitCount, 1, this->_getBUFF());
				if (temp != wavdata) 
				{
					std::cout << wavdata << " ";
					displayed++;
				}
				temp = wavdata;
				count++;
	}
	std::cout << std::endl << FSDBP << " " << count << " " << displayed;
}

Read_Data::Read_Data()
{
	this->Update_Header();
	this->Read_Header();
	std::cout << "Read object created:" << std::endl;
}


Read_Data::~Read_Data()
{
	std::cout << "Read object destroyed:" << std::endl;
}
