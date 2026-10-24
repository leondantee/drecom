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

// Function: ectrl17_move01
// Address: 0x357f70 - 0x358108
void ectrl17_move01_0x357f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl17_move01_0x357f70");
#endif

    switch (ctx->pc) {
        case 0x357fccu: goto label_357fcc;
        case 0x357fd8u: goto label_357fd8;
        case 0x358074u: goto label_358074;
        case 0x358080u: goto label_358080;
        default: break;
    }

    ctx->pc = 0x357f70u;

    // 0x357f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357f74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x357f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x357f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357f7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x357f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x357f80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x357f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357f84: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x357f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x357f88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x357f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357f8c: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x357F8Cu;
    {
        const bool branch_taken_0x357f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x357f8c) {
            ctx->pc = 0x3580D0u;
            goto label_3580d0;
        }
    }
    ctx->pc = 0x357F94u;
    // 0x357f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357f98: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x357F98u;
    {
        const bool branch_taken_0x357f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x357f98) {
            ctx->pc = 0x358034u;
            goto label_358034;
        }
    }
    ctx->pc = 0x357FA0u;
    // 0x357fa0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357FA0u;
    {
        const bool branch_taken_0x357fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x357fa0) {
            ctx->pc = 0x357FB0u;
            goto label_357fb0;
        }
    }
    ctx->pc = 0x357FA8u;
    // 0x357fa8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x357FA8u;
    {
        const bool branch_taken_0x357fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357fa8) {
            ctx->pc = 0x3580F4u;
            goto label_3580f4;
        }
    }
    ctx->pc = 0x357FB0u;
label_357fb0:
    // 0x357fb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x357fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357fb4: 0x24044a00  addiu       $a0, $zero, 0x4A00
    ctx->pc = 0x357fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18944));
    // 0x357fb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357fbc: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x357fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x357fc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357fc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357fc4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357FC4u;
    SET_GPR_U32(ctx, 31, 0x357FCCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357FC4u, 0x357FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FCCu;
label_357fcc:
    // 0x357fcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357fd0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357FD0u;
    SET_GPR_U32(ctx, 31, 0x357FD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357FD0u, 0x357FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FD8u;
label_357fd8:
    // 0x357fd8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357fd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357fdc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x357fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x357fe0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x357fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x357fe4: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x357FE4u;
    {
        const bool branch_taken_0x357fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x357fe4) {
            ctx->pc = 0x35801Cu;
            goto label_35801c;
        }
    }
    ctx->pc = 0x357FECu;
    // 0x357fec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x357fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357ff0: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x357ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357ff4: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x357ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x357ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x357ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357ffc: 0x0  nop
    ctx->pc = 0x357ffcu;
    // NOP
    // 0x358000: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x358000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x358004: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x358004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x358008: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x358008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x35800c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x358010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358014: 0x0  nop
    ctx->pc = 0x358014u;
    // NOP
    // 0x358018: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x358018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_35801c:
    // 0x35801c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358020: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358028: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x35802c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35802Cu;
    {
        const bool branch_taken_0x35802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35802c) {
            ctx->pc = 0x3580F4u;
            goto label_3580f4;
        }
    }
    ctx->pc = 0x358034u;
label_358034:
    // 0x358034: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358038: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x358038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x35803c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x35803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x358040: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x358040u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x358044: 0x0  nop
    ctx->pc = 0x358044u;
    // NOP
    // 0x358048: 0x0  nop
    ctx->pc = 0x358048u;
    // NOP
    // 0x35804c: 0x1810  mfhi        $v1
    ctx->pc = 0x35804cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x358050: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x358050u;
    {
        const bool branch_taken_0x358050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358050) {
            ctx->pc = 0x3580F4u;
            goto label_3580f4;
        }
    }
    ctx->pc = 0x358058u;
    // 0x358058: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x358058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35805c: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x35805cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x358060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358064: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x358064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x358068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35806c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35806Cu;
    SET_GPR_U32(ctx, 31, 0x358074u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35806Cu, 0x358074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358074u;
label_358074:
    // 0x358074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358078: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358078u;
    SET_GPR_U32(ctx, 31, 0x358080u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358078u, 0x358080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358080u;
label_358080:
    // 0x358080: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358080u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358084: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358088: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x35808c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35808Cu;
    {
        const bool branch_taken_0x35808c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x35808c) {
            ctx->pc = 0x3580A4u;
            goto label_3580a4;
        }
    }
    ctx->pc = 0x358094u;
    // 0x358094: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x358094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x358098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35809c: 0x0  nop
    ctx->pc = 0x35809cu;
    // NOP
    // 0x3580a0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x3580a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_3580a4:
    // 0x3580a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3580a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580a8: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3580a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3580ac: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x3580acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x3580b0: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3580B0u;
    {
        const bool branch_taken_0x3580b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3580b0) {
            ctx->pc = 0x3580F4u;
            goto label_3580f4;
        }
    }
    ctx->pc = 0x3580B8u;
    // 0x3580b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3580b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3580bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3580c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3580c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3580c4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3580c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3580c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3580C8u;
    {
        const bool branch_taken_0x3580c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3580c8) {
            ctx->pc = 0x3580F4u;
            goto label_3580f4;
        }
    }
    ctx->pc = 0x3580D0u;
label_3580d0:
    // 0x3580d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3580d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580d4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3580d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3580d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3580d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3580dc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3580dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3580e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3580e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3580e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3580e8: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x3580e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x3580ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3580ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3580f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3580f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3580f4:
    // 0x3580f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3580f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3580f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3580f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3580fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3580fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358100: 0x3e00008  jr          $ra
    ctx->pc = 0x358100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358108u;
}
