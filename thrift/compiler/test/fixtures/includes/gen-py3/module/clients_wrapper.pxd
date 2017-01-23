#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp cimport bool as cbool
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.set cimport set as cset
from libcpp.string cimport string
from libcpp.vector cimport vector

from thrift.py3.client cimport cTClientBase
from thrift.py3.folly cimport cFollyEventBase, cFollyTry, cFollyUnit

cimport module.types

cimport includes.types
cimport includes.clients_wrapper

cdef extern from "gen-py3/module/clients_wrapper.h" namespace "cpp2":
  pass