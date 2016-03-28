#include "stdafx.h"
#include "WavHead.h"



void WavHead::Read_Header() 
{
	std::cout << ftype << std::endl;
	std::cout << fsize << std::endl;
	std::cout << etype << std::endl;
	std::cout << fmt << std::endl;
	std::cout << fmtlen << std::endl;
	std::cout << fmttype << std::endl;
	std::cout << chan << std::endl;
	std::cout << samplert << std::endl;
	std::cout << sbc << std::endl;
	std::cout << bc << std::endl;
	std::cout << bps << std::endl;
	std::cout << data << std::endl;
	std::cout << fsizedata << std::endl;
}



void WavHead::Update_Header()
{
	fread(&ftype, sizeof(char), 4, buff);
	fread(&fsize, sizeof(int), 1, buff);
	fread(&etype, sizeof(char), 4, buff);
	fread(&fmt, sizeof(char), 4, buff);
	fread(&fmtlen, sizeof(long), 1, buff);
	fread(&fmttype, sizeof(short), 1, buff);
	fread(&chan, sizeof(short), 1, buff);
	fread(&samplert, sizeof(int), 1, buff);
	fread(&sbc, sizeof(int), 1, buff);
	fread(&bc, sizeof(short), 1, buff);
	fread(&bps, sizeof(short), 1, buff);
	fread(&data, sizeof(char), 4, buff);
	fread(&fsizedata, sizeof(long), 1, buff);
}

WavHead::WavHead( FILE* const &b)
{
	buff = b;
	std::cout << " Argument File Buffer"<< std::endl;
	std::cout << buff << std::endl << b << std::endl;
	std::cout << buff << std::endl << buf << std::endl;
}

WavHead::WavHead()
{
	std::cout << " Main File Buffer" << std::endl;
	buff = buf;
	std::cout << buff<< std::endl << buf << std::endl;
}


WavHead::~WavHead()
{
	std::cout << "DED";
}
