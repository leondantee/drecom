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

// Function: caseD_0
// Address: 0x1b98d0 - 0x1b994c
void caseD_0_0x1b98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1b98d0");
#endif

    switch (ctx->pc) {
        case 0x1b98f4u: goto label_1b98f4;
        case 0x1b9934u: goto label_1b9934;
        default: break;
    }

    ctx->pc = 0x1b98d0u;

    // 0x1b98d0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b98d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b98d8: 0xa08210a8  sb          $v0, 0x10A8($a0)
    ctx->pc = 0x1b98d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b98dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b98e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b98e4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1b98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b98e8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1b98e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b98ec: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B98ECu;
    SET_GPR_U32(ctx, 31, 0x1B98F4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B98ECu, 0x1B98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B98F4u;
label_1b98f4:
    // 0x1b98f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b98f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b98f8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b98fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b98fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9900: 0x0  nop
    ctx->pc = 0x1b9900u;
    // NOP
    // 0x1b9904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9908: 0x0  nop
    ctx->pc = 0x1b9908u;
    // NOP
    // 0x1b990c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1B990Cu;
    {
        const bool branch_taken_0x1b990c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b990c) {
            ctx->pc = 0x1B994Cu;
            return;
        }
    }
    ctx->pc = 0x1B9914u;
    // 0x1b9914: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9918: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b991c: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x1b991cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1b9920: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x1b9920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x1b9924: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b9924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b9928: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b992c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B992Cu;
    SET_GPR_U32(ctx, 31, 0x1B9934u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B992Cu, 0x1B9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9934u;
label_1b9934:
    // 0x1b9934: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9934u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9938: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b9938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b993c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9940: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b9940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    // 0x1b9944: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B9944u;
    {
        const bool branch_taken_0x1b9944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9944) {
            ctx->pc = 0x1B9978u;
            return;
        }
    }
    ctx->pc = 0x1B994Cu;
}
