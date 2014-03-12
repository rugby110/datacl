// START FUNC DECL
int sort_asc_F8(
		       const void *ii, 
		       const void *jj
		       )
// STOP FUNC DECL
{ 
  double val1, val2;
  double *ptr1, *ptr2;
  ptr1 = (double *)ii;
  ptr2 = (double *)jj;
  val1 = *ptr1;
  val2 = *ptr2;

  /* Output in asc order */
  if ( val1 > val2 )  {
    return (1);
  }
  else if ( val1 < val2 ) {
    return (-1);
  }
  else {
    return(0);
  }
}
