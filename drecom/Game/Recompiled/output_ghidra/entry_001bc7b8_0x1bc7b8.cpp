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

// Function: entry_001bc7b8
// Address: 0x1bc7b8 - 0x1bc884
void entry_001bc7b8_0x1bc7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc7b8_0x1bc7b8");
#endif

    switch (ctx->pc) {
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7e4u: goto label_1bc7e4;
        case 0x1bc804u: goto label_1bc804;
        case 0x1bc81cu: goto label_1bc81c;
        default: break;
    }

    ctx->pc = 0x1bc7b8u;

    // 0x1bc7b8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc7bc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc7c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc7c4: 0x24a40180  addiu       $a0, $a1, 0x180
    ctx->pc = 0x1bc7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1bc7c8: 0x24c50180  addiu       $a1, $a2, 0x180
    ctx->pc = 0x1bc7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1bc7cc: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1bc7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc7d0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BC7D0u;
    SET_GPR_U32(ctx, 31, 0x1BC7D8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC7D8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC7D8u) { return; }
    ctx->pc = 0x1BC7D8u;
label_1bc7d8:
    // 0x1bc7d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc7dc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BC7DCu;
    SET_GPR_U32(ctx, 31, 0x1BC7E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BC7DCu, 0x1BC7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7E4u;
label_1bc7e4:
    // 0x1bc7e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc7e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc7e8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1bc7ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bc7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1bc7f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc7f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc7f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bc7f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bc7fc: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BC7FCu;
    SET_GPR_U32(ctx, 31, 0x1BC804u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BC7FCu, 0x1BC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC804u;
label_1bc804:
    // 0x1bc804: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc808: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc80c: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1bc80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1bc810: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1bc810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1bc814: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BC814u;
    SET_GPR_U32(ctx, 31, 0x1BC81Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BC814u, 0x1BC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC81Cu;
label_1bc81c:
    // 0x1bc81c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bc81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1bc820: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc824: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1bc824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc82c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1bc82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc830: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc834: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bc834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1bc838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc83c: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1bc83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc840: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc844: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc848: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bc848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bc84c: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1bc850: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc854: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1bc854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc858: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bc858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc860: 0x0  nop
    ctx->pc = 0x1bc860u;
    // NOP
    // 0x1bc864: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC864u;
    {
        const bool branch_taken_0x1bc864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc864) {
            ctx->pc = 0x1BC884u;
            return;
        }
    }
    ctx->pc = 0x1BC86Cu;
    // 0x1bc86c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bc86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc874: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bc874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1bc878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc87c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc880: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1bc880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    ctx->pc = 0x1bc884u;
}
