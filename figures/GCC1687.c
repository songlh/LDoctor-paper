// tree-inline.c
static void
expand_calls_inline (tp, id)
{
-  walk_tree (tp, expand_call_inline, 
-                            id, NULL);
+  walk_tree (tp, expand_call_inline, 
+                 id, id->tree_pruner);
}

tree
walk_tree (tp, func, data, htab_)
     tree *tp;
     walk_tree_fn func;
     void *data;
     void *htab_;
{
  if (htab)
  {
    void **slot;

    /* Don't walk the same tree twice, 
       if the user has requested
       that we avoid doing so.  */
    slot = htab_find_slot (htab, *tp, INSERT);
    if (*slot)
      return NULL_TREE;
  }
  ...
  /* Walk over all the sub-trees 
     of this operand.  */
  len = first_rtl_op (code);

  for (i = 0; i < len; ++i)
  {
    result = walk_tree (&(TREE_OPERAND (*tp, i)), 
                               func, data, htab);
    if (result)					
      return result;
  }
  ...
}
