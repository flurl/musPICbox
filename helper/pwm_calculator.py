# pwm_calculator.py

# This script calculates the optimal PR2 value and TMR2 prescaler
# for a desired PWM frequency on a PIC16F18326 microcontroller.

# The core formula for PWM frequency is:
# F_PWM = F_OSC / (4 * (PR2 + 1) * TMR2_Prescaler)
# We rearrange this to solve for PR2:
# PR2 = (F_OSC / (4 * F_PWM * TMR2_Prescaler)) - 1

import math
import sys

def calculate_pwm_values(f_osc, f_pwm):
    """
    Calculates the best PR2 and TMR2 prescaler values for a given frequency,
    finding the closest approximation if an exact solution is not available.

    Args:
        f_osc (float): The microcontroller's oscillator frequency in Hz.
        f_pwm (float): The desired PWM frequency in Hz.

    Returns:
        tuple or None: A tuple containing (PR2, prescaler, actual_f_pwm)
                       if a solution is found, otherwise None.
    """

    # List of possible TMR2 prescaler values
    prescalers = [1, 4, 16, 64]
    
    # List to store all valid solutions and their errors
    solutions = []

    # Iterate through each possible prescaler to find a valid PR2 value
    for prescaler in prescalers:
        # Check if F_PWM is zero to prevent division by zero errors
        if f_pwm == 0:
            continue
            
        # Calculate the required PR2 value as a float
        pr2_float = (f_osc / (4.0 * f_pwm * prescaler)) - 1
        
        # We use this method for rounding to ensure it behaves as expected,
        # especially with potential floating-point precision issues.
        pr2 = int(pr2_float + 0.5)
        
        # Check if the calculated integer PR2 is within the valid range (0-255)
        if 0 <= pr2 <= 255:
            # Calculate the actual PWM frequency for this combination
            actual_f_pwm = f_osc / (4.0 * (pr2 + 1) * prescaler)
            
            # Calculate the absolute difference (error)
            error = abs(f_pwm - actual_f_pwm)
            
            # Store the solution
            solutions.append({
                'pr2': pr2,
                'prescaler': prescaler,
                'actual_f_pwm': actual_f_pwm,
                'error': error
            })
            
    # If no solutions were found, return None
    if not solutions:
        return None
        
    # Find the solution with the smallest error
    best_solution = min(solutions, key=lambda x: x['error'])
    
    # Return the best PR2, prescaler, and the actual frequency
    return (best_solution['pr2'], best_solution['prescaler'], best_solution['actual_f_pwm'])

if __name__ == "__main__":
    try:
        # Check if command-line arguments were provided
        if len(sys.argv) == 3:
            # Use arguments if they exist
            f_osc = float(sys.argv[1]) * 1_000_000
            f_pwm = float(sys.argv[2]) * 1_000
        else:
            # Fall back to interactive input
            f_osc_input = input("Enter the oscillator frequency in MHz (e.g., 16): ")
            f_pwm_input = input("Enter the desired PWM frequency in kHz (e.g., 20): ")

            f_osc = float(f_osc_input) * 1_000_000  # Convert MHz to Hz
            f_pwm = float(f_pwm_input) * 1_000     # Convert kHz to Hz

        # Call the calculation function
        result = calculate_pwm_values(f_osc, f_pwm)

        if result:
            pr2, prescaler, actual_f_pwm = result
            print(f"    PR2 = {pr2};")
            if prescaler == 1:
                ps_bits = 0b00
            elif prescaler == 4:
                ps_bits = 0b01
            elif prescaler == 16:
                ps_bits = 0b10
            else:
                ps_bits = 0b11
            print(f"    T2CON = T2CON & 0b11111100 | ({ps_bits} << _T2CON_T2CKPS_POSN); // prescaler {prescaler}")
            print("    break;\n")
#            print("""
#    duty_cycle_reg_val = 0.5*4*(PR2+1);
#    CCPR1L = duty_cycle_reg_val & 255;
#    CCPR1H = duty_cycle_reg_val >> 8;
#    break;""")
#            print(f"\nSolution Found!")
#            print(f"Optimal PR2 Value: {pr2}")
#            print(f"Recommended Prescaler: {prescaler}")
#            print(f"This will give you a PWM frequency of approximately {actual_f_pwm / 1000:.2f} kHz.")
            
            # Calculate the error percentage
            error_percent = (abs(f_pwm - actual_f_pwm) / f_pwm) * 100
#            print(f"The error from the desired frequency is {error_percent:.2f}%.")
        else:
            print(f"\nNo valid combination of PR2 (0-255) and prescaler was found for the given frequencies.")
            print(f"Try adjusting the oscillator or desired PWM frequency.")

    except ValueError:
        print("\nInvalid input. Please enter numerical values for frequencies.")
    except Exception as e:
        print(f"\nAn error occurred: {e}")

