#pragma once

#ifndef _JSON_H_
#define _JSON_H_

#include "json.hpp"
#include <fstream>
#include <list>

class JsonHelper {

public:

//Open file and return Json Document
static json::JSON OpenFile(std::string fileName)
{
	std::ifstream inputStream(fileName);
	std::string str((std::istreambuf_iterator<char>(inputStream)), std::istreambuf_iterator<char>());
	json::JSON document = json::JSON::Load(str);

	return document;
}


//Get value of perticular key if valid 
static json::JSON GetValue(json::JSON document, std::string key)
{
	if (document.hasKey(key))
		return document[key];
	else
		return nullptr;
}

//Get list of json subobjects from json array
static std::list<json::JSON> GetValues(json::JSON document, const std::string key)
{
	std::list<json::JSON> jsonObjects;

	if (document.hasKey(key))
	{
		json::JSON json_subobjects = document[key];

		for (auto& json_subobject : json_subobjects.ArrayRange())
		{
			jsonObjects.push_back(json_subobject);
		}
	}
	else
	{
		std::cout << "No Values Found!" << std::endl;
	}
	
	return jsonObjects;
}

};

#endif // !_JSON_H_
