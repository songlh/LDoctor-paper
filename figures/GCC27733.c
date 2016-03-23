struct hash_entry {
-  unsigned int t;
+  HOST_WIDE_UINT t;
};

void mult_alg(... HOST_WIDE_UINT t, ...) {
  hash_index = hash (t); 
  if (alg_hash[hash_index].t == t) 
  {
    //fast path: reuse previous results
  }else{
    //slow path: expensive recursive computation
    ...
    mult_alg (...);
  }
}
