/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) pusher_slider_model_dyn_expl_vde_adj_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[9] = {5, 1, 0, 5, 0, 1, 2, 3, 4};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};

/* pusher_slider_model_dyn_expl_vde_adj:(i0[5],i1[5],i2[2],i3[])->(o0[7]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0]? arg[0][2] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][3] : 0;
  a3=arg[0]? arg[0][4] : 0;
  a4=(a2*a3);
  a5=-2.1292666666666667e-04;
  a6=(a2*a3);
  a5=(a5-a6);
  a6=1.9000000000000000e-01;
  a7=casadi_sq(a2);
  a7=(a6*a7);
  a5=(a5-a7);
  a7=1.1206666666666667e-03;
  a8=casadi_sq(a3);
  a8=(a7+a8);
  a9=(a6*a2);
  a10=(a9*a3);
  a8=(a8+a10);
  a5=(a5/a8);
  a10=arg[2]? arg[2][0] : 0;
  a11=arg[2]? arg[2][1] : 0;
  a12=(a11/a10);
  a13=(a12<a5);
  a14=arg[1]? arg[1][1] : 0;
  a15=(a13*a14);
  a16=(a10*a15);
  a17=(a5*a16);
  a18=(a4*a17);
  a19=casadi_sq(a2);
  a19=(a7+a19);
  a20=(a19*a16);
  a18=(a18+a20);
  a20=casadi_sq(a2);
  a20=(a7+a20);
  a21=casadi_sq(a3);
  a20=(a20+a21);
  a21=(a18/a20);
  a22=2.1292666666666667e-04;
  a23=(a2*a3);
  a22=(a22-a23);
  a23=casadi_sq(a2);
  a23=(a6*a23);
  a22=(a22+a23);
  a23=casadi_sq(a3);
  a23=(a7+a23);
  a24=(a6*a2);
  a25=(a24*a3);
  a23=(a23-a25);
  a22=(a22/a23);
  a25=(a22<a12);
  a26=(a25*a14);
  a27=(a10*a26);
  a28=(a22*a27);
  a29=(a4*a28);
  a30=(a19*a27);
  a29=(a29+a30);
  a30=(a29/a20);
  a21=(a21+a30);
  a30=(a5<=a12);
  a12=(a12<=a22);
  a14=(a12*a14);
  a14=(a30*a14);
  a31=(a11*a14);
  a32=(a4*a31);
  a33=(a10*a14);
  a34=(a19*a33);
  a32=(a32+a34);
  a34=(a32/a20);
  a21=(a21+a34);
  a34=casadi_sq(a3);
  a7=(a7+a34);
  a34=arg[1]? arg[1][0] : 0;
  a35=(a13*a34);
  a36=(a10*a35);
  a37=(a5*a36);
  a38=(a7*a37);
  a39=(a2*a3);
  a40=(a39*a36);
  a38=(a38+a40);
  a40=(a38/a20);
  a21=(a21-a40);
  a40=(a25*a34);
  a41=(a10*a40);
  a42=(a22*a41);
  a43=(a7*a42);
  a44=(a39*a41);
  a43=(a43+a44);
  a44=(a43/a20);
  a21=(a21-a44);
  a34=(a12*a34);
  a34=(a30*a34);
  a44=(a11*a34);
  a45=(a7*a44);
  a46=(a10*a34);
  a47=(a39*a46);
  a45=(a45+a47);
  a47=(a45/a20);
  a21=(a21-a47);
  a1=(a1*a21);
  a21=sin(a0);
  a47=(a7*a17);
  a48=(a39*a16);
  a47=(a47+a48);
  a48=(a47/a20);
  a49=(a7*a28);
  a50=(a39*a27);
  a49=(a49+a50);
  a50=(a49/a20);
  a48=(a48+a50);
  a50=(a7*a31);
  a51=(a39*a33);
  a50=(a50+a51);
  a51=(a50/a20);
  a48=(a48+a51);
  a51=(a4*a37);
  a52=(a19*a36);
  a51=(a51+a52);
  a52=(a51/a20);
  a48=(a48+a52);
  a52=(a4*a42);
  a53=(a19*a41);
  a52=(a52+a53);
  a53=(a52/a20);
  a48=(a48+a53);
  a53=(a4*a44);
  a54=(a19*a46);
  a53=(a53+a54);
  a54=(a53/a20);
  a48=(a48+a54);
  a21=(a21*a48);
  a1=(a1-a21);
  if (res[0]!=0) res[0][2]=a1;
  a1=arg[1]? arg[1][3] : 0;
  a21=(a13*a1);
  a48=(a10*a21);
  a54=(a48/a20);
  a55=(a3*a54);
  a56=arg[1]? arg[1][4] : 0;
  a57=(a13*a56);
  a58=(a10*a57);
  a59=(a58/a20);
  a60=(a2*a59);
  a55=(a55-a60);
  a60=arg[1]? arg[1][2] : 0;
  a13=(a13*a60);
  a61=(a10*a13);
  a62=(a61/a20);
  a55=(a55+a62);
  a62=(a5*a55);
  a63=(a5*a2);
  a63=(a63-a3);
  a64=(a63*a59);
  a65=(a22*a2);
  a65=(a65-a3);
  a66=(a25*a56);
  a67=(a10*a66);
  a68=(a67/a20);
  a69=(a65*a68);
  a64=(a64+a69);
  a69=(a2+a2);
  a56=(a12*a56);
  a56=(a30*a56);
  a70=(a11*a56);
  a71=(a70/a20);
  a69=(a69*a71);
  a64=(a64+a69);
  a62=(a62-a64);
  a64=(a25*a1);
  a69=(a10*a64);
  a72=(a69/a20);
  a73=(a3*a72);
  a74=(a2*a68);
  a73=(a73-a74);
  a25=(a25*a60);
  a74=(a10*a25);
  a75=(a74/a20);
  a73=(a73+a75);
  a75=(a22*a73);
  a62=(a62+a75);
  a60=(a12*a60);
  a60=(a30*a60);
  a11=(a11*a60);
  a75=(a11/a20);
  a62=(a62+a75);
  a75=(a22/a23);
  a76=(a2*a73);
  a77=(a7*a68);
  a78=(a4*a72);
  a77=(a77+a78);
  a76=(a76-a77);
  a77=sin(a0);
  a78=(a77/a20);
  a79=(a78*a4);
  a0=cos(a0);
  a80=(a0/a20);
  a81=(a80*a7);
  a79=(a79+a81);
  a81=(a79*a27);
  a76=(a76+a81);
  a81=(a0/a20);
  a82=(a81*a4);
  a83=(a77/a20);
  a84=(a83*a7);
  a82=(a82-a84);
  a84=(a82*a41);
  a76=(a76+a84);
  a75=(a75*a76);
  a84=(a3*a75);
  a84=(a6*a84);
  a62=(a62+a84);
  a84=(a2+a2);
  a76=(a76/a23);
  a23=(a6*a76);
  a84=(a84*a23);
  a62=(a62+a84);
  a84=(a3*a76);
  a62=(a62-a84);
  a84=(a77/a20);
  a23=(a84*a17);
  a85=(a5*a54);
  a86=(a22*a72);
  a85=(a85+a86);
  a23=(a23-a85);
  a85=(a78*a28);
  a23=(a23+a85);
  a85=(a77/a20);
  a86=(a85*a31);
  a23=(a23+a86);
  a86=(a0/a20);
  a87=(a86*a37);
  a23=(a23+a87);
  a87=(a81*a42);
  a23=(a23+a87);
  a87=(a0/a20);
  a88=(a87*a44);
  a23=(a23+a88);
  a88=(a3*a23);
  a62=(a62+a88);
  a88=(a0/a20);
  a89=(a88*a16);
  a90=(a59+a68);
  a89=(a89-a90);
  a90=(a80*a27);
  a89=(a89+a90);
  a0=(a0/a20);
  a90=(a0*a33);
  a89=(a89+a90);
  a90=(a77/a20);
  a91=(a90*a36);
  a89=(a89-a91);
  a91=(a83*a41);
  a89=(a89-a91);
  a77=(a77/a20);
  a91=(a77*a46);
  a89=(a89-a91);
  a91=(a3*a89);
  a62=(a62+a91);
  a91=(a2+a2);
  a92=(a84*a16);
  a93=(a54+a72);
  a12=(a12*a1);
  a30=(a30*a12);
  a12=(a10*a30);
  a1=(a12/a20);
  a93=(a93+a1);
  a92=(a92-a93);
  a27=(a78*a27);
  a92=(a92+a27);
  a33=(a85*a33);
  a92=(a92+a33);
  a33=(a86*a36);
  a92=(a92+a33);
  a41=(a81*a41);
  a92=(a92+a41);
  a46=(a87*a46);
  a92=(a92+a46);
  a91=(a91*a92);
  a62=(a62+a91);
  a91=(a2+a2);
  a92=(a7*a5);
  a92=(a39+a92);
  a46=(a2*a63);
  a92=(a92+a46);
  a92=(a92/a20);
  a46=(a92/a20);
  a46=(a46*a58);
  a58=(a7*a22);
  a58=(a39+a58);
  a41=(a2*a65);
  a58=(a58+a41);
  a58=(a58/a20);
  a41=(a58/a20);
  a41=(a41*a67);
  a46=(a46+a41);
  a41=casadi_sq(a2);
  a41=(a7+a41);
  a41=(a41/a20);
  a67=(a41/a20);
  a67=(a67*a70);
  a46=(a46+a67);
  a67=(a4*a5);
  a67=(a19+a67);
  a70=(a3*a63);
  a67=(a67-a70);
  a67=(a67/a20);
  a70=(a67/a20);
  a70=(a70*a48);
  a46=(a46+a70);
  a70=(a4*a22);
  a70=(a19+a70);
  a48=(a3*a65);
  a70=(a70-a48);
  a70=(a70/a20);
  a48=(a70/a20);
  a48=(a48*a69);
  a46=(a46+a48);
  a48=casadi_sq(a3);
  a48=(a19+a48);
  a48=(a48/a20);
  a69=(a48/a20);
  a69=(a69*a12);
  a46=(a46+a69);
  a69=(a63/a20);
  a12=(a69/a20);
  a12=(a12*a61);
  a46=(a46-a12);
  a12=(a65/a20);
  a61=(a12/a20);
  a61=(a61*a74);
  a46=(a46-a61);
  a61=(a3/a20);
  a74=(a61/a20);
  a10=(a10*a60);
  a74=(a74*a10);
  a46=(a46+a74);
  a74=(a2/a20);
  a33=(a74/a20);
  a33=(a33*a11);
  a46=(a46-a33);
  a33=(a88/a20);
  a33=(a33*a47);
  a46=(a46-a33);
  a33=(a84/a20);
  a33=(a33*a18);
  a46=(a46-a33);
  a33=(a80/a20);
  a33=(a33*a49);
  a46=(a46-a33);
  a33=(a78/a20);
  a33=(a33*a29);
  a46=(a46-a33);
  a33=(a0/a20);
  a33=(a33*a50);
  a46=(a46-a33);
  a33=(a85/a20);
  a33=(a33*a32);
  a46=(a46-a33);
  a33=(a90/a20);
  a33=(a33*a38);
  a46=(a46+a33);
  a33=(a86/a20);
  a33=(a33*a51);
  a46=(a46-a33);
  a33=(a83/a20);
  a33=(a33*a43);
  a46=(a46+a33);
  a33=(a81/a20);
  a33=(a33*a52);
  a46=(a46-a33);
  a33=(a77/a20);
  a33=(a33*a45);
  a46=(a46+a33);
  a33=(a87/a20);
  a33=(a33*a53);
  a46=(a46-a33);
  a91=(a91*a46);
  a62=(a62+a91);
  a91=(a5/a8);
  a33=(a2*a55);
  a53=(a7*a59);
  a45=(a4*a54);
  a53=(a53+a45);
  a33=(a33-a53);
  a53=(a84*a4);
  a45=(a88*a7);
  a53=(a53+a45);
  a16=(a53*a16);
  a33=(a33+a16);
  a16=(a86*a4);
  a45=(a90*a7);
  a16=(a16-a45);
  a36=(a16*a36);
  a33=(a33+a36);
  a91=(a91*a33);
  a36=(a3*a91);
  a36=(a6*a36);
  a62=(a62-a36);
  a36=(a2+a2);
  a33=(a33/a8);
  a6=(a6*a33);
  a36=(a36*a6);
  a62=(a62-a36);
  a36=(a3*a33);
  a62=(a62-a36);
  if (res[0]!=0) res[0][3]=a62;
  a63=(a63*a54);
  a65=(a65*a72);
  a63=(a63+a65);
  a65=(a3+a3);
  a65=(a65*a1);
  a63=(a63-a65);
  a63=(a63-a55);
  a63=(a63-a73);
  a10=(a10/a20);
  a63=(a63-a10);
  a24=(a24*a75);
  a63=(a63+a24);
  a24=(a3+a3);
  a24=(a24*a75);
  a63=(a63-a24);
  a76=(a2*a76);
  a63=(a63-a76);
  a76=(a3+a3);
  a17=(a88*a17);
  a59=(a5*a59);
  a68=(a22*a68);
  a59=(a59+a68);
  a59=(a59+a71);
  a17=(a17-a59);
  a28=(a80*a28);
  a17=(a17+a28);
  a31=(a0*a31);
  a17=(a17+a31);
  a37=(a90*a37);
  a17=(a17-a37);
  a42=(a83*a42);
  a17=(a17-a42);
  a44=(a77*a44);
  a17=(a17-a44);
  a76=(a76*a17);
  a63=(a63+a76);
  a23=(a2*a23);
  a63=(a63+a23);
  a89=(a2*a89);
  a63=(a63+a89);
  a89=(a3+a3);
  a89=(a89*a46);
  a63=(a63+a89);
  a9=(a9*a91);
  a63=(a63-a9);
  a3=(a3+a3);
  a3=(a3*a91);
  a63=(a63-a3);
  a2=(a2*a33);
  a63=(a63-a2);
  if (res[0]!=0) res[0][4]=a63;
  a63=1.;
  a67=(a63-a67);
  a67=(a67*a21);
  a92=(a92*a57);
  a58=(a58*a66);
  a92=(a92+a58);
  a67=(a67-a92);
  a70=(a63-a70);
  a70=(a70*a64);
  a67=(a67+a70);
  a48=(a63-a48);
  a48=(a48*a30);
  a67=(a67+a48);
  a69=(a69*a13);
  a67=(a67+a69);
  a12=(a12*a25);
  a67=(a67+a12);
  a61=(a61*a60);
  a67=(a67-a61);
  a84=(a84*a19);
  a88=(a88*a39);
  a84=(a84+a88);
  a53=(a53*a5);
  a84=(a84+a53);
  a84=(a84*a15);
  a67=(a67+a84);
  a78=(a78*a19);
  a80=(a80*a39);
  a78=(a78+a80);
  a79=(a79*a22);
  a78=(a78+a79);
  a78=(a78*a26);
  a67=(a67+a78);
  a78=(a85*a19);
  a26=(a0*a39);
  a78=(a78+a26);
  a78=(a78*a14);
  a67=(a67+a78);
  a86=(a86*a19);
  a90=(a90*a39);
  a86=(a86-a90);
  a16=(a16*a5);
  a86=(a86+a16);
  a86=(a86*a35);
  a67=(a67+a86);
  a81=(a81*a19);
  a83=(a83*a39);
  a81=(a81-a83);
  a82=(a82*a22);
  a81=(a81+a82);
  a81=(a81*a40);
  a67=(a67+a81);
  a19=(a87*a19);
  a39=(a77*a39);
  a19=(a19-a39);
  a19=(a19*a34);
  a67=(a67+a19);
  if (res[0]!=0) res[0][5]=a67;
  a57=(a57+a66);
  a63=(a63-a41);
  a63=(a63*a56);
  a57=(a57+a63);
  a74=(a74*a60);
  a57=(a57+a74);
  a85=(a85*a4);
  a0=(a0*a7);
  a85=(a85+a0);
  a85=(a85*a14);
  a57=(a57+a85);
  a87=(a87*a4);
  a77=(a77*a7);
  a87=(a87-a77);
  a87=(a87*a34);
  a57=(a57+a87);
  if (res[0]!=0) res[0][6]=a57;
  return 0;
}

CASADI_SYMBOL_EXPORT int pusher_slider_model_dyn_expl_vde_adj(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int pusher_slider_model_dyn_expl_vde_adj_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int pusher_slider_model_dyn_expl_vde_adj_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void pusher_slider_model_dyn_expl_vde_adj_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int pusher_slider_model_dyn_expl_vde_adj_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void pusher_slider_model_dyn_expl_vde_adj_release(int mem) {
}

CASADI_SYMBOL_EXPORT void pusher_slider_model_dyn_expl_vde_adj_incref(void) {
}

CASADI_SYMBOL_EXPORT void pusher_slider_model_dyn_expl_vde_adj_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int pusher_slider_model_dyn_expl_vde_adj_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int pusher_slider_model_dyn_expl_vde_adj_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real pusher_slider_model_dyn_expl_vde_adj_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* pusher_slider_model_dyn_expl_vde_adj_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* pusher_slider_model_dyn_expl_vde_adj_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* pusher_slider_model_dyn_expl_vde_adj_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* pusher_slider_model_dyn_expl_vde_adj_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int pusher_slider_model_dyn_expl_vde_adj_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
