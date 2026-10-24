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

// Function: entry_0014b804
// Address: 0x14b804 - 0x14b934
void entry_0014b804_0x14b804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b804_0x14b804");
#endif

    switch (ctx->pc) {
        case 0x14b858u: goto label_14b858;
        case 0x14b86cu: goto label_14b86c;
        case 0x14b884u: goto label_14b884;
        default: break;
    }

    ctx->pc = 0x14b804u;

    // 0x14b804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b80c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x14b80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x14b810: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b814: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b818: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b81c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b820: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b824: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14b824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14b828: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b82c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x14b82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b830: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x14b830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x14b834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b838: 0x0  nop
    ctx->pc = 0x14b838u;
    // NOP
    // 0x14b83c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14b83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14b840: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x14b840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x14b844: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b84c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14b850: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14B850u;
    SET_GPR_U32(ctx, 31, 0x14B858u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14B850u, 0x14B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B858u;
label_14b858:
    // 0x14b858: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14b85c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b860: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b864: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14B864u;
    SET_GPR_U32(ctx, 31, 0x14B86Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B864u, 0x14B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B86Cu;
label_14b86c:
    // 0x14b86c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b874: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14b878: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14b87c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14B87Cu;
    SET_GPR_U32(ctx, 31, 0x14B884u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B87Cu, 0x14B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B884u;
label_14b884:
    // 0x14b884: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x14b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14b888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b88c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b890: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b894: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b898: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x14b898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14b89c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b8a0: 0x8c4312c4  lw          $v1, 0x12C4($v0)
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4804)));
    // 0x14b8a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b8a8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14B8A8u;
    {
        const bool branch_taken_0x14b8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b8a8) {
            ctx->pc = 0x14B980u;
            return;
        }
    }
    ctx->pc = 0x14B8B0u;
    // 0x14b8b0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x14b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b8b4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x14b8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b8bc: 0x0  nop
    ctx->pc = 0x14b8bcu;
    // NOP
    // 0x14b8c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14b8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b8c4: 0x0  nop
    ctx->pc = 0x14b8c4u;
    // NOP
    // 0x14b8c8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x14B8C8u;
    {
        const bool branch_taken_0x14b8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14b8c8) {
            ctx->pc = 0x14B934u;
            return;
        }
    }
    ctx->pc = 0x14B8D0u;
    // 0x14b8d0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x14b8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b8d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b8dc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x14b8e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b8e4: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b8e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b8ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b8f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14b8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14b8f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14b8f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b8fc: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14b8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b904: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x14b904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14b908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14b90c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b910: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14b910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14b914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b91c: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14b91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14b920: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b924: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b928: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x14b928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b92c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14B92Cu;
    {
        const bool branch_taken_0x14b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b92c) {
            ctx->pc = 0x14B9A4u;
            return;
        }
    }
    ctx->pc = 0x14B934u;
}
