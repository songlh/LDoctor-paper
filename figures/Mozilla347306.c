  for (sn=script->start, offset=0; 
                      !sn; sn=sn->next){
    offset += sn->delta;
    if (offset == target)
       return sn;
  } //script is a linked list with one node for 
  //each byte-code instruction in a JavaScript file
