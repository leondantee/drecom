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

// Function: entry_00253648
// Address: 0x253648 - 0x2536a0
void entry_00253648_0x253648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253648_0x253648");
#endif

    switch (ctx->pc) {
        case 0x253680u: goto label_253680;
        default: break;
    }

    ctx->pc = 0x253648u;

    // 0x253648: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x253648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25364c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x25364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x253650: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253654: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x253654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253658: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253658u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25365c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25365cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253660: 0x0  nop
    ctx->pc = 0x253660u;
    // NOP
    // 0x253664: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x253664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x253668: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x253668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25366c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25366cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253670: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253674: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x253674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253678: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x253678u;
    SET_GPR_U32(ctx, 31, 0x253680u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x253678u, 0x253680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253680u;
label_253680:
    // 0x253680: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x253680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253688: 0x0  nop
    ctx->pc = 0x253688u;
    // NOP
    // 0x25368c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25368cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253690: 0x0  nop
    ctx->pc = 0x253690u;
    // NOP
    // 0x253694: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x253694u;
    {
        const bool branch_taken_0x253694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253694) {
            ctx->pc = 0x2536A0u;
            return;
        }
    }
    ctx->pc = 0x25369Cu;
    // 0x25369c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x25369cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2536a0u;
}
