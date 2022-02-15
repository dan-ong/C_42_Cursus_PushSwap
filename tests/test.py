from cgitb import text
import os
from os.path import join
import subprocess

pushwap_dir = os.getcwd()
test_dir = join(pushwap_dir, 'tests')

test_file = open(join(test_dir, "tests.txt"))
test_cases = test_file.readlines()

out = []
for test_case in test_cases:
	result = subprocess.run([f'{pushwap_dir}/push_swap'] + test_case[:-1].split(), stdout=subprocess.PIPE)
	text_output = result.stdout.decode('utf-8')
	num_lines = text_output.count('\n')
	out.append(num_lines)

print(out)