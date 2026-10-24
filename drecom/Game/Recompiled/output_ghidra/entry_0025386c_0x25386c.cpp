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

// Function: entry_0025386c
// Address: 0x25386c - 0x253994
void entry_0025386c_0x25386c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025386c_0x25386c");
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
        default: break;
    }

    ctx->pc = 0x25386cu;

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
            return;
        }
    }
    ctx->pc = 0x253994u;
}
