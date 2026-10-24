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

// Function: Em0b_R1_mv11
// Address: 0x1f3300 - 0x1f3a28
void Em0b_R1_mv11_0x1f3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv11_0x1f3300");
#endif

    switch (ctx->pc) {
        case 0x1f335cu: goto label_1f335c;
        case 0x1f3380u: goto label_1f3380;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33d8u: goto label_1f33d8;
        case 0x1f3430u: goto label_1f3430;
        case 0x1f3598u: goto label_1f3598;
        case 0x1f3748u: goto label_1f3748;
        case 0x1f3764u: goto label_1f3764;
        case 0x1f3794u: goto label_1f3794;
        case 0x1f37d0u: goto label_1f37d0;
        case 0x1f37ecu: goto label_1f37ec;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f39b0u: goto label_1f39b0;
        case 0x1f3a08u: goto label_1f3a08;
        case 0x1f3a14u: goto label_1f3a14;
        default: break;
    }

    ctx->pc = 0x1f3300u;

    // 0x1f3300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f3304: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1f3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f3308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f330c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1f330cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1f3310: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3314: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3318: 0x8c500054  lw          $s0, 0x54($v0)
    ctx->pc = 0x1f3318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1f331c: 0x16000022  bnez        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F331Cu;
    {
        const bool branch_taken_0x1f331c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f331c) {
            ctx->pc = 0x1F33A8u;
            goto label_1f33a8;
        }
    }
    ctx->pc = 0x1F3324u;
    // 0x1f3324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f332c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f332cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f3330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3334: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3338: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f3338u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f333c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3340: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f3340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3344: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3348: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f3348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f334c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3350: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f3354: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3354u;
    SET_GPR_U32(ctx, 31, 0x1F335Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3354u, 0x1F335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F335Cu;
label_1f335c:
    // 0x1f335c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f335cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3360: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f3360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f3364: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f3368: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f3368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f336c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f336cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f3370: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3374: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f3374u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3378: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3378u;
    SET_GPR_U32(ctx, 31, 0x1F3380u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3378u, 0x1F3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3380u;
label_1f3380:
    // 0x1f3380: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3384: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f3384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f3388: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1f3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1f338c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f338cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3390: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3390u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3394: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3398: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f339c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f339cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f33a0: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x1F33A0u;
    {
        const bool branch_taken_0x1f33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33a0) {
            ctx->pc = 0x1F3A14u;
            goto label_1f3a14;
        }
    }
    ctx->pc = 0x1F33A8u;
label_1f33a8:
    // 0x1f33a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f33ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f33acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f33b0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f33b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f33b4: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1f33b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1f33b8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1F33B8u;
    SET_GPR_U32(ctx, 31, 0x1F33C0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1F33B8u, 0x1F33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33C0u;
label_1f33c0:
    // 0x1f33c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f33c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f33c4: 0x0  nop
    ctx->pc = 0x1f33c4u;
    // NOP
    // 0x1f33c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f33c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f33cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f33d0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1F33D0u;
    SET_GPR_U32(ctx, 31, 0x1F33D8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1F33D0u, 0x1F33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33D8u;
label_1f33d8:
    // 0x1f33d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f33d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1f33dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f33e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f33e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f33e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f33e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f33e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f33ec: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F33ECu;
    {
        const bool branch_taken_0x1f33ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f33ec) {
            ctx->pc = 0x1F3464u;
            goto label_1f3464;
        }
    }
    ctx->pc = 0x1F33F4u;
    // 0x1f33f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F33F4u;
    {
        const bool branch_taken_0x1f33f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33f4) {
            ctx->pc = 0x1F3404u;
            goto label_1f3404;
        }
    }
    ctx->pc = 0x1F33FCu;
    // 0x1f33fc: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x1F33FCu;
    {
        const bool branch_taken_0x1f33fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33fc) {
            ctx->pc = 0x1F3A14u;
            goto label_1f3a14;
        }
    }
    ctx->pc = 0x1F3404u;
label_1f3404:
    // 0x1f3404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3408: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f340c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f340cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3410: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3414: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3418: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f341c: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1f341cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1f3420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3424: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3428: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3428u;
    SET_GPR_U32(ctx, 31, 0x1F3430u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3428u, 0x1F3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3430u;
label_1f3430:
    // 0x1f3430: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3434: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f3434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3438: 0x84830078  lh          $v1, 0x78($a0)
    ctx->pc = 0x1f3438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1f343c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1f343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1f3440: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1f3440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f3444: 0xa4820078  sh          $v0, 0x78($a0)
    ctx->pc = 0x1f3444u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3448: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f344c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f344cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3450: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1f3450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1f3454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f3458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f3458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f345c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3460: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f3460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1f3464:
    // 0x1f3464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3468: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f346c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3470: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f3474: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x1f3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f3478: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x1f3478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f347c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1f347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3484: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3488: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f3488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f348c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f3490: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f3490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f3494: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f3494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f3498: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f349c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1f349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f34a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f34a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f34a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34ac: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f34acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f34b0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f34b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f34b4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f34b8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f34b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f34bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f34bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f34c0: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1f34c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f34c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f34c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f34c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34d0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f34d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f34d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34dc: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1f34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1f34e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f34e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f34e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f34e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f34e8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f34e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f34ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f34ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f34f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f34f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f34f8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f34f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f34fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3500: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3504: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1f3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1f3508: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f3508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f350c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f350cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3510: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f3510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3514: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f3514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f3518: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f351c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3520: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f3520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f3524: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3528: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f352c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3534: 0x0  nop
    ctx->pc = 0x1f3534u;
    // NOP
    // 0x1f3538: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f353c: 0x0  nop
    ctx->pc = 0x1f353cu;
    // NOP
    // 0x1f3540: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3540u;
    {
        const bool branch_taken_0x1f3540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3540) {
            ctx->pc = 0x1F3564u;
            goto label_1f3564;
        }
    }
    ctx->pc = 0x1F3548u;
    // 0x1f3548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f354c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3550: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1f3554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3558: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f3558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f355c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f355cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f3560: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f3560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1f3564:
    // 0x1f3564: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3568: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1f3568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1f356c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f3570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3574: 0x0  nop
    ctx->pc = 0x1f3574u;
    // NOP
    // 0x1f3578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f357c: 0x0  nop
    ctx->pc = 0x1f357cu;
    // NOP
    // 0x1f3580: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1F3580u;
    {
        const bool branch_taken_0x1f3580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3580) {
            ctx->pc = 0x1F35B4u;
            goto label_1f35b4;
        }
    }
    ctx->pc = 0x1F3588u;
    // 0x1f3588: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f358c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3590: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F3590u;
    SET_GPR_U32(ctx, 31, 0x1F3598u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F3598u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F3598u) { return; }
    ctx->pc = 0x1F3598u;
label_1f3598:
    // 0x1f3598: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f359c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f35a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f35a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f35a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f35a8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f35ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f35acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f35b0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f35b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1f35b4:
    // 0x1f35b4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f35b8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1f35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1f35bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f35bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f35c0: 0x0  nop
    ctx->pc = 0x1f35c0u;
    // NOP
    // 0x1f35c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f35c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f35c8: 0x0  nop
    ctx->pc = 0x1f35c8u;
    // NOP
    // 0x1f35cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F35CCu;
    {
        const bool branch_taken_0x1f35cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f35cc) {
            ctx->pc = 0x1F35F0u;
            goto label_1f35f0;
        }
    }
    ctx->pc = 0x1F35D4u;
    // 0x1f35d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f35d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f35dc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1f35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1f35e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f35e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f35e4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f35e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f35e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f35ec: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f35ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1f35f0:
    // 0x1f35f0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f35f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f35f4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f35f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f35f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f35fc: 0x0  nop
    ctx->pc = 0x1f35fcu;
    // NOP
    // 0x1f3600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f3600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3604: 0x0  nop
    ctx->pc = 0x1f3604u;
    // NOP
    // 0x1f3608: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3608u;
    {
        const bool branch_taken_0x1f3608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3608) {
            ctx->pc = 0x1F3630u;
            goto label_1f3630;
        }
    }
    ctx->pc = 0x1F3610u;
    // 0x1f3610: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3614: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3618: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1f3618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1f361c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f361cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f3620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3624: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f3624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3628: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f3628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f362c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1f3630:
    // 0x1f3630: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3634: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3638: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1f3638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f363c: 0x14200030  bnez        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F363Cu;
    {
        const bool branch_taken_0x1f363c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f363c) {
            ctx->pc = 0x1F3700u;
            goto label_1f3700;
        }
    }
    ctx->pc = 0x1F3644u;
    // 0x1f3644: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3648: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f364c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f3650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3654: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f3658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f365c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1f3660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3664: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3668: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f366c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f366cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f3670: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3674: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x1f3674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3678: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f3678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f367c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3680: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f3680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f3684: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f3684u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3688: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f3688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f368c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f368cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3690: 0x0  nop
    ctx->pc = 0x1f3690u;
    // NOP
    // 0x1f3694: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3694u;
    {
        const bool branch_taken_0x1f3694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3694) {
            ctx->pc = 0x1F36B8u;
            goto label_1f36b8;
        }
    }
    ctx->pc = 0x1F369Cu;
    // 0x1f369c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f36a0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f36a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f36a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f36a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f36a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f36ac: 0x0  nop
    ctx->pc = 0x1f36acu;
    // NOP
    // 0x1f36b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f36b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f36b4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f36b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1f36b8:
    // 0x1f36b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f36bc: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x1f36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f36c0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1f36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1f36c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f36c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f36c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f36c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f36cc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f36ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f36d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f36d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f36d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f36d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f36d8: 0x0  nop
    ctx->pc = 0x1f36d8u;
    // NOP
    // 0x1f36dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F36DCu;
    {
        const bool branch_taken_0x1f36dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f36dc) {
            ctx->pc = 0x1F3700u;
            goto label_1f3700;
        }
    }
    ctx->pc = 0x1F36E4u;
    // 0x1f36e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f36e8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f36e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f36ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f36f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f36f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f36f4: 0x0  nop
    ctx->pc = 0x1f36f4u;
    // NOP
    // 0x1f36f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f36f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f36fc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f36fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1f3700:
    // 0x1f3700: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3704: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f3704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f3708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f370c: 0x0  nop
    ctx->pc = 0x1f370cu;
    // NOP
    // 0x1f3710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3714: 0x0  nop
    ctx->pc = 0x1f3714u;
    // NOP
    // 0x1f3718: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1F3718u;
    {
        const bool branch_taken_0x1f3718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3718) {
            ctx->pc = 0x1F37A8u;
            goto label_1f37a8;
        }
    }
    ctx->pc = 0x1F3720u;
    // 0x1f3720: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3724: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f3724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3728: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f372c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3730: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f3734: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f3734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3738: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1f3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f373c: 0xc44e003c  lwc1        $f14, 0x3C($v0)
    ctx->pc = 0x1f373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f3740: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x1F3740u;
    SET_GPR_U32(ctx, 31, 0x1F3748u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x1F3740u, 0x1F3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3748u;
label_1f3748:
    // 0x1f3748: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1f3748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f374c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3750: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3754: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1f3754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3758: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f3758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f375c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F375Cu;
    SET_GPR_U32(ctx, 31, 0x1F3764u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F375Cu, 0x1F3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3764u;
label_1f3764:
    // 0x1f3764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3768: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f3768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f376c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f3770: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3774: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f3774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f3778: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f3778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f377c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3780: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1f3780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f3784: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f3784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3788: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1f3788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1f378c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F378Cu;
    SET_GPR_U32(ctx, 31, 0x1F3794u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F378Cu, 0x1F3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3794u;
label_1f3794:
    // 0x1f3794: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f379c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1f379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f37a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F37A0u;
    {
        const bool branch_taken_0x1f37a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f37a0) {
            ctx->pc = 0x1F37F4u;
            goto label_1f37f4;
        }
    }
    ctx->pc = 0x1F37A8u;
label_1f37a8:
    // 0x1f37a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f37b8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f37bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1f37bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f37c0: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1f37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f37c4: 0xc44e003c  lwc1        $f14, 0x3C($v0)
    ctx->pc = 0x1f37c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1f37c8: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x1F37C8u;
    SET_GPR_U32(ctx, 31, 0x1F37D0u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x1F37C8u, 0x1F37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37D0u;
label_1f37d0:
    // 0x1f37d0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1f37d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f37d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f37dc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1f37dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f37e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f37e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f37e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F37E4u;
    SET_GPR_U32(ctx, 31, 0x1F37ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F37E4u, 0x1F37ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37ECu;
label_1f37ec:
    // 0x1f37ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f37f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f37f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1f37f4:
    // 0x1f37f4: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f37f8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f37fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f37fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f3800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3804: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f3804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f3808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f380c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3810: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3814: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f3814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f3818: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f3818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f381c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f381cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f3820: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f3820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f3824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3828: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f3828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f382c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f382cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f3830: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3834: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3838: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f3838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f383c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3840: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f3840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3844: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f3844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3848: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f384c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f384cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3850: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F3850u;
    {
        const bool branch_taken_0x1f3850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f3850) {
            ctx->pc = 0x1F3928u;
            goto label_1f3928;
        }
    }
    ctx->pc = 0x1F3858u;
    // 0x1f3858: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f385c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3860: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1f3860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f3864: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F3864u;
    {
        const bool branch_taken_0x1f3864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3864) {
            ctx->pc = 0x1F3928u;
            goto label_1f3928;
        }
    }
    ctx->pc = 0x1F386Cu;
    // 0x1f386c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3870: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3874: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f387c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1f387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3880: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f3880u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3884: 0x0  nop
    ctx->pc = 0x1f3884u;
    // NOP
    // 0x1f3888: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1F3888u;
    {
        const bool branch_taken_0x1f3888 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3888) {
            ctx->pc = 0x1F3928u;
            goto label_1f3928;
        }
    }
    ctx->pc = 0x1F3890u;
    // 0x1f3890: 0x960309ea  lhu         $v1, 0x9EA($s0)
    ctx->pc = 0x1f3890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3894: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3898: 0xa44309ea  sh          $v1, 0x9EA($v0)
    ctx->pc = 0x1f3898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2538), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f389c: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f389cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f38a8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F38A8u;
    {
        const bool branch_taken_0x1f38a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f38a8) {
            ctx->pc = 0x1F38ECu;
            goto label_1f38ec;
        }
    }
    ctx->pc = 0x1F38B0u;
    // 0x1f38b0: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f38b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f38bc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F38BCu;
    {
        const bool branch_taken_0x1f38bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f38bc) {
            ctx->pc = 0x1F38ECu;
            goto label_1f38ec;
        }
    }
    ctx->pc = 0x1F38C4u;
    // 0x1f38c4: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f38c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f38d0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F38D0u;
    {
        const bool branch_taken_0x1f38d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f38d0) {
            ctx->pc = 0x1F38ECu;
            goto label_1f38ec;
        }
    }
    ctx->pc = 0x1F38D8u;
    // 0x1f38d8: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f38d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f38dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f38dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f38e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f38e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F38E4u;
    {
        const bool branch_taken_0x1f38e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f38e4) {
            ctx->pc = 0x1F38FCu;
            goto label_1f38fc;
        }
    }
    ctx->pc = 0x1F38ECu;
label_1f38ec:
    // 0x1f38ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f38f0: 0x946209ea  lhu         $v0, 0x9EA($v1)
    ctx->pc = 0x1f38f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2538)));
    // 0x1f38f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f38f8: 0xa46209ea  sh          $v0, 0x9EA($v1)
    ctx->pc = 0x1f38f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2538), (uint16_t)GPR_U32(ctx, 2));
label_1f38fc:
    // 0x1f38fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3904: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f3904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3908: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f390c: 0x3446b400  ori         $a2, $v0, 0xB400
    ctx->pc = 0x1f390cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1f3910: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3914: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f3914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f3918: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f391c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f391cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3920: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3920u;
    SET_GPR_U32(ctx, 31, 0x1F3928u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3920u, 0x1F3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3928u;
label_1f3928:
    // 0x1f3928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f392c: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f392cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3930: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f3930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3934: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3938: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f393c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F393Cu;
    {
        const bool branch_taken_0x1f393c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f393c) {
            ctx->pc = 0x1F3A08u;
            goto label_1f3a08;
        }
    }
    ctx->pc = 0x1F3944u;
    // 0x1f3944: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3948: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f394c: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1f394cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f3950: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F3950u;
    {
        const bool branch_taken_0x1f3950 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3950) {
            ctx->pc = 0x1F3A08u;
            goto label_1f3a08;
        }
    }
    ctx->pc = 0x1F3958u;
    // 0x1f3958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f395c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3960: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f3960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3964: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3968: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1f3968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f396c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f396cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3970: 0x0  nop
    ctx->pc = 0x1f3970u;
    // NOP
    // 0x1f3974: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F3974u;
    {
        const bool branch_taken_0x1f3974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3974) {
            ctx->pc = 0x1F39B0u;
            goto label_1f39b0;
        }
    }
    ctx->pc = 0x1F397Cu;
    // 0x1f397c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3980: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f3980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3984: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3988: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3988u;
    {
        const bool branch_taken_0x1f3988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3988) {
            ctx->pc = 0x1F39B0u;
            goto label_1f39b0;
        }
    }
    ctx->pc = 0x1F3990u;
    // 0x1f3990: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3994: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3998: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f399c: 0x3406b400  ori         $a2, $zero, 0xB400
    ctx->pc = 0x1f399cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x1f39a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f39a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f39a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f39a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F39A8u;
    SET_GPR_U32(ctx, 31, 0x1F39B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F39A8u, 0x1F39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39B0u;
label_1f39b0:
    // 0x1f39b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39b4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1f39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f39b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1f39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1f39bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f39bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f39c0: 0x0  nop
    ctx->pc = 0x1f39c0u;
    // NOP
    // 0x1f39c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f39c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f39c8: 0x0  nop
    ctx->pc = 0x1f39c8u;
    // NOP
    // 0x1f39cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F39CCu;
    {
        const bool branch_taken_0x1f39cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f39cc) {
            ctx->pc = 0x1F3A08u;
            goto label_1f3a08;
        }
    }
    ctx->pc = 0x1F39D4u;
    // 0x1f39d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39d8: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f39d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f39dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f39dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f39e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F39E0u;
    {
        const bool branch_taken_0x1f39e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39e0) {
            ctx->pc = 0x1F3A08u;
            goto label_1f3a08;
        }
    }
    ctx->pc = 0x1F39E8u;
    // 0x1f39e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f39f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f39f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f39f4: 0x3406b400  ori         $a2, $zero, 0xB400
    ctx->pc = 0x1f39f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x1f39f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f39f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f39fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f39fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3a00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3A00u;
    SET_GPR_U32(ctx, 31, 0x1F3A08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3A00u, 0x1F3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A08u;
label_1f3a08:
    // 0x1f3a08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3a0c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A14u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F3A0Cu, 0x1F3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A14u;
label_1f3a14:
    // 0x1f3a14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1f3a14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3a1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f3a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f3a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3A28u;
}
