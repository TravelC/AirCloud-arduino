void updateLedsForAQI(int aqi)
{
    int mappedValue = map(aqi, 0, 50, 96, 64); // when aqi < 50, mappedValue = 96, when aqi > 50, mappedValue = 64
    int s = 255;
    int v = 255;
    if (aqi < 100)
    {
        mappedValue = map(aqi, 50, 100, 64, 32);
    }
    else if (aqi < 150)
    {
        mappedValue = map(aqi, 100, 150, 32, 0);
    }
    else if (aqi < 200)
    {
        mappedValue = map(aqi, 150, 200, 255, 224);
    }
    else if (aqi < 300)
    {
        mappedValue = map(aqi, 200, 300, 224, 192);
    }
    else if (aqi < 400)
    {
        mappedValue = 359;
        v = 153;
    }
    else if (aqi >= 400)
    {
        mappedValue = 359;
        v = 102;
    }
    int *digitLeds = ledsForNumber(aqi);
    Serial.println("digitLeds");
    for (int i = 0; digitLeds[i] != -1; i++)
    {
        Serial.println(String(i) + "==: " + String(digitLeds[i]));
        leds[digitLeds[i]].setHSV(mappedValue, s, v);
        delay(100);
        FastLED.show();
    }
}