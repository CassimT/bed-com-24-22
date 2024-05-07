#include "circle.h"
using  namespace shapes;

Circle::Circle() {
	//constractor
	m_radius = 0;
}
Circle::Circle(double const &radius) {
	//overloaded constructor
	m_radius = 0;
	setRadius(radius);

}
Circle::~Circle() {
	//destractor
}

//setters
void Circle::setRadius(const double &radius) {
	if(m_radius != radius) {
		m_radius = radius;
	}
}

//getters
double Circle::getRadius()const{
	return m_radius;
}