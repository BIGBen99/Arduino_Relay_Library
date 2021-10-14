# Arduino_Relay_Library
Arduino library for Relay

================================================================================
# Relay(relayPin)
# Description
A call to Relay(relayPin) creates a new Relay object. By default, Relay is closed on LOW state.
# Parameters
relayPin: the digital pin (0-13 on Arduino Uno) on which the relay is plugged

================================================================================
# Relay: open
# Description
Open the relay
# Parameters
[none]
# Returns
[none]

================================================================================
# Relay: close
# Description
Close the relay
# Parameters
[none]
# Returns
[none]

================================================================================
# Relay: closeOn(boolean state)
# Description
Define if the relay is closed when the relayPin is HIGH or LOW
# Parameters
state: the state (HIGH or LOW) the relayPin should be for the relay to be closed
# Returns
[none]

================================================================================
# Example
<pre>
&#35;include &lt;Relay.h&gt;

Relay relay(4);

void setup() {
  Serial.begin(9600);
}

void loop() {
// TODO : write an example for driving a relay
}
</pre>
