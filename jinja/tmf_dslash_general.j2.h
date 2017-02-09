template <typename FT, int veclen, int soalen, bool compress12>
inline void tmdslash_plus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const unsigned int accumulate[8],
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b,
    const FT mu,
    const FT muinv) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tmdslash_minus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int gprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const unsigned int accumulate[8],
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b,
    const FT mu,
    const FT muinv) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tmdslash_achimbdpsi_plus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *chiBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBaseChi,
    const FT alpha,
    //		 const FT mu,
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b,
    const unsigned int accumulate[8]) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tmdslash_achimbdpsi_minus_vec(
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *xyBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *zfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tbBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *tfBase,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *chiBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    const int xbOffs[veclen],
    const int xfOffs[veclen],
    const int ybOffs[veclen],
    const int yfOffs[veclen],
    const int offs[veclen],
    const int gOffs[veclen],
    const int siprefdist1,
    const int siprefdist2,
    const int siprefdist3,
    const int siprefdist4,
    const int chiprefdist,
    const int gprefdist,
    const int pfyOffs[veclen],
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase2,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase3,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBase4,
    const typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock
        *pfBaseChi,
    const FT alpha,
    //		 const FT mu,
    const FT coeff_s,
    const FT coeff_t_f,
    const FT coeff_t_b,
    const unsigned int accumulate[8]) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

#ifdef QPHIX_QMP_COMMS

template <typename FT, int veclen, int soalen, bool compress12>
inline void tmface_finish_dir_plus(
    const FT *inbuf,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const int gOffs[veclen],
    const int offs[veclen],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const FT beta,
    const FT mu,
    const FT muinv,
    unsigned int mask,
    int dir) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

template <typename FT, int veclen, int soalen, bool compress12>
inline void tmface_finish_dir_minus(
    const FT *inbuf,
    const typename Geometry<FT, veclen, soalen, compress12>::SU3MatrixBlock
        *gBase,
    typename Geometry<FT, veclen, soalen, compress12>::FourSpinorBlock *oBase,
    const int gOffs[veclen],
    const int offs[veclen],
    const int hsprefdist,
    const int gprefdist,
    const int soprefdist,
    const FT beta,
    const FT mu,
    const FT muinv,
    unsigned int mask,
    int dir) {
    // BASE CASE TEMPLATE. Do nothing for now. Define this in
    // dslash_generated_c.h later
    fprintf(stderr, "Generic veclen and soalen not supported yet.\n");
    abort();
}

#endif // QPHIX_QMP_COMMS (outer)