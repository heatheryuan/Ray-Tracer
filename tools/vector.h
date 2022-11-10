# include <iostream>
# include <math.h>
# include <stdlib.h>

class vector {
    public:
        float v[3];
        
        // constructors
        vector() {}
        vector(float v0, float v1, float v2) {v[0] = v0; v[1] = v1; v[2] = v2;}
        
        // accessors
        inline float x() const {return v[0];}
        inline float y() const {return v[1];}
        inline float z() const {return v[2];}
        inline float r() const {return v[0];}
        inline float g() const {return v[1];}
        inline float b() const {return v[2];}
        inline float operator[](int i) const {return v[i];}
        inline float& operator[](int i) {return v[i];}

        inline const vector& operator+() const {return *this;}
        inline vector operator-() const {return vector(-v[0], -v[1], -v[2]);}

        // attributes
        inline float length() const {return sqrt(pow(v[0], 2) + pow(v[1], 2) + pow(v[2], 2));}
        inline float squared_length() const{return pow(v[0], 2) + pow(v[1], 2) + pow(v[2], 2);}

        // function abstracts
        inline vector& operator+=(const vector &v2);
        inline vector& operator-=(const vector &v2);
        inline vector& operator*=(const vector &v2);
        inline vector& operator/=(const vector &v2);
        
        inline vector& operator+=(const float x);
        inline vector& operator-=(const float x);
        inline vector& operator*=(const float x);
        inline vector& operator/=(const float x);
};

