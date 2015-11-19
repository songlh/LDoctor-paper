  for (sn=script->start, int offset=0; !sn; sn=sn->next){
    offset += sn->delta;
    if (offset == target)
       return sn;
  }
