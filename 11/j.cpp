#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct Point {
    int x, y;
    double distance;

    Point(int x, int y, int px, int py) : x(x), y(y) {
        distance = sqrt(pow(x - px, 2) + pow(y - py, 2));
    }

    // Overload the < operator to sort points based on distance
    bool operator<(const Point& other) const {
        return distance < other.distance;
    }
};

int main() {
    // Input point P
    int px, py;
    std::cin >> px >> py;

    // Input number of points
    int n;
    std::cin >> n;

    std::vector<Point> points;

    // Input n points and calculate distances
    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        points.emplace_back(x, y, px, py);
    }

    // Sort points based on distance
    std::sort(points.begin(), points.end());

    // Output the sorted points
    for (const auto& point : points) {
        std::cout << point.x << " " << point.y << std::endl;
    }

    return 0;
}