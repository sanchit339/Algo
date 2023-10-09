interface PersonGenderProperties{
    gender : string , 
    orientation : string ,
    pronouns : string
}

interface perSonInterFace extends PersonGenderProperties{ // extended
    name : string , 
    age : number
}

// or 
interface personInfo {  // used 
    name : string , 
    age : number , 
    genderInfo : PersonGenderProperties
}