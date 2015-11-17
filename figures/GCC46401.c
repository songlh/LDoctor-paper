+ if(warning_candidate_p(to)) {
   for (tmp = *to; tmp; tmp = tmp->next)
    if (candidate_equal_p (tmp->expr, add->expr)
         && !tmp->writer)
    { 
      ...
      tmp->writer = add->writer;
    }
+ }
