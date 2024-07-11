#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pie 3.141


//RLC circuit//
int main()
{  printf("**************************************************RCL CIRCUIT CALCULATIONS**********************************************\n\n");
    double capacitor,inductor,resistor,acSignal,frequence,capacitiveReactance,inductiveReactance,impedance,I_rms,V_resistor,V_inductor,V_capacitor,power,resonantFrequency;
   printf("Enter the value of capacitor in (micro farads): %lf\n",capacitor);
   scanf("%lf",&capacitor);
   printf("Enter the value of inductor in (mH): %lf\n",inductor);
   scanf("%lf",&inductor);
   printf("Enter the value of resistor in (ohms): %lf\n",resistor);
   scanf("%lf",&resistor);
   printf("Enter the value of ac signal in (volts): %lf\n",acSignal);
   scanf("%lf",&acSignal);
   printf("Enter the value of frequence in (Hz): %lf\n",frequence);
   scanf("%lf",&frequence);

   capacitiveReactance = 1 / (2 * pie * frequence * capacitor);
   inductiveReactance  = 2 * pie * frequence * inductor;
   impedance = sqrt(pow(resistor,2)+ pow((capacitiveReactance - inductiveReactance),2));
   printf("\nThe impedance is: %.2lf ohms\n",impedance);


   I_rms = acSignal / impedance;
   printf("The rms current in the circuit is: %.2lf amps\n",I_rms);

   V_resistor = I_rms * resistor;
   printf("voltage across the resistor is: %.2lf volts\n",V_resistor);

   V_inductor = I_rms * inductiveReactance;
   printf("Voltage across the inductor is: %.2lf volts\n",V_inductor);

   V_capacitor = I_rms * capacitiveReactance;
   printf("Voltage across the capacitor is: %.2lf volts\n",V_capacitor);

   power = pow(I_rms,2)* resistor;
   printf("The total power consumed in the circuit is: %.2lf watts\n",power);

   resonantFrequency = 1 / (2 * pie * sqrt(inductor * capacitor));
   printf("The resonant frequency of the circuit is: %.2lf Hz\n",resonantFrequency);

    return 0;
}
