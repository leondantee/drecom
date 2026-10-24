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
// Address: 0x1b6e20 - 0x1b6e9c
void caseD_0_0x1b6e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1b6e20");
#endif

    switch (ctx->pc) {
        case 0x1b6e44u: goto label_1b6e44;
        case 0x1b6e88u: goto label_1b6e88;
        default: break;
    }

    ctx->pc = 0x1b6e20u;

    // 0x1b6e20: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b6e24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6e28: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b6e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b6e2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6e30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6e34: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6e38: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1b6e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b6e3c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B6E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E44u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B6E3Cu, 0x1B6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E44u;
label_1b6e44:
    // 0x1b6e44: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b6e48: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b6e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6e4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6e50: 0x0  nop
    ctx->pc = 0x1b6e50u;
    // NOP
    // 0x1b6e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6e58: 0x0  nop
    ctx->pc = 0x1b6e58u;
    // NOP
    // 0x1b6e5c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1B6E5Cu;
    {
        const bool branch_taken_0x1b6e5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6e5c) {
            ctx->pc = 0x1B6E9Cu;
            return;
        }
    }
    ctx->pc = 0x1B6E64u;
    // 0x1b6e64: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b6e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6e68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6e6c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b6e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b6e70: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b6e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b6e74: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x1b6e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x1b6e78: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b6e7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b6e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b6e80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B6E80u;
    SET_GPR_U32(ctx, 31, 0x1B6E88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B6E80u, 0x1B6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E88u;
label_1b6e88:
    // 0x1b6e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6e8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6e90: 0xac621b60  sw          $v0, 0x1B60($v1)
    ctx->pc = 0x1b6e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 2));
    // 0x1b6e94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B6E94u;
    {
        const bool branch_taken_0x1b6e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e94) {
            ctx->pc = 0x1B6ECCu;
            return;
        }
    }
    ctx->pc = 0x1B6E9Cu;
}
