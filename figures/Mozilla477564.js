char * sss_xph_generate(node_t* aNode)
{
   int count=0;
   for (n = aNode; n ; n = aNode->prev)
     if (n->localName == aNode->localName 
         && n->namespaceURI == aNode->namespaceURI) 
         count++;
   ...
}//called for every node in a list
