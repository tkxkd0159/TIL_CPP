enum Color { RED, GREEN, BLUE };
enum class TrafficLight { GREEN, YELLOW, RED };
Color background = RED; // 정상 
Color foreground = Color::BLUE; //정상 
Color fontColor = TrafficLight::RED; // 오류 
TrafficLight stop = RED; // 오류
TrafficLight go = TrafficLight::GREEN; // 정상
