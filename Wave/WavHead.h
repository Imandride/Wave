#pragma once

extern FILE * buf;

class WavHead
{

	FILE * buff;
	char ftype[5] = { 0 };
	int fsize;
	char etype[5] = { 0 };
	char fmt[5] = { 0 };
	long  fmtlen;
	short fmttype;
	short chan;
	int samplert;
	int sbc;
	short bc;
	short bps;
	char data[5] = { 0 };
	long fsizedata;


	
public:
	FILE* _getBUFF() { return buff; };
	short _getBC() { return bc; };
	void Update_Header();
	void Read_Header();
	int getFDataSizeBPS() { return (fsizedata / bps); };
	WavHead( FILE* const &b);
	WavHead();

	~WavHead();
};

