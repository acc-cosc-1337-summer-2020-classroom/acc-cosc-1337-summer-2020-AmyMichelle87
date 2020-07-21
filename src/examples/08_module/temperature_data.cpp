//temperature_data.cpp
#include"temperature_data.h"

void TemperatureData::save_temps(std::vector<Temperature>& ts){

    std::ofstream file_out(fileName, std::ios_base::trunc);
for(auto temp: ts){                                                                 //This is all we need to write a list of temperatures to vector

    file_out<<temp.get_hour();
    file_out<<" "; 
    file_out<<temp.get_reading();
    file_out<<"\n";

}


    file_out.close();  //if we forget this statement, c++ still closes the file for us 


}

std::vector<Temperature> TemperatureData::get_temps()const{
    std::vector<Temperature> temps; 
    std::ifstream read_file(fileName);

    int hour; 
    double reading; 
    if(read_file.is_open()){
        while(read_file>>hour>>reading){
            Temperature temp(hour, reading); 
            temps.push_back(temp); 
        }
    } 
    read_file.close(); 

    return temps; 
}