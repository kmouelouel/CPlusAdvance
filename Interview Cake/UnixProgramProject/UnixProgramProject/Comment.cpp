 
/*	 found = line.find("do");
			  if (found!=std::string::npos)
				  {  line=" "+line;
					  output<<line<<endl;
					   cout<<line<<endl; 
					   std::getline(input,line);
						line= DeletSpaceInBEginning(line);
					  found = line.find("done");
			   while(found==std::string::npos)// looking for donr
			   { 
					found2 = line.find("if");
			  if (found2!=std::string::npos)
				  {  line=" "+line;
					  output<<line<<endl;
					   cout<<line<<endl; 
					   std::getline(input,line);
						line= DeletSpaceInBEginning(line);
						 found3 = line.find("elif");
						 found4 = line.find("else");
						if(found3!=std::string::npos ||found3!=std::string::npos )
						{ output<<line<<endl;
					   cout<<line<<endl;
						} 
			
						}
					  found2 = line.find("fi");
			   while(found2==std::string::npos)// looking for donr
			   { 
						 line=" "+line;
					  output<<line<<endl;
					   cout<<line<<endl; 
					   std::getline(input,line);
						line= DeletSpaceInBEginning(line);
			
					   found2 = line.find("if");
			   }

			 
					   found = line.find("done");
			   }
				line=" "+line;
					  output<<line<<endl;
					   cout<<line<<endl; 
			  }
			  else
			  { 
		
				line=" "+line;
					  output<<line<<endl;
					   cout<<line<<endl; 
			  }
		*/		  


/* else { 
             found = line.find("if");
            if (found!=std::string::npos)
           {line=" "+line;
	  	    output<<line<<endl;
		    cout<<line<<endl;
	        }
	        else {
			  found = line.find("elif");
			  if (found!=std::string::npos)
				   {line=" "+line;
	  			  output<<line<<endl;
				   cout<<line<<endl;
	  
				 }
			  else {
					  found = line.find("else");
					  if (found!=std::string::npos)
					   {line=" "+line;
	  				  output<<line<<endl;
					  cout<<line<<endl;}
					else { 
					   found = line.find("fi");
					   if (found!=std::string::npos)
					   {line=" "+line;
	  				   output<<line<<endl;
	 				   cout<<line<<endl;
						}
					  else {
					   output<<line<<endl;
					   cout<<line<<endl;  
						 } 
			  }
	       }
	  }
  }*/
	   /* if((line[0]=='d'&&line[1]=='o')|| 
			(line[0]=='e'&& line[1]=='l'&&line[2]=='s'&&line[3]=='e')
			||(line[0]=='f'&&line[1]=='i')||
			(line[0]=='b'&& line[1]=='r'&&line[2]=='e'&&line[3]=='a' &&line[4]=='k')||
			(line[0]=='d'&& line[1]=='o'&&line[2]=='n'&&line[3]=='e')||
			(line[0]=='f'&&line[1]=='i'))
		{   
		 line=" "+line;
		  output<<line<<endl;
		   cout<<line<<endl;  
		}
		else{
		 word=FirstWord(line);	  
		if(word=="if" || word=="elfi" ||word=="then" ) 
		{ line=" "+line;
		  output<<line<<endl;
		   cout<<line<<endl;  
        }   
		else {
		  output<<line<<endl; 
	      cout<<line<<endl;           
         
		}
	 } 

	 */


/*string  FindBlockIfFI(string LineIN)
{
	 
	 /*
	 
	std::size_t found2 = LineIN.find("if");
			 if (found2!=std::string::npos)
					{  LineIN=" "+LineIN;
			  output<<line<<endl;
			   cout<<LineIN<<endl; 
			    line= DeletSpaceInBEginning(line);
				 std::size_t  found3 = line.find("fi");
			   while(found3==std::string::npos)
			  {   
				 line=" "+line;
				  output<<line<<endl;
			   cout<<line<<endl; 
			   std::getline(input,line);
				line= DeletSpaceInBEginning(line);
				std::size_t found2 = line.find("fi");
			  
	           }
			 }
			 */
//}*/