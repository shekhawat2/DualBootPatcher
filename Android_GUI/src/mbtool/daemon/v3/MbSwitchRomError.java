// automatically generated by the FlatBuffers compiler, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class MbSwitchRomError extends Table {
  public static MbSwitchRomError getRootAsMbSwitchRomError(ByteBuffer _bb) { return getRootAsMbSwitchRomError(_bb, new MbSwitchRomError()); }
  public static MbSwitchRomError getRootAsMbSwitchRomError(ByteBuffer _bb, MbSwitchRomError obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public MbSwitchRomError __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }


  public static void startMbSwitchRomError(FlatBufferBuilder builder) { builder.startObject(0); }
  public static int endMbSwitchRomError(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
}

