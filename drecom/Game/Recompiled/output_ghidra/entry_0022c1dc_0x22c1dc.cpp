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

// Function: entry_0022c1dc
// Address: 0x22c1dc - 0x22c328
void entry_0022c1dc_0x22c1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c1dc_0x22c1dc");
#endif

    switch (ctx->pc) {
        case 0x22c288u: goto label_22c288;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c30cu: goto label_22c30c;
        default: break;
    }

    ctx->pc = 0x22c1dcu;

    // 0x22c1dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c1e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c1e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c1e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c1ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c1f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c1f4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22c1f8: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x22c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x22c1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c200: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c204: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c208: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c20c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c21c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22c220: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x22c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x22c224: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22c228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c22c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c234: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22c238: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22c238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22c23c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c244: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c248: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c24c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22c250: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x22c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x22c254: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c25c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c260: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c264: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22c264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22c268: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c26c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c270: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c274: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x22c274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x22c278: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c27c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c280: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C280u;
    SET_GPR_U32(ctx, 31, 0x22C288u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C280u, 0x22C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C288u;
label_22c288:
    // 0x22c288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c28c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22c28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c290: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c294: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c298: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22c29c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x22c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x22c2a0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22c2a4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x22c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x22c2a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2ac: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22c2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c2b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c2b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c2bc: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22c2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22c2c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C2C0u;
    SET_GPR_U32(ctx, 31, 0x22C2C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C2C0u, 0x22C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2C8u;
label_22c2c8:
    // 0x22c2c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c2cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x22c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x22c2d0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x22c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x22c2d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22c2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c2d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22c2d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22c2dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c2e4: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x22c2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c2e8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22c2ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22c2f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c2f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c2f8: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22c2fc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22c300: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22c300u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22c304: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22C304u;
    SET_GPR_U32(ctx, 31, 0x22C30Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22C304u, 0x22C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C30Cu;
label_22c30c:
    // 0x22c30c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c310: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c314: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x22c314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x22c318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c31c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c320: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c324: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x22c324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    ctx->pc = 0x22c328u;
}
