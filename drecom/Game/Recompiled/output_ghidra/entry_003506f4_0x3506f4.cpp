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

// Function: entry_003506f4
// Address: 0x3506f4 - 0x3507f0
void entry_003506f4_0x3506f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003506f4_0x3506f4");
#endif

    switch (ctx->pc) {
        case 0x350718u: goto label_350718;
        case 0x3507a8u: goto label_3507a8;
        case 0x3507c4u: goto label_3507c4;
        default: break;
    }

    ctx->pc = 0x3506f4u;

    // 0x3506f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3506f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3506f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506fc: 0x8c500368  lw          $s0, 0x368($v0)
    ctx->pc = 0x3506fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350700: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x350700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x350704: 0x24063c1e  addiu       $a2, $zero, 0x3C1E
    ctx->pc = 0x350704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15390));
    // 0x350708: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35070c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35070cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350710: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350710u;
    SET_GPR_U32(ctx, 31, 0x350718u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350710u, 0x350718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350718u;
label_350718:
    // 0x350718: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35071c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350720: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x350720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x350724: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35072c: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x35072cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350730: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350734: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350738: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x350738u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x35073c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x35073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x350740: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x350740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350748: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35074c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350750: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x350750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350758: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35075c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x35075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x350760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350764: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350768: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x350768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x35076c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35076cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350770: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350774: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x350774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x350778: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x350778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x35077c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x35077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x350780: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x350780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x350784: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350788: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x350788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35078c: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x35078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x350790: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x350790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x350794: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x350794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x350798: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x350798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35079c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x35079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3507a0: 0xc05c848  jal         func_172120
    ctx->pc = 0x3507A0u;
    SET_GPR_U32(ctx, 31, 0x3507A8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3507A0u, 0x3507A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507A8u;
label_3507a8:
    // 0x3507a8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3507a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3507ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3507acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3507b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3507b4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x3507b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3507b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3507b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3507bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3507BCu;
    SET_GPR_U32(ctx, 31, 0x3507C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3507BCu, 0x3507C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507C4u;
label_3507c4:
    // 0x3507c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3507c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507c8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x3507c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x3507cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3507ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507d0: 0x247410b0  addiu       $s4, $v1, 0x10B0
    ctx->pc = 0x3507d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x3507d4: 0x8e8400f0  lw          $a0, 0xF0($s4)
    ctx->pc = 0x3507d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x3507d8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x3507d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x3507dc: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x3507dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3507e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3507e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3507e4: 0xae8300f0  sw          $v1, 0xF0($s4)
    ctx->pc = 0x3507e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 3));
    // 0x3507e8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3507E8u;
    {
        const bool branch_taken_0x3507e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3507e8) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x3507F0u;
}
