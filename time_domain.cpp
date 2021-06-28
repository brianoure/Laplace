float integralTime(float lower_time,float upper_time, float element_time){
return ((lower_time + upper_time)/2)*element_time;
}
float differentialTime(float lower_time,float upper_time, float element_time){
return (upper_time - lower_time)/element_time;
}

