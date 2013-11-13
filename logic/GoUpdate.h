#pragma once
#include "net/NetJob.h"


class GoUpdate : public QObject
{
public:
	GoUpdate();

	void checkForUpdate();
private:
	NetJobPtr index_job;
	NetJobPtr fromto_job;
};
