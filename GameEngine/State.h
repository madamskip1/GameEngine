#pragma once
class State
{
private:
	virtual void onStateLeave() = 0;
	virtual void onStateEnter() = 0;

public:
	State();
	~State();
};

