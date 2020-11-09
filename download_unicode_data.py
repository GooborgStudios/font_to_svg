# -*- coding: utf-8 -*-

# download_unicode_data.py - font_to_svg
# Gooborg Studios (www.gooborg.com) © 2018-2020, MIT License.
# Download and parse the Unicde XML to obtain character and block data.

from urllib.request import urlopen
from tempfile import NamedTemporaryFile
from shutil import unpack_archive
from xml.etree.cElementTree import iterparse
import json

def download_file():
	zipurl = 'https://www.unicode.org/Public/UCD/latest/ucdxml/ucd.all.flat.zip'
	print('Downloading {0}...'.format(zipurl))
	with urlopen(zipurl) as zipresp, NamedTemporaryFile() as tfile:
		tfile.write(zipresp.read())
		tfile.seek(0)
		print('Extracting XML file...')
		unpack_archive(tfile.name, '/tmp/ucd', format = 'zip')

def parse_xml():
	chars = []
	blocks = []

	print('Parsing XML...')
	context = iter(iterparse(open('/tmp/ucd/ucd.all.flat.xml', 'rb')))

	for event, elem in context:
		if event == "end":
			tagname = elem.tag.split('}')[1]

			if tagname == 'char':
				if (elem.get('cp')):
					chars.append({
						'code': elem.get('cp'),
						'name': elem.get('na')
					})
			elif tagname == 'block':
				blocks.append({
					'name': elem.get('name'),
					'range': [
						int(elem.get('first-cp'), 16),
						int(elem.get('last-cp'), 16)
					]
				})

			elem.clear()

	print('Compressing...')

	data = {}

	for block in blocks:
		data[block['name']] = list(filter(
			lambda x: int(x['code'], 16) >= block['range'][0] and
					  int(x['code'], 16) <= block['range'][1],
			chars
		))

	return data

def save_output(data):
	print('Saving unicode.json...')
	with open('unicode.json', 'w', encoding='utf8') as file:
		json.dump(data, file)

if __name__ == '__main__':
	download_file()
	save_output(parse_xml())
