# include <vector.h>
# include <iostream>
# include <math.h>

// istream and ostream string formats
inline std::istream& operator>> (std::istream &is, vector &v) {is >> v[0] >> v[1] >> v[2]; return is;}
inline std::ostream& operator<< (std::ostream &os, vector &v) {os << v[0] << " " << v[1] << " " << v[2]; return os;}

// vector-constant functions
inline float dot(const vector &v1, const vector &v2) {return (v1[0] * v2[0]) + (v1[1] * v2[1]) + (v1[2] * v2[2]);}
inline vector operator+ (vector &v, float x) {return vector(v[0] + x, v[1] + x, v[2] + x);}
inline vector operator- (vector &v, float x) {return vector(v[0] - x, v[1] - x, v[2] - x);}
inline vector operator* (vector &v, float x) {return vector(v[0] * x, v[1] * x, v[2] * x);}
inline vector operator/ (vector &v, float x) {return vector(v[0] / x, v[1] / x, v[2] / x);}

inline vector& vector::operator+=(const float x) {v[0] += x; v[1] += x; v[2] += x; return *this;}
inline vector& vector::operator-=(const float x) {v[0] -= x; v[1] -= x; v[2] -= x; return *this;}
inline vector& vector::operator*=(const float x) {v[0] *= x; v[1] *= x; v[2] *= x; return *this;}
inline vector& vector::operator/=(const float x) {v[0] /= x; v[1] /= x; v[2] /= x; return *this;}


// vector-vector functions
inline float dot(const vector &v1, const vector &v2) {return (v1[0] * v2[0]) + (v1[1] * v2[1]) + (v1[2] * v2[2]);}
inline vector operator+ (vector &v1, vector &v2) {return vector(v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2]);}
inline vector operator- (vector &v1, vector &v2) {return vector(v1[0] - v2[0], v1[1] - v2[1], v1[2] - v2[2]);}
inline vector operator* (vector &v1, vector &v2) {return vector(v1[0] * v2[0], v1[1] * v2[1], v1[2] * v2[2]);}
inline vector operator/ (vector &v1, vector &v2) {return vector(v1[0] / v2[0], v1[1] / v2[1], v1[2] / v2[2]);}

inline vector& vector::operator+=(const vector &v2) {v[0] += v2[0]; v[1] += v2[1]; v[2] += v2[2]; return *this;}
inline vector& vector::operator-=(const vector &v2) {v[0] -= v2[0]; v[1] -= v2[1]; v[2] -= v2[2]; return *this;}
inline vector& vector::operator*=(const vector &v2) {v[0] *= v2[0]; v[1] *= v2[1]; v[2] *= v2[2]; return *this;}
inline vector& vector::operator/=(const vector &v2) {v[0] /= v2[0]; v[1] /= v2[1]; v[2] /= v2[2]; return *this;}


