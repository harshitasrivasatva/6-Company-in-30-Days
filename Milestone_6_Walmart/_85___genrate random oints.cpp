double r,x,y;

    Solution(double radius, double x_center, double y_center) {
        r =radius;
        x =x_center;
        y =y_center;
    }

    vector<double> randPoint() {
        double rad = (double)rand() / RAND_MAX;
        rad = sqrt(rad) * r;

        double teta = (double)rand() / RAND_MAX;
        teta *= 360.0;

        return {x+rad*cos(teta),y+rad*sin(teta)};
    }
