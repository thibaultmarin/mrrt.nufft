/*
* def,table1.h
* declarations
*/
#include <string.h> /* for memset */

#define mymod(k,K) ((k) - (K) * floor((k) / (double) (K)))
#define iround(x) floor(x + 0.5)

/* interp1_table1_for.c */

extern void interp1_table0_complex_per(
const double *r_ck,	/* [K1,1] in */
const double *i_ck,
const int K1,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *i_h1,	/* imaginary part of complex interpolator */
const int J1,
const int L1,
const double *p_tm,	/* [M,1] in */
const int M,
double *r_fm,		/* [M,1] out */
double *i_fm);

typedef void interp1_table_real_per_t(
const double *r_ck,	/* [K,1] in */
const double *i_ck,
const int K1,
const double *r_h1,	/* [J1*L1+1,1] in (real) */
#ifdef Provide_flip
const int flip1,	/* sign flips every K? */
#endif
const int J1,
const int L1,
const double *p_tm,	/* [M,1] in */
const int M,
double *r_fm,		/* [M,1] out */
double *i_fm);

extern interp1_table_real_per_t interp1_table0_real_per;
extern interp1_table_real_per_t interp1_table1_real_per;


/* interp1_table1_adj.c */

extern void interp1_table0_complex_per_adj(
double *r_ck,		/* [K1,1] out */
double *i_ck,
const int K1,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *i_h1,	/* imaginary part of complex interpolator */
const int J1,
const int L1,
const double *p_tm,	/* [M,1] in */
const int M,
const double *r_fm,	/* [M,1] in */
const double *i_fm);

typedef void interp1_table_real_per_adj_t(
double *r_ck,		/* [K,1] out */
double *i_ck,
const int K1,
const double *r_h1,	/* [J1*L1+1,1] in (real) */
#ifdef Provide_flip
const int flip1,	/* sign flips every K? */
#endif
const int J1,
const int L1,
const double *p_tm,	/* [M,1] in */
const int M,
const double *r_fm,	/* [M,1] in */
const double *i_fm);

extern interp1_table_real_per_adj_t interp1_table0_real_per_adj;
extern interp1_table_real_per_adj_t interp1_table1_real_per_adj;

extern void interp2_table0_complex_per(
const double *r_ck,	/* [K1,K2] in */
const double *i_ck,
const int K1,
const int K2,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *i_h1,
const double *r_h2,	/* [J2*L2+1,1] in */
const double *i_h2,
const int J1,
const int J2,
const int L1,
const int L2,
const double *p_tm,	/* [M,2] in */
const int M,
double *r_fm,		/* [M,1] out */
double *i_fm);

typedef void interp2_table_real_per_t(
const double *r_ck,	/* [K1,K2] in */
const double *i_ck,
const int K1,
const int K2,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *r_h2,	/* [J2*L2+1,1] in */
#ifdef Provide_flip
const int flip1,	/* sign flips every K? */
const int flip2,
#endif
const int J1,
const int J2,
const int L1,
const int L2,
const double *p_tm,	/* [M,2] in */
const int M,
double *r_fm,		/* [M,1] out */
double *i_fm);

extern interp2_table_real_per_t interp2_table0_real_per;
extern interp2_table_real_per_t interp2_table1_real_per;


/* interp2_table1_adj.c */

extern void interp2_table0_complex_per_adj(
double *r_ck,		/* [K1,K2] out */
double *i_ck,
const int K1,
const int K2,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *i_h1,
const double *r_h2,	/* [J2*L2+1,1] in */
const double *i_h2,
const int J1,
const int J2,
const int L1,
const int L2,
const double *p_tm,	/* [M,2] in */
const int M,
const double *r_fm,	/* [M,1] in */
const double *i_fm);

typedef void interp2_table_real_per_adj_t(
double *r_ck,		/* [K1,K2] out */
double *i_ck,
const int K1,
const int K2,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *r_h2,	/* [J2*L2+1,1] in */
#ifdef Provide_flip
const int flip1,
const int flip2,
#endif
const int J1,
const int J2,
const int L1,
const int L2,
const double *p_tm,	/* [M,2] in */
const int M,
const double *r_fm,	/* [M,1] in */
const double *i_fm);

extern interp2_table_real_per_adj_t interp2_table0_real_per_adj;
extern interp2_table_real_per_adj_t interp2_table1_real_per_adj;


/* interp3_table1_for.c */

extern void interp3_table0_complex_per(
const double *r_ck,	/* [K1,K2,K3] in */
const double *i_ck,
const int K1,
const int K2,
const int K3,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *i_h1,
const double *r_h2,	/* [J2*L2+1,1] in */
const double *i_h2,
const double *r_h3,	/* [J3*L3+1,1] in */
const double *i_h3,
const int J1,
const int J2,
const int J3,
const int L1,
const int L2,
const int L3,
const double *p_tm,	/* [M,3] in */
const int M,
double *r_fm,		/* [M,1] out */
double *i_fm);

typedef void interp3_table_real_per_t(
const double *r_ck,	/* [K1,K2,K3] in */
const double *i_ck,
const int K1,
const int K2,
const int K3,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *r_h2,	/* [J2*L2+1,1] in */
const double *r_h3,	/* [J3*L3+1,1] in */
#ifdef Provide_flip
const int flip1,	/* sign flips every K? */
const int flip2,
const int flip3,
#endif
const int J1,
const int J2,
const int J3,
const int L1,
const int L2,
const int L3,
const double *p_tm,	/* [M,3] in */
const int M,
double *r_fm,		/* [M,1] out */
double *i_fm);

extern interp3_table_real_per_t interp3_table0_real_per;
extern interp3_table_real_per_t interp3_table1_real_per;


/* interp3_table1_adj.c */

extern void interp3_table0_complex_per_adj(
double *r_ck,		/* [K1,K2,K3] out */
double *i_ck,
const int K1,
const int K2,
const int K3,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *i_h1,
const double *r_h2,	/* [J2*L2+1,1] in */
const double *i_h2,
const double *r_h3,	/* [J3*L3+1,1] in */
const double *i_h3,
const int J1,
const int J2,
const int J3,
const int L1,
const int L2,
const int L3,
const double *p_tm,	/* [M,3] in */
const int M,
const double *r_fm,	/* [M,1] in */
const double *i_fm);

typedef void interp3_table_real_per_adj_t(
double *r_ck,		/* [K1,K2,K3] out */
double *i_ck,
const int K1,
const int K2,
const int K3,
const double *r_h1,	/* [J1*L1+1,1] in */
const double *r_h2,	/* [J2*L2+1,1] in */
const double *r_h3,	/* [J3*L3+1,1] in */
#ifdef Provide_flip
const int flip1,	/* sign flips every K? */
const int flip2,
const int flip3,
#endif
const int J1,
const int J2,
const int J3,
const int L1,
const int L2,
const int L3,
const double *p_tm,	/* [M,3] in */
const int M,
const double *r_fm,	/* [M,1] in */
const double *i_fm);

extern interp3_table_real_per_adj_t interp3_table0_real_per_adj;
extern interp3_table_real_per_adj_t interp3_table1_real_per_adj;
