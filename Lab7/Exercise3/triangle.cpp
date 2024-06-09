#include "triangle.h"
using  namespace shapes;

Triangle::Triangle() {
	//constractor
	m_height = 0;
	m_base = 0;
}
Triangle::Triangle(const double &base, const double&height){
	//overloaded constructor
	m_height = 0;
	m_base = 0;
	setBase(base);
	setHeight(height);
}
Triangle::~Triangle() {
	//destractor
}

//setters
void Triangle::setBase(double const &base) {
	if(m_base != base) {
		m_base = base;
	}
}
void Triangle::setHeight(double const &height){
	if(m_height != height) {
		m_height = height;
	}
}

//getters
double Triangle::getBase()const {
	return m_base;
}
double Triangle::getHeight()const {
	return m_height;
}