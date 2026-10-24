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

// Function: Em0d_R1_mv06
// Address: 0x23ae20 - 0x23b928
void Em0d_R1_mv06_0x23ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv06_0x23ae20");
#endif

    switch (ctx->pc) {
        case 0x23aeacu: goto label_23aeac;
        case 0x23aee4u: goto label_23aee4;
        case 0x23af7cu: goto label_23af7c;
        case 0x23afd0u: goto label_23afd0;
        case 0x23b004u: goto label_23b004;
        case 0x23b030u: goto label_23b030;
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b108u: goto label_23b108;
        case 0x23b120u: goto label_23b120;
        case 0x23b130u: goto label_23b130;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b244u: goto label_23b244;
        case 0x23b24cu: goto label_23b24c;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2f4u: goto label_23b2f4;
        case 0x23b318u: goto label_23b318;
        case 0x23b358u: goto label_23b358;
        case 0x23b384u: goto label_23b384;
        case 0x23b468u: goto label_23b468;
        case 0x23b484u: goto label_23b484;
        case 0x23b49cu: goto label_23b49c;
        case 0x23b4a8u: goto label_23b4a8;
        case 0x23b4e8u: goto label_23b4e8;
        case 0x23b514u: goto label_23b514;
        case 0x23b554u: goto label_23b554;
        case 0x23b57cu: goto label_23b57c;
        case 0x23b5ecu: goto label_23b5ec;
        case 0x23b670u: goto label_23b670;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b784u: goto label_23b784;
        case 0x23b794u: goto label_23b794;
        case 0x23b7a4u: goto label_23b7a4;
        case 0x23b7c8u: goto label_23b7c8;
        default: break;
    }

    ctx->pc = 0x23ae20u;

    // 0x23ae20: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x23ae24: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x23ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x23ae28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ae2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ae30: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x23ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x23ae34: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x23ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x23ae38: 0x2483b260  addiu       $v1, $a0, -0x4DA0
    ctx->pc = 0x23ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947424));
    // 0x23ae3c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ae40: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x23ae40u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x38B260u));
    // 0x23ae44: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x23ae44u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38B270u));
    // 0x23ae48: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x23ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x23ae4c: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x23ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x23ae50: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23ae54: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23ae54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23ae58: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23ae58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23ae5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ae60: 0x10830152  beq         $a0, $v1, . + 4 + (0x152 << 2)
    ctx->pc = 0x23AE60u;
    {
        const bool branch_taken_0x23ae60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23ae60) {
            ctx->pc = 0x23B3ACu;
            goto label_23b3ac;
        }
    }
    ctx->pc = 0x23AE68u;
    // 0x23ae68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ae6c: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x23AE6Cu;
    {
        const bool branch_taken_0x23ae6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23ae6c) {
            ctx->pc = 0x23B030u;
            goto label_23b030;
        }
    }
    ctx->pc = 0x23AE74u;
    // 0x23ae74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AE74u;
    {
        const bool branch_taken_0x23ae74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ae74) {
            ctx->pc = 0x23AE84u;
            goto label_23ae84;
        }
    }
    ctx->pc = 0x23AE7Cu;
    // 0x23ae7c: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x23AE7Cu;
    {
        const bool branch_taken_0x23ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ae7c) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23AE84u;
label_23ae84:
    // 0x23ae84: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23ae88: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x23ae88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23ae8c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x23ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ae90: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x23ae90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ae94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ae94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ae98: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23ae9c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x23ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x23aea0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x23aea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23aea4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AEA4u;
    SET_GPR_U32(ctx, 31, 0x23AEACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AEA4u, 0x23AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEACu;
label_23aeac:
    // 0x23aeac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23aeacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23aeb0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x23aeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x23aeb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23aeb8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23AEB8u;
    {
        const bool branch_taken_0x23aeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aeb8) {
            ctx->pc = 0x23AEC4u;
            goto label_23aec4;
        }
    }
    ctx->pc = 0x23AEC0u;
    // 0x23aec0: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x23aec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_23aec4:
    // 0x23aec4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23aec8: 0x36061e00  ori         $a2, $s0, 0x1E00
    ctx->pc = 0x23aec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7680);
    // 0x23aecc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23aed0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x23aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x23aed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23aed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23aed8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23aedc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23AEDCu;
    SET_GPR_U32(ctx, 31, 0x23AEE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23AEDCu, 0x23AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEE4u;
label_23aee4:
    // 0x23aee4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23aee4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23aee8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x23aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x23aeec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23aeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aef0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23aef4: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x23aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23aef8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23aefc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23af00: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x23af00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23af04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23af04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af08: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23af10: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23af10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23af14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23af14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23af18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23af18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23af1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23af1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af24: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23af24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23af28: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x23af28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x23af2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23af2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af30: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23af30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af34: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x23af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23af38: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23af38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23af3c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af40: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23af44: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x23af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x23af48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23af48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af4c: 0x0  nop
    ctx->pc = 0x23af4cu;
    // NOP
    // 0x23af50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23af50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23af54: 0x0  nop
    ctx->pc = 0x23af54u;
    // NOP
    // 0x23af58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23AF58u;
    {
        const bool branch_taken_0x23af58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23af58) {
            ctx->pc = 0x23AF74u;
            goto label_23af74;
        }
    }
    ctx->pc = 0x23AF60u;
    // 0x23af60: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x23af64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23af64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af68: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af6c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23af70: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23af70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_23af74:
    // 0x23af74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AF74u;
    SET_GPR_U32(ctx, 31, 0x23AF7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AF74u, 0x23AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF7Cu;
label_23af7c:
    // 0x23af7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23af80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23af84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x23af88: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x23af88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23af8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23af8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23af90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23af94: 0xa444127c  sh          $a0, 0x127C($v0)
    ctx->pc = 0x23af94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x23af98: 0x3c053c8e  lui         $a1, 0x3C8E
    ctx->pc = 0x23af98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15502 << 16));
    // 0x23af9c: 0x34a2fa35  ori         $v0, $a1, 0xFA35
    ctx->pc = 0x23af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64053);
    // 0x23afa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23afa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23afa4: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x23afa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23afa8: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x23afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x23afac: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23afb0: 0x3c033ac9  lui         $v1, 0x3AC9
    ctx->pc = 0x23afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15049 << 16));
    // 0x23afb4: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x23afb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23afb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23afb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23afbc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23afc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23afc4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23afc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23afc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AFC8u;
    SET_GPR_U32(ctx, 31, 0x23AFD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AFC8u, 0x23AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFD0u;
label_23afd0:
    // 0x23afd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23afd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23afd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23afd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23afd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x23AFD8u;
    {
        const bool branch_taken_0x23afd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23afd8) {
            ctx->pc = 0x23B00Cu;
            goto label_23b00c;
        }
    }
    ctx->pc = 0x23AFE0u;
    // 0x23afe0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23afe4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23afe8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23afec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23afecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23aff0: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x23aff4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23aff8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23aff8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23affc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23AFFCu;
    SET_GPR_U32(ctx, 31, 0x23B004u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23AFFCu, 0x23B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B004u;
label_23b004:
    // 0x23b004: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23B004u;
    {
        const bool branch_taken_0x23b004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b004) {
            ctx->pc = 0x23B030u;
            goto label_23b030;
        }
    }
    ctx->pc = 0x23B00Cu;
label_23b00c:
    // 0x23b00c: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
    // 0x23b010: 0x34e54000  ori         $a1, $a3, 0x4000
    ctx->pc = 0x23b010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x23b014: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x23b014u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b018: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b01c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x23b020: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23b024: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b024u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b028: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23B028u;
    SET_GPR_U32(ctx, 31, 0x23B030u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23B028u, 0x23B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B030u;
label_23b030:
    // 0x23b030: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b034: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x23b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b038: 0x3c0544af  lui         $a1, 0x44AF
    ctx->pc = 0x23b038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17583 << 16));
    // 0x23b03c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23b03cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b040: 0x0  nop
    ctx->pc = 0x23b040u;
    // NOP
    // 0x23b044: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b048: 0x0  nop
    ctx->pc = 0x23b048u;
    // NOP
    // 0x23b04c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B04Cu;
    {
        const bool branch_taken_0x23b04c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b04c) {
            ctx->pc = 0x23B070u;
            goto label_23b070;
        }
    }
    ctx->pc = 0x23B054u;
    // 0x23b054: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23b058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b05c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b060: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b064: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b068: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23B068u;
    {
        const bool branch_taken_0x23b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b068) {
            ctx->pc = 0x23B0C0u;
            goto label_23b0c0;
        }
    }
    ctx->pc = 0x23B070u;
label_23b070:
    // 0x23b070: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b074: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b078: 0x3c044461  lui         $a0, 0x4461
    ctx->pc = 0x23b078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17505 << 16));
    // 0x23b07c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23b07cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b080: 0x0  nop
    ctx->pc = 0x23b080u;
    // NOP
    // 0x23b084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b088: 0x0  nop
    ctx->pc = 0x23b088u;
    // NOP
    // 0x23b08c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B08Cu;
    {
        const bool branch_taken_0x23b08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b08c) {
            ctx->pc = 0x23B0B0u;
            goto label_23b0b0;
        }
    }
    ctx->pc = 0x23B094u;
    // 0x23b094: 0x3c05c1a0  lui         $a1, 0xC1A0
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49568 << 16));
    // 0x23b098: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23b098u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b09c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b0a4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23b0a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B0A8u;
    {
        const bool branch_taken_0x23b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b0a8) {
            ctx->pc = 0x23B0C0u;
            goto label_23b0c0;
        }
    }
    ctx->pc = 0x23B0B0u;
label_23b0b0:
    // 0x23b0b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b0b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b0bc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23b0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_23b0c0:
    // 0x23b0c0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0c4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0cc: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x23b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b0d0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23b0d4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23b0d8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x23b0dc: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x23b0e0: 0xc4cd0038  lwc1        $f13, 0x38($a2)
    ctx->pc = 0x23b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23b0e4: 0xc05c848  jal         func_172120
    ctx->pc = 0x23B0E4u;
    SET_GPR_U32(ctx, 31, 0x23B0ECu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23B0E4u, 0x23B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B0ECu;
label_23b0ec:
    // 0x23b0ec: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x23b0f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0f4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x23b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b0f8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b0fc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23b0fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b100: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23B100u;
    SET_GPR_U32(ctx, 31, 0x23B108u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23B100u, 0x23B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B108u;
label_23b108:
    // 0x23b108: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b10c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x23b10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x23b110: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b114: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23b118: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23B118u;
    SET_GPR_U32(ctx, 31, 0x23B120u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23B118u, 0x23B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B120u;
label_23b120:
    // 0x23b120: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23b120u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b124: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b128: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23B128u;
    SET_GPR_U32(ctx, 31, 0x23B130u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23B128u, 0x23B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B130u;
label_23b130:
    // 0x23b130: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23b130u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b134: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b138: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23b138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23b13c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23b13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23b140: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23b140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23b144: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x23B144u;
    {
        const bool branch_taken_0x23b144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b144) {
            ctx->pc = 0x23B318u;
            goto label_23b318;
        }
    }
    ctx->pc = 0x23B14Cu;
    // 0x23b14c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b150: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x23b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x23b154: 0x24830880  addiu       $v1, $a0, 0x880
    ctx->pc = 0x23b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
    // 0x23b158: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x23b158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x23b15c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b15cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b160: 0x0  nop
    ctx->pc = 0x23b160u;
    // NOP
    // 0x23b164: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23b164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23b168: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23b168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23b16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b170: 0x0  nop
    ctx->pc = 0x23b170u;
    // NOP
    // 0x23b174: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23b178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b17c: 0x0  nop
    ctx->pc = 0x23b17cu;
    // NOP
    // 0x23b180: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23b180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23b184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b18c: 0x0  nop
    ctx->pc = 0x23b18cu;
    // NOP
    // 0x23b190: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23b190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23b194: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23b198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b19c: 0x0  nop
    ctx->pc = 0x23b19cu;
    // NOP
    // 0x23b1a0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x23b1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23b1a4: 0xa7a00074  sh          $zero, 0x74($sp)
    ctx->pc = 0x23b1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x23b1a8: 0xa3a00076  sb          $zero, 0x76($sp)
    ctx->pc = 0x23b1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b1ac: 0xa3a00077  sb          $zero, 0x77($sp)
    ctx->pc = 0x23b1acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b1b0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b1b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23b1b8: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23B1B8u;
    SET_GPR_U32(ctx, 31, 0x23B1C0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23B1B8u, 0x23B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1C0u;
label_23b1c0:
    // 0x23b1c0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23B1C0u;
    {
        const bool branch_taken_0x23b1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b1c0) {
            ctx->pc = 0x23B318u;
            goto label_23b318;
        }
    }
    ctx->pc = 0x23B1C8u;
    // 0x23b1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1cc: 0x0  nop
    ctx->pc = 0x23b1ccu;
    // NOP
    // 0x23b1d0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x23b1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23b1d4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23b1d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1dc: 0x0  nop
    ctx->pc = 0x23b1dcu;
    // NOP
    // 0x23b1e0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x23b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x23b1e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b1e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1e8: 0x0  nop
    ctx->pc = 0x23b1e8u;
    // NOP
    // 0x23b1ec: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x23b1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x23b1f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b1f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b1f8: 0x0  nop
    ctx->pc = 0x23b1f8u;
    // NOP
    // 0x23b1fc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x23b1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x23b200: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b204: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b208: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b20c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23b20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b210: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23b214: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b218: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b21c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b220: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b224: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b228: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b22c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x23b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23b230: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b230u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b234: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b238: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b238u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b23c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B23Cu;
    SET_GPR_U32(ctx, 31, 0x23B244u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B23Cu, 0x23B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B244u;
label_23b244:
    // 0x23b244: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B244u;
    SET_GPR_U32(ctx, 31, 0x23B24Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B244u, 0x23B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B24Cu;
label_23b24c:
    // 0x23b24c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B24Cu;
    {
        const bool branch_taken_0x23b24c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23b24c) {
            ctx->pc = 0x23B268u;
            goto label_23b268;
        }
    }
    ctx->pc = 0x23B254u;
    // 0x23b254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b258: 0x0  nop
    ctx->pc = 0x23b258u;
    // NOP
    // 0x23b25c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23b25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23b260: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B260u;
    {
        const bool branch_taken_0x23b260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b260) {
            ctx->pc = 0x23B284u;
            goto label_23b284;
        }
    }
    ctx->pc = 0x23B268u;
label_23b268:
    // 0x23b268: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23b268u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23b26c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b270: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b278: 0x0  nop
    ctx->pc = 0x23b278u;
    // NOP
    // 0x23b27c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23b27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23b280: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23b280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23b284:
    // 0x23b284: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x23b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23b288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23b28c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x23b28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x23b290: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b294: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23b294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b298: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b29c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b2a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23b2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23b2a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b2a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b2ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b2b0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b2b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b2b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b2bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x23b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23b2c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b2c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b2c4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b2c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b2c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b2cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B2CCu;
    SET_GPR_U32(ctx, 31, 0x23B2D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B2CCu, 0x23B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2D4u;
label_23b2d4:
    // 0x23b2d4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23b2d8: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23b2dc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B2DCu;
    SET_GPR_U32(ctx, 31, 0x23B2E4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B2DCu, 0x23B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2E4u;
label_23b2e4:
    // 0x23b2e4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23b2e8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23b2ec: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B2ECu;
    SET_GPR_U32(ctx, 31, 0x23B2F4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B2ECu, 0x23B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2F4u;
label_23b2f4:
    // 0x23b2f4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23b2f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23b2fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23b2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b300: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b304: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23b308: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23b308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23b30c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b30cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b310: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23B310u;
    SET_GPR_U32(ctx, 31, 0x23B318u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23B310u, 0x23B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B318u;
label_23b318:
    // 0x23b318: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b31c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23b31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23b320: 0x10600129  beqz        $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x23B320u;
    {
        const bool branch_taken_0x23b320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b320) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B328u;
    // 0x23b328: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b32c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x23b32cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x23b330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23b334: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x23b334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b338: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b33c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x23b33cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23b340: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23b340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23b344: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23b344u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23b348: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x23B348u;
    {
        const bool branch_taken_0x23b348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b348) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B350u;
    // 0x23b350: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B350u;
    SET_GPR_U32(ctx, 31, 0x23B358u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B350u, 0x23B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B358u;
label_23b358:
    // 0x23b358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b35c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b360: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x23b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x23b364: 0x34462800  ori         $a2, $v0, 0x2800
    ctx->pc = 0x23b364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x23b368: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b36c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b370: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23b370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23b374: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b378: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23b378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23b37c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23B37Cu;
    SET_GPR_U32(ctx, 31, 0x23B384u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23B37Cu, 0x23B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B384u;
label_23b384:
    // 0x23b384: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b388: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b38c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23b38cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23b390: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23b390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23b394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b398: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b39c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b3a0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23b3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23b3a4: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x23B3A4u;
    {
        const bool branch_taken_0x23b3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3a4) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B3ACu;
label_23b3ac:
    // 0x23b3ac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b3b0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b3b4: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x23b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x23b3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b3bc: 0x0  nop
    ctx->pc = 0x23b3bcu;
    // NOP
    // 0x23b3c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b3c4: 0x0  nop
    ctx->pc = 0x23b3c4u;
    // NOP
    // 0x23b3c8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B3C8u;
    {
        const bool branch_taken_0x23b3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b3c8) {
            ctx->pc = 0x23B3ECu;
            goto label_23b3ec;
        }
    }
    ctx->pc = 0x23B3D0u;
    // 0x23b3d0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23b3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b3d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b3dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b3e0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b3e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23B3E4u;
    {
        const bool branch_taken_0x23b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3e4) {
            ctx->pc = 0x23B43Cu;
            goto label_23b43c;
        }
    }
    ctx->pc = 0x23B3ECu;
label_23b3ec:
    // 0x23b3ec: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b3f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b3f4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x23b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x23b3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b3fc: 0x0  nop
    ctx->pc = 0x23b3fcu;
    // NOP
    // 0x23b400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b404: 0x0  nop
    ctx->pc = 0x23b404u;
    // NOP
    // 0x23b408: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B408u;
    {
        const bool branch_taken_0x23b408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b408) {
            ctx->pc = 0x23B42Cu;
            goto label_23b42c;
        }
    }
    ctx->pc = 0x23B410u;
    // 0x23b410: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x23b410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x23b414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b418: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b41c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b420: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b424: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B424u;
    {
        const bool branch_taken_0x23b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b424) {
            ctx->pc = 0x23B43Cu;
            goto label_23b43c;
        }
    }
    ctx->pc = 0x23B42Cu;
label_23b42c:
    // 0x23b42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b430: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b434: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b438: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_23b43c:
    // 0x23b43c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b440: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b444: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b448: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b44c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23b450: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23b454: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23b454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23b458: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23b45c: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23b460: 0xc05c848  jal         func_172120
    ctx->pc = 0x23B460u;
    SET_GPR_U32(ctx, 31, 0x23B468u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23B460u, 0x23B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B468u;
label_23b468:
    // 0x23b468: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x23b46c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b470: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b474: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x23b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b478: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23b478u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b47c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23B47Cu;
    SET_GPR_U32(ctx, 31, 0x23B484u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23B47Cu, 0x23B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B484u;
label_23b484:
    // 0x23b484: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b488: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23b48c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b490: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23b494: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23B494u;
    SET_GPR_U32(ctx, 31, 0x23B49Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23B494u, 0x23B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B49Cu;
label_23b49c:
    // 0x23b49c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4a0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23B4A0u;
    SET_GPR_U32(ctx, 31, 0x23B4A8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23B4A0u, 0x23B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4A8u;
label_23b4a8:
    // 0x23b4a8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4ac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23b4acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23b4b0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x23B4B0u;
    {
        const bool branch_taken_0x23b4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4b0) {
            ctx->pc = 0x23B5C8u;
            goto label_23b5c8;
        }
    }
    ctx->pc = 0x23B4B8u;
    // 0x23b4b8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4bc: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x23b4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23b4c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23b4c4: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x23b4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x23b4c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4cc: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23b4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23b4d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23b4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23b4d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23b4d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23b4d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B4D8u;
    {
        const bool branch_taken_0x23b4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4d8) {
            ctx->pc = 0x23B51Cu;
            goto label_23b51c;
        }
    }
    ctx->pc = 0x23B4E0u;
    // 0x23b4e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B4E0u;
    SET_GPR_U32(ctx, 31, 0x23B4E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B4E0u, 0x23B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B4E8u;
label_23b4e8:
    // 0x23b4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b4ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b4f0: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x23b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x23b4f4: 0x34462800  ori         $a2, $v0, 0x2800
    ctx->pc = 0x23b4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x23b4f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b4fc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23b500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23b504: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b508: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23b508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23b50c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23B50Cu;
    SET_GPR_U32(ctx, 31, 0x23B514u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23B50Cu, 0x23B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B514u;
label_23b514:
    // 0x23b514: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x23B514u;
    {
        const bool branch_taken_0x23b514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b514) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B51Cu;
label_23b51c:
    // 0x23b51c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b520: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b524: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23b524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23b528: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23b528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b52c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b530: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23b530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23b534: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b538: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x23b538u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b53c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b540: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x23b540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b544: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b548: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23b548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23b54c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B54Cu;
    SET_GPR_U32(ctx, 31, 0x23B554u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B54Cu, 0x23B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B554u;
label_23b554:
    // 0x23b554: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23b554u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23b558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23b55c: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x23b55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23b560: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x23b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x23b564: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23b564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23b568: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23b568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23b56c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b570: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x23b570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b574: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B574u;
    SET_GPR_U32(ctx, 31, 0x23B57Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B574u, 0x23B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B57Cu;
label_23b57c:
    // 0x23b57c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b580: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23b580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23b584: 0x2470000a  addiu       $s0, $v1, 0xA
    ctx->pc = 0x23b584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23b588: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x23b588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x23b58c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23b58cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23b590: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b594: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b598: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23b598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x23b59c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5a0: 0x8c301a58  lw          $s0, 0x1A58($at)
    ctx->pc = 0x23b5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x23b5a4: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x23b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x23b5a8: 0x2033024  and         $a2, $s0, $v1
    ctx->pc = 0x23b5a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x23b5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5b0: 0xac261a58  sw          $a2, 0x1A58($at)
    ctx->pc = 0x23b5b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x23b5b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5b8: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x23b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x23b5bc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x23b5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x23b5c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5c4: 0xac251a50  sw          $a1, 0x1A50($at)
    ctx->pc = 0x23b5c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
label_23b5c8:
    // 0x23b5c8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x23b5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b5cc: 0x90e809db  lbu         $t0, 0x9DB($a3)
    ctx->pc = 0x23b5ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2523)));
    // 0x23b5d0: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x23b5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x23b5d4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23b5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23b5d8: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x23B5D8u;
    {
        const bool branch_taken_0x23b5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b5d8) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B5E0u;
    // 0x23b5e0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b5e4: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x23B5E4u;
    SET_GPR_U32(ctx, 31, 0x23B5ECu);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x23B5E4u, 0x23B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5ECu;
label_23b5ec:
    // 0x23b5ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x23b5ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b5f0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x23b5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x23b5f4: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x23B5F4u;
    {
        const bool branch_taken_0x23b5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b5f4) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B5FCu;
    // 0x23b5fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b600: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b604: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b608: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x23b608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x23b60c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b610: 0x0  nop
    ctx->pc = 0x23b610u;
    // NOP
    // 0x23b614: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x23b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23b618: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23b61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b620: 0x0  nop
    ctx->pc = 0x23b620u;
    // NOP
    // 0x23b624: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x23b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x23b628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b62c: 0x0  nop
    ctx->pc = 0x23b62cu;
    // NOP
    // 0x23b630: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x23b630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x23b634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b63c: 0x0  nop
    ctx->pc = 0x23b63cu;
    // NOP
    // 0x23b640: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x23b640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x23b644: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23b648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b64c: 0x0  nop
    ctx->pc = 0x23b64cu;
    // NOP
    // 0x23b650: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x23b650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x23b654: 0xa7a000b4  sh          $zero, 0xB4($sp)
    ctx->pc = 0x23b654u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 0));
    // 0x23b658: 0xa3a000b6  sb          $zero, 0xB6($sp)
    ctx->pc = 0x23b658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 182), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b65c: 0xa3a000b7  sb          $zero, 0xB7($sp)
    ctx->pc = 0x23b65cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b660: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b664: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23b668: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23B668u;
    SET_GPR_U32(ctx, 31, 0x23B670u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23B668u, 0x23B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B670u;
label_23b670:
    // 0x23b670: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23B670u;
    {
        const bool branch_taken_0x23b670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b670) {
            ctx->pc = 0x23B7C8u;
            goto label_23b7c8;
        }
    }
    ctx->pc = 0x23B678u;
    // 0x23b678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b67c: 0x0  nop
    ctx->pc = 0x23b67cu;
    // NOP
    // 0x23b680: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x23b680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x23b684: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x23b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x23b688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b68c: 0x0  nop
    ctx->pc = 0x23b68cu;
    // NOP
    // 0x23b690: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x23b690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x23b694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b698: 0x0  nop
    ctx->pc = 0x23b698u;
    // NOP
    // 0x23b69c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x23b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x23b6a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b6a8: 0x0  nop
    ctx->pc = 0x23b6a8u;
    // NOP
    // 0x23b6ac: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x23b6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x23b6b0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b6b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23b6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b6b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b6bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23b6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b6c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23b6c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b6c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b6cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b6d0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b6d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b6d8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b6dc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x23b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x23b6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b6e4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b6e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b6e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b6ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B6ECu;
    SET_GPR_U32(ctx, 31, 0x23B6F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B6ECu, 0x23B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6F4u;
label_23b6f4:
    // 0x23b6f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B6F4u;
    SET_GPR_U32(ctx, 31, 0x23B6FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B6F4u, 0x23B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6FCu;
label_23b6fc:
    // 0x23b6fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B6FCu;
    {
        const bool branch_taken_0x23b6fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23b6fc) {
            ctx->pc = 0x23B718u;
            goto label_23b718;
        }
    }
    ctx->pc = 0x23B704u;
    // 0x23b704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b708: 0x0  nop
    ctx->pc = 0x23b708u;
    // NOP
    // 0x23b70c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23b70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23b710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B710u;
    {
        const bool branch_taken_0x23b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b710) {
            ctx->pc = 0x23B734u;
            goto label_23b734;
        }
    }
    ctx->pc = 0x23B718u;
label_23b718:
    // 0x23b718: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23b71c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b728: 0x0  nop
    ctx->pc = 0x23b728u;
    // NOP
    // 0x23b72c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23b72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23b730: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23b730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23b734:
    // 0x23b734: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x23b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b738: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23b738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23b73c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x23b73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x23b740: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b748: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23b74c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x23b74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b750: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23b750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x23b754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23b754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23b758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23b758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23b75c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b760: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b764: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b768: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x23b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x23b76c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x23b76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x23b770: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b774: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b778: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b778u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b77c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B77Cu;
    SET_GPR_U32(ctx, 31, 0x23B784u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B77Cu, 0x23B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B784u;
label_23b784:
    // 0x23b784: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23b788: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x23b788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x23b78c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B78Cu;
    SET_GPR_U32(ctx, 31, 0x23B794u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B78Cu, 0x23B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B794u;
label_23b794:
    // 0x23b794: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x23b794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x23b798: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23b798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23b79c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B79Cu;
    SET_GPR_U32(ctx, 31, 0x23B7A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B79Cu, 0x23B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7A4u;
label_23b7a4:
    // 0x23b7a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b7a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23b7ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23b7b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23b7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b7b4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23b7b8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23b7bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b7bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b7c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23B7C0u;
    SET_GPR_U32(ctx, 31, 0x23B7C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23B7C0u, 0x23B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7C8u;
label_23b7c8:
    // 0x23b7c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b7cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b7d0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b7d8: 0x0  nop
    ctx->pc = 0x23b7d8u;
    // NOP
    // 0x23b7dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23b7dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b7e0: 0x0  nop
    ctx->pc = 0x23b7e0u;
    // NOP
    // 0x23b7e4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23B7E4u;
    {
        const bool branch_taken_0x23b7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b7e4) {
            ctx->pc = 0x23B8C8u;
            goto label_23b8c8;
        }
    }
    ctx->pc = 0x23B7ECu;
    // 0x23b7ec: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b7f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b7f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23b7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b7f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b7fc: 0x0  nop
    ctx->pc = 0x23b7fcu;
    // NOP
    // 0x23b800: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b804: 0x0  nop
    ctx->pc = 0x23b804u;
    // NOP
    // 0x23b808: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23B808u;
    {
        const bool branch_taken_0x23b808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b808) {
            ctx->pc = 0x23B870u;
            goto label_23b870;
        }
    }
    ctx->pc = 0x23B810u;
    // 0x23b810: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b814: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x23b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23b818: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b81c: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x23b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
    // 0x23b820: 0x34860fdb  ori         $a2, $a0, 0xFDB
    ctx->pc = 0x23b820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23b824: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23b824u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b828: 0x0  nop
    ctx->pc = 0x23b828u;
    // NOP
    // 0x23b82c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23b82cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b830: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23b830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23b834: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b838: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23b838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b83c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b844: 0x0  nop
    ctx->pc = 0x23b844u;
    // NOP
    // 0x23b848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b84c: 0x0  nop
    ctx->pc = 0x23b84cu;
    // NOP
    // 0x23b850: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23B850u;
    {
        const bool branch_taken_0x23b850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b850) {
            ctx->pc = 0x23B8C8u;
            goto label_23b8c8;
        }
    }
    ctx->pc = 0x23B858u;
    // 0x23b858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b85c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b860: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b864: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23b864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23b868: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23B868u;
    {
        const bool branch_taken_0x23b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b868) {
            ctx->pc = 0x23B8C8u;
            goto label_23b8c8;
        }
    }
    ctx->pc = 0x23B870u;
label_23b870:
    // 0x23b870: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b874: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x23b874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23b878: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b87c: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x23b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
    // 0x23b880: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x23b880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23b884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b888: 0x0  nop
    ctx->pc = 0x23b888u;
    // NOP
    // 0x23b88c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23b88cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b890: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23b890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23b894: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b898: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b89c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b8a4: 0x0  nop
    ctx->pc = 0x23b8a4u;
    // NOP
    // 0x23b8a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b8ac: 0x0  nop
    ctx->pc = 0x23b8acu;
    // NOP
    // 0x23b8b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23B8B0u;
    {
        const bool branch_taken_0x23b8b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b8b0) {
            ctx->pc = 0x23B8C8u;
            goto label_23b8c8;
        }
    }
    ctx->pc = 0x23B8B8u;
    // 0x23b8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b8bc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b8c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b8c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23b8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23b8c8:
    // 0x23b8c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b8cc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b8d0: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x23b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x23b8d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23b8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23b8d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23b8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23b8dc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23b8dcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b8e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23b8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b8e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23b8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b8e8: 0x0  nop
    ctx->pc = 0x23b8e8u;
    // NOP
    // 0x23b8ec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B8ECu;
    {
        const bool branch_taken_0x23b8ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b8ec) {
            ctx->pc = 0x23B910u;
            goto label_23b910;
        }
    }
    ctx->pc = 0x23B8F4u;
    // 0x23b8f4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b8f8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b8fc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x23b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x23b900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23b900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b904: 0x0  nop
    ctx->pc = 0x23b904u;
    // NOP
    // 0x23b908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23b908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b90c: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23b90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_23b910:
    // 0x23b910: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x23b910u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b91c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x23b91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x23b920: 0x3e00008  jr          $ra
    ctx->pc = 0x23B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B928u;
}
