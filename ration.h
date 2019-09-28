#ifndef RATION_H
#define RATION_H

class Ration{
private:
	int num;		
	int	den;
	double value;
public:
	Ration();
	Ration(int num);
	Ration(int num, int den);
	~Ration();
	bool Ration_If_Zero(int den);
	
	int number();
	int deno();
	double ration();
	
	void number(int num);
	void deno(int den);
	
	bool operator==(const Ration &rhs);		//right-hand side
	void operator=(const Ration &rhs);
};




#endif
