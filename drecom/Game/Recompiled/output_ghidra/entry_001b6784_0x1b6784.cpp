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

// Function: entry_001b6784
// Address: 0x1b6784 - 0x1b684c
void entry_001b6784_0x1b6784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6784_0x1b6784");
#endif

    switch (ctx->pc) {
        case 0x1b67acu: goto label_1b67ac;
        case 0x1b67b8u: goto label_1b67b8;
        case 0x1b67ccu: goto label_1b67cc;
        case 0x1b67e4u: goto label_1b67e4;
        default: break;
    }

    ctx->pc = 0x1b6784u;

    // 0x1b6784: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6788: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b678c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b678cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6790: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x1b6790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b6794: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1b6794u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1b6798: 0x24a81b40  addiu       $t0, $a1, 0x1B40
    ctx->pc = 0x1b6798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x1b679c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1b679cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1b67a0: 0xc4cc1b50  lwc1        $f12, 0x1B50($a2)
    ctx->pc = 0x1b67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b67a4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B67A4u;
    SET_GPR_U32(ctx, 31, 0x1B67ACu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B67ACu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B67ACu) { return; }
    ctx->pc = 0x1B67ACu;
label_1b67ac:
    // 0x1b67ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b67acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b67b0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B67B0u;
    SET_GPR_U32(ctx, 31, 0x1B67B8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B67B0u, 0x1B67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67B8u;
label_1b67b8:
    // 0x1b67b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b67b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b67bc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b67bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b67c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b67c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b67c4: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B67C4u;
    SET_GPR_U32(ctx, 31, 0x1B67CCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B67C4u, 0x1B67CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67CCu;
label_1b67cc:
    // 0x1b67cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b67ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b67d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b67d4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1b67d8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1b67d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1b67dc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B67DCu;
    SET_GPR_U32(ctx, 31, 0x1B67E4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B67DCu, 0x1B67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67E4u;
label_1b67e4:
    // 0x1b67e4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b67e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b67e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b67e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b67ec: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b67ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b67f0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b67f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b67f4: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x1b67f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b67f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b67f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b67fc: 0xe4c00124  swc1        $f0, 0x124($a2)
    ctx->pc = 0x1b67fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
    // 0x1b6800: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6804: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1b6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6808: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b680c: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6810: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b6810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b6814: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b6814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1b6818: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b681c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6820: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6828: 0x0  nop
    ctx->pc = 0x1b6828u;
    // NOP
    // 0x1b682c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B682Cu;
    {
        const bool branch_taken_0x1b682c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b682c) {
            ctx->pc = 0x1B684Cu;
            return;
        }
    }
    ctx->pc = 0x1B6834u;
    // 0x1b6834: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b683c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b6840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6844: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6848: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b6848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    ctx->pc = 0x1b684cu;
}
