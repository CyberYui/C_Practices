#pragma once
#include "WorkerSeven.h"
#include "FarmerSeven.h"
class MigrantWorker:public Worker,public Farmer//¶à¼Ì³Ð
{
public:
	MigrantWorker(string name, string code);
	~MigrantWorker();
};