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

// Function: e2d_id8e_type02
// Address: 0x2be3c0 - 0x2be630
void e2d_id8e_type02_0x2be3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id8e_type02_0x2be3c0");
#endif

    ctx->pc = 0x2be3c0u;

    // 0x2be3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be3c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2be3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2be3c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be3cc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be3d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be3d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be3d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be3dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be3e0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2be3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2be3e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be3e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be3ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be3f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be3f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be3f8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2be3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2be3fc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2be3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2be400: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2be400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2be404: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be408: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2be408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2be40c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be410: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be414: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2be414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be418: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2be418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be41c: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2be41cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2be420: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2be420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2be424: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2be424u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be428: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be42c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be42cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be430: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be434: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be440: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2be440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2be444: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be448: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2be448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2be44c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2be44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2be450: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2be450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2be454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be458: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2be458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2be45c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2be45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2be460: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2be460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2be464: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2be464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2be468: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2be468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2be46c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2be46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be470: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2be470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2be474: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2be474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2be478: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2be478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2be47c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2be47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be480: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2be480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2be484: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2be484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2be488: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2be488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be48c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2be48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2be490: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be494: 0xa064011c  sb          $a0, 0x11C($v1)
    ctx->pc = 0x2be494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2be498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be49c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4a0: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2be4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be4a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2be4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be4a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4ac: 0xa064013c  sb          $a0, 0x13C($v1)
    ctx->pc = 0x2be4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 316), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be4b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2be4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be4b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4b8: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2be4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be4bc: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2be4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x2be4c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be4c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4c8: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2be4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2be4cc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2be4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2be4d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be4d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4d8: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2be4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2be4dc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2be4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2be4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be4e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4e8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2be4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2be4ec: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2be4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2be4f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be4f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be4f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be4f8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2be4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2be4fc: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2be4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2be500: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2be500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2be504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be508: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be50c: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x2be50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2be510: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2be510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2be514: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2be514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2be518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be51c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be520: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2be520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2be524: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2be524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2be528: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2be528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2be52c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be530: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be534: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x2be534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x2be538: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2be538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2be53c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2be53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2be540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be544: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be548: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2be548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2be54c: 0x3c034352  lui         $v1, 0x4352
    ctx->pc = 0x2be54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17234 << 16));
    // 0x2be550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be554: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be558: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2be558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2be55c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2be55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2be560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be564: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be568: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2be568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2be56c: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2be56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2be570: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2be570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2be574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be578: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be57c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x2be57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x2be580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2be580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be584: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be588: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2be588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2be58c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2be58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2be590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be594: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be598: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2be598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2be59c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2be59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be5a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be5a4: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2be5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2be5a8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2be5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2be5ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2be5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2be5b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be5b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be5b8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2be5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2be5bc: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2be5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2be5c0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2be5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2be5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be5c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be5cc: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2be5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2be5d0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2be5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2be5d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2be5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2be5d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be5dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be5e0: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2be5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2be5e4: 0x3c033d8b  lui         $v1, 0x3D8B
    ctx->pc = 0x2be5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15755 << 16));
    // 0x2be5e8: 0x34634396  ori         $v1, $v1, 0x4396
    ctx->pc = 0x2be5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17302);
    // 0x2be5ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be5f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be5f4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2be5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2be5f8: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x2be5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x2be5fc: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x2be5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x2be600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be604: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be608: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2be608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2be60c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2be60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be610: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be614: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2be614u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2be618: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2be618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2be61c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2be61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2be620: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2be620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2be624: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2be624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be628: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE630u;
}
