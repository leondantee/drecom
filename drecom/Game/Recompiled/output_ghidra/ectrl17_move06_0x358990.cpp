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

// Function: ectrl17_move06
// Address: 0x358990 - 0x358b3c
void ectrl17_move06_0x358990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl17_move06_0x358990");
#endif

    switch (ctx->pc) {
        case 0x3589ecu: goto label_3589ec;
        case 0x3589f8u: goto label_3589f8;
        case 0x358aa8u: goto label_358aa8;
        case 0x358ab4u: goto label_358ab4;
        default: break;
    }

    ctx->pc = 0x358990u;

    // 0x358990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358994: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x358994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x358998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35899c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35899cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3589a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3589a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3589a4: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x3589a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3589a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3589a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3589ac: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3589ACu;
    {
        const bool branch_taken_0x3589ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3589ac) {
            ctx->pc = 0x358B04u;
            goto label_358b04;
        }
    }
    ctx->pc = 0x3589B4u;
    // 0x3589b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3589b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3589b8: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3589B8u;
    {
        const bool branch_taken_0x3589b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3589b8) {
            ctx->pc = 0x358A68u;
            goto label_358a68;
        }
    }
    ctx->pc = 0x3589C0u;
    // 0x3589c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3589C0u;
    {
        const bool branch_taken_0x3589c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3589c0) {
            ctx->pc = 0x3589D0u;
            goto label_3589d0;
        }
    }
    ctx->pc = 0x3589C8u;
    // 0x3589c8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3589C8u;
    {
        const bool branch_taken_0x3589c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3589c8) {
            ctx->pc = 0x358B28u;
            goto label_358b28;
        }
    }
    ctx->pc = 0x3589D0u;
label_3589d0:
    // 0x3589d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3589d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3589d4: 0x24044a00  addiu       $a0, $zero, 0x4A00
    ctx->pc = 0x3589d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18944));
    // 0x3589d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3589d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3589dc: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x3589dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3589e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3589e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3589e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3589E4u;
    SET_GPR_U32(ctx, 31, 0x3589ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3589E4u, 0x3589ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589ECu;
label_3589ec:
    // 0x3589ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3589ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3589f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3589F0u;
    SET_GPR_U32(ctx, 31, 0x3589F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3589F0u, 0x3589F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589F8u;
label_3589f8:
    // 0x3589f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3589f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3589fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3589fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358a00: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358a04: 0x12030012  beq         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x358A04u;
    {
        const bool branch_taken_0x358a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358a04) {
            ctx->pc = 0x358A50u;
            goto label_358a50;
        }
    }
    ctx->pc = 0x358A0Cu;
    // 0x358a0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x358a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a10: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x358a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358a14: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x358a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x358a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358a1c: 0x0  nop
    ctx->pc = 0x358a1cu;
    // NOP
    // 0x358a20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x358a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x358a24: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x358a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x358a28: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x358a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x358a2c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x358a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x358a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358a34: 0x0  nop
    ctx->pc = 0x358a34u;
    // NOP
    // 0x358a38: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x358a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x358a3c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x358a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x358a40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x358a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x358a44: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x358a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x358a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x358a4c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x358a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_358a50:
    // 0x358a50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x358a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a54: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358a58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358a5c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358a60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x358A60u;
    {
        const bool branch_taken_0x358a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358a60) {
            ctx->pc = 0x358B28u;
            goto label_358b28;
        }
    }
    ctx->pc = 0x358A68u;
label_358a68:
    // 0x358a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a6c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x358a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x358a70: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x358a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x358a74: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x358a74u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x358a78: 0x0  nop
    ctx->pc = 0x358a78u;
    // NOP
    // 0x358a7c: 0x0  nop
    ctx->pc = 0x358a7cu;
    // NOP
    // 0x358a80: 0x1810  mfhi        $v1
    ctx->pc = 0x358a80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x358a84: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x358A84u;
    {
        const bool branch_taken_0x358a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358a84) {
            ctx->pc = 0x358B28u;
            goto label_358b28;
        }
    }
    ctx->pc = 0x358A8Cu;
    // 0x358a8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x358a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358a90: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x358a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x358a94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x358a94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358a98: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x358a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x358a9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x358a9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358aa0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x358AA0u;
    SET_GPR_U32(ctx, 31, 0x358AA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x358AA0u, 0x358AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AA8u;
label_358aa8:
    // 0x358aa8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358aa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358aac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x358AACu;
    SET_GPR_U32(ctx, 31, 0x358AB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x358AACu, 0x358AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AB4u;
label_358ab4:
    // 0x358ab4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x358ab4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358ab8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358abc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x358abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358ac0: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x358AC0u;
    {
        const bool branch_taken_0x358ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x358ac0) {
            ctx->pc = 0x358AD8u;
            goto label_358ad8;
        }
    }
    ctx->pc = 0x358AC8u;
    // 0x358ac8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x358ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x358acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358ad0: 0x0  nop
    ctx->pc = 0x358ad0u;
    // NOP
    // 0x358ad4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x358ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_358ad8:
    // 0x358ad8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358adc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x358adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x358ae0: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x358ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x358ae4: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x358AE4u;
    {
        const bool branch_taken_0x358ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x358ae4) {
            ctx->pc = 0x358B28u;
            goto label_358b28;
        }
    }
    ctx->pc = 0x358AECu;
    // 0x358aec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x358aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358af0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358af8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x358AFCu;
    {
        const bool branch_taken_0x358afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358afc) {
            ctx->pc = 0x358B28u;
            goto label_358b28;
        }
    }
    ctx->pc = 0x358B04u;
label_358b04:
    // 0x358b04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x358b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358b08: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358b0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358b10: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358b14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358b18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358b1c: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x358b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x358b20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x358b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358b24: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_358b28:
    // 0x358b28: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x358b28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358b30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x358b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x358b34: 0x3e00008  jr          $ra
    ctx->pc = 0x358B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358B3Cu;
}
