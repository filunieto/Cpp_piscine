#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

public:

	Sample(void);
	~Sample(void);
	
	static int	getNbInst (void );


private:

	static int	_nbInst;
};

class Sample2 {

public:
	char	a1;
	float	a2;
	int		a3;

	Sample2(char p1, float p2, int p3);
	~Sample2(void);
};

#endif
