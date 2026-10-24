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

// Function: entry_001b79b0
// Address: 0x1b79b0 - 0x1b7a7c
void entry_001b79b0_0x1b79b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b79b0_0x1b79b0");
#endif

    switch (ctx->pc) {
        case 0x1b79d0u: goto label_1b79d0;
        case 0x1b79e0u: goto label_1b79e0;
        case 0x1b79f8u: goto label_1b79f8;
        case 0x1b7a14u: goto label_1b7a14;
        default: break;
    }

    ctx->pc = 0x1b79b0u;

    // 0x1b79b0: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1b79b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b79b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b79b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b79bc: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x1b79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x1b79c0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1b79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b79c4: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1b79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b79c8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B79C8u;
    SET_GPR_U32(ctx, 31, 0x1B79D0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B79D0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B79D0u) { return; }
    ctx->pc = 0x1B79D0u;
label_1b79d0:
    // 0x1b79d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b79d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b79d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b79d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B79D8u;
    SET_GPR_U32(ctx, 31, 0x1B79E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B79D8u, 0x1B79E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79E0u;
label_1b79e0:
    // 0x1b79e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b79e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b79e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b79e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b79e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b79ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b79ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b79f0: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B79F0u;
    SET_GPR_U32(ctx, 31, 0x1B79F8u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B79F0u, 0x1B79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79F8u;
label_1b79f8:
    // 0x1b79f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b79f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b79fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1b7a08: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1b7a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1b7a0c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A14u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B7A0Cu, 0x1B7A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A14u;
label_1b7a14:
    // 0x1b7a14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b7a18: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a1c: 0xc4c11284  lwc1        $f1, 0x1284($a2)
    ctx->pc = 0x1b7a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7a20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a24: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7a28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7a2c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b7a30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a34: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1b7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7a38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a3c: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7a40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7a40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b7a44: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b7a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b7a48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a4c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1b7a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7a50: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7a54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7a58: 0x0  nop
    ctx->pc = 0x1b7a58u;
    // NOP
    // 0x1b7a5c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7A5Cu;
    {
        const bool branch_taken_0x1b7a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7a5c) {
            ctx->pc = 0x1B7A7Cu;
            return;
        }
    }
    ctx->pc = 0x1B7A64u;
    // 0x1b7a64: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b7a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7a68: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a6c: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b7a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b7a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7a74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a78: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1b7a7cu;
}
