<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace test\fixtures\oldenum;

/**
 * Original thrift enum:-
 * MyEnum
 */
newtype MyEnumType = int;
final class MyEnum extends Enum<MyEnumType> {
  const MyEnumType   MyValue1 = 0;
  const MyEnumType   MyValue2 = 1;
  public static dict<int, string> $__names = dict[
    0 => 'MyValue1',
    1 => 'MyValue2',
  ];
  public static dict<string, int> $__values = dict[
    'MyValue1' => 0,
    'MyValue2' => 1,
  ];
}

