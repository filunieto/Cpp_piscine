#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

public:
	int	foo;

	Sample(void);
	~Sample(void);
	void bar(void);
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
