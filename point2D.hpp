#ifndef __point2D_hpp
#define __point2D_hpp

#include <string>

using namespace std;

template <typename T>
class Point2D;

template <typename T>
ostream& operator<<(ostream &, Point2D<T> const&);

template<typename T>
class Point2D{
protected:
  //attributs
  T x;
  T y;

public:
  //constructeur
  Point2D();
  Point2D(T x, T y); 				// Constructeur avec coordonnées
	Point2D(Point2D const &p);	// Constructeur en copie

  //accesseur
  T getX() const;
  T getY() const;

  //mutateurs
  void setPoint(T newX, T newY);
	void setX(T x);
	void setY(T y);

  //méthodes
  void translate(T x, T y);

	//surcharge des opérateurs
	friend ostream& operator << <T>(ostream &, Point2D<T> const&P);
};

#endif