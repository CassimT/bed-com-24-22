#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
	class Square {
	
	public:
		Square();
		Square(const double &width);
		~Square();
		//a setter
		void setLength(const double &length);
		//a getter
		double getLength()const;
	private:
		double m_length;
		
	};
}


#endif