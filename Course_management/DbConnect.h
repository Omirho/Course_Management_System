#pragma once
#include "stdafx.h"
ref class DbConnect
{
public:
	MySqlConnection^ con;
	DbConnect(void);
};
