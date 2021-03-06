/*
© [2013] LinkedIn Corp. All rights reserved.
Licensed under the Apache License, Version 2.0 (the "License"); you may
not use this file except in compliance with the License. You may obtain
a copy of the License at  http://www.apache.org/licenses/LICENSE-2.0
 
Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an "AS IS"
BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied.
*/
// START FUNC DECL
void
cum_I4_to_I4( 
			    int *in, 
			    long long nR, 
			    int *out
			    )
// STOP FUNC DECL
{
  int  inval; 
  int newval, prevval;
  *out = *in++;
  prevval = *out++;
  for ( long long i = 1; i < nR; i++ ) { 
    inval = *in++;
    newval = inval + prevval;
    *out  = (int) newval;
    out++;
    prevval = newval;
  }
}

