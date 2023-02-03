

double distance (double x1, double y1, double x2, double y2) {
	return std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
}

double radius (double x1, double y1, double x2, double y2) {
	return distance(x1, y1, x2, y2);
}

double circumference (double r) {
	return 2 * 3.1416 * r;
}

double area (double r) {
	return (std::pow(r,2)) * 3.1416;
}
