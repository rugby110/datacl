// START FUNC DECL
int sort4___DIRECTION_____TYPE__(
				 const void *ii, 
				 const void *jj
				 )
// STOP FUNC DECL
{ 
  __TYPE2__ val11, val12, val13, val14, val21,val22, val23, val24;
  __TYPE2__ *ptr1, *ptr2;
  ptr1 = (__TYPE2__ *)ii;
  ptr2 = (__TYPE2__ *)jj;

  val11 = *ptr1++; /* first element of first value */
  val12 = *ptr1++; /* second element of first value */
  val13 = *ptr1++; /* third element of first value */
  val14 = *ptr1++; /* fourth element of first value */
  val21 = *ptr2++; /* first element of second value */
  val22 = *ptr2++; /* second element of second value */
  val23 = *ptr2++; /* third element of second value */
  val24 = *ptr2++; /* fourth element of second value */

  /* Output in __DIRECTION__ order */
  if ( val11 __COMPARATOR1__ val21 )  {
    return (1);
  }
  else if ( val11 __COMPARATOR2__ val21 ) {
    return (-1);
  }
  else {
    if ( val12 __COMPARATOR1__ val22 )  {
      return (1);
    }
    else if ( val12 __COMPARATOR2__ val22 ) {
      return (-1);
    }
    else {
      if ( val13 __COMPARATOR1__ val23 )  {
	return (1);
      }
      else if ( val13 __COMPARATOR2__ val23 ) {
	return (-1);
      }
      else {
        if ( val14 __COMPARATOR1__ val24 )  {
  	  return (1);
        }
        else if ( val14 __COMPARATOR2__ val24 ) {
	  return (-1);
        }
	else {
	  return(0);
	}
      }
    }
  }
}
