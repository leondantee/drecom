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

// Function: entry_001b935c
// Address: 0x1b935c - 0x1b942c
void entry_001b935c_0x1b935c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b935c_0x1b935c");
#endif

    switch (ctx->pc) {
        case 0x1b9380u: goto label_1b9380;
        case 0x1b9390u: goto label_1b9390;
        case 0x1b93a8u: goto label_1b93a8;
        case 0x1b93c4u: goto label_1b93c4;
        default: break;
    }

    ctx->pc = 0x1b935cu;

    // 0x1b935c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9360: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1b9360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9364: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9368: 0x24930180  addiu       $s3, $a0, 0x180
    ctx->pc = 0x1b9368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b936c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1b936cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b9370: 0x26051b40  addiu       $a1, $s0, 0x1B40
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6976));
    // 0x1b9374: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1b9374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9378: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B9378u;
    SET_GPR_U32(ctx, 31, 0x1B9380u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B9380u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B9380u) { return; }
    ctx->pc = 0x1B9380u;
label_1b9380:
    // 0x1b9380: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b9380u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9384: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9388: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B9388u;
    SET_GPR_U32(ctx, 31, 0x1B9390u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B9388u, 0x1B9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9390u;
label_1b9390:
    // 0x1b9390: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9390u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9398: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b939c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b939cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b93a0: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B93A0u;
    SET_GPR_U32(ctx, 31, 0x1B93A8u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B93A0u, 0x1B93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93A8u;
label_1b93a8:
    // 0x1b93a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b93a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b93ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b93acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b93b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b93b4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1b93b8: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1b93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1b93bc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B93BCu;
    SET_GPR_U32(ctx, 31, 0x1B93C4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B93BCu, 0x1B93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93C4u;
label_1b93c4:
    // 0x1b93c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b93c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b93c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b93cc: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b93d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b93d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b93d4: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1b93d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b93d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b93d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b93dc: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b93dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b93e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b93e4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1b93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b93e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b93e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b93ec: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b93ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b93f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b93f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b93f4: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b93f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1b93f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b93fc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9400: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9408: 0x0  nop
    ctx->pc = 0x1b9408u;
    // NOP
    // 0x1b940c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B940Cu;
    {
        const bool branch_taken_0x1b940c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b940c) {
            ctx->pc = 0x1B942Cu;
            return;
        }
    }
    ctx->pc = 0x1B9414u;
    // 0x1b9414: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9418: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b941c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b941cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b9420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9424: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9428: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1b9428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1b942cu;
}
