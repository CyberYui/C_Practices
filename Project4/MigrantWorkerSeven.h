#pragma once
#include "WorkerSeven.h"
#include "FarmerSeven.h"
class MigrantWorker:public Worker,public Farmer//��̳�
{
public:
	MigrantWorker(string name, string code);
	~MigrantWorker();
};