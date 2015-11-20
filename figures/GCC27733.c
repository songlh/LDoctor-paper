struct hash_entry {
-  unsigned int t;
+  HOST_WIDE_UINT t;
};

void mult_alg(... HOST_WIDE_UINT t, ...) {
  hash_index = t ...;
  if (alg_hash[hash_index].t == t ...)
  {
    //reuse previous results
  }
  //recursive computation
}
