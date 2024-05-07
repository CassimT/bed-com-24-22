#include "square.h"
using  namespace shapes;

Square::Square() {
	//constractor
	m_length = 0;
}
Square::Square(const double &width){
	//overloaded constructor
	m_length = 0;
	setLength(width);
}
Square::~Square() {
	//destractor
}

//setting the length
void Square::setLength(const double &length) {
	if(m_length != length) {
		m_length = length;
	}
}

double Square::getLength()const {
	return m_length;
}