# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: game.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import common_pb2 as common__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='game.proto',
  package='',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\ngame.proto\x1a\x0c\x63ommon.proto\"\x16\n\x07TestReq\x12\x0b\n\x03\x61ge\x18\x01 \x01(\x05\"\t\n\x07TestAck*D\n\tGameMsgId\x12\x0f\n\x0bGame_MSG_ID\x10\x00\x12\x12\n\rGAME_TEST_REQ\x10\xd1\x0f\x12\x12\n\rGAME_TEST_ACK\x10\xd2\x0f\x62\x06proto3'
  ,
  dependencies=[common__pb2.DESCRIPTOR,])

_GAMEMSGID = _descriptor.EnumDescriptor(
  name='GameMsgId',
  full_name='GameMsgId',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='Game_MSG_ID', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='GAME_TEST_REQ', index=1, number=2001,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='GAME_TEST_ACK', index=2, number=2002,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=63,
  serialized_end=131,
)
_sym_db.RegisterEnumDescriptor(_GAMEMSGID)

GameMsgId = enum_type_wrapper.EnumTypeWrapper(_GAMEMSGID)
Game_MSG_ID = 0
GAME_TEST_REQ = 2001
GAME_TEST_ACK = 2002



_TESTREQ = _descriptor.Descriptor(
  name='TestReq',
  full_name='TestReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='age', full_name='TestReq.age', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=28,
  serialized_end=50,
)


_TESTACK = _descriptor.Descriptor(
  name='TestAck',
  full_name='TestAck',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=52,
  serialized_end=61,
)

DESCRIPTOR.message_types_by_name['TestReq'] = _TESTREQ
DESCRIPTOR.message_types_by_name['TestAck'] = _TESTACK
DESCRIPTOR.enum_types_by_name['GameMsgId'] = _GAMEMSGID
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TestReq = _reflection.GeneratedProtocolMessageType('TestReq', (_message.Message,), {
  'DESCRIPTOR' : _TESTREQ,
  '__module__' : 'game_pb2'
  # @@protoc_insertion_point(class_scope:TestReq)
  })
_sym_db.RegisterMessage(TestReq)

TestAck = _reflection.GeneratedProtocolMessageType('TestAck', (_message.Message,), {
  'DESCRIPTOR' : _TESTACK,
  '__module__' : 'game_pb2'
  # @@protoc_insertion_point(class_scope:TestAck)
  })
_sym_db.RegisterMessage(TestAck)


# @@protoc_insertion_point(module_scope)
