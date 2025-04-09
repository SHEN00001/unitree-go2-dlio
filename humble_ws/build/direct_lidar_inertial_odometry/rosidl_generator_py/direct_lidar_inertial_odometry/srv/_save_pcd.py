# generated from rosidl_generator_py/resource/_idl.py.em
# with input from direct_lidar_inertial_odometry:srv/SavePCD.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SavePCD_Request(type):
    """Metaclass of message 'SavePCD_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('direct_lidar_inertial_odometry')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'direct_lidar_inertial_odometry.srv.SavePCD_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_pcd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_pcd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_pcd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_pcd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_pcd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SavePCD_Request(metaclass=Metaclass_SavePCD_Request):
    """Message class 'SavePCD_Request'."""

    __slots__ = [
        '_leaf_size',
        '_save_path',
    ]

    _fields_and_field_types = {
        'leaf_size': 'float',
        'save_path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.leaf_size = kwargs.get('leaf_size', float())
        self.save_path = kwargs.get('save_path', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.leaf_size != other.leaf_size:
            return False
        if self.save_path != other.save_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def leaf_size(self):
        """Message field 'leaf_size'."""
        return self._leaf_size

    @leaf_size.setter
    def leaf_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leaf_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'leaf_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._leaf_size = value

    @builtins.property
    def save_path(self):
        """Message field 'save_path'."""
        return self._save_path

    @save_path.setter
    def save_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'save_path' field must be of type 'str'"
        self._save_path = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SavePCD_Response(type):
    """Metaclass of message 'SavePCD_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('direct_lidar_inertial_odometry')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'direct_lidar_inertial_odometry.srv.SavePCD_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_pcd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_pcd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_pcd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_pcd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_pcd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SavePCD_Response(metaclass=Metaclass_SavePCD_Response):
    """Message class 'SavePCD_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SavePCD(type):
    """Metaclass of service 'SavePCD'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('direct_lidar_inertial_odometry')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'direct_lidar_inertial_odometry.srv.SavePCD')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__save_pcd

            from direct_lidar_inertial_odometry.srv import _save_pcd
            if _save_pcd.Metaclass_SavePCD_Request._TYPE_SUPPORT is None:
                _save_pcd.Metaclass_SavePCD_Request.__import_type_support__()
            if _save_pcd.Metaclass_SavePCD_Response._TYPE_SUPPORT is None:
                _save_pcd.Metaclass_SavePCD_Response.__import_type_support__()


class SavePCD(metaclass=Metaclass_SavePCD):
    from direct_lidar_inertial_odometry.srv._save_pcd import SavePCD_Request as Request
    from direct_lidar_inertial_odometry.srv._save_pcd import SavePCD_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
