class Rectangle {
private:
  double width;
  double length;

  void hello() const;

public:
  Rectangle(const double &w, const double &l);
  Rectangle();
  void setWidth(const double &width);
  void setLength(const double &length);
  double getArea() const;
  double getWidth() const;
  double getLength() const;
};