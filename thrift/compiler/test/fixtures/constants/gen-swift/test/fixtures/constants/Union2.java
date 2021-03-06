/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.constants;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@ThriftUnion("union2")
public final class Union2
{
    private final Object value;
    private final int id;
    private final String name;


    @ThriftConstructor
    public Union2(final int i) {
        this.value = i;
        this.id = 1;
        this.name = "i";
    }

    @ThriftConstructor
    public Union2(final double d) {
        this.value = d;
        this.id = 2;
        this.name = "d";
    }

    @ThriftConstructor
    public Union2(final test.fixtures.constants.Struct1 s) {
        this.value = s;
        this.id = 3;
        this.name = "s";
    }

    @ThriftConstructor
    public Union2(final test.fixtures.constants.Union1 u) {
        this.value = u;
        this.id = 4;
        this.name = "u";
    }

    @ThriftField(value=1, name="i", requiredness=Requiredness.NONE)
    public int getI() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a i element!");
        }
        return (int) value;
    }

    public boolean isSetI() {
        return this.id == 1;
    }

    @ThriftField(value=2, name="d", requiredness=Requiredness.NONE)
    public double getD() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a d element!");
        }
        return (double) value;
    }

    public boolean isSetD() {
        return this.id == 2;
    }

    @ThriftField(value=3, name="s", requiredness=Requiredness.NONE)
    public test.fixtures.constants.Struct1 getS() {
        if (this.id != 3) {
            throw new IllegalStateException("Not a s element!");
        }
        return (test.fixtures.constants.Struct1) value;
    }

    public boolean isSetS() {
        return this.id == 3;
    }

    @ThriftField(value=4, name="u", requiredness=Requiredness.NONE)
    public test.fixtures.constants.Union1 getU() {
        if (this.id != 4) {
            throw new IllegalStateException("Not a u element!");
        }
        return (test.fixtures.constants.Union1) value;
    }

    public boolean isSetU() {
        return this.id == 4;
    }

    @ThriftUnionId
    public int getThriftId()
    {
        return this.id;
    }

    public String getThriftName()
    {
        return this.name;
    }

    @Override
    public String toString()
    {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", name)
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }
}
