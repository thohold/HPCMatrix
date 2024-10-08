#!/bin/bash
#SBATCH --job-name=spmv_test     # Job name
#SBATCH --output=spmv_output.txt # Output file
#SBATCH --ntasks=1               # Number of tasks (1 core)
#SBATCH --mem=4GB                # Memory request
#SBATCH --time=00:30:00          # Time limit (hh:mm:ss)
#SBATCH --partition=short        # Partition

# Load the necessary modules
module load gcc/10.2.0 gsl/2.6

# Run your compiled program
./spmv