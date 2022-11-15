# include "vector_3d.h"
# include <iostream>
# include <math.h>

// istream and ostream string formats
inline std::istream& operator>> (std::istream &is, vector_3d &v) {is >> v[0] >> v[1] >> v[2]; return is;}
inline std::ostream& operator<< (std::ostream &os, vector_3d &v) {os << v[0] << " " << v[1] << " " << v[2]; return os;}

// vector-constant functions
inline vector_3d operator+ (vector_3d &v, float x) {return vector_3d(v[0] + x, v[1] + x, v[2] + x);}
inline vector_3d operator- (vector_3d &v, float x) {return vector_3d(v[0] - x, v[1] - x, v[2] - x);}
inline vector_3d operator* (vector_3d &v, float x) {return vector_3d(v[0] * x, v[1] * x, v[2] * x);}
inline vector_3d operator/ (vector_3d &v, float x) {return vector_3d(v[0] / x, v[1] / x, v[2] / x);}

inline vector_3d& vector_3d::operator+=(const float x) {v[0] += x; v[1] += x; v[2] += x; return *this;}
inline vector_3d& vector_3d::operator-=(const float x) {v[0] -= x; v[1] -= x; v[2] -= x; return *this;}
inline vector_3d& vector_3d::operator*=(const float x) {v[0] *= x; v[1] *= x; v[2] *= x; return *this;}
inline vector_3d& vector_3d::operator/=(const float x) {v[0] /= x; v[1] /= x; v[2] /= x; return *this;}


// vector-vector functions
inline float dot(const vector_3d &v1, const vector_3d &v2) {return (v1[0] * v2[0]) + (v1[1] * v2[1]) + (v1[2] * v2[2]);}
inline vector_3d operator+ (vector_3d &v1, vector_3d &v2) {return vector_3d(v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2]);}
inline vector_3d operator- (vector_3d &v1, vector_3d &v2) {return vector_3d(v1[0] - v2[0], v1[1] - v2[1], v1[2] - v2[2]);}
inline vector_3d operator* (vector_3d &v1, vector_3d &v2) {return vector_3d(v1[0] * v2[0], v1[1] * v2[1], v1[2] * v2[2]);}
inline vector_3d operator/ (vector_3d &v1, vector_3d &v2) {return vector_3d(v1[0] / v2[0], v1[1] / v2[1], v1[2] / v2[2]);}

inline vector_3d& vector_3d::operator+=(const vector_3d &v2) {v[0] += v2[0]; v[1] += v2[1]; v[2] += v2[2]; return *this;}
inline vector_3d& vector_3d::operator-=(const vector_3d &v2) {v[0] -= v2[0]; v[1] -= v2[1]; v[2] -= v2[2]; return *this;}
inline vector_3d& vector_3d::operator*=(const vector_3d &v2) {v[0] *= v2[0]; v[1] *= v2[1]; v[2] *= v2[2]; return *this;}
inline vector_3d& vector_3d::operator/=(const vector_3d &v2) {v[0] /= v2[0]; v[1] /= v2[1]; v[2] /= v2[2]; return *this;}


