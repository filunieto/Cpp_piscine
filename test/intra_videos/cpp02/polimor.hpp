#ifndef SAMPLE
#define SAMPLE

class Sample{

	public:
	Sample( void );
	~Sample (void);

	void	bar(char const c) const;
	void	bar(int const c) const;
	void	bar(float const c) const;
	void	bar(Sample const & c) const;

};

#endif