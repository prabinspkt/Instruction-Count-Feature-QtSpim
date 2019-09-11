# Instruction-Count-Feature-QtSpim
Added Instruction Count Feature in QtSpim (Mips simulator)

This project was completed as part of Computer Organization II course taught by Dr. Gedare Bloom.

### Accomplishments
- Addition of instruction opcode to instruction count map and instruction opcode label to instruction name (stiring) map.
- Population of these maps when the Spim simulator runs. Return the final map with instruction(string) to count(int) mapping.
- Addition of a QWindow to display the instruction count result.
- Addtion of a button to trigger the QWindow.
- Maintain logic to restore the map to default state everytime the simulator is reinitialized.

### Challenges
- Understanding control flow of simulator run.
- Running the simulator added some files in the source code which prevented running the same simulator in another computer. This issue was resolved as we started using `git add <file_name>` for individual files instead of `git add .` for all files at once.

### Contributors
- Prabin Sapkota
- Anmol Gautam
- Suraj Upreti
