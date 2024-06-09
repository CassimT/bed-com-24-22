#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
	Rectangle();
	Rectangle(const float &width,const float &height);
	~Rectangle();
	//setters
	void setWidth( const float &width);
	void setHeight( const float &height);

	//getters
	float getWidth()const;
	float getHeight()const;

	//other members function
	float area();

private:
	float m_width;
	float m_height;
	
};

#endif