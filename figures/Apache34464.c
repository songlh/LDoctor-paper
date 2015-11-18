 //java.lang.String
 static int 
 indexOf(char[] source, int sourceCount,
         char[] target, int targetCount ) 
 {
   ...
   char first  = target[targetOffset];
   int max = sourceCount - targetCount;

   for (int i = 0; i <= max; i++) {
     // Look for first character.
     if (source[i] != first) {
       while (++i <= max && source[i] != first);
     }

     // Found first character
     //now look at the rest of v2
     if (i <= max) {
       int j = i + 1;
       int end = j + targetCount - 1;
       for (int k = 1; j < end && source[j] == 
                target[k]; j++, k++);

       if (j == end) {
         /* Found whole string. */
         return i ;
       }
     }
   }
   return -1;
 }

 //TelnetTask.java
 public void waitForString(...)
 {
+  int windowIndex = -s.length();
-  while (sb.toString().indexOf(s) == -1) {
+  while (windowIndex++ < 0 || 
+   sb.substring(windowIndex).indexOf(s) == -1){
     sb.append((char) is.read());
   }
 }
