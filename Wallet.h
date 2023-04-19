#pragma once
#include <iostream>
#include "ChainNet.h"

class Wallet
{

private: 
	std::string privatekey;
	std::string publicKey;
	ChainNet net;

public:
	Wallet();
	Wallet(ChainNet);
	~Wallet();


	// send
	// get Balance (net Based)

};

