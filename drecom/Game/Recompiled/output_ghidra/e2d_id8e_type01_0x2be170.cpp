#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: e2d_id8e_type01
// Address: 0x2be170 - 0x2be3b8
void e2d_id8e_type01_0x2be170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id8e_type01_0x2be170");
#endif

    ctx->pc = 0x2be170u;

    // 0x2be170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be174: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2be174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2be178: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be17c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be17cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be180: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be184: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be18c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be190: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2be190u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2be194: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be198: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be19c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be1a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be1a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be1a8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2be1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2be1ac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2be1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2be1b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2be1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2be1b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be1b8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2be1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2be1bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be1c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be1c4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2be1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be1c8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2be1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be1cc: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2be1ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2be1d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2be1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2be1d4: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2be1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be1d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be1dc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be1e0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be1e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be1e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be1ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be1f0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2be1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2be1f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be1f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be1fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be200: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be204: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be208: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2be208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2be20c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2be20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2be210: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2be210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2be214: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be218: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2be218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2be21c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be220: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be224: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2be224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2be228: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2be228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be22c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2be22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be230: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2be230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2be234: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2be234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2be238: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2be238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be23c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2be23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2be240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be244: 0xa064011c  sb          $a0, 0x11C($v1)
    ctx->pc = 0x2be244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be248: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2be248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be24c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be250: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2be250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be254: 0x3c034218  lui         $v1, 0x4218
    ctx->pc = 0x2be254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16920 << 16));
    // 0x2be258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be25c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be260: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2be260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2be264: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2be264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x2be268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be26c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be270: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2be270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2be274: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2be274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x2be278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be27c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be280: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2be280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2be284: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2be284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2be288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be28c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be290: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2be290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2be294: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2be294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2be298: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2be298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2be29c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be29cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be2a4: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x2be2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2be2a8: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2be2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2be2ac: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2be2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2be2b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be2b8: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2be2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2be2bc: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2be2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2be2c0: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2be2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2be2c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be2cc: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2be2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x2be2d0: 0x3c033f70  lui         $v1, 0x3F70
    ctx->pc = 0x2be2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16240 << 16));
    // 0x2be2d4: 0x3463a3d7  ori         $v1, $v1, 0xA3D7
    ctx->pc = 0x2be2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41943);
    // 0x2be2d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be2d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be2e0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2be2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2be2e4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2be2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2be2e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be2f0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2be2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2be2f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2be2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2be2f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be2f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be2fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be300: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2be300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2be304: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2be304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2be308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be30c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be310: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2be310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2be314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2be314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be318: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be31c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2be31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2be320: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2be320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2be324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be328: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be32c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2be32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2be330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2be330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be334: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be338: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2be338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2be33c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2be33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2be340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be344: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be348: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2be348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2be34c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2be34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2be350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be354: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be358: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2be358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2be35c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2be35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2be360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be364: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be368: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2be368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2be36c: 0x3c033e03  lui         $v1, 0x3E03
    ctx->pc = 0x2be36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15875 << 16));
    // 0x2be370: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2be370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2be374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be378: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be37c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2be37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2be380: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x2be380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x2be384: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x2be384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x2be388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be38c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be390: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2be390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2be394: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2be394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be398: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be39c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2be39cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be3a0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2be3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2be3a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be3a8: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2be3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2be3ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2be3acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE3B8u;
}
