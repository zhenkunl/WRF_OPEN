/*$$$  SUBPROGRAM DOCUMENTATION BLOCK
C
C SUBPROGRAM:   ICVIDX
C   PRGMMR: ATOR             ORG: NP12       DATE: 2009-03-23
C
C ABSTRACT:  THIS ROUTINE COMPUTES A UNIQUE 1-DIMENSIONAL ARRAY
C   INDEX FROM 2-DIMENSIONAL INDICES.  THIS ALLOWS A 2-DIMENSIONAL
C   (ROW-BY-COLUMN) ARRAY TO BE STORED AND ACCESSED AS A
C   1-DIMENSIONAL ARRAY.
C
C PROGRAM HISTORY LOG:
C 2009-03-23  J. ATOR    -- ORIGINAL AUTHOR
C
C USAGE:    CALL ICVIDX( II, JJ, NUMJJ )
C   INPUT ARGUMENT LIST:
C     II       - INTEGER: FIRST (ROW) INDEX
C     JJ       - INTEGER: SECOND (COLUMN) INDEX
C     NUMJJ    - INTEGER: MAXIMUM NUMBER OF COLUMN INDICES
C
C   OUTPUT ARGUMENT LIST:
C     ICVIDX   - INTEGER: 1-DIMENSIONAL INDEX
C
C REMARKS:
C    THIS ROUTINE CALLS:        None
C    THIS ROUTINE IS CALLED BY: READMT   STSEQ
C                               Normally not called by any application
C                               programs.
C
C ATTRIBUTES:
C   LANGUAGE: C
C   MACHINE:  PORTABLE TO ALL PLATFORMS
C
C$$$*/

#include "bufrlib.h"

f77int icvidx( f77int *ii, f77int *jj, f77int *numjj )
{
	return ( *numjj * (*ii) ) + *jj;
}