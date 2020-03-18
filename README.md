<h1>James The Gardener</h1>

James is an automated garden which waters your plants automatically when needed.

<h3>Moisture Sensor</h3>

<p>
The soil moisture is measured by measuring the electric resistance between two metal poles buried in the soil. The more the moisture, the lower the resistance. This data is sent to the Arduino controller as an analog signal.
</p>

<h3>Arduino Controller</h3>

<p>
The Arduino controller is programmed to send power to the servo motor that controls the water flow when the resistance rises above a certain level, which is calibrated based on soil and plant type.
</p>

<h3> Delivery</h3>

<p>
The water is drawn form a reservoir through a thin pipe. When the servo receives the signal, it turns the pipe down, using gravity to siphon water into the soil for two seconds, and then returns to its initial position, waiting for another signal.
</p>
