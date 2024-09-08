
double askForUserInput(const char *coordinate) {
    double value;
    printf("Enter the value for %s: ", coordinate);
    scanf("%lf", &value);
    return value;
}

double calculateDistance() {
    double x1 = askForUserInput("x1");
    double y1 = askForUserInput("y1");
    double x2 = askForUserInput("x2");
    double y2 = askForUserInput("y2");

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * M_PI * (distance / 2);  

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    return 1.0;  
}

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = M_PI * pow(radius, 2);  

    printf("The area of the city encompassed by your request is %.2lf\n", area);
    return 1.0;  
}

double calculateWidth() {
    double x1 = askForUserInput("x1");
    double x2 = askForUserInput("x2");

    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2lf; y1 = not used\n", x1);
    printf("Point #2 entered: x2 = %.2lf; y2 = not used\n", x2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 1.0;  
}

double calculateHeight() {
    double y1 = askForUserInput("y1");
    double y2 = askForUserInput("y2");

    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = not used; y1 = %.2lf\n", y1);
    printf("Point #2 entered: x2 = not used; y2 = %.2lf\n", y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 1.0;  
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;  
}
