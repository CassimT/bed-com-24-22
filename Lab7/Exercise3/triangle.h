#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
	class Triangle {	
	public:
		Triangle();
		Triangle(const double &base, const double &height);
		~Triangle();
		//setters
		void setBase(double const &base);
		void setHeight(double const &height);

		//getters
		double getBase()const;
		double getHeight()const;
	private:
		double m_base;
		double m_height;
	};
}


#endif