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

// Function: entry_00253798
// Address: 0x253798 - 0x2537f0
void entry_00253798_0x253798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253798_0x253798");
#endif

    switch (ctx->pc) {
        case 0x2537d0u: goto label_2537d0;
        default: break;
    }

    ctx->pc = 0x253798u;

    // 0x253798: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25379c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x25379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2537a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2537a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2537a4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2537a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2537a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2537a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2537ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2537acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2537b0: 0x0  nop
    ctx->pc = 0x2537b0u;
    // NOP
    // 0x2537b4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2537b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2537b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2537b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2537bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2537bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2537c0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2537c4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2537c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2537c8: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x2537C8u;
    SET_GPR_U32(ctx, 31, 0x2537D0u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x2537C8u, 0x2537D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537D0u;
label_2537d0:
    // 0x2537d0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2537d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2537d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2537d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2537d8: 0x0  nop
    ctx->pc = 0x2537d8u;
    // NOP
    // 0x2537dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2537dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2537e0: 0x0  nop
    ctx->pc = 0x2537e0u;
    // NOP
    // 0x2537e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2537E4u;
    {
        const bool branch_taken_0x2537e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2537e4) {
            ctx->pc = 0x2537F0u;
            return;
        }
    }
    ctx->pc = 0x2537ECu;
    // 0x2537ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2537ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2537f0u;
}
