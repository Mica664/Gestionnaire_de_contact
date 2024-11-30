# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Gestionnaire_de_contact_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Gestionnaire_de_contact_autogen.dir\\ParseCache.txt"
  "Gestionnaire_de_contact_autogen"
  )
endif()
