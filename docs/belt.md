---
layout: default
---

# Belt

I'm using a 5GT timing belt for power transmission. For all the details, you can refer to the table below:

<table>
  <tr>
    <td>
      <table border="1">
        <tr><th>Property</th><th>Value</th></tr>
        <tr><td>Name</td><td>5GT Timing Belt</td></tr>
        <tr><td>Tooth Pitch</td><td>5mm</td></tr>
        <tr><td>Belt Width</td><td>6mm</td></tr>
        <tr><td>Total Teeth</td><td>58</td></tr>
        <tr><td>Material</td><td>Neoprene</td></tr>
        <tr><td>Length</td><td>(**Total Teeth × Tooth Pitch**) = <b>290mm</b></td></tr>
      </table>
    </td>
    <td><img src="assets/images/belt.png" alt="GT2 Timing Belt" width="200"></td>
  </tr>
</table>


<br>

I spent a lot of time figuring out if I joining an open-ended timing belt is possible and if it could handle the load from the motor. Short answer is HELL NO!. It would always snap out and break. Took me 15-20 tries until I realized, it's time to cut the [main frame](../cad-files/main_frame.stl) and place a closed belt.


YOU CANNOT JOIN AN OPEN ENDED TIMING BELT TO MAKE IT A CLOSED ONE, NO MATTER WHAT.