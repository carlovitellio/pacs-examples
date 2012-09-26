#ifndef __UDF_HPP__
#define __UDF_HPP__

typedef double (*FunPoint)(double const &);

extern "C"{
 double fsincos(double const &);
 double pippo(double const &);
 double pluto(double const &);
 double myfun(double const &);
}
#endif
