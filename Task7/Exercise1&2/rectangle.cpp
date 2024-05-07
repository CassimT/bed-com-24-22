#include "rectangle.h"

Rectangle::Rectangle () {
	//constractor
	m_width = 0;
	m_height = 0;

}
Rectangle::Rectangle(const float &width,const float &height)

 {
 	m_width = 0;
	m_height = 0;
	setWidth(width);
	setHeight(height);
}
Rectangle::~Rectangle() {
	//destractor

}
//setting width
void Rectangle::setWidth(const float &width) {
	if(m_width != width ) {
		m_width = width;
	}
}
//setting height
void Rectangle::setHeight(const float &height) {
	if(m_height != height) {
		m_height = height;
	}
}

//getting width
float Rectangle::getWidth()const {
	return m_width;
}

//getting height
float Rectangle::getHeight()const {
	return m_height;
}

//calculting area
float Rectangle::area() {
	return getWidth() * getHeight();
}