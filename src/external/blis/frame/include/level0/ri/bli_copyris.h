/*

   BLIS
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2014, The University of Texas at Austin

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name(s) of the copyright holder(s) nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_COPYRIS_H
#define BLIS_COPYRIS_H

// copyris

#define bli_scopyris( ar, ai, br, bi ) \
{ \
	(br) = (ar); \
    ( void )ai; ( void )bi; \
}

#define bli_dcopyris( ar, ai, br, bi ) \
{ \
	(br) = (ar); \
    ( void )ai; ( void )bi; \
}

#define bli_ccopyris( ar, ai, br, bi ) \
{ \
	(br) = (ar); \
	(bi) = (ai); \
}

#define bli_zcopyris( ar, ai, br, bi ) \
{ \
	(br) = (ar); \
	(bi) = (ai); \
}

#define bli_sscopyris( ar, ai, br, bi )  { bli_scopyris( ar, 0.0F, br, bi ); ( void )ai; }
#define bli_dscopyris( ar, ai, br, bi )  { bli_scopyris( ar, 0.0,  br, bi ); ( void )ai; }
#define bli_cscopyris( ar, ai, br, bi )  bli_scopyris( ar, ai,   br, bi )
#define bli_zscopyris( ar, ai, br, bi )  bli_scopyris( ar, ai,   br, bi )

#define bli_sdcopyris( ar, ai, br, bi )  { bli_dcopyris( ar, 0.0F, br, bi ); ( void )ai; }
#define bli_ddcopyris( ar, ai, br, bi )  { bli_dcopyris( ar, 0.0,  br, bi ); ( void )ai; }
#define bli_cdcopyris( ar, ai, br, bi )  bli_dcopyris( ar, ai,   br, bi )
#define bli_zdcopyris( ar, ai, br, bi )  bli_dcopyris( ar, ai,   br, bi )

#define bli_sccopyris( ar, ai, br, bi )  { bli_ccopyris( ar, 0.0F, br, bi ); ( void )ai; }
#define bli_dccopyris( ar, ai, br, bi )  { bli_ccopyris( ar, 0.0,  br, bi ); ( void )ai; }
#define bli_cccopyris( ar, ai, br, bi )  bli_ccopyris( ar, ai,   br, bi )
#define bli_zccopyris( ar, ai, br, bi )  bli_ccopyris( ar, ai,   br, bi )

#define bli_szcopyris( ar, ai, br, bi )  { bli_zcopyris( ar, 0.0F, br, bi ); ( void )ai; }
#define bli_dzcopyris( ar, ai, br, bi )  { bli_zcopyris( ar, 0.0,  br, bi ); ( void )ai; }
#define bli_czcopyris( ar, ai, br, bi )  bli_zcopyris( ar, ai,   br, bi )
#define bli_zzcopyris( ar, ai, br, bi )  bli_zcopyris( ar, ai,   br, bi )

#endif
