# Automatic Plant Watering System

This project automates the watering of plants using a moisture sensor and a relay to control a water pump. The system reads the moisture level of the soil and turns the pump on or off based on the moisture readings.

## Components Used

- Arduino (Any model)
- Moisture Sensor
- Relay Module
- Water Pump
- Connecting Wires

## How It Works

- The moisture sensor is powered by the snsrPwr pin (set to HIGH in the setup).
- The relay is controlled by the Relay pin.
- The moisture level is read from the analog pin A1 using the analogRead function.
- If the moisture level is above a threshold (900), the relay is turned off, stopping the water pump.
- If the moisture level is below the threshold, the relay is turned on, activating the water pump.
- The system continuously reads the moisture level every second (1000 ms delay).
