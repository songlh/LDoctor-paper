+ if(warning_candidate_p(add->expr)) {
   for (tmp = *to; tmp; tmp = tmp->next)
    if (candidate_equal_p (tmp->expr, add->expr)
         && !tmp->writer)
    { 
      ...
      tmp->writer = add->writer;
    }
+ }
