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

// Function: Em0c_R1_mv0d
// Address: 0x22aab0 - 0x22bc40
void Em0c_R1_mv0d_0x22aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv0d_0x22aab0");
#endif

    switch (ctx->pc) {
        case 0x22ab14u: goto label_22ab14;
        case 0x22ab44u: goto label_22ab44;
        case 0x22ac64u: goto label_22ac64;
        case 0x22ac70u: goto label_22ac70;
        case 0x22aca8u: goto label_22aca8;
        case 0x22acd4u: goto label_22acd4;
        case 0x22ae34u: goto label_22ae34;
        case 0x22ae50u: goto label_22ae50;
        case 0x22ae68u: goto label_22ae68;
        case 0x22ae74u: goto label_22ae74;
        case 0x22af28u: goto label_22af28;
        case 0x22afacu: goto label_22afac;
        case 0x22afb4u: goto label_22afb4;
        case 0x22b03cu: goto label_22b03c;
        case 0x22b04cu: goto label_22b04c;
        case 0x22b05cu: goto label_22b05c;
        case 0x22b080u: goto label_22b080;
        case 0x22b0a0u: goto label_22b0a0;
        case 0x22b124u: goto label_22b124;
        case 0x22b12cu: goto label_22b12c;
        case 0x22b1b4u: goto label_22b1b4;
        case 0x22b1c4u: goto label_22b1c4;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1f8u: goto label_22b1f8;
        case 0x22b244u: goto label_22b244;
        case 0x22b26cu: goto label_22b26c;
        case 0x22b300u: goto label_22b300;
        case 0x22b490u: goto label_22b490;
        case 0x22b4c8u: goto label_22b4c8;
        case 0x22b4e8u: goto label_22b4e8;
        case 0x22b558u: goto label_22b558;
        case 0x22b564u: goto label_22b564;
        case 0x22b704u: goto label_22b704;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b840u: goto label_22b840;
        case 0x22b848u: goto label_22b848;
        case 0x22b8d4u: goto label_22b8d4;
        case 0x22b8e4u: goto label_22b8e4;
        case 0x22b8fcu: goto label_22b8fc;
        case 0x22b920u: goto label_22b920;
        case 0x22b974u: goto label_22b974;
        case 0x22b99cu: goto label_22b99c;
        default: break;
    }

    ctx->pc = 0x22aab0u;

    // 0x22aab0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22aab4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x22aab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x22aab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22aabc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x22aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x22aac0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22aac4: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x22aac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22aac8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22aac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22aacc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22aad0: 0x1083022c  beq         $a0, $v1, . + 4 + (0x22C << 2)
    ctx->pc = 0x22AAD0u;
    {
        const bool branch_taken_0x22aad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22aad0) {
            ctx->pc = 0x22B384u;
            goto label_22b384;
        }
    }
    ctx->pc = 0x22AAD8u;
    // 0x22aad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aadc: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x22AADCu;
    {
        const bool branch_taken_0x22aadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22aadc) {
            ctx->pc = 0x22AD30u;
            goto label_22ad30;
        }
    }
    ctx->pc = 0x22AAE4u;
    // 0x22aae4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AAE4u;
    {
        const bool branch_taken_0x22aae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aae4) {
            ctx->pc = 0x22AAF4u;
            goto label_22aaf4;
        }
    }
    ctx->pc = 0x22AAECu;
    // 0x22aaec: 0x100003c1  b           . + 4 + (0x3C1 << 2)
    ctx->pc = 0x22AAECu;
    {
        const bool branch_taken_0x22aaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aaec) {
            ctx->pc = 0x22B9F4u;
            goto label_22b9f4;
        }
    }
    ctx->pc = 0x22AAF4u;
label_22aaf4:
    // 0x22aaf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aaf8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22aafc: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x22aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x22ab00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ab00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab04: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab08: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ab08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22ab0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22AB0Cu;
    SET_GPR_U32(ctx, 31, 0x22AB14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22AB0Cu, 0x22AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB14u;
label_22ab14:
    // 0x22ab14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ab14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ab18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22ab18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22ab1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22ab1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22ab20: 0x2463001a  addiu       $v1, $v1, 0x1A
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x22ab24: 0x34662d00  ori         $a2, $v1, 0x2D00
    ctx->pc = 0x22ab24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11520);
    // 0x22ab28: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab2c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab30: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x22ab34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ab34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ab38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ab3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22AB3Cu;
    SET_GPR_U32(ctx, 31, 0x22AB44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22AB3Cu, 0x22AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB44u;
label_22ab44:
    // 0x22ab44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ab44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ab48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab4c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab50: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22ab54: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x22ab54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x22ab58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ab58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab5c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab60: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ab64: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x22ab64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x22ab68: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x22ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x22ab6c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x22ab6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22ab70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22ab70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ab7c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x22ab7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x22ab80: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x22ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
    // 0x22ab84: 0x3485999a  ori         $a1, $a0, 0x999A
    ctx->pc = 0x22ab84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x22ab88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22ab88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab8c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ab94: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x22ab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x22ab98: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ab9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22aba0: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x22aba0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x22aba4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22aba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22aba8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x22aba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x22abac: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x22ABACu;
    {
        const bool branch_taken_0x22abac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abac) {
            ctx->pc = 0x22AC40u;
            goto label_22ac40;
        }
    }
    ctx->pc = 0x22ABB4u;
    // 0x22abb4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22abb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22abbc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x22abc0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22abc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22abc4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22abc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22abcc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x22abccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x22abd0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22abd4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22abd8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22abdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22abdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22abe0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x22abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22abe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22abe8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x22abe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x22abec: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22abecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22abf0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22abf4: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x22abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x22abf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22abf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22abfc: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x22abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ac00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ac04: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x22ac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x22ac08: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac0c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ac10: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x22ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x22ac14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ac14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ac18: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x22ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ac1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ac20: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x22ac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x22ac24: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac28: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ac2c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x22ac30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ac30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ac34: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x22ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ac38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ac38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ac3c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x22ac3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_22ac40:
    // 0x22ac40: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22ac44: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22ac44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22ac48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22ac48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ac4c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac50: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22ac54: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22ac58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ac58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ac5c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22AC5Cu;
    SET_GPR_U32(ctx, 31, 0x22AC64u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22AC5Cu, 0x22AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC64u;
label_22ac64:
    // 0x22ac64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ac64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ac68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22AC68u;
    SET_GPR_U32(ctx, 31, 0x22AC70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22AC68u, 0x22AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC70u;
label_22ac70:
    // 0x22ac70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ac70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ac74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22ac74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22ac78: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22ac7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22AC7Cu;
    {
        const bool branch_taken_0x22ac7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac7c) {
            ctx->pc = 0x22ACB0u;
            goto label_22acb0;
        }
    }
    ctx->pc = 0x22AC84u;
    // 0x22ac84: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22ac8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22ac90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ac90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ac94: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22ac98: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22ac9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ac9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22aca0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22ACA0u;
    SET_GPR_U32(ctx, 31, 0x22ACA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22ACA0u, 0x22ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACA8u;
label_22aca8:
    // 0x22aca8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22ACA8u;
    {
        const bool branch_taken_0x22aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aca8) {
            ctx->pc = 0x22ACD4u;
            goto label_22acd4;
        }
    }
    ctx->pc = 0x22ACB0u;
label_22acb0:
    // 0x22acb0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22acb4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22acb8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22acbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22acbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22acc0: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x22acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x22acc4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22acc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22acc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22accc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22ACCCu;
    SET_GPR_U32(ctx, 31, 0x22ACD4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22ACCCu, 0x22ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACD4u;
label_22acd4:
    // 0x22acd4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22acd8: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x22acd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x22acdc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x22ace0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ace0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ace4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ace8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22acec: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22acecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22acf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22acf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22acf4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22acf4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22acf8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22acfc: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x22acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22ad00: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22ad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22ad04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22ad04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22ad08: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22ad0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22ad10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22ad10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22ad14: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22ad14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22ad18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad1c: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x22ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22ad20: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x22ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22ad24: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x22ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x22ad28: 0xa63825  or          $a3, $a1, $a2
    ctx->pc = 0x22ad28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x22ad2c: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x22ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
label_22ad30:
    // 0x22ad30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad34: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ad38: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x22ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x22ad3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad40: 0x0  nop
    ctx->pc = 0x22ad40u;
    // NOP
    // 0x22ad44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ad44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ad48: 0x0  nop
    ctx->pc = 0x22ad48u;
    // NOP
    // 0x22ad4c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22AD4Cu;
    {
        const bool branch_taken_0x22ad4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ad4c) {
            ctx->pc = 0x22AD70u;
            goto label_22ad70;
        }
    }
    ctx->pc = 0x22AD54u;
    // 0x22ad54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x22ad58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad5c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ad64: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22ad68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22AD68u;
    {
        const bool branch_taken_0x22ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ad68) {
            ctx->pc = 0x22ADC0u;
            goto label_22adc0;
        }
    }
    ctx->pc = 0x22AD70u;
label_22ad70:
    // 0x22ad70: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ad74: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ad78: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x22ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x22ad7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad80: 0x0  nop
    ctx->pc = 0x22ad80u;
    // NOP
    // 0x22ad84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ad84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ad88: 0x0  nop
    ctx->pc = 0x22ad88u;
    // NOP
    // 0x22ad8c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22AD8Cu;
    {
        const bool branch_taken_0x22ad8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ad8c) {
            ctx->pc = 0x22ADB0u;
            goto label_22adb0;
        }
    }
    ctx->pc = 0x22AD94u;
    // 0x22ad94: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x22ad98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ad98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad9c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ada0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22ada4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22ada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22ada8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22ADA8u;
    {
        const bool branch_taken_0x22ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ada8) {
            ctx->pc = 0x22ADC0u;
            goto label_22adc0;
        }
    }
    ctx->pc = 0x22ADB0u;
label_22adb0:
    // 0x22adb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22adb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22adb4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22adb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22adbc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22adbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22adc0:
    // 0x22adc0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22adc4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22adc8: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x22adc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x22adcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22add0: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x22add0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22add4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22ADD4u;
    {
        const bool branch_taken_0x22add4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22add4) {
            ctx->pc = 0x22ADF8u;
            goto label_22adf8;
        }
    }
    ctx->pc = 0x22ADDCu;
    // 0x22addc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22addcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ade0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x22ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22ade4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x22ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x22ade8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22ade8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22adec: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x22adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22adf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22adf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22adf4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22adf8:
    // 0x22adf8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22adfc: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x22adfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x22ae00: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22AE00u;
    {
        const bool branch_taken_0x22ae00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ae00) {
            ctx->pc = 0x22AE58u;
            goto label_22ae58;
        }
    }
    ctx->pc = 0x22AE08u;
    // 0x22ae08: 0x3c103d8e  lui         $s0, 0x3D8E
    ctx->pc = 0x22ae08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15758 << 16));
    // 0x22ae0c: 0x3602fa35  ori         $v0, $s0, 0xFA35
    ctx->pc = 0x22ae0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64053);
    // 0x22ae10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22ae10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22ae14: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae1c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x22ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22ae20: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x22ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ae24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22ae28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22ae2c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22AE2Cu;
    SET_GPR_U32(ctx, 31, 0x22AE34u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22AE2Cu, 0x22AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE34u;
label_22ae34:
    // 0x22ae34: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x22ae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x22ae38: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae3c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ae40: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x22ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ae44: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22ae44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ae48: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22AE48u;
    SET_GPR_U32(ctx, 31, 0x22AE50u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22AE48u, 0x22AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE50u;
label_22ae50:
    // 0x22ae50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae54: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_22ae58:
    // 0x22ae58: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22ae60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22AE60u;
    SET_GPR_U32(ctx, 31, 0x22AE68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22AE60u, 0x22AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE68u;
label_22ae68:
    // 0x22ae68: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae6c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22AE6Cu;
    SET_GPR_U32(ctx, 31, 0x22AE74u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22AE6Cu, 0x22AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE74u;
label_22ae74:
    // 0x22ae74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae78: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x22ae78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22ae7c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x22ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22ae80: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x22ae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x22ae84: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x22AE84u;
    {
        const bool branch_taken_0x22ae84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae84) {
            ctx->pc = 0x22B1FCu;
            goto label_22b1fc;
        }
    }
    ctx->pc = 0x22AE8Cu;
    // 0x22ae8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ae90: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae94: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22ae94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22ae98: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ae9c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x22ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22aea0: 0x24620880  addiu       $v0, $v1, 0x880
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x22aea4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22aea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22aea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aeac: 0x0  nop
    ctx->pc = 0x22aeacu;
    // NOP
    // 0x22aeb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x22aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22aeb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22aeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aeb8: 0x0  nop
    ctx->pc = 0x22aeb8u;
    // NOP
    // 0x22aebc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x22aec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22aec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aec4: 0x0  nop
    ctx->pc = 0x22aec4u;
    // NOP
    // 0x22aec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22aecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22aed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aed4: 0x0  nop
    ctx->pc = 0x22aed4u;
    // NOP
    // 0x22aed8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22aed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22aedc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22aee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aee4: 0x0  nop
    ctx->pc = 0x22aee4u;
    // NOP
    // 0x22aee8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22aee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22aeec: 0xa7a00044  sh          $zero, 0x44($sp)
    ctx->pc = 0x22aeecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x22aef0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22aef4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22aef8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22aefc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x22af00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AF00u;
    {
        const bool branch_taken_0x22af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af00) {
            ctx->pc = 0x22AF10u;
            goto label_22af10;
        }
    }
    ctx->pc = 0x22AF08u;
    // 0x22af08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22af0c: 0xa7a20044  sh          $v0, 0x44($sp)
    ctx->pc = 0x22af0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 2));
label_22af10:
    // 0x22af10: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x22af10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x22af14: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x22af14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x22af18: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22af1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22af20: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22AF20u;
    SET_GPR_U32(ctx, 31, 0x22AF28u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22AF20u, 0x22AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF28u;
label_22af28:
    // 0x22af28: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x22AF28u;
    {
        const bool branch_taken_0x22af28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af28) {
            ctx->pc = 0x22B080u;
            goto label_22b080;
        }
    }
    ctx->pc = 0x22AF30u;
    // 0x22af30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22af30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af34: 0x0  nop
    ctx->pc = 0x22af34u;
    // NOP
    // 0x22af38: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22af38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22af3c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22af40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22af40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af44: 0x0  nop
    ctx->pc = 0x22af44u;
    // NOP
    // 0x22af48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22af48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22af4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22af4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af50: 0x0  nop
    ctx->pc = 0x22af50u;
    // NOP
    // 0x22af54: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22af58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22af5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22af5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22af60: 0x0  nop
    ctx->pc = 0x22af60u;
    // NOP
    // 0x22af64: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22af64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22af68: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22af6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22af6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22af70: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22af70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x22af74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22af78: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x22af78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x22af7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22af7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22af80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22af80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22af84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x22af84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22af88: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x22af88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x22af8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22af90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22af94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22af94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22af98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22af98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22af9c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22af9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22afa0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22afa0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22afa4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22AFA4u;
    SET_GPR_U32(ctx, 31, 0x22AFACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22AFA4u, 0x22AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFACu;
label_22afac:
    // 0x22afac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22AFACu;
    SET_GPR_U32(ctx, 31, 0x22AFB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22AFACu, 0x22AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFB4u;
label_22afb4:
    // 0x22afb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AFB4u;
    {
        const bool branch_taken_0x22afb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22afb4) {
            ctx->pc = 0x22AFD0u;
            goto label_22afd0;
        }
    }
    ctx->pc = 0x22AFBCu;
    // 0x22afbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22afc0: 0x0  nop
    ctx->pc = 0x22afc0u;
    // NOP
    // 0x22afc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22afc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22afc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22AFC8u;
    {
        const bool branch_taken_0x22afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22afc8) {
            ctx->pc = 0x22AFECu;
            goto label_22afec;
        }
    }
    ctx->pc = 0x22AFD0u;
label_22afd0:
    // 0x22afd0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22afd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22afd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22afd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22afd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22afdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22afdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22afe0: 0x0  nop
    ctx->pc = 0x22afe0u;
    // NOP
    // 0x22afe4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22afe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22afe8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22afe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22afec:
    // 0x22afec: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aff0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22aff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22aff4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22aff8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22affc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x22affcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b000: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22b000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22b004: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x22b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b008: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x22b008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x22b00c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x22b00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b010: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x22b010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22b014: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x22b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x22b018: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b01c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b020: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22b024: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b028: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b028u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b02c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b030: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b030u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b034: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B034u;
    SET_GPR_U32(ctx, 31, 0x22B03Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B034u, 0x22B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B03Cu;
label_22b03c:
    // 0x22b03c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22b040: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22b040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22b044: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B044u;
    SET_GPR_U32(ctx, 31, 0x22B04Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B044u, 0x22B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B04Cu;
label_22b04c:
    // 0x22b04c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22b050: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22b050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22b054: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B054u;
    SET_GPR_U32(ctx, 31, 0x22B05Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B054u, 0x22B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B05Cu;
label_22b05c:
    // 0x22b05c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b060: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22b064: 0x34474000  ori         $a3, $v0, 0x4000
    ctx->pc = 0x22b064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22b068: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x22b068u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b06c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22b070: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x22b070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22b074: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b074u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b078: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22B078u;
    SET_GPR_U32(ctx, 31, 0x22B080u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22B078u, 0x22B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B080u;
label_22b080:
    // 0x22b080: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x22b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x22b084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b088: 0x0  nop
    ctx->pc = 0x22b088u;
    // NOP
    // 0x22b08c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22b08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22b090: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b094: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22b098: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22B098u;
    SET_GPR_U32(ctx, 31, 0x22B0A0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22B098u, 0x22B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0A0u;
label_22b0a0:
    // 0x22b0a0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x22B0A0u;
    {
        const bool branch_taken_0x22b0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b0a0) {
            ctx->pc = 0x22B1FCu;
            goto label_22b1fc;
        }
    }
    ctx->pc = 0x22B0A8u;
    // 0x22b0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0ac: 0x0  nop
    ctx->pc = 0x22b0acu;
    // NOP
    // 0x22b0b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22b0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22b0b4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x22b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x22b0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0bc: 0x0  nop
    ctx->pc = 0x22b0bcu;
    // NOP
    // 0x22b0c0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22b0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22b0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0c8: 0x0  nop
    ctx->pc = 0x22b0c8u;
    // NOP
    // 0x22b0cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22b0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22b0d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22b0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b0d8: 0x0  nop
    ctx->pc = 0x22b0d8u;
    // NOP
    // 0x22b0dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22b0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22b0e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b0e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22b0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b0e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22b0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x22b0ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22b0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b0f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22b0f4: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x22b0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b0f8: 0x853824  and         $a3, $a0, $a1
    ctx->pc = 0x22b0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x22b0fc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x22b0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x22b100: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b104: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b108: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x22b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x22b10c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b110: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b114: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b118: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b118u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b11c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B11Cu;
    SET_GPR_U32(ctx, 31, 0x22B124u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B11Cu, 0x22B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B124u;
label_22b124:
    // 0x22b124: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B124u;
    SET_GPR_U32(ctx, 31, 0x22B12Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B124u, 0x22B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B12Cu;
label_22b12c:
    // 0x22b12c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B12Cu;
    {
        const bool branch_taken_0x22b12c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22b12c) {
            ctx->pc = 0x22B148u;
            goto label_22b148;
        }
    }
    ctx->pc = 0x22B134u;
    // 0x22b134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b138: 0x0  nop
    ctx->pc = 0x22b138u;
    // NOP
    // 0x22b13c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b13cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22B140u;
    {
        const bool branch_taken_0x22b140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b140) {
            ctx->pc = 0x22B164u;
            goto label_22b164;
        }
    }
    ctx->pc = 0x22B148u;
label_22b148:
    // 0x22b148: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22b148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22b14c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22b150: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22b150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22b154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b158: 0x0  nop
    ctx->pc = 0x22b158u;
    // NOP
    // 0x22b15c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b160: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22b160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22b164:
    // 0x22b164: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22b16c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22b170: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b174: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x22b174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22b178: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22b178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22b17c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b180: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x22b180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x22b184: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22b184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22b188: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x22b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x22b18c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22b18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b190: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b194: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b198: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x22b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x22b19c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b1a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b1a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b1a4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b1a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b1a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b1ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B1ACu;
    SET_GPR_U32(ctx, 31, 0x22B1B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B1ACu, 0x22B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1B4u;
label_22b1b4:
    // 0x22b1b4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22b1b8: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22b1bc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B1BCu;
    SET_GPR_U32(ctx, 31, 0x22B1C4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B1BCu, 0x22B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1C4u;
label_22b1c4:
    // 0x22b1c4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22b1c8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22b1cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B1CCu;
    SET_GPR_U32(ctx, 31, 0x22B1D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B1CCu, 0x22B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1D4u;
label_22b1d4:
    // 0x22b1d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b1d8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22b1dc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22b1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22b1e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22b1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b1e4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22b1e8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22b1ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b1ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b1f0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22B1F0u;
    SET_GPR_U32(ctx, 31, 0x22B1F8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22B1F0u, 0x22B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1F8u;
label_22b1f8:
    // 0x22b1f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22b1f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_22b1fc:
    // 0x22b1fc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b200: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x22b200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x22b204: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x22B204u;
    {
        const bool branch_taken_0x22b204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b204) {
            ctx->pc = 0x22B2C8u;
            goto label_22b2c8;
        }
    }
    ctx->pc = 0x22B20Cu;
    // 0x22b20c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b210: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b214: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22b214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22b218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b21c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b220: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x22b220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b224: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b228: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x22b228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b22c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b230: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22b230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b234: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b238: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22b238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22b23c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B23Cu;
    SET_GPR_U32(ctx, 31, 0x22B244u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B23Cu, 0x22B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B244u;
label_22b244:
    // 0x22b244: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22b244u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b248: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22b248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22b24c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22b24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22b250: 0x2466003c  addiu       $a2, $v1, 0x3C
    ctx->pc = 0x22b250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x22b254: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x22b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x22b258: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22b258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22b25c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b260: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x22b260u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22b264: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B264u;
    SET_GPR_U32(ctx, 31, 0x22B26Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B264u, 0x22B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B26Cu;
label_22b26c:
    // 0x22b26c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22b26cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b270: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x22b270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22b274: 0x30e8003f  andi        $t0, $a3, 0x3F
    ctx->pc = 0x22b274u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x22b278: 0x250300b4  addiu       $v1, $t0, 0xB4
    ctx->pc = 0x22b278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 180));
    // 0x22b27c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22b27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22b280: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22b280u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22b284: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b288: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b28c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22b28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22b290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b294: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x22b294u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22b298: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22b29c: 0x34647fff  ori         $a0, $v1, 0x7FFF
    ctx->pc = 0x22b29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x22b2a0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x22b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22b2a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b2a8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22b2a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22b2ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b2b0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b2b4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22b2b8: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x22b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x22b2bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22b2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22b2c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22b2c4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_22b2c8:
    // 0x22b2c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b2cc: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22b2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22b2d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22b2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22b2d4: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x22b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x22b2d8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B2D8u;
    {
        const bool branch_taken_0x22b2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22b2d8) {
            ctx->pc = 0x22B2F8u;
            goto label_22b2f8;
        }
    }
    ctx->pc = 0x22B2E0u;
    // 0x22b2e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b2e4: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22b2e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22b2e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22b2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22b2ec: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x22b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x22b2f0: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x22B2F0u;
    {
        const bool branch_taken_0x22b2f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b2f0) {
            ctx->pc = 0x22B348u;
            goto label_22b348;
        }
    }
    ctx->pc = 0x22B2F8u;
label_22b2f8:
    // 0x22b2f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B2F8u;
    SET_GPR_U32(ctx, 31, 0x22B300u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B2F8u, 0x22B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B300u;
label_22b300:
    // 0x22b300: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22b300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b304: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x22b304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22b308: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x22b308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22b30c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b310: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22B310u;
    {
        const bool branch_taken_0x22b310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b310) {
            ctx->pc = 0x22B348u;
            goto label_22b348;
        }
    }
    ctx->pc = 0x22B318u;
    // 0x22b318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b31c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b320: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22b320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22b324: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x22b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x22b328: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b32c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22b32cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22b330: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b334: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22b334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b338: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b33c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x22b33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b340: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b344: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22b344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_22b348:
    // 0x22b348: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b34c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22b34cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22b350: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22b350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22b354: 0x2864007b  slti        $a0, $v1, 0x7B
    ctx->pc = 0x22b354u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)123) ? 1 : 0);
    // 0x22b358: 0x148001a6  bnez        $a0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x22B358u;
    {
        const bool branch_taken_0x22b358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b358) {
            ctx->pc = 0x22B9F4u;
            goto label_22b9f4;
        }
    }
    ctx->pc = 0x22B360u;
    // 0x22b360: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b364: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x22b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b368: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x22b368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x22b36c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b370: 0x0  nop
    ctx->pc = 0x22b370u;
    // NOP
    // 0x22b374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b378: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x22b378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x22b37c: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x22B37Cu;
    {
        const bool branch_taken_0x22b37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b37c) {
            ctx->pc = 0x22B9F4u;
            goto label_22b9f4;
        }
    }
    ctx->pc = 0x22B384u;
label_22b384:
    // 0x22b384: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b388: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b38c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x22b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x22b390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b394: 0x0  nop
    ctx->pc = 0x22b394u;
    // NOP
    // 0x22b398: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b39c: 0x0  nop
    ctx->pc = 0x22b39cu;
    // NOP
    // 0x22b3a0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22B3A0u;
    {
        const bool branch_taken_0x22b3a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b3a0) {
            ctx->pc = 0x22B3C4u;
            goto label_22b3c4;
        }
    }
    ctx->pc = 0x22B3A8u;
    // 0x22b3a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x22b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22b3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b3b4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b3b8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22b3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22b3bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22B3BCu;
    {
        const bool branch_taken_0x22b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b3bc) {
            ctx->pc = 0x22B418u;
            goto label_22b418;
        }
    }
    ctx->pc = 0x22B3C4u;
label_22b3c4:
    // 0x22b3c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b3c8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b3cc: 0x3c044496  lui         $a0, 0x4496
    ctx->pc = 0x22b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17558 << 16));
    // 0x22b3d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b3d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3d4: 0x0  nop
    ctx->pc = 0x22b3d4u;
    // NOP
    // 0x22b3d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b3dc: 0x0  nop
    ctx->pc = 0x22b3dcu;
    // NOP
    // 0x22b3e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22B3E0u;
    {
        const bool branch_taken_0x22b3e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b3e0) {
            ctx->pc = 0x22B404u;
            goto label_22b404;
        }
    }
    ctx->pc = 0x22B3E8u;
    // 0x22b3e8: 0x3c05c120  lui         $a1, 0xC120
    ctx->pc = 0x22b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49440 << 16));
    // 0x22b3ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b3ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b3f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b3f8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x22b3fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22B3FCu;
    {
        const bool branch_taken_0x22b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b3fc) {
            ctx->pc = 0x22B418u;
            goto label_22b418;
        }
    }
    ctx->pc = 0x22B404u;
label_22b404:
    // 0x22b404: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x22b408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b40c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b410: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22b410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b414: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x22b414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_22b418:
    // 0x22b418: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b41c: 0x84a2127e  lh          $v0, 0x127E($a1)
    ctx->pc = 0x22b41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x22b420: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x22B420u;
    {
        const bool branch_taken_0x22b420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b420) {
            ctx->pc = 0x22B548u;
            goto label_22b548;
        }
    }
    ctx->pc = 0x22B428u;
    // 0x22b428: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b42c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22b42cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b430: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x22b434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b438: 0x0  nop
    ctx->pc = 0x22b438u;
    // NOP
    // 0x22b43c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22b43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22b440: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b444: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22b444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22b448: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x22b448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x22b44c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x22b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x22b450: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x22b450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22b454: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b458: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b45c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b460: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x22b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x22b464: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x22b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x22b468: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x22b468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22b46c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22b470: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b474: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x22b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22b478: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22b47c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22b480: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x22b480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x22b484: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x22b484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x22b488: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x22B488u;
    SET_GPR_U32(ctx, 31, 0x22B490u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x22B488u, 0x22B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B490u;
label_22b490:
    // 0x22b490: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b494: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22b494u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b498: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x22b498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x22b49c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b4a0: 0x0  nop
    ctx->pc = 0x22b4a0u;
    // NOP
    // 0x22b4a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b4a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b4a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b4ac: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22b4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22b4b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b4b8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x22b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b4bc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22b4bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b4c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22B4C0u;
    SET_GPR_U32(ctx, 31, 0x22B4C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22B4C0u, 0x22B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4C8u;
label_22b4c8:
    // 0x22b4c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22b4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22b4d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4d4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b4d8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x22b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b4dc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22b4dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b4e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22B4E0u;
    SET_GPR_U32(ctx, 31, 0x22B4E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22B4E0u, 0x22B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4E8u;
label_22b4e8:
    // 0x22b4e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22b4f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4f4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b4f8: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x22b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x22b4fc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22b500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b504: 0x0  nop
    ctx->pc = 0x22b504u;
    // NOP
    // 0x22b508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b510: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B510u;
    {
        const bool branch_taken_0x22b510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b510) {
            ctx->pc = 0x22B51Cu;
            goto label_22b51c;
        }
    }
    ctx->pc = 0x22B518u;
    // 0x22b518: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22b518u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22b51c:
    // 0x22b51c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b520: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b524: 0x3c02bf06  lui         $v0, 0xBF06
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48902 << 16));
    // 0x22b528: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22b52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b530: 0x0  nop
    ctx->pc = 0x22b530u;
    // NOP
    // 0x22b534: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b53c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B53Cu;
    {
        const bool branch_taken_0x22b53c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b53c) {
            ctx->pc = 0x22B548u;
            goto label_22b548;
        }
    }
    ctx->pc = 0x22B544u;
    // 0x22b544: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22b544u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_22b548:
    // 0x22b548: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b54c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22b550: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22B550u;
    SET_GPR_U32(ctx, 31, 0x22B558u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22B550u, 0x22B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B558u;
label_22b558:
    // 0x22b558: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b55c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22B55Cu;
    SET_GPR_U32(ctx, 31, 0x22B564u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22B55Cu, 0x22B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B564u;
label_22b564:
    // 0x22b564: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b568: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22b56c: 0x24503520  addiu       $s0, $v0, 0x3520
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x22b570: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b574: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x22b574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x22b578: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x22b578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x22b57c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b580: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x22b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b584: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22b584u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22b588: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x22b58c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x22b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b590: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x22b590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
    // 0x22b594: 0x34a2cccd  ori         $v0, $a1, 0xCCCD
    ctx->pc = 0x22b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x22b598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b59c: 0x0  nop
    ctx->pc = 0x22b59cu;
    // NOP
    // 0x22b5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b5a4: 0x0  nop
    ctx->pc = 0x22b5a4u;
    // NOP
    // 0x22b5a8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22B5A8u;
    {
        const bool branch_taken_0x22b5a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b5a8) {
            ctx->pc = 0x22B5C4u;
            goto label_22b5c4;
        }
    }
    ctx->pc = 0x22B5B0u;
    // 0x22b5b0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22b5b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22b5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b5bc: 0x0  nop
    ctx->pc = 0x22b5bcu;
    // NOP
    // 0x22b5c0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22b5c4:
    // 0x22b5c4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x22b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b5c8: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x22b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x22b5cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b5ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b5d0: 0x0  nop
    ctx->pc = 0x22b5d0u;
    // NOP
    // 0x22b5d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b5d8: 0x0  nop
    ctx->pc = 0x22b5d8u;
    // NOP
    // 0x22b5dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22B5DCu;
    {
        const bool branch_taken_0x22b5dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b5dc) {
            ctx->pc = 0x22B5F4u;
            goto label_22b5f4;
        }
    }
    ctx->pc = 0x22B5E4u;
    // 0x22b5e4: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x22b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x22b5e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b5e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b5ec: 0x0  nop
    ctx->pc = 0x22b5ecu;
    // NOP
    // 0x22b5f0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22b5f4:
    // 0x22b5f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b5f8: 0x904409db  lbu         $a0, 0x9DB($v0)
    ctx->pc = 0x22b5f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x22b5fc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22b600: 0x30430060  andi        $v1, $v0, 0x60
    ctx->pc = 0x22b600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x22b604: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22B604u;
    {
        const bool branch_taken_0x22b604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b604) {
            ctx->pc = 0x22B634u;
            goto label_22b634;
        }
    }
    ctx->pc = 0x22B60Cu;
    // 0x22b60c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b610: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x22b610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x22b614: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x22b614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x22b618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b61c: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x22b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b620: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22b620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22b624: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x22b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x22b628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b62c: 0x0  nop
    ctx->pc = 0x22b62cu;
    // NOP
    // 0x22b630: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22b634:
    // 0x22b634: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b638: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b63c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b640: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b644: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22b644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b648: 0x0  nop
    ctx->pc = 0x22b648u;
    // NOP
    // 0x22b64c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22B64Cu;
    {
        const bool branch_taken_0x22b64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b64c) {
            ctx->pc = 0x22B678u;
            goto label_22b678;
        }
    }
    ctx->pc = 0x22B654u;
    // 0x22b654: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b658: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b65c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b660: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x22b660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x22b664: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x22b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22b668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b66c: 0x0  nop
    ctx->pc = 0x22b66cu;
    // NOP
    // 0x22b670: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22b670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22b674: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22b674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_22b678:
    // 0x22b678: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b67c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b680: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b684: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b688: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22b688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b68c: 0x0  nop
    ctx->pc = 0x22b68cu;
    // NOP
    // 0x22b690: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x22B690u;
    {
        const bool branch_taken_0x22b690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b690) {
            ctx->pc = 0x22B6BCu;
            goto label_22b6bc;
        }
    }
    ctx->pc = 0x22B698u;
    // 0x22b698: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b69c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b6a0: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b6a4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x22b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x22b6a8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x22b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22b6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b6b0: 0x0  nop
    ctx->pc = 0x22b6b0u;
    // NOP
    // 0x22b6b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b6b8: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22b6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_22b6bc:
    // 0x22b6bc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b6c0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x22b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22b6c4: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x22b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b6c8: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x22b6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b6cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22b6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22b6d0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x22b6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x22b6d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b6d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b6dc: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x22b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b6e0: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b6e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22b6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22b6e8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x22b6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x22b6ec: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x22b6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22b6f0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x22b6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x22b6f4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x22b6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x22b6f8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b6fc: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x22B6FCu;
    SET_GPR_U32(ctx, 31, 0x22B704u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x22B6FCu, 0x22B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B704u;
label_22b704:
    // 0x22b704: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b708: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22b708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22b70c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22b70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22b710: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22b710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22b714: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x22B714u;
    {
        const bool branch_taken_0x22b714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b714) {
            ctx->pc = 0x22B920u;
            goto label_22b920;
        }
    }
    ctx->pc = 0x22B71Cu;
    // 0x22b71c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b720: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x22b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x22b724: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x22b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b728: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x22b728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x22b72c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b730: 0x0  nop
    ctx->pc = 0x22b730u;
    // NOP
    // 0x22b734: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x22b734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22b738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b73c: 0x0  nop
    ctx->pc = 0x22b73cu;
    // NOP
    // 0x22b740: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x22b740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x22b744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b748: 0x0  nop
    ctx->pc = 0x22b748u;
    // NOP
    // 0x22b74c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x22b74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x22b750: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x22b750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x22b754: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b758: 0x0  nop
    ctx->pc = 0x22b758u;
    // NOP
    // 0x22b75c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x22b75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x22b760: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x22b764: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x22b764u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b768: 0x0  nop
    ctx->pc = 0x22b768u;
    // NOP
    // 0x22b76c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22b76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22b770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b774: 0xa7a20084  sh          $v0, 0x84($sp)
    ctx->pc = 0x22b774u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x22b778: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b77c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b780: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22b784: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x22b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x22b788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B788u;
    {
        const bool branch_taken_0x22b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b788) {
            ctx->pc = 0x22B798u;
            goto label_22b798;
        }
    }
    ctx->pc = 0x22B790u;
    // 0x22b790: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22b790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22b794: 0xa7a50084  sh          $a1, 0x84($sp)
    ctx->pc = 0x22b794u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 5));
label_22b798:
    // 0x22b798: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x22b798u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b79c: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x22b79cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b7a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b7a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b7a8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22b7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22b7ac: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b7b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22b7b4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22B7B4u;
    SET_GPR_U32(ctx, 31, 0x22B7BCu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22B7B4u, 0x22B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7BCu;
label_22b7bc:
    // 0x22b7bc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x22B7BCu;
    {
        const bool branch_taken_0x22b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7bc) {
            ctx->pc = 0x22B920u;
            goto label_22b920;
        }
    }
    ctx->pc = 0x22B7C4u;
    // 0x22b7c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b7c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7c8: 0x0  nop
    ctx->pc = 0x22b7c8u;
    // NOP
    // 0x22b7cc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x22b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x22b7d0: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x22b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x22b7d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b7d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7d8: 0x0  nop
    ctx->pc = 0x22b7d8u;
    // NOP
    // 0x22b7dc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x22b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x22b7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7e4: 0x0  nop
    ctx->pc = 0x22b7e4u;
    // NOP
    // 0x22b7e8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x22b7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x22b7ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22b7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7f4: 0x0  nop
    ctx->pc = 0x22b7f4u;
    // NOP
    // 0x22b7f8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22b7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x22b7fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b800: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x22b800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b804: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22b804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22b808: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x22b808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b80c: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x22b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x22b810: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x22b810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b814: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x22b814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22b818: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x22b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x22b81c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b820: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b824: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x22b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x22b828: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22b82c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b82cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b830: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b834: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b834u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b838: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B838u;
    SET_GPR_U32(ctx, 31, 0x22B840u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B838u, 0x22B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B840u;
label_22b840:
    // 0x22b840: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B840u;
    SET_GPR_U32(ctx, 31, 0x22B848u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B840u, 0x22B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B848u;
label_22b848:
    // 0x22b848: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22b848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b84c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B84Cu;
    {
        const bool branch_taken_0x22b84c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x22b84c) {
            ctx->pc = 0x22B868u;
            goto label_22b868;
        }
    }
    ctx->pc = 0x22B854u;
    // 0x22b854: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b854u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b858: 0x0  nop
    ctx->pc = 0x22b858u;
    // NOP
    // 0x22b85c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b860: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22B860u;
    {
        const bool branch_taken_0x22b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b860) {
            ctx->pc = 0x22B884u;
            goto label_22b884;
        }
    }
    ctx->pc = 0x22B868u;
label_22b868:
    // 0x22b868: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x22b868u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x22b86c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x22b86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22b870: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x22b870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x22b874: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b874u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b878: 0x0  nop
    ctx->pc = 0x22b878u;
    // NOP
    // 0x22b87c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b880: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22b880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22b884:
    // 0x22b884: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x22b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22b88c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x22b88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x22b890: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b894: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22b894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b898: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22b898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x22b89c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x22b89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b8a0: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x22b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x22b8a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b8a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22b8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22b8ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b8b0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b8b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b8b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22b8bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22b8c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b8c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b8c4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b8c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b8c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b8cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B8CCu;
    SET_GPR_U32(ctx, 31, 0x22B8D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B8CCu, 0x22B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8D4u;
label_22b8d4:
    // 0x22b8d4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22b8d8: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22b8dc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B8DCu;
    SET_GPR_U32(ctx, 31, 0x22B8E4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B8DCu, 0x22B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8E4u;
label_22b8e4:
    // 0x22b8e4: 0x3c0502fa  lui         $a1, 0x2FA
    ctx->pc = 0x22b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)762 << 16));
    // 0x22b8e8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x22b8e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22b8ec: 0x3c07000a  lui         $a3, 0xA
    ctx->pc = 0x22b8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)10 << 16));
    // 0x22b8f0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x22b8f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22b8f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B8F4u;
    SET_GPR_U32(ctx, 31, 0x22B8FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B8F4u, 0x22B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8FCu;
label_22b8fc:
    // 0x22b8fc: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22b900: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x22b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22b904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22b904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b908: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b90c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22b910: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22b910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22b914: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b914u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b918: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22B918u;
    SET_GPR_U32(ctx, 31, 0x22B920u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22B918u, 0x22B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B920u;
label_22b920:
    // 0x22b920: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b924: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22b924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22b928: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x22B928u;
    {
        const bool branch_taken_0x22b928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b928) {
            ctx->pc = 0x22B9F4u;
            goto label_22b9f4;
        }
    }
    ctx->pc = 0x22B930u;
    // 0x22b930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b934: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b938: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22b938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22b93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b940: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b944: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x22b944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b948: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b94c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b950: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22b950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b954: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b958: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x22b958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b95c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x22b95cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b960: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x22b960u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b964: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b968: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22b968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22b96c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B96Cu;
    SET_GPR_U32(ctx, 31, 0x22B974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B96Cu, 0x22B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B974u;
label_22b974:
    // 0x22b974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22b974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b978: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x22b978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22b97c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x22b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x22b980: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x22b980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x22b984: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x22b984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x22b988: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x22b988u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x22b98c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b990: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x22b990u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x22b994: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B994u;
    SET_GPR_U32(ctx, 31, 0x22B99Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B994u, 0x22B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B99Cu;
label_22b99c:
    // 0x22b99c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b9a0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22b9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22b9a4: 0x246400b4  addiu       $a0, $v1, 0xB4
    ctx->pc = 0x22b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22b9a8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x22b9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x22b9ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x22b9acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x22b9b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b9b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b9b8: 0xa465005c  sh          $a1, 0x5C($v1)
    ctx->pc = 0x22b9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x22b9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b9c0: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x22b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22b9c4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x22b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x22b9c8: 0x34837fff  ori         $v1, $a0, 0x7FFF
    ctx->pc = 0x22b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x22b9cc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x22b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x22b9d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b9d4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22b9d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22b9d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b9dc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b9e0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22b9e4: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x22b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x22b9e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22b9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22b9ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22b9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22b9f0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_22b9f4:
    // 0x22b9f4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b9f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b9fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba04: 0x0  nop
    ctx->pc = 0x22ba04u;
    // NOP
    // 0x22ba08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22ba08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ba0c: 0x0  nop
    ctx->pc = 0x22ba0cu;
    // NOP
    // 0x22ba10: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22BA10u;
    {
        const bool branch_taken_0x22ba10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ba10) {
            ctx->pc = 0x22BAF4u;
            goto label_22baf4;
        }
    }
    ctx->pc = 0x22BA18u;
    // 0x22ba18: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x22ba18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba1c: 0x24c31330  addiu       $v1, $a2, 0x1330
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x22ba20: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba28: 0x0  nop
    ctx->pc = 0x22ba28u;
    // NOP
    // 0x22ba2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ba2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ba30: 0x0  nop
    ctx->pc = 0x22ba30u;
    // NOP
    // 0x22ba34: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22BA34u;
    {
        const bool branch_taken_0x22ba34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ba34) {
            ctx->pc = 0x22BA9Cu;
            goto label_22ba9c;
        }
    }
    ctx->pc = 0x22BA3Cu;
    // 0x22ba3c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba40: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x22ba40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22ba44: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x22ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba48: 0x3c083cc9  lui         $t0, 0x3CC9
    ctx->pc = 0x22ba48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15561 << 16));
    // 0x22ba4c: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x22ba4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
    // 0x22ba50: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x22ba50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba54: 0x0  nop
    ctx->pc = 0x22ba54u;
    // NOP
    // 0x22ba58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22ba58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22ba5c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x22ba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x22ba60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ba68: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba70: 0x0  nop
    ctx->pc = 0x22ba70u;
    // NOP
    // 0x22ba74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ba74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ba78: 0x0  nop
    ctx->pc = 0x22ba78u;
    // NOP
    // 0x22ba7c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22BA7Cu;
    {
        const bool branch_taken_0x22ba7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ba7c) {
            ctx->pc = 0x22BAF4u;
            goto label_22baf4;
        }
    }
    ctx->pc = 0x22BA84u;
    // 0x22ba84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba88: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ba90: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22ba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22ba94: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22BA94u;
    {
        const bool branch_taken_0x22ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ba94) {
            ctx->pc = 0x22BAF4u;
            goto label_22baf4;
        }
    }
    ctx->pc = 0x22BA9Cu;
label_22ba9c:
    // 0x22ba9c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22baa0: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x22baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22baa4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22baa8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22baac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22bab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bab4: 0x0  nop
    ctx->pc = 0x22bab4u;
    // NOP
    // 0x22bab8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22bab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22babc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22babcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22bac0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bac4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bac8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x22bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bacc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22baccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bad0: 0x0  nop
    ctx->pc = 0x22bad0u;
    // NOP
    // 0x22bad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bad8: 0x0  nop
    ctx->pc = 0x22bad8u;
    // NOP
    // 0x22badc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22BADCu;
    {
        const bool branch_taken_0x22badc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22badc) {
            ctx->pc = 0x22BAF4u;
            goto label_22baf4;
        }
    }
    ctx->pc = 0x22BAE4u;
    // 0x22bae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bae8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22baec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22baecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22baf0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22baf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_22baf4:
    // 0x22baf4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22baf8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x22baf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x22bafc: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x22BAFCu;
    {
        const bool branch_taken_0x22bafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bafc) {
            ctx->pc = 0x22BB94u;
            goto label_22bb94;
        }
    }
    ctx->pc = 0x22BB04u;
    // 0x22bb04: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb0c: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb10: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x22bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x22bb14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22bb14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bb18: 0x0  nop
    ctx->pc = 0x22bb18u;
    // NOP
    // 0x22bb1c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22bb1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bb20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb24: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22bb28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bb2c: 0x0  nop
    ctx->pc = 0x22bb2cu;
    // NOP
    // 0x22bb30: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22BB30u;
    {
        const bool branch_taken_0x22bb30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bb30) {
            ctx->pc = 0x22BB54u;
            goto label_22bb54;
        }
    }
    ctx->pc = 0x22BB38u;
    // 0x22bb38: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb40: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb44: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb48: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22bb4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22bb50: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_22bb54:
    // 0x22bb54: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb58: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb5c: 0xc481009c  lwc1        $f1, 0x9C($a0)
    ctx->pc = 0x22bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb64: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bb6c: 0x0  nop
    ctx->pc = 0x22bb6cu;
    // NOP
    // 0x22bb70: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22BB70u;
    {
        const bool branch_taken_0x22bb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bb70) {
            ctx->pc = 0x22BB94u;
            goto label_22bb94;
        }
    }
    ctx->pc = 0x22BB78u;
    // 0x22bb78: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb7c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22bb80: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bb84: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb88: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22bb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bb90: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22bb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_22bb94:
    // 0x22bb94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb98: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb9c: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22bba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bba8: 0x0  nop
    ctx->pc = 0x22bba8u;
    // NOP
    // 0x22bbac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22bbacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bbb0: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22bbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22bbb4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bbb8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bbbc: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bbc0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22bbc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bbc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bbc8: 0x0  nop
    ctx->pc = 0x22bbc8u;
    // NOP
    // 0x22bbcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22bbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bbd0: 0x0  nop
    ctx->pc = 0x22bbd0u;
    // NOP
    // 0x22bbd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22BBD4u;
    {
        const bool branch_taken_0x22bbd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bbd4) {
            ctx->pc = 0x22BBF0u;
            goto label_22bbf0;
        }
    }
    ctx->pc = 0x22BBDCu;
    // 0x22bbdc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22bbe0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22bbe0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbe4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bbe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bbec: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22bbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_22bbf0:
    // 0x22bbf0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bbf4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bbf8: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bbfc: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x22bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
    // 0x22bc00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22bc00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc04: 0x0  nop
    ctx->pc = 0x22bc04u;
    // NOP
    // 0x22bc08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22bc08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bc0c: 0x0  nop
    ctx->pc = 0x22bc0cu;
    // NOP
    // 0x22bc10: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22BC10u;
    {
        const bool branch_taken_0x22bc10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bc10) {
            ctx->pc = 0x22BC2Cu;
            goto label_22bc2c;
        }
    }
    ctx->pc = 0x22BC18u;
    // 0x22bc18: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x22bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x22bc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc20: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bc24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bc28: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22bc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22bc2c:
    // 0x22bc2c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x22bc2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bc34: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x22bc34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22bc38: 0x3e00008  jr          $ra
    ctx->pc = 0x22BC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BC40u;
}
