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

// Function: entry_001c981c
// Address: 0x1c981c - 0x1c98e4
void entry_001c981c_0x1c981c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c981c_0x1c981c");
#endif

    switch (ctx->pc) {
        case 0x1c982cu: goto label_1c982c;
        case 0x1c9840u: goto label_1c9840;
        case 0x1c9854u: goto label_1c9854;
        case 0x1c9884u: goto label_1c9884;
        default: break;
    }

    ctx->pc = 0x1c981cu;

    // 0x1c981c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c981cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9820: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c9824: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C9824u;
    SET_GPR_U32(ctx, 31, 0x1C982Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C9824u, 0x1C982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C982Cu;
label_1c982c:
    // 0x1c982c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c982cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9830: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9834: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1c9834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9838: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1C9838u;
    SET_GPR_U32(ctx, 31, 0x1C9840u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1C9838u, 0x1C9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9840u;
label_1c9840:
    // 0x1c9840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9844: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c9848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c984c: 0xc057480  jal         func_15D200
    ctx->pc = 0x1C984Cu;
    SET_GPR_U32(ctx, 31, 0x1C9854u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1C984Cu, 0x1C9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9854u;
label_1c9854:
    // 0x1c9854: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9858: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1c9858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c985c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c985cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9860: 0x0  nop
    ctx->pc = 0x1c9860u;
    // NOP
    // 0x1c9864: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c9864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9868: 0x0  nop
    ctx->pc = 0x1c9868u;
    // NOP
    // 0x1c986c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1C986Cu;
    {
        const bool branch_taken_0x1c986c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c986c) {
            ctx->pc = 0x1C98E4u;
            return;
        }
    }
    ctx->pc = 0x1C9874u;
    // 0x1c9874: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9878: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1c9878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c987c: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1C987Cu;
    SET_GPR_U32(ctx, 31, 0x1C9884u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1C987Cu, 0x1C9884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9884u;
label_1c9884:
    // 0x1c9884: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1c9884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1c9888: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c9888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1c988c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c988cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9890: 0x0  nop
    ctx->pc = 0x1c9890u;
    // NOP
    // 0x1c9894: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c9898: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c9898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1c989c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c98a0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1c98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c98a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c98a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c98a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c98ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c98acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c98b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c98b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c98b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c98b8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c98b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c98bc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c98bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c98c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c98c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c98c4: 0x0  nop
    ctx->pc = 0x1c98c4u;
    // NOP
    // 0x1c98c8: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
    ctx->pc = 0x1C98C8u;
    {
        const bool branch_taken_0x1c98c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c98c8) {
            ctx->pc = 0x1C9A04u;
            return;
        }
    }
    ctx->pc = 0x1C98D0u;
    // 0x1c98d0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1c98d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c98d4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c98d8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1c98d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1c98dc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C98DCu;
    {
        const bool branch_taken_0x1c98dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c98dc) {
            ctx->pc = 0x1C9A04u;
            return;
        }
    }
    ctx->pc = 0x1C98E4u;
}
