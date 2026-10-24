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

// Function: e2d_id03_type03
// Address: 0x2ab220 - 0x2ab3a4
void e2d_id03_type03_0x2ab220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type03_0x2ab220");
#endif

    ctx->pc = 0x2ab220u;

    // 0x2ab220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab224: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ab224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ab228: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab230: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab234: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ab234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ab238: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab240: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab244: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ab244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ab248: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab24c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab24cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab250: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab254: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ab254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ab258: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ab258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab25c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab25cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab260: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab264: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ab264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ab268: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ab268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ab26c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab270: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab274: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ab274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ab278: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab27c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab27cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab280: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab284: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab28c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab290: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab294: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab298: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab29c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab2a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab2a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab2a8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab2ac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab2b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab2b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab2b8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab2b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab2bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ab2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab2c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ab2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab2c4: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2ab2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2ab2c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ab2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab2cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ab2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab2d0: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ab2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ab2d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab2d8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab2dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab2e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab2e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab2e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab2ec: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab2f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab2f4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab2f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab2fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab300: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab304: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab308: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab30c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab310: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab314: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab314u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab318: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab31c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ab31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ab320: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ab320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab324: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2ab324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab328: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ab328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ab32c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ab32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ab330: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ab330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ab334: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab338: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab33c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab340: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab348: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab34c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab34cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab350: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab354: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab354u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab358: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab35c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab364: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab368: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab36c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab374: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab378: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab37c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ab37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ab380: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ab380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ab384: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ab384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab388: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2ab388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab38c: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ab38cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ab390: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ab390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ab394: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ab394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ab398: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ab398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab39c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB3A4u;
}
