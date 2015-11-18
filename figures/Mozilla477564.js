char * sss_xph_generate(node_t* aNode)
{
   ...
   for (n = aNode; n ; n = aNode->prev)
     if (n->localName == aNode->localName 
         && n->namespaceURI == aNode->namespaceURI) 
         count++;
     ...
}//this function is called for every node aNode
