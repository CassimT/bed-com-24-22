#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
	class Circle{
	
	public:
		Circle();
		Circle(double const &radius);
		~Circle();
		//setters
		void setRadius(const double &radius);
		//getters
		double getRadius()const;

	private:
		double m_radius;
		
	};
}


#endif