// Wave.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "WavHead.h"

using namespace std;

FILE *buf = nullptr;
void pass() { cout << "Opened File successfully:" << endl; }
void fail() { cout << "Failed to open File:" << endl; }

int main()
{
	errno_t err;
	err = fopen_s(&buf, "Test.wav", "r");
	err == 0 ? pass() : fail();
	
	//WavHead * p = new WavHead(buf);
	WavHead * p = new WavHead();
	p->Update_Header();
	p->Read_Header();
	delete p;






return 0;
}

