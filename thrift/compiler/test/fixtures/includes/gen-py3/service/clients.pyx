#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector as vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.client cimport EventBase, make_py3_client, py3_get_exception
from thrift.py3.client import get_event_base
from thrift.py3.folly cimport cFollyEventBase, cFollyTry, cFollyUnit, c_unit

import asyncio
import sys
import traceback

cimport service.types
import service.types

from service.clients_wrapper cimport move
cimport module.types
import module.types
cimport module.clients
import module.clients
cimport includes.types
import includes.types
cimport includes.clients
import includes.clients

from service.clients_wrapper cimport cMyServiceAsyncClient, cMyServiceClientWrapper


cdef void MyService_query_callback(
        PyObject* future,
        cFollyTry[cFollyUnit] result) with gil:
    cdef object pyfuture = <object> future
    cdef cFollyUnit citem
    if result.hasException():
        try:
            result.exception().throwException()
        except:
            pyfuture.loop.call_soon_threadsafe(pyfuture.set_exception, sys.exc_info()[1])
    else:
        citem = c_unit;
        pyfuture.loop.call_soon_threadsafe(pyfuture.set_result, None)


cdef class MyService:

    def __init__(self, *args, **kwds):
        raise TypeError('Use MyService.connect() instead.')

    def __cinit__(self, loop):
        self.loop = loop

    @staticmethod
    cdef _service_MyService_set_client(MyService inst, shared_ptr[cMyServiceClientWrapper] c_obj):
        """So the class hierarchy talks to the correct pointer type"""
        inst._service_MyService_client = c_obj

    @staticmethod
    async def connect(str host, int port, loop=None):
        loop = loop or asyncio.get_event_loop()
        future = loop.create_future()
        future.loop = loop
        eb = await get_event_base(loop)
        cdef string _host = host.encode('UTF-8')
        make_py3_client[cMyServiceAsyncClient, cMyServiceClientWrapper](
            (<EventBase> eb)._folly_event_base,
            _host,
            port,
            0,
            made_MyService_py3_client_callback,
            future)
        return await future

    def query(
            self,
            arg_s,
            arg_i):
        future = self.loop.create_future()
        future.loop = self.loop

        deref(self._service_MyService_client).query(
            deref((<module.types.MyStruct>arg_s).c_MyStruct),
            deref((<includes.types.Included>arg_i).c_Included),
            MyService_query_callback,
            future)
        return future


cdef void made_MyService_py3_client_callback(
        PyObject* future,
        cFollyTry[shared_ptr[cMyServiceClientWrapper]] result) with gil:
    cdef object pyfuture = <object> future
    if result.hasException():
        try:
            result.exception().throwException()
        except:
            pyfuture.loop.call_soon_threadsafe(pyfuture.set_exception, sys.exc_info()[1])
    else:
        pyclient = <MyService> MyService.__new__(MyService, pyfuture.loop)
        MyService._service_MyService_set_client(pyclient, result.value())
        pyfuture.loop.call_soon_threadsafe(pyfuture.set_result, pyclient)

