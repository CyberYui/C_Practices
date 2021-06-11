#pragma once
#include "WorkerEight.h"
#include "FarmerEight.h"

class MigrantWorker:public Farmer,public Worker
{
public:
	MigrantWorker(string name="Jack", string code="003", string color="yellow");
	~MigrantWorker();
};