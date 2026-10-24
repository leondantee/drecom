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

// Function: ectrl1c_init00
// Address: 0x253830 - 0x253c5c
void ectrl1c_init00_0x253830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl1c_init00_0x253830");
#endif

    switch (ctx->pc) {
        case 0x253888u: goto label_253888;
        case 0x2538bcu: goto label_2538bc;
        case 0x2538f0u: goto label_2538f0;
        case 0x2538fcu: goto label_2538fc;
        case 0x253918u: goto label_253918;
        case 0x25394cu: goto label_25394c;
        case 0x253980u: goto label_253980;
        case 0x25398cu: goto label_25398c;
        case 0x2539b0u: goto label_2539b0;
        case 0x2539e4u: goto label_2539e4;
        case 0x253a2cu: goto label_253a2c;
        case 0x253a38u: goto label_253a38;
        case 0x253a54u: goto label_253a54;
        case 0x253a88u: goto label_253a88;
        case 0x253ad0u: goto label_253ad0;
        case 0x253adcu: goto label_253adc;
        case 0x253b28u: goto label_253b28;
        case 0x253b5cu: goto label_253b5c;
        case 0x253ba0u: goto label_253ba0;
        case 0x253bacu: goto label_253bac;
        case 0x253bc8u: goto label_253bc8;
        case 0x253bfcu: goto label_253bfc;
        case 0x253c40u: goto label_253c40;
        case 0x253c4cu: goto label_253c4c;
        default: break;
    }

    ctx->pc = 0x253830u;

    // 0x253830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253834: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x253834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x253838: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x253838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x25383c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25383cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253840: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x253840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x253844: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x253844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253848: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x253848u;
    {
        const bool branch_taken_0x253848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x253848) {
            ctx->pc = 0x253AF8u;
            goto label_253af8;
        }
    }
    ctx->pc = 0x253850u;
    // 0x253850: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x253850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x253854: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x253854u;
    {
        const bool branch_taken_0x253854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x253854) {
            ctx->pc = 0x253994u;
            goto label_253994;
        }
    }
    ctx->pc = 0x25385Cu;
    // 0x25385c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25385Cu;
    {
        const bool branch_taken_0x25385c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25385c) {
            ctx->pc = 0x25386Cu;
            goto label_25386c;
        }
    }
    ctx->pc = 0x253864u;
    // 0x253864: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x253864u;
    {
        const bool branch_taken_0x253864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253864) {
            ctx->pc = 0x253C4Cu;
            goto label_253c4c;
        }
    }
    ctx->pc = 0x25386Cu;
label_25386c:
    // 0x25386c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253870: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253874: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253878: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25387c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25387cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253880: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253880u;
    SET_GPR_U32(ctx, 31, 0x253888u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253880u, 0x253888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253888u;
label_253888:
    // 0x253888: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25388c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25388cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253890: 0x0  nop
    ctx->pc = 0x253890u;
    // NOP
    // 0x253894: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253898: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x253898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x25389c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25389cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2538a0: 0x0  nop
    ctx->pc = 0x2538a0u;
    // NOP
    // 0x2538a4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2538a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2538a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2538a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2538ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2538acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2538b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2538b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2538b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2538B4u;
    SET_GPR_U32(ctx, 31, 0x2538BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2538B4u, 0x2538BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538BCu;
label_2538bc:
    // 0x2538bc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2538bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2538c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2538c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2538c4: 0x0  nop
    ctx->pc = 0x2538c4u;
    // NOP
    // 0x2538c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2538c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2538cc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2538ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2538d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2538d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2538d4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2538d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2538d8: 0x24045f01  addiu       $a0, $zero, 0x5F01
    ctx->pc = 0x2538d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24321));
    // 0x2538dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2538dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2538e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2538e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2538e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2538e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2538e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2538E8u;
    SET_GPR_U32(ctx, 31, 0x2538F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2538E8u, 0x2538F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538F0u;
label_2538f0:
    // 0x2538f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2538f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2538f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2538F4u;
    SET_GPR_U32(ctx, 31, 0x2538FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2538F4u, 0x2538FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538FCu;
label_2538fc:
    // 0x2538fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2538fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253900: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253904: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253904u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253908: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25390c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25390cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253910: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253910u;
    SET_GPR_U32(ctx, 31, 0x253918u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253910u, 0x253918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253918u;
label_253918:
    // 0x253918: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25391c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25391cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253920: 0x0  nop
    ctx->pc = 0x253920u;
    // NOP
    // 0x253924: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253928: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x253928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x25392c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253930: 0x0  nop
    ctx->pc = 0x253930u;
    // NOP
    // 0x253934: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x253934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253938: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25393c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25393cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253940: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253944: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253944u;
    SET_GPR_U32(ctx, 31, 0x25394Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253944u, 0x25394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25394Cu;
label_25394c:
    // 0x25394c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x25394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253954: 0x0  nop
    ctx->pc = 0x253954u;
    // NOP
    // 0x253958: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25395c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x25395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253964: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253968: 0x24045f02  addiu       $a0, $zero, 0x5F02
    ctx->pc = 0x253968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24322));
    // 0x25396c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x25396cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253970: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253974: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253974u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253978: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253978u;
    SET_GPR_U32(ctx, 31, 0x253980u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253978u, 0x253980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253980u;
label_253980:
    // 0x253980: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253980u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253984: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253984u;
    SET_GPR_U32(ctx, 31, 0x25398Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253984u, 0x25398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25398Cu;
label_25398c:
    // 0x25398c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x25398Cu;
    {
        const bool branch_taken_0x25398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25398c) {
            ctx->pc = 0x253C4Cu;
            goto label_253c4c;
        }
    }
    ctx->pc = 0x253994u;
label_253994:
    // 0x253994: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253998: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x25399c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25399cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2539a0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2539a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2539a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2539a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2539a8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2539A8u;
    SET_GPR_U32(ctx, 31, 0x2539B0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2539A8u, 0x2539B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539B0u;
label_2539b0:
    // 0x2539b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2539b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2539b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2539b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2539b8: 0x0  nop
    ctx->pc = 0x2539b8u;
    // NOP
    // 0x2539bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2539bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2539c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2539c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2539c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2539c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2539c8: 0x0  nop
    ctx->pc = 0x2539c8u;
    // NOP
    // 0x2539cc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2539ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2539d0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2539d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2539d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2539d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2539d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2539dc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2539DCu;
    SET_GPR_U32(ctx, 31, 0x2539E4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2539DCu, 0x2539E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539E4u;
label_2539e4:
    // 0x2539e4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2539e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2539e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2539e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2539ec: 0x0  nop
    ctx->pc = 0x2539ecu;
    // NOP
    // 0x2539f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2539f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2539f4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2539f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2539f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2539f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2539fc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2539fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253a00: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x253a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x253a04: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x253a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x253a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a0c: 0x0  nop
    ctx->pc = 0x253a0cu;
    // NOP
    // 0x253a10: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253a14: 0x24045f01  addiu       $a0, $zero, 0x5F01
    ctx->pc = 0x253a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24321));
    // 0x253a18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253a18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253a1c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253a20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253a20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253a24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253A24u;
    SET_GPR_U32(ctx, 31, 0x253A2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253A24u, 0x253A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A2Cu;
label_253a2c:
    // 0x253a2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253a2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253a30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253A30u;
    SET_GPR_U32(ctx, 31, 0x253A38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253A30u, 0x253A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A38u;
label_253a38:
    // 0x253a38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253a3c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253a40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253a40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253a44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253a48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253a48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253a4c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253A4Cu;
    SET_GPR_U32(ctx, 31, 0x253A54u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253A4Cu, 0x253A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A54u;
label_253a54:
    // 0x253a54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253a58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253a5c: 0x0  nop
    ctx->pc = 0x253a5cu;
    // NOP
    // 0x253a60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253a64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253a6c: 0x0  nop
    ctx->pc = 0x253a6cu;
    // NOP
    // 0x253a70: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x253a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253a74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x253a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253a7c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253a80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253A80u;
    SET_GPR_U32(ctx, 31, 0x253A88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253A80u, 0x253A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A88u;
label_253a88:
    // 0x253a88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x253a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253a90: 0x0  nop
    ctx->pc = 0x253a90u;
    // NOP
    // 0x253a94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253a98: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x253a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253a9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x253a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253aa0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253aa4: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x253aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x253aa8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x253aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x253aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253ab0: 0x0  nop
    ctx->pc = 0x253ab0u;
    // NOP
    // 0x253ab4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253ab8: 0x24045f02  addiu       $a0, $zero, 0x5F02
    ctx->pc = 0x253ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24322));
    // 0x253abc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253abcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253ac0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253ac4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253ac4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253ac8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253AC8u;
    SET_GPR_U32(ctx, 31, 0x253AD0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253AC8u, 0x253AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AD0u;
label_253ad0:
    // 0x253ad0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253ad0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253ad4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253AD4u;
    SET_GPR_U32(ctx, 31, 0x253ADCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253AD4u, 0x253ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253ADCu;
label_253adc:
    // 0x253adc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x253adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253ae0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x253ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253ae4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x253ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x253ae8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x253ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253aec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x253aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x253af0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x253AF0u;
    {
        const bool branch_taken_0x253af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253af0) {
            ctx->pc = 0x253C4Cu;
            goto label_253c4c;
        }
    }
    ctx->pc = 0x253AF8u;
label_253af8:
    // 0x253af8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253afc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x253afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253b00: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x253b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x253b04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253b08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x253b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x253b0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253b10: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253b14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253b18: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253b1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253b20: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253B20u;
    SET_GPR_U32(ctx, 31, 0x253B28u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253B20u, 0x253B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B28u;
label_253b28:
    // 0x253b28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x253b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253b30: 0x0  nop
    ctx->pc = 0x253b30u;
    // NOP
    // 0x253b34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253b38: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x253b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x253b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b40: 0x0  nop
    ctx->pc = 0x253b40u;
    // NOP
    // 0x253b44: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x253b44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253b48: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253b50: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253b54: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253B54u;
    SET_GPR_U32(ctx, 31, 0x253B5Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253B54u, 0x253B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B5Cu;
label_253b5c:
    // 0x253b5c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253b64: 0x0  nop
    ctx->pc = 0x253b64u;
    // NOP
    // 0x253b68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253b6c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x253b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253b70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253b74: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253b78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x253b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x253b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253b80: 0x0  nop
    ctx->pc = 0x253b80u;
    // NOP
    // 0x253b84: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253b88: 0x24045f01  addiu       $a0, $zero, 0x5F01
    ctx->pc = 0x253b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24321));
    // 0x253b8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253b8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253b90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253b94: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253b94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253b98: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253B98u;
    SET_GPR_U32(ctx, 31, 0x253BA0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253B98u, 0x253BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BA0u;
label_253ba0:
    // 0x253ba0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253ba4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253BA4u;
    SET_GPR_U32(ctx, 31, 0x253BACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253BA4u, 0x253BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BACu;
label_253bac:
    // 0x253bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x253bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253bb0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x253bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x253bb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253bb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x253bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253bbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x253bc0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x253BC0u;
    SET_GPR_U32(ctx, 31, 0x253BC8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x253BC0u, 0x253BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BC8u;
label_253bc8:
    // 0x253bc8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x253bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x253bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253bd0: 0x0  nop
    ctx->pc = 0x253bd0u;
    // NOP
    // 0x253bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253bd8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x253bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x253bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253be0: 0x0  nop
    ctx->pc = 0x253be0u;
    // NOP
    // 0x253be4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x253be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253be8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253bec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253bf0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x253bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x253bf4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x253BF4u;
    SET_GPR_U32(ctx, 31, 0x253BFCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x253BF4u, 0x253BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BFCu;
label_253bfc:
    // 0x253bfc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x253bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x253c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253c04: 0x0  nop
    ctx->pc = 0x253c04u;
    // NOP
    // 0x253c08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x253c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x253c0c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x253c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x253c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253c14: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x253c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x253c18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x253c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x253c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253c20: 0x0  nop
    ctx->pc = 0x253c20u;
    // NOP
    // 0x253c24: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x253c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x253c28: 0x24045f02  addiu       $a0, $zero, 0x5F02
    ctx->pc = 0x253c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24322));
    // 0x253c2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x253c2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253c30: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x253c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253c34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x253c34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x253c38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x253C38u;
    SET_GPR_U32(ctx, 31, 0x253C40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x253C38u, 0x253C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C40u;
label_253c40:
    // 0x253c40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x253c40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x253c44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x253C44u;
    SET_GPR_U32(ctx, 31, 0x253C4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x253C44u, 0x253C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C4Cu;
label_253c4c:
    // 0x253c4c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x253c4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253c50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x253c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x253c54: 0x3e00008  jr          $ra
    ctx->pc = 0x253C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253C5Cu;
}
