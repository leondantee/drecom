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

// Function: entry_0022e190
// Address: 0x22e190 - 0x22e284
void entry_0022e190_0x22e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e190_0x22e190");
#endif

    switch (ctx->pc) {
        case 0x22e204u: goto label_22e204;
        case 0x22e228u: goto label_22e228;
        default: break;
    }

    ctx->pc = 0x22e190u;

    // 0x22e190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e194: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e198: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e19c: 0x2402dfe7  addiu       $v0, $zero, -0x2019
    ctx->pc = 0x22e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x22e1a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e1a4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e1ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1b0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22e1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x22e1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e1b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1bc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x22e1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x22e1c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e1c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1c8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x22e1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x22e1cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e1d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22e1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e1d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e1dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22e1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e1e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1e8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22e1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e1ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22e1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e1f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e1f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22e1fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E1FCu;
    SET_GPR_U32(ctx, 31, 0x22E204u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E1FCu, 0x22E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E204u;
label_22e204:
    // 0x22e204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e208: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22e208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22e20c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22e210: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22e214: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22e214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22e218: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e21c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e21cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e220: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E220u;
    SET_GPR_U32(ctx, 31, 0x22E228u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E220u, 0x22E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E228u;
label_22e228:
    // 0x22e228: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e22c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22e22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22e230: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22e234: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22e234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22e238: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22e238u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22e23c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e244: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22e244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22e248: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e24c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x22e24cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x22e250: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x22e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x22e254: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x22e254u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e258: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e25c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x22e25cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e260: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e264: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x22e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22e268: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x22e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x22e26c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22e26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22e270: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x22e270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x22e274: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e278: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x22e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22e27c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x22e27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x22e280: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22e280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x22e284u;
}
