 int found = -1;
 while ( found < 0 ) {
 //Check if string source[] contains target[]
   char first  = target[0];
   int max = sourceLen - targetLen;

   for (int i = 0; i <= max; i++) {
     // Look for first character.
     if (source[i] != first) {
       while (++i <= max && source[i] != first);
     }

     // Found first character
     // now look at the rest
     if (i <= max) {
       int j = i + 1;
       int end = j + targetLen - 1;
       for (int k = 1; j < end && source[j] == 
                target[k]; j++, k++);

       if (j == end) {
         /* Found whole string target. */
         found = i;
         break;
       }
     }
   }

   //append another character; try again 
   source[sourceLen++] = getchar();
 }
