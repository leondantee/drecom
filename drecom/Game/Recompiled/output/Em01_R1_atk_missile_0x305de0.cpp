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

// Function: Em01_R1_atk_missile
// Address: 0x305de0 - 0x306540
void Em01_R1_atk_missile_0x305de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_missile_0x305de0");
#endif

    switch (ctx->pc) {
        case 0x305e44u: goto label_305e44;
        case 0x305e8cu: goto label_305e8c;
        case 0x305ea0u: goto label_305ea0;
        case 0x305ec8u: goto label_305ec8;
        case 0x305edcu: goto label_305edc;
        case 0x305ef0u: goto label_305ef0;
        case 0x305f00u: goto label_305f00;
        case 0x305f68u: goto label_305f68;
        case 0x306014u: goto label_306014;
        case 0x30605cu: goto label_30605c;
        case 0x306084u: goto label_306084;
        case 0x306090u: goto label_306090;
        case 0x3060c4u: goto label_3060c4;
        case 0x3061d4u: goto label_3061d4;
        case 0x3061f8u: goto label_3061f8;
        case 0x30620cu: goto label_30620c;
        case 0x30621cu: goto label_30621c;
        case 0x30622cu: goto label_30622c;
        case 0x30623cu: goto label_30623c;
        case 0x306278u: goto label_306278;
        case 0x306310u: goto label_306310;
        case 0x306330u: goto label_306330;
        case 0x306350u: goto label_306350;
        case 0x30648cu: goto label_30648c;
        default: break;
    }

    ctx->pc = 0x305de0u;

    // 0x305de0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x305de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x305de4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x305de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x305de8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x305de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x305dec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x305decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x305df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305df4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305df8: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x305df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x305dfc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e00: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x305e00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305e04: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x305e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x305e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305e0c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x305E0Cu;
    {
        const bool branch_taken_0x305e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x305e0c) {
            ctx->pc = 0x305E60u;
            goto label_305e60;
        }
    }
    ctx->pc = 0x305E14u;
    // 0x305e14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305E14u;
    {
        const bool branch_taken_0x305e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e14) {
            ctx->pc = 0x305E24u;
            goto label_305e24;
        }
    }
    ctx->pc = 0x305E1Cu;
    // 0x305e1c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x305E1Cu;
    {
        const bool branch_taken_0x305e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e1c) {
            ctx->pc = 0x305F44u;
            goto label_305f44;
        }
    }
    ctx->pc = 0x305E24u;
label_305e24:
    // 0x305e24: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e28: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e2c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x305e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x305e30: 0x2406283d  addiu       $a2, $zero, 0x283D
    ctx->pc = 0x305e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10301));
    // 0x305e34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305e38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305e3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x305E3Cu;
    SET_GPR_U32(ctx, 31, 0x305E44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x305E3Cu, 0x305E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E44u;
label_305e44:
    // 0x305e44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305e44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305e48: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x305e48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e4c: 0xa6401278  sh          $zero, 0x1278($s2)
    ctx->pc = 0x305e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x305e50: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e54: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x305e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x305e58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305e5c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x305e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_305e60:
    // 0x305e60: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e64: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x305e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e68: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x305e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x305e6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x305e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x305e70: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x305e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x305e74: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x305e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x305e78: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x305e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x305e7c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x305e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x305e80: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x305e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x305e84: 0xc05c848  jal         func_172120
    ctx->pc = 0x305E84u;
    SET_GPR_U32(ctx, 31, 0x305E8Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x305E84u, 0x305E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E8Cu;
label_305e8c:
    // 0x305e8c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305e90: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x305e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305e94: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x305e94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x305e98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x305E98u;
    SET_GPR_U32(ctx, 31, 0x305EA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x305E98u, 0x305EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EA0u;
label_305ea0:
    // 0x305ea0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ea4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x305ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x305ea8: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x305ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305eac: 0x86031278  lh          $v1, 0x1278($s0)
    ctx->pc = 0x305eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x305eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305eb4: 0xa6031278  sh          $v1, 0x1278($s0)
    ctx->pc = 0x305eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305eb8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ebc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305ebcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305ec0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305EC0u;
    SET_GPR_U32(ctx, 31, 0x305EC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305EC0u, 0x305EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EC8u;
label_305ec8:
    // 0x305ec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305ec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305ecc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ed0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x305ed0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x305ed4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305ED4u;
    SET_GPR_U32(ctx, 31, 0x305EDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305ED4u, 0x305EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EDCu;
label_305edc:
    // 0x305edc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305edcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305ee0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ee4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305ee8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305EE8u;
    SET_GPR_U32(ctx, 31, 0x305EF0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305EE8u, 0x305EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EF0u;
label_305ef0:
    // 0x305ef0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305ef0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305ef4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ef8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305EF8u;
    SET_GPR_U32(ctx, 31, 0x305F00u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305EF8u, 0x305F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F00u;
label_305f00:
    // 0x305f00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x305f00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305f04: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305f0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305F0Cu;
    {
        const bool branch_taken_0x305f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f0c) {
            ctx->pc = 0x305F44u;
            goto label_305f44;
        }
    }
    ctx->pc = 0x305F14u;
    // 0x305f14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x305f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305f18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f1c: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x305f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x305f20: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x305f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x305f24: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x305f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f28: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x305f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x305f2c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x305f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305f34: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305f3c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x305f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_305f44:
    // 0x305f44: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f48: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x305f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x305f4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x305f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x305f50: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x305f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x305f54: 0x10800172  beqz        $a0, . + 4 + (0x172 << 2)
    ctx->pc = 0x305F54u;
    {
        const bool branch_taken_0x305f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f54) {
            ctx->pc = 0x306520u;
            goto label_306520;
        }
    }
    ctx->pc = 0x305F5Cu;
    // 0x305f5c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x305f5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305f60: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x305F60u;
    {
        const bool branch_taken_0x305f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f60) {
            ctx->pc = 0x306280u;
            goto label_306280;
        }
    }
    ctx->pc = 0x305F68u;
label_305f68:
    // 0x305f68: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f6c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x305f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x305f70: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x305f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x305f74: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x305f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x305f78: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305f7c: 0x246492f0  addiu       $a0, $v1, -0x6D10
    ctx->pc = 0x305f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939376));
    // 0x305f80: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x305f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x305f84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x305f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305f88: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x305f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x305f8c: 0x108000ba  beqz        $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x305F8Cu;
    {
        const bool branch_taken_0x305f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f8c) {
            ctx->pc = 0x306278u;
            goto label_306278;
        }
    }
    ctx->pc = 0x305F94u;
    // 0x305f94: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305f98: 0x24639690  addiu       $v1, $v1, -0x6970
    ctx->pc = 0x305f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940304));
    // 0x305f9c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x305f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305fa0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x305fa0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399690u));
    // 0x305fa4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x305fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x305fa8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305fac: 0x246396a0  addiu       $v1, $v1, -0x6960
    ctx->pc = 0x305facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940320));
    // 0x305fb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305fb4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x305fb4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3996A0u));
    // 0x305fb8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x305fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x305fbc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x305fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x305fc0: 0x246496b0  addiu       $a0, $v1, -0x6950
    ctx->pc = 0x305fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x305fc4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x305fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x305fc8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x305fc8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3996B0u));
    // 0x305fcc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305fccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305fd0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x305fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305fd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x305fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305fd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x305fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305fdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x305fe0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x305fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305fe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305fe8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x305fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305fec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305ff0: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x305ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305ff4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x305ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305ff8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305ffc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x306000: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x306000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x306004: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x306004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x306008: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x306008u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30600c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30600Cu;
    SET_GPR_U32(ctx, 31, 0x306014u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30600Cu, 0x306014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306014u;
label_306014:
    // 0x306014: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x306014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306018: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x306018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30601c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x30601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x306020: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x306020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x306024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306028: 0x2222004  sllv        $a0, $v0, $s1
    ctx->pc = 0x306028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x30602c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306030: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x306030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x306034: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x306034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x306038: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x306038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30603c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30603cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306040: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306044: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x306044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x306048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30604c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306050: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x306050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306054: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x306054u;
    SET_GPR_U32(ctx, 31, 0x30605Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x306054u, 0x30605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30605Cu;
label_30605c:
    // 0x30605c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306060: 0x2444133c  addiu       $a0, $v0, 0x133C
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x306064: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x306064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x306068: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x306068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30606c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30606cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306070: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x306074: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x306074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306078: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x306078u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30607c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30607Cu;
    SET_GPR_U32(ctx, 31, 0x306084u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30607Cu, 0x306084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306084u;
label_306084:
    // 0x306084: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x306084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x306088: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x306088u;
    SET_GPR_U32(ctx, 31, 0x306090u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x306088u, 0x306090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306090u;
label_306090:
    // 0x306090: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306094: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x306094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306098: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x306098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x30609c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3060a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3060a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x3060a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3060a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3060a8: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x3060a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3060ac: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3060acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3060b0: 0x0  nop
    ctx->pc = 0x3060b0u;
    // NOP
    // 0x3060b4: 0x0  nop
    ctx->pc = 0x3060b4u;
    // NOP
    // 0x3060b8: 0x0  nop
    ctx->pc = 0x3060b8u;
    // NOP
    // 0x3060bc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x3060BCu;
    SET_GPR_U32(ctx, 31, 0x3060C4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x3060BCu, 0x3060C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060C4u;
label_3060c4:
    // 0x3060c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3060c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3060c8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3060c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3060cc: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x3060ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3060d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3060d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3060d4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x3060d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3060d8: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x3060d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3060dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3060dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3060e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3060e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3060e4: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x3060e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x3060e8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3060ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3060ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3060f0: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x3060f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3060f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3060f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3060fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3060fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x306100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306104: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x306104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306108: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30610c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x306110: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x306110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306114: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x306114u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x306118: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30611c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30611cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306120: 0x244292e0  addiu       $v0, $v0, -0x6D20
    ctx->pc = 0x306120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x306124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x306128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30612c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30612cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x306130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306134: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x306134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306138: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30613c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x306140: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x306140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306148: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x306148u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30614c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30614cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306150: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306154: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x306154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x306158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30615c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306160: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x306164: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x306164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306168: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x306168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30616c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x306170: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x306170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306174: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x306174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306178: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x306178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30617c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x30617cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306180: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x306180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x306184: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x306184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x306188: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x306188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30618c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x306190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306194: 0x0  nop
    ctx->pc = 0x306194u;
    // NOP
    // 0x306198: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x306198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30619c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3061a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3061a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3061a4: 0x0  nop
    ctx->pc = 0x3061a4u;
    // NOP
    // 0x3061a8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3061a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3061ac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3061acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x3061b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3061b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3061b4: 0x0  nop
    ctx->pc = 0x3061b4u;
    // NOP
    // 0x3061b8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3061b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3061bc: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x3061bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x3061c0: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x3061c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x3061c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3061c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3061c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3061c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3061cc: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x3061CCu;
    SET_GPR_U32(ctx, 31, 0x3061D4u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x3061CCu, 0x3061D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061D4u;
label_3061d4:
    // 0x3061d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3061d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3061d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3061d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3061dc: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x3061dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x3061e0: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x3061e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x3061e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3061e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3061e8: 0x0  nop
    ctx->pc = 0x3061e8u;
    // NOP
    // 0x3061ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3061ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3061f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3061F0u;
    SET_GPR_U32(ctx, 31, 0x3061F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3061F0u, 0x3061F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061F8u;
label_3061f8:
    // 0x3061f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3061f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3061fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3061fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x306200: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x306200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x306204: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x306204u;
    SET_GPR_U32(ctx, 31, 0x30620Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30620Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30620Cu) { return; }
    ctx->pc = 0x30620Cu;
label_30620c:
    // 0x30620c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x30620cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x306210: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x306210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x306214: 0xc040c9e  jal         func_103278
    ctx->pc = 0x306214u;
    SET_GPR_U32(ctx, 31, 0x30621Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30621Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30621Cu) { return; }
    ctx->pc = 0x30621Cu;
label_30621c:
    // 0x30621c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x306220: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x306220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x306224: 0xc040c9e  jal         func_103278
    ctx->pc = 0x306224u;
    SET_GPR_U32(ctx, 31, 0x30622Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30622Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30622Cu) { return; }
    ctx->pc = 0x30622Cu;
label_30622c:
    // 0x30622c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x306230: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x306230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x306234: 0xc040c9e  jal         func_103278
    ctx->pc = 0x306234u;
    SET_GPR_U32(ctx, 31, 0x30623Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30623Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30623Cu) { return; }
    ctx->pc = 0x30623Cu;
label_30623c:
    // 0x30623c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306240: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x306240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x306244: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x306244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x306248: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x306248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30624c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x306250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x306250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x306254: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x306254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x306258: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x306258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30625c: 0x3444000c  ori         $a0, $v0, 0xC
    ctx->pc = 0x30625cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x306260: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x306260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x306264: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x306264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306268: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x306268u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30626c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30626cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306270: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x306270u;
    SET_GPR_U32(ctx, 31, 0x306278u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x306270u, 0x306278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306278u;
label_306278:
    // 0x306278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30627c: 0x0  nop
    ctx->pc = 0x30627cu;
    // NOP
label_306280:
    // 0x306280: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x306280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306284: 0x1460ff38  bnez        $v1, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x306284u;
    {
        const bool branch_taken_0x306284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306284) {
            ctx->pc = 0x305F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305f68;
        }
    }
    ctx->pc = 0x30628Cu;
    // 0x30628c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306290: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x306290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x306294: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x306294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x306298: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x306298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x30629c: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x30629Cu;
    {
        const bool branch_taken_0x30629c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30629c) {
            ctx->pc = 0x306468u;
            goto label_306468;
        }
    }
    ctx->pc = 0x3062A4u;
    // 0x3062a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3062a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3062a8: 0x244296c0  addiu       $v0, $v0, -0x6940
    ctx->pc = 0x3062a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940352));
    // 0x3062ac: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3062b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3062b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3996C0u));
    // 0x3062b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3062b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3062b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3062b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3062bc: 0x244296d0  addiu       $v0, $v0, -0x6930
    ctx->pc = 0x3062bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940368));
    // 0x3062c0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3062c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3062c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3062c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3996D0u));
    // 0x3062c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3062c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3062cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3062d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3062d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3062d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3062d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3062d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3062d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3062dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3062dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3062e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3062e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3062e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3062e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3062e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3062e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3062ec: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x3062ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x3062f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3062f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3062f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3062f8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3062f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3062fc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3062fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x306300: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x306300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x306304: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x306304u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306308: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x306308u;
    SET_GPR_U32(ctx, 31, 0x306310u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x306308u, 0x306310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306310u;
label_306310:
    // 0x306310: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x306310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306314: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x306314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x306318: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x306318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x30631c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x306320: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x306320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x306324: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x306324u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306328: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x306328u;
    {
        const bool branch_taken_0x306328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306328) {
            ctx->pc = 0x306448u;
            goto label_306448;
        }
    }
    ctx->pc = 0x306330u;
label_306330:
    // 0x306330: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x306330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306334: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x306334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x306338: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x306338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30633c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306340: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x306340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306344: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x306344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306348: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x306348u;
    SET_GPR_U32(ctx, 31, 0x306350u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x306348u, 0x306350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306350u;
label_306350:
    // 0x306350: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x306350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306354: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x306354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x306358: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x306358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x30635c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x306360: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x306364: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x306364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x306368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x306368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30636c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30636cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x306370: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x306370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306374: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x306374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x306378: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x306378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30637c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306380: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x306380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x306384: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x306384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306388: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x306388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30638c: 0x248392e0  addiu       $v1, $a0, -0x6D20
    ctx->pc = 0x30638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    // 0x306390: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x306390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x306394: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x306398: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x306398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30639c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x30639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3063a0: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x3063a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3063a4: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x3063a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3063a8: 0x8d030058  lw          $v1, 0x58($t0)
    ctx->pc = 0x3063a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x3063ac: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x3063acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3063b0: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3063b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3063b4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3063b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3063b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3063bc: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x3063bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x3063c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3063c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3063c4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3063c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3063c8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3063c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3063cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3063ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3063d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3063d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3063d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3063d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3063d8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3063d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3063dc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3063dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3063e0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3063e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3063e4: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x3063e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3063e8: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x3063e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x3063ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3063ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3063f0: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3063f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3063f4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3063f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3063f8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3063f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3063fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3063fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x306400: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x306400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x306404: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x306404u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x306408: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x306408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x30640c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30640cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x306410: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x306410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x306414: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x306414u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306418: 0x0  nop
    ctx->pc = 0x306418u;
    // NOP
    // 0x30641c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x306420: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x306420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x306424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306428: 0x0  nop
    ctx->pc = 0x306428u;
    // NOP
    // 0x30642c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x306430: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x306430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x306434: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x306434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x306438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30643c: 0x0  nop
    ctx->pc = 0x30643cu;
    // NOP
    // 0x306440: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x306440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x306444: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x306444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_306448:
    // 0x306448: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x306448u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30644c: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x30644Cu;
    {
        const bool branch_taken_0x30644c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30644c) {
            ctx->pc = 0x306330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306330;
        }
    }
    ctx->pc = 0x306454u;
    // 0x306454: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x306454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x306458: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x306458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30645c: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x30645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x306460: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x306460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x306464: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x306464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_306468:
    // 0x306468: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x306468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30646c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30646cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x306470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x306470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x306474: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x306474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x306478: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x306478u;
    {
        const bool branch_taken_0x306478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306478) {
            ctx->pc = 0x306520u;
            goto label_306520;
        }
    }
    ctx->pc = 0x306480u;
    // 0x306480: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x306480u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306484: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x306484u;
    {
        const bool branch_taken_0x306484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306484) {
            ctx->pc = 0x306510u;
            goto label_306510;
        }
    }
    ctx->pc = 0x30648Cu;
label_30648c:
    // 0x30648c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30648cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x306490: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x306490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x306494: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x306494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x306498: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x306498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30649c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x30649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3064a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3064a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3064a4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3064a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3064a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3064a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3064ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3064acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3064b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3064b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3064b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3064b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3064b8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3064b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3064bc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3064bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3064c0: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3064c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3064c4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3064c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3064c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3064c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3064cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3064ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3064d0: 0x0  nop
    ctx->pc = 0x3064d0u;
    // NOP
    // 0x3064d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3064d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3064d8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3064d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3064dc: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3064dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3064e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3064e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3064e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3064e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3064e8: 0x0  nop
    ctx->pc = 0x3064e8u;
    // NOP
    // 0x3064ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3064ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3064f0: 0x0  nop
    ctx->pc = 0x3064f0u;
    // NOP
    // 0x3064f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3064F4u;
    {
        const bool branch_taken_0x3064f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3064f4) {
            ctx->pc = 0x306508u;
            goto label_306508;
        }
    }
    ctx->pc = 0x3064FCu;
    // 0x3064fc: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x3064fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x306500: 0x3083fff7  andi        $v1, $a0, 0xFFF7
    ctx->pc = 0x306500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65527);
    // 0x306504: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x306504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_306508:
    // 0x306508: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x306508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30650c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x30650cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_306510:
    // 0x306510: 0x2e240004  sltiu       $a0, $s1, 0x4
    ctx->pc = 0x306510u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306514: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x306514u;
    {
        const bool branch_taken_0x306514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306514) {
            ctx->pc = 0x30648Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30648c;
        }
    }
    ctx->pc = 0x30651Cu;
    // 0x30651c: 0x0  nop
    ctx->pc = 0x30651cu;
    // NOP
label_306520:
    // 0x306520: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x306520u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x306524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x306528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30652c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30652cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306534: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x306534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x306538: 0x3e00008  jr          $ra
    ctx->pc = 0x306538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306540u;
}
