
struct preference {
	bool likesMusic : 1;
	bool hasHair:1;
	bool hasInternet : 1;
	bool hasDinosaur : 1;
	unsigned int numberOfChildren :4;
}homer;
void IntPreference(){
	homer.likesMusic=true;
	homer.hasHair=false;
	homer.hasInternet=true;
	homer.hasDinosaur=false;
	homer.numberOfChildren=3;
	if (homer.likesMusic) printf("homer likes music\n");
	if(homer.hasHair) printf("homer has hair\n");
	if(homer.hasInternet) printf("homer has net\n");
	if(homer.hasDinosaur) printf("homer has a dinosaur\n");
	printf("homer has %d children\n",homer.numberOfChildren);
}